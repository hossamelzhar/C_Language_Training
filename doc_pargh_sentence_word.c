#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};



struct document get_document(char* text)
{
    if(!text)//text = NULL
    {

    }
    else
    {
        struct word *words;
        words->data = (char*) calloc(MAX_CHARACTERS, sizeof(char));
        struct sentence *sentns;
        sentns->data = (struct word*) calloc(5, sizeof(struct word));
        sentns->word_count = 0;
        struct paragraph *parghs;
        parghs->data = (struct sentence*) calloc(1, sizeof(struct sentence));
        parghs->sentence_count = 0;
        struct document *doc;
        doc->data = (struct paragraph*) calloc(1, sizeof(struct paragraph));
        doc->paragraph_count = 0;

        sentns->data-> = words;
/*
        int index   = 0;
        int w_index = 0;
        int iter = 0;

        while(text[index] != '\0')
        {
            if( (text[index] == ' ') || (text[index+1] == '.'))
            {
                words->data[w_index] = '\0';
                sentns = (struct sentence*) realloc(sentns, (sentns->word_count + 1) *  sizeof(struct word));
                strcpy(sentns->data[sentns->word_count], words->data);
                (sentns->word_count)++;
                memset(words->data, 0, w_index);
                w_index = 0;
                index++;
            }
            else if(text[index] == '.')
            {
                for(iter = 0; iter<sentns->word_count; iter++)
                {
                    parghs->data = (struct paragraph*) realloc(parghs->data, (parghs->sentence_count + 1) * sizeof(struct sentence));
                    parghs->data[parghs->sentence_count] = sentns->data;
                    parghs->data[parghs->sentence_count]->word_count = (sentns->word_count);
                    (parghs->sentence_count)++;
                    (sentns->word_count) = 0;
                    index++;
                }
            }
            else if(text[index] == '\n')
            {
                doc->data = (struct document*) realloc(doc->data, (doc->paragraph_count + 1) * sizeof(struct paragraph));
                doc->data[doc.paragraph_count] = parghs->data;
                doc->data[doc.paragraph_count]->sentence_count = (parghs->sentence_count);
                (doc->paragraph_count)++;
                (parghs->sentence_count) = 0;
                index++;
            }
            else
            {
                words->data[w_index] = text[index];
                w_index++;
                index++;
            }
        }

     return doc;
     */
    }


}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n)
{

}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m)
{

}

struct paragraph kth_paragraph(struct document Doc, int k)
{

}


void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main()
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }
}
