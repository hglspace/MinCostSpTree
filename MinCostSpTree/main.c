//
//  main.c
//  MinCostSpTree
//
//  Created by zyq on 2018/1/13.
//  Copyright © 2018年 zyq. All rights reserved.
//

#include <stdio.h>
#include "mst.h"

int main(int argc, const char * argv[]) {
    //求无向连通图的最小生成树
    struct Graph g;
    struct vert u;
    struct Graph init(void);
    void MiniSpanTree_PRIM(struct Graph g,struct vert u);
    void MiniSpanTree_KRUSKAL(struct Graph g);
    g=init();
    u=g.vexs[3];
    printf("从%c顶点开始\n",u.data);
    MiniSpanTree_PRIM(g, u);
    MiniSpanTree_KRUSKAL(g);
    return 0;
}
