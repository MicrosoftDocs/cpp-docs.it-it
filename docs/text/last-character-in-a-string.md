---
title: Ultimo carattere in una stringa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- last character in string
- MBCS [C++], last character in string
ms.assetid: 0a180376-4e55-41e8-9c64-539c7b6d8047
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e207ec1d5489a629b765d398e26ac7c07771d0da
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384988"
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