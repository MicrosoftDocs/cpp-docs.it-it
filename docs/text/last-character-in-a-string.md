---
title: "Ultimo carattere di una stringa | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ultimo carattere nella stringa"
  - "MBCS [C++], ultimo carattere nella stringa"
ms.assetid: 0a180376-4e55-41e8-9c64-539c7b6d8047
caps.latest.revision: 7
caps.handback.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Ultimo carattere di una stringa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attenersi ai suggerimenti indicati di seguito.  
  
-   In molti casi, gli intervalli dei byte finali si sovrappongono al set di caratteri ASCII.  È possibile eseguire senza problemi analisi byte per byte per individuare i caratteri di controllo \(con codice minore di 32\).  
  
-   Si consideri la riga di codice seguente, che potrebbe rappresentare un controllo per verificare se l'ultimo carattere di una stringa sia una barra rovesciata:  
  
    ```  
    if ( sz[ strlen( sz ) - 1 ] == '\\' )    // Is last character a '\'?  
        // . . .  
    ```  
  
     Poiché `strlen` non supporta il formato MBCS, restituirà il numero di byte e non il numero di caratteri di una stringa multibyte.  Si osservi inoltre che in alcune tabelle codici, ad esempio la tabella 932, il carattere '\\' \(0x5c\) corrisponde a un byte finale valido \(`sz` è una stringa C\).  
  
     Una delle possibili soluzioni consiste nel riscrivere il codice in questo modo:  
  
    ```  
    char *pLast;  
    pLast = _mbsrchr( sz, '\\' );    // find last occurrence of '\' in sz  
    if ( pLast && ( *_mbsinc( pLast ) == '\0' ) )  
        // . . .  
    ```  
  
     In questo codice vengono utilizzate le funzioni MBCS `_mbsrchr` e `_mbsinc`.  Poiché supportano il formato MBCS, queste funzioni sono in grado di distinguere tra il carattere '\\' e un byte finale '\\'.  Se l'ultimo carattere della stringa è null \('\\0'\), il codice svolgerà determinate operazioni.  
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Assegnazione di caratteri](../text/character-assignment.md)