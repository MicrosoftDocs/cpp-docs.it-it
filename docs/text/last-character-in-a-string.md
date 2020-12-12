---
description: 'Altre informazioni su: ultimo carattere in una stringa'
title: Ultimo carattere di una stringa
ms.date: 11/04/2016
helpviewer_keywords:
- last character in string
- MBCS [C++], last character in string
ms.assetid: 0a180376-4e55-41e8-9c64-539c7b6d8047
ms.openlocfilehash: 10ab90614509508b9667c29ccf166ddaf784a92e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207241"
---
# <a name="last-character-in-a-string"></a>Ultimo carattere di una stringa

Usare i suggerimenti seguenti:

- Gli intervalli di byte finali si sovrappongono al set di caratteri ASCII in molti casi. È possibile usare in modo sicuro le analisi Bytewise per qualsiasi carattere di controllo (minore di 32).

- Si consideri la seguente riga di codice, che potrebbe verificare se l'ultimo carattere in una stringa è un carattere barra rovesciata:

    ```cpp
    if ( sz[ strlen( sz ) - 1 ] == '\\' )    // Is last character a '\'?
        // . . .
    ```

   Poiché `strlen` non è compatibile con MBCS, restituisce il numero di byte, non il numero di caratteri, in una stringa multibyte. Si noti inoltre che in alcune tabelle codici (932, ad esempio),' \\ ' (0x5c) è un byte finale valido ( `sz` è una stringa C).

   Una possibile soluzione consiste nel riscrivere il codice in questo modo:

    ```cpp
    char *pLast;
    pLast = _mbsrchr( sz, '\\' );    // find last occurrence of '\' in sz
    if ( pLast && ( *_mbsinc( pLast ) == '\0' ) )
        // . . .
    ```

   Questo codice usa le funzioni MBCS `_mbsrchr` e `_mbsinc` . Poiché queste funzioni sono compatibili con MBCS, possono distinguere tra un carattere ' \\ ' e un byte finale ' \\ '. Il codice esegue un'azione se l'ultimo carattere nella stringa è un valore null (' \ 0').

## <a name="see-also"></a>Vedi anche

[Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md)<br/>
[Assegnazione di caratteri](../text/character-assignment.md)
