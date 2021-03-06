#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

int main(void) {
	int loop = 1;
	char op, item;
	list *l = create();

	while (loop) {
		printf("\nOperation: ");
		scanf("%c", &op);
		getchar();
		switch(op) {
		case 'A': case 'a':
			printf("\nAdd: ");
			scanf("%c", &item);
			getchar();

			add(l, item);
			printf("%c was successfully added to the list.\n", item);
			break;
		case 'S': case 's':
			printf("\nSearch: ");
			scanf("%c", &item);
			getchar();

			printf("%c was found on position #%d\n", item, search(l, item));
			break;
		case 'R': case 'r':
			printf("\nRemove: ");
			scanf("%c", &item);
			getchar();

			remove_node(l, item);
			printf("%c was successfully removed of the list.\n", item);
			break;
		case 'D': case 'd':
			dump(l);
			break;
		case 'Q': case 'q':
			loop = 0;
			break;
		}
	}
	destroy(&l);
	return 0;
}
