---
title: Ultimo carattere nella stringa | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- last character in string
- MBCS [C++], last character in string
ms.assetid: 0a180376-4e55-41e8-9c64-539c7b6d8047
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7b766bec977f35f9f346723cbaf3f62e48c8c878
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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