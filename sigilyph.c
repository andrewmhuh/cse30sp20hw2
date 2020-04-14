/*
 * Homework #2
 * Date:    TODO
 * Author:  TODO
 * PID:     TODO
 * 
 * Program: Sigilyph Reverse Word (Mirror)
 *
 * Input:   Reads one line of text at a time from stdin
 * Output:  Outputs line with Characters in each word reversed
 *          whitespace is preserved
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int rev_word_print(char *line_ptr, int cnt);

int
main(void)
{
    char *in_buf = NULL;
    size_t buf_len = 0;
    ssize_t num_read;

    /*
     * read one line at a time fron stdin until eof (cntrl-D) or there is an output error
     */
    while ((num_read = getline(&in_buf, &buf_len, stdin)) != -1) {
        if (rev_word_print(in_buf, num_read) == -1)
        break;
    }

    /*
     * free buffer allocated by getline()
     */
    free(in_buf);
    return(EXIT_SUCCESS);
}

/*
 * rev_word_print()
 *
 * Prints the words in a line of text in reverse, preserves white space
 *
 * input:   line_ptr a pointer to an input line of text
 *          cnt number of characters in line including \n
 * return:  0 on success -1 on failure
 */
int
rev_word_print(char *line_ptr, int cnt)
{

    /*
     * TODO
     */

    return(0);
}
