---
title: "Delimitatori per i tag della documentazione di Visual C++ | Microsoft Docs"
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
  - "documentazione XML, delimitatori"
ms.assetid: debfbdd9-63fa-4c58-a18e-a4d203d241d7
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Delimitatori per i tag della documentazione di Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo di tag della documentazione richiede i delimitatori, che indica al compilatore in cui un commento relativo alla documentazione inizia e termina.  
  
 I tipi di delimitatore utilizzabili con i tag della documentazione XML sono:  
  
 `///`  
 Si tratta del form come illustrato negli esempi della documentazione e utilizzato dai modelli di progetto di Visual C\+\+.  
  
 `/** */`  
 Questi delimitatori sono su più righe.  
  
 Esistono alcune regole di formattazione quando si utilizzano i delimitatori di `/** */` \*\/:  
  
-   Per la riga che contiene il delimitatore di `/**`, se il resto della riga è vuoto, la riga non viene elaborata per commenti.  Se il primo carattere è vuota, il bianco carattere di spazio vuoto viene ignorato e il resto della riga viene elaborato.  In caso contrario, l'intero testo della riga dopo il delimitatore `/**` viene elaborato come parte del commento.  
  
-   Per la riga che contiene il delimitatore di `*/`, se sono spetta solo uno spazio vuoto al delimitatore di `*/`, la riga viene ignorata.  In caso contrario, il testo contenuto nella riga fino al delimitatore `*/` viene elaborato come parte del commento, in base alle regole dei criteri di ricerca descritte nel punto che segue.  
  
-   Per riga dopo che inizia con il delimitatore di `/**`, il compilatore cerca un modello comune all'inizio di ogni riga che contiene lo spazio vuoto facoltativo e un asterisco \(`*`\), seguita da uno spazio vuoto più facoltativo.  Se il compilatore rileva un insieme di caratteri inizio di ogni riga, ignorati da tale modello per tutte le righe dopo il delimitatore di `/**`, fino a ed eventualmente inclusa la riga che contiene il delimitatore di `*/`.  
  
 Di seguito sono riportati alcuni esempi:  
  
-   La sola parte del commento riportato di seguito che verrà elaborata è la riga che inizia con `<summary>`.  I due formati di tag formuleranno le stesse commenti:  
  
    ```  
    /**  
    <summary>text</summary>   
    */  
    /** <summary>text</summary> */  
    ```  
  
-   Il compilatore impone un modello di “\*„ per ignorare la parte superiore della seconda e la terza linea.  
  
    ```  
    /**  
     * <summary>  
     *  text </summary>*/  
    ```  
  
-   Il compilatore non trova modello in questo commento perché non esiste un asterisco la seconda riga.  Di conseguenza, qualsiasi testo sulla seconda e la terza linea, fino a `*/`, verrà elaborato come parte del commento.  
  
    ```  
    /**  
     * <summary>  
       text </summary>*/  
    ```  
  
-   Il compilatore non trova modello in questo commento per due motivi.  Innanzitutto, non esiste alcuna riga che inizia con un numero coerente di spazi prima dell'asterisco.  Inoltre, la quinta riga inizia con una tabulazione, che non corrisponde agli spazi.  Di conseguenza, qualsiasi testo dalla seconda riga fino a `*/` verrà elaborato come parte del commento.  
  
    ```  
    /**  
      * <summary>  
      * text   
     *  text2  
       *  </summary>  
    */  
    ```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)