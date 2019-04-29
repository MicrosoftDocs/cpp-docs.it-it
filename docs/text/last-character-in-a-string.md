---
title: Ultimo carattere di una stringa
ms.date: 11/04/2016
helpviewer_keywords:
- last character in string
- MBCS [C++], last character in string
ms.assetid: 0a180376-4e55-41e8-9c64-539c7b6d8047
ms.openlocfilehash: 4c99628cd12738fabb877a94cfd04a4033ee45aa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410674"
---
# <a name="last-character-in-a-string"></a>Ultimo carattere di una stringa

Usare i suggerimenti seguenti:

- Gli intervalli di byte trail sovrapposti in molti casi set di caratteri ASCII. È possibile eseguire senza problemi analisi di caratteri di controllo (minori di 32).

- Si consideri la seguente riga di codice, che potrebbe essere necessario controllare per verificare se l'ultimo carattere in una stringa è un carattere barra rovesciata:

    ```cpp
    if ( sz[ strlen( sz ) - 1 ] == '\\' )    // Is last character a '\'?
        // . . .
    ```

   Poiché `strlen` non è compatibile con il formato MBCS, restituisce il numero di byte, non il numero di caratteri, in una stringa multibyte. Inoltre, tenere presente che in alcuni codici (932, ad esempio), '\\' (0x5c) è un byte finale valido (`sz` è una stringa C).

   Una soluzione possibile consiste nel riscrivere il codice in questo modo:

    ```cpp
    char *pLast;
    pLast = _mbsrchr( sz, '\\' );    // find last occurrence of '\' in sz
    if ( pLast && ( *_mbsinc( pLast ) == '\0' ) )
        // . . .
    ```

   Questo codice Usa le funzioni MBCS `_mbsrchr` e `_mbsinc`. Poiché queste funzioni sono in grado di riconoscere il formato MBCS, in grado di distinguere tra un '\\'caratteri e un byte di chiusura'\\'. Il codice esegue un'azione se l'ultimo carattere nella stringa è un valore null ('\0').

## <a name="see-also"></a>Vedere anche

[Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Assegnazione di caratteri](../text/character-assignment.md)
