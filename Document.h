#ifndef DOCUMENT_H_INCLUDED
#define DOCUMENT_H_INCLUDED

//@author:AndreeaDraghici

typedef struct word
{
    char* data;
} wrd_t;

typedef struct sentence
{
    struct word* data;
    int word_count;//denotes number of words in a sentence
} sen_t;

typedef struct paragraph
{
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
} par_t;

typedef struct document
{
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
} doc_t;

void print_document(struct document doc);
void print_paragraph(struct paragraph para);
void print_sentence(struct sentence sen);
void print_word(struct word w);
void addword(sen_t *sen, const char *buff, int len);

#endif // DOCUMENT_H_INCLUDED
