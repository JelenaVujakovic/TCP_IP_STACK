#include "graph.h"
#include <stdio.h>
#include "CommandParser/libcli.h"

extern graph_t *build_first_topo();
extern graph_t *build_simple_l2_switch_topo();
extern void nw_init_cli();

graph_t *topo = NULL;

int 
main(int argc, char **argv){

    nw_init_cli();
	show_help_handler(0, 0, MODE_UNKNOWN);
    topo = build_square_topo(); 
    return 0;
}
