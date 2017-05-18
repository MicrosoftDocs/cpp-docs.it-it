---
title: Spazio dei nomi stdext | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- stdext
dev_langs:
- C++
helpviewer_keywords:
- _DEFINE_DEPRECATED_HASH_CLASSES symbol
- stdext namespace
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 213b760a134a645a0b6552e4c3600fc4762b0bb2
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="stdext-namespace"></a>Spazio dei nomi stdext
I membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non fanno attualmente parte dello standard ISO C++. Di conseguenza, questi tipi e membri sono stati spostati dallo spazio dei nomi `std` a quello `stdext`per restare conformi allo standard C++.  
  
 Durante la compilazione con [/Ze](../build/reference/za-ze-disable-language-extensions.md), che è l'impostazione predefinita, il compilatore genera un avviso sull'uso di `std` per i membri dei file di intestazione <hash_map> e <hash_set>. Per disabilitare l'avviso, usare il pragma [warning](../preprocessor/warning.md).  
  
 Per fare in modo che il compilatore generi un errore per l'uso di `std` per i membri dei file di intestazione <hash_map> e <hash_set> con **/Ze**, aggiungere la direttiva seguente prima dell'esecuzione di #include per qualsiasi file di intestazione della libreria standard C++.  
  
```  
#define _DEFINE_DEPRECATED_HASH_CLASSES 0  
```  
  
 Quando si compila con **/Za**, il compilatore genererà un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)


