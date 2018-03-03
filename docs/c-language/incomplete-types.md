---
title: Tipi incompleti | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- void keyword [C], incomplete
- types [C], incomplete
- incomplete types
- unions, incomplete
- arrays [C], incomplete types
- void keyword [C]
- structures, incomplete
ms.assetid: 01bc0cf6-9fa7-458c-9371-ecbe54ea6aee
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9e14c2811debfe01f7eb5ae7fc36bebfe0580017
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="incomplete-types"></a>Tipi incompleti
Un tipo incompleto è un tipo che descrive un identificatore, ma non dispone delle informazioni necessarie per determinare la dimensione dell'identificatore. Un tipo incompleto può essere uno degli elementi seguenti:  
  
-   Tipo di struttura i cui membri non sono ancora stati specificati.  
  
-   Tipo di unione i cui membri non sono ancora stati specificati.  
  
-   Tipo di matrice le cui dimensioni non sono ancora state specificate.  
  
 Il tipo void è un tipo incompleto che non può essere completato. Per completare un tipo incompleto, specificare le informazioni mancanti. Negli esempi seguenti viene illustrato come creare e completare i tipi incompleti.  
  
-   Per creare un tipo di struttura incompleto, dichiarare un tipo di struttura senza specificare i relativi membri. In questo esempio il puntatore `ps` punta a un tipo di struttura incompleto denominato `student`.  
  
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
  
-   Per creare un tipo di matrice incompleto, dichiarare un tipo di matrice senza specificare il numero di ripetizioni relativo. Ad esempio:  
  
    ```  
    char a[];  /* a has incomplete type */  
    ```  
  
-   Per completare un tipo di matrice incompleto, dichiarare successivamente lo stesso nome nello stesso ambito con il numero di ripetizioni specificato, come illustrato di seguito:  
  
    ```  
    char a[25]; /* a now has complete type */  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e tipi](../c-language/declarations-and-types.md)