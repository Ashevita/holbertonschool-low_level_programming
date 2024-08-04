#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier
 * @filename: Nom du fichier
 * @text_content: Contenu à ajouter à la fin du fichier
 *
 * Retourne: 1 en cas de succès, -1 en cas d'échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, w, len = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL) {
        while (text_content[len])
            len++;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL) {
        w = write(fd, text_content, len);
        if (w == -1) {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
