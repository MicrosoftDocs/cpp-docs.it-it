---
title: "Tipi incompleti | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "matrici [C], tipi incompleti"
  - "tipi incompleti"
  - "strutture, incomplete"
  - "tipi [C], incompleti"
  - "unioni, incomplete"
  - "void (parola chiave) [C]"
  - "void (parola chiave) [C], incompleta"
ms.assetid: 01bc0cf6-9fa7-458c-9371-ecbe54ea6aee
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi incompleti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un tipo incompleto è un tipo che descrive un identificatore, ma non dispone delle informazioni necessarie per determinare la dimensione dell'identificatore.  Un tipo incompleto può essere uno degli elementi seguenti:  
  
-   Tipo di struttura i cui membri non sono ancora stati specificati.  
  
-   Tipo di unione i cui membri non sono ancora stati specificati.  
  
-   Tipo di matrice le cui dimensioni non sono ancora state specificate.  
  
 Il tipo void è un tipo incompleto che non può essere completato.  Per completare un tipo incompleto, specificare le informazioni mancanti.  Negli esempi seguenti viene illustrato come creare e completare i tipi incompleti.  
  
-   Per creare un tipo di struttura incompleto, dichiarare un tipo di struttura senza specificare i relativi membri.  In questo esempio il puntatore `ps` punta a un tipo di struttura incompleto denominato `student`.  
  
    ```  
    struct student *ps;  
    ```  
  
-   Per completare un tipo di struttura incompleto, dichiarare successivamente lo stesso tipo di struttura nello stesso ambito con i relativi membri specificati, come illustrato di seguito:  
  
    ```  
    struct student  
    {  
        int num;  
    }                   /* student structure now completed */  
    ```  
  
-   Per creare un tipo di matrice incompleto, dichiarare un tipo di matrice senza specificare il numero di ripetizioni relativo.  Ad esempio:  
  
    ```  
    char a[];  /* a has incomplete type */  
    ```  
  
-   Per completare un tipo di matrice incompleto, dichiarare successivamente lo stesso nome nello stesso ambito con il numero di ripetizioni specificato, come illustrato di seguito:  
  
    ```  
    char a[25]; /* a now has complete type */  
    ```  
  
## Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)