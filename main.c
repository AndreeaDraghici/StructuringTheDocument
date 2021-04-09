#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include"Document.h"
#include"Document.c"

#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

//@author:AndreeaDraghici


int main()
{

    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--)
    {
        int type;
        scanf("%d", &type);

        if (type == 3)
        {
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);

        }

        else if (type == 2)
        {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else
        {
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }
}
