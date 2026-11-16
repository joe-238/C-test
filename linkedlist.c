#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Using the abstract data type “Linked List”, you will create a playlist that
only needs to move 1 direction. The program must allow for the following
● Add songs to the linked list
● Remove songs from the playlist
● Songs contain an artist, name and year released
In main function, simply call the add to playlist 3 times. Print the playlist.
Then call delete on one of the songs and reprint the playlist showing it no
longer contains the delete song.
*/

struct Song {
    char artist[100];
    char name[100];
    int year;
    struct Song* next;
};

// Add a song to the playlist
void addSong(struct Song** head, char artist[], char name[], int year) {
    struct Song* newSong = malloc(sizeof(struct Song));

    strcpy(newSong->artist, artist);
    strcpy(newSong->name, name);
    newSong->year = year;
    newSong->next = NULL;

    // If playlist is empty
    if (*head == NULL) {
        *head = newSong;
    }
    else {
        struct Song* current = *head;

        // Move to the end of the list
        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newSong;
    }
}

// Remove a song from the playlist by name
void deleteSong(struct Song** head, char name[]) {
    struct Song* current = *head;
    struct Song* previous = NULL;

    // Check if the first song is the one to delete
    if (current != NULL && strcmp(current->name, name) == 0) {
        *head = current->next;
        free(current);
        return;
    }

    // Search for the song
    while (current != NULL && strcmp(current->name, name) != 0) {
        previous = current;
        current = current->next;
    }

    // Song was not found
    if (current == NULL) {
        printf("Song not found.\n");
        return;
    }

    // Remove the song
    previous->next = current->next;
    free(current);
}

// Print the playlist
void printPlaylist(struct Song* head) {
    struct Song* current = head;

    printf("\n--- PLAYLIST ---\n");

    while (current != NULL) {
        printf("Artist: %s\n", current->artist);
        printf("Song: %s\n", current->name);
        printf("Year: %d\n\n", current->year);

        current = current->next;
    }
}

int main() {
    struct Song* playlist = NULL;
    addSong(&playlist, "Kendrick Lamar", "HUMBLE.", 2017);
    addSong(&playlist, "Frank Ocean", "Pink + White", 2016);
    addSong(&playlist, "Tyler, The Creator", "See You Again", 2017);
    printPlaylist(playlist);
    deleteSong(&playlist, "Pink + White");
    printf("--- AFTER DELETION ---\n");
    printPlaylist(playlist);

    return 0;
}