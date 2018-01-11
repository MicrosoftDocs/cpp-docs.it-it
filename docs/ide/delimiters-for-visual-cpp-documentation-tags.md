---
title: Delimitatori per tag della documentazione di Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: XML documentation, delimiters
ms.assetid: debfbdd9-63fa-4c58-a18e-a4d203d241d7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 134605f86ef8019d34f5246fd75abbbf94d40fbc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="delimiters-for-visual-c-documentation-tags"></a>Delimitatori per i tag della documentazione di Visual C++
L'utilizzo di tag della documentazione richiede delimitatori per indicare al compilatore in un commento di documentazione inizia e finisce.  
  
 È possibile usare con i tag della documentazione XML i tipi di delimitatori seguenti:  
  
 `///`  
 Questo è il modulo illustrato negli esempi di documentazione e utilizzato per i modelli di progetto Visual C++.  
  
 `/** */`  
 Si tratta di delimitatori su più righe.  
  
 Esistono regole di formattazione quando si utilizza il `/** */` delimitatori:  
  
-   Per la riga che contiene il `/**` delimitatore, se il resto della riga è uno spazio vuoto, la riga non verrà elaborati per i commenti. Se il primo carattere è uno spazio, tale spazio vuoto viene ignorato e viene elaborato il resto della riga. In caso contrario, l'intero testo della riga dopo il delimitatore `/**` viene elaborato come parte del commento.  
  
-   Per la riga che contiene il `*/` delimitatore, se è solo spazi vuoti fino al `*/` delimitatore, la riga viene ignorato. In caso contrario, il testo contenuto nella riga fino al delimitatore `*/` viene elaborato come parte del commento, in base alle regole dei criteri di ricerca descritte nel punto che segue.  
  
-   Per le righe successive a quella che inizia con il `/**` delimitatore, il compilatore cerca un modello comune all'inizio di ogni riga che include uno spazio vuoto facoltativo e un asterisco (`*`), seguito da più spazi facoltativi. Se il compilatore rileva un set comune di caratteri all'inizio di ogni riga, il criterio per tutte le righe successive verrà ignorato il `/**` delimitatore, fino a e, possibilmente, tra cui la riga che contiene il `*/` delimitatore.  
  
 Ecco alcuni esempi:  
  
-   La sola parte del commento riportato di seguito che verrà elaborata è la riga che inizia con `<summary>`. I formati di due tag seguente produrrà gli stessi commenti:  
  
    ```  
    /**  
    <summary>text</summary>   
    */  
    /** <summary>text</summary> */  
    ```  
  
-   Il compilatore applica un modello di "*" per ignorare all'inizio delle linee secondo e terzo.  
  
    ```  
    /**  
     * <summary>  
     *  text </summary>*/  
    ```  
  
-   Il compilatore non trova alcun criterio in questo commento perché non vi è alcun asterisco nella seconda riga. Di conseguenza, tutto il testo nelle righe di secondo e terzo fino il `*/`, verrà elaborato come parte del commento.  
  
    ```  
    /**  
     * <summary>  
       text </summary>*/  
    ```  
  
-   In questo commento non viene rilevato alcun criterio per due motivi. In primo luogo, non vi è alcuna riga che inizia con un numero coerente di spazi prima dell'asterisco. In secondo luogo, la quinta riga inizia con una tabulazione senza corrispondenza degli spazi. Di conseguenza, tutto il testo dalla seconda riga fino a quando il `*/` verrà elaborato come parte del commento.  
  
    ```  
    /**  
      * <summary>  
      * text   
     *  text2  
       *  </summary>  
    */  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)