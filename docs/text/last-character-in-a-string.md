---
title: Ultimo carattere nella stringa | Documenti Microsoft
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 88cde1d2eb30103462f7ae8f8c06274a2977fc36
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855643"
---
# <a name="last-character-in-a-string"></a>Ultimo carattere di una stringa
Utilizzare i suggerimenti seguenti:  
  
-   Intervalli di byte di traccia si sovrappongono di in molti casi del set di caratteri ASCII. È possibile eseguire senza problemi analisi per i caratteri di controllo (minore di 32).  
  
-   Si consideri la seguente riga di codice, potrebbe essere necessario controllare per verificare se l'ultimo carattere in una stringa è un carattere barra rovesciata:  
  
    ```  
    if ( sz[ strlen( sz ) - 1 ] == '\\' )    // Is last character a '\'?  
        // . . .  
    ```  
  
     Poiché `strlen` non è compatibile con il formato MBCS, restituisce il numero di byte, non il numero di caratteri, una stringa multibyte. Inoltre, si noti che in alcuni codici (932, ad esempio), '\\' (0x5c) è un byte finale valido (`sz` è una stringa C).  
  
     Una possibile soluzione è necessario riscrivere il codice in questo modo:  
  
    ```  
    char *pLast;  
    pLast = _mbsrchr( sz, '\\' );    // find last occurrence of '\' in sz  
    if ( pLast && ( *_mbsinc( pLast ) == '\0' ) )  
        // . . .  
    ```  
  
     Questo codice Usa le funzioni MBCS `_mbsrchr` e `_mbsinc`. Poiché queste funzioni sono in grado di riconoscere il formato MBCS, in grado di distinguere tra un '\\'caratteri e un byte finale'\\'. Nel codice vengono eseguite alcune azioni, se l'ultimo carattere nella stringa è un valore null ('\0').  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Assegnazione di caratteri](../text/character-assignment.md)