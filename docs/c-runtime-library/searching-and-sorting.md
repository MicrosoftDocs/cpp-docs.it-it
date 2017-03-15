---
title: Ricerca e ordinamento | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.programs
dev_langs:
- C++
helpviewer_keywords:
- sorting data
- data [CRT], searching
- searching [C++], CRT search functions
- searching [C++]
ms.assetid: 15e984f0-e155-46f5-8542-51c458792f54
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 5ba605d61ddcf1ae6bd2adc24c41737536fa2ce9
ms.lasthandoff: 02/24/2017

---
# <a name="searching-and-sorting"></a>Ricerca e ordinamento
Usare le funzioni seguenti per le operazioni di ricerca e ordinamento.  
  
### <a name="searching-and-sorting-functions"></a>Funzioni di ricerca e ordinamento  
  
|Funzione|Ricerca o ordinamento|Equivalente .NET Framework|  
|--------------|--------------------|-------------------------------|  
|[bsearch](../c-runtime-library/reference/bsearch.md)|Ricerca binaria|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[bsearch_s](../c-runtime-library/reference/bsearch-s.md)|Una versione più sicura di `bsearch`.|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[_lfind](../c-runtime-library/reference/lfind.md)|Ricerca lineare di un valore specificato|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[_lfind_s](../c-runtime-library/reference/lfind-s.md)|Una versione più sicura di `_lfind`|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[_lsearch](../c-runtime-library/reference/lsearch.md)|Ricerca lineare di un valore specificato, che viene aggiunto alla matrice se non trovato|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_lsearch_s](../c-runtime-library/reference/lsearch-s.md)|Una versione più sicura di `_lsearch`|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[qsort](../c-runtime-library/reference/qsort.md)|Ordinamento rapido|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
|[qsort_s](../c-runtime-library/reference/qsort-s.md)|Una versione più sicura di `qsort`|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
