#include "department.h"

int main(){

    CompoSite root{"Beijing Master"};
    HR* h = new HR{"Beijing HR Master"};
    Finary* f = new Finary{"Beijing Finary Master"};
    
    root.Add(h);
    root.Add(f);

    CompoSite tmp{"NanJing Sub"};
    CompoSite* root1 = &tmp;
    HR* h1 = new HR{"NanJing HR Master"};
    Finary* f1 = new Finary{"NanJing Finary Master"};

    root1->Add(h1);
    root1->Add(f1);
    root.Add(root1);

    root.Display(1);
    root.Duty();

    h1->Duty();

    delete h, f, h1, f1;
    return 0;
}