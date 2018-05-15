#include "uipriv_unix.h"

struct uiNTree {
  void *tree;
};

struct uiNTreeModel {
  void *model;
};

uiNTree *uiNewNTree(void) {
  uiNTree *tree = malloc(sizeof(uiNTree));
  return tree;
}

uiNTreeModel *uiNewNTreeModel(void) {
  uiNTreeModel *model = malloc(sizeof(uiNTreeModel));
  return model;
}

