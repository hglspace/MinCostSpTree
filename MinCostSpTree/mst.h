#define MAX_VEX_NUM 6  //顶点的最大数量
#define MAX_EDG_NUM 10  //边的最大数量
#define INT_MAX 1000   //如果cost等于它，说明这两个顶点之间没有边
typedef int Bool;
#define True 1
#define False 0

struct vert{ //邻接矩阵结构的顶点的结构体，存储相关的信息
    char data;//顶点的代号
    int index;//顶点的位置
};

struct arc{//邻接矩阵结构的边的结构体
    int cost;//边的权值
    int head;//克鲁斯卡尔用到
    int tail;//克鲁斯卡尔用到
    int tmpcost;//增加一个临时存储权值的遍历，方便输出
};

struct tmp{//辅助数组，存储顶点之间最小权值的边
    int lowcost;//顶点之间的最小权值的边
    struct vert vex;//存储该边衣服的在U中的顶点
};

struct Graph{//邻接矩阵的图的结构体
    struct vert vexs[MAX_VEX_NUM];//存储顶点用数组
    struct arc arcs[MAX_VEX_NUM][MAX_VEX_NUM];//存储边用二维数组
    int vexnum;//当前顶点的数量
    int arcnum;//当前边的数量
};

struct Ebox{//多重链表结构的边的结构体
    int ivex;//该边依附的顶点在图中的位置
    int jvex;//该边依附的另一顶点在图中的位置
    struct Ebox * ilink;//指向下一条依附于ivex的边
    struct Ebox * jlink;//指向下一条依附于jvex的边
    int cost;//该边的权值
    Bool mark;//该边是否访问过 True代表访问过 False代表没有
};

struct VexBox{//多重链表结构的顶点的结构体
    char data;//顶点的信息
    struct Ebox * firstedge;//依附于该顶点的下一条边
    Bool mark;//该顶点是否访问过
};

struct AmGraph{//多重链表结构的图的结构体
    struct VexBox vb[MAX_VEX_NUM];//存储顶点的数组
    int vexnum;//当前顶点的数量
    int edgnum;//当前边的数量
};
