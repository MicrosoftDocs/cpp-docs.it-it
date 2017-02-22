---
title: "Indici di byte | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "indici di byte [C++]"
  - "MBCS [C++], indici di byte"
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Indici di byte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attenersi ai suggerimenti indicati di seguito.  
  
-   Quando si utilizza un indice di vettori di byte in una stringa, si verificano problemi simili a quelli derivanti dalla manipolazione mediante puntatore.  Considerare l'esempio seguente, che analizza una stringa per individuare il carattere barra rovesciata:  
  
    ```  
    while ( rgch[ i ] != '\\' )  
        i++;  
    ```  
  
     È possibile che qui venga indicizzato un byte finale anziché uno iniziale e che perciò il puntatore non faccia riferimento a un `character`.  
  
-   Utilizzare la funzione [\_mbclen](../c-runtime-library/reference/mbclen-mblen-mblen-l.md) per risolvere il problema descritto:  
  
    ```  
    while ( rgch[ i ] != '\\' )  
        i += _mbclen ( rgch + i );  
    ```  
  
     Questa stringa indicizza correttamente a un byte iniziale e, di conseguenza, punta a un oggetto `character`.  La funzione `_mbclen` determina la dimensione di un carattere \(uno o due byte\).  
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Ultimo carattere di una stringa](../text/last-character-in-a-string.md)