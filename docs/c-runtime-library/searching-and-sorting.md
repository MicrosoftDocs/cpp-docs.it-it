---
title: "Ricerca e ordinamento | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.programs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dati [CRT], ricerca"
  - "ricerca [C++]"
  - "ricerca [C++], funzione di ricerca CRT"
  - "ordinamento dei dati"
ms.assetid: 15e984f0-e155-46f5-8542-51c458792f54
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Ricerca e ordinamento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare le seguenti funzioni per la ricerca e l'ordinamento.  
  
### Funzioni di ordinamento e ricerca  
  
|Funzione|Ricerca o ordinamento|Equivalente .NET Framework|  
|--------------|---------------------------|--------------------------------|  
|[bsearch](../c-runtime-library/reference/bsearch.md)|Ricerca binaria|[\<caps:sentence id\="tgt8" sentenceid\="07fe7161f1b3ff07a50d0fdb13bc8ade" class\="tgtSentence"\>System::Collections::ArrayList::BinarySearch\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[bsearch\_s](../c-runtime-library/reference/bsearch-s.md)|Una versione più sicura di `bsearch`.|[\<caps:sentence id\="tgt10" sentenceid\="07fe7161f1b3ff07a50d0fdb13bc8ade" class\="tgtSentence"\>System::Collections::ArrayList::BinarySearch\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[\_lfind](../c-runtime-library/reference/lfind.md)|Ricerca lineare del valore specificato|[\<caps:sentence id\="tgt13" sentenceid\="2b0a5c761626afecd7137a4eab4525f0" class\="tgtSentence"\>System::Collections::ArrayList::Contains\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[\_lfind\_s](../c-runtime-library/reference/lfind-s.md)|Una versione più sicura di `_lfind`.|[\<caps:sentence id\="tgt15" sentenceid\="2b0a5c761626afecd7137a4eab4525f0" class\="tgtSentence"\>System::Collections::ArrayList::Contains\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[\_lsearch](../c-runtime-library/reference/lsearch.md)|Ricerca lineare del valore specificato, il quale viene aggiunto alla matrice se non trovato|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Platform Invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_lsearch\_s](../c-runtime-library/reference/lsearch-s.md)|Una versione più sicura di `_lsearch`.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Platform Invoke](../Topic/Platform%20Invoke%20Examples.md).|  
|[qsort](../c-runtime-library/reference/qsort.md)|Quick sort|[\<caps:sentence id\="tgt27" sentenceid\="f0305a177c6971f2c3c37537da538229" class\="tgtSentence"\>System::Collections::ArrayList::Sort\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
|[qsort\_s](../c-runtime-library/reference/qsort-s.md)|Una versione più sicura di `qsort`.|[\<caps:sentence id\="tgt29" sentenceid\="f0305a177c6971f2c3c37537da538229" class\="tgtSentence"\>System::Collections::ArrayList::Sort\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)