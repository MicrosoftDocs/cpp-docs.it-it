---
title: "Incremento e decremento dei puntatori | Microsoft Docs"
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
  - "decremento dei puntatori"
  - "incremento dei puntatori"
  - "MBCS [C++], puntatori"
  - "puntatori [C++], caratteri multibyte"
ms.assetid: 0872b4a0-e2bd-4004-8319-070efb76f2fd
caps.latest.revision: 7
caps.handback.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Incremento e decremento dei puntatori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attenersi ai suggerimenti indicati di seguito.  
  
-   Puntare ai byte iniziali e non a quelli finali.  Un puntatore a un byte finale non è in genere sicuro.  Quasi sempre, infatti, è preferibile effettuare l'analisi di una stringa procedendo in avanti anziché indietro.  
  
-   Sono disponibili funzioni e macro di incremento e decremento del puntatore per lo spostamento di un intero carattere:  
  
    ```  
    sz1++;  
    ```  
  
     diventa:  
  
    ```  
    sz1 = _mbsinc( sz1 );  
    ```  
  
     Le funzioni `_mbsinc` e `_mbsdec` incrementano e decrementano correttamente di un'unità `character`, indipendentemente dalle dimensioni del carattere stesso.  
  
-   Per i decrementi è necessario un puntatore all'inizio della stringa, come nell'esempio seguente:  
  
    ```  
    sz2--;  
    ```  
  
     diventa:  
  
    ```  
    sz2 = _mbsdec( sz2Head, sz2 );  
    ```  
  
     In alternativa, il puntatore di testa potrebbe fare riferimento a un carattere valido della stringa, quale  
  
    ```  
    sz2Head < sz2  
    ```  
  
     È necessario avere un puntatore a un byte iniziale noto e valido.  
  
-   È consigliabile conservare un puntatore al carattere precedente per effettuare chiamate più rapide a `_mbsdec`.  
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Indici di byte](../text/byte-indices.md)