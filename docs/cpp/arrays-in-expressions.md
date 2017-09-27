---
title: Matrici nelle espressioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], arrays in
- arrays [C++], in expressions
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: ec97fba837ffae0a03ff8d4fc3d85c4011aa59c6
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="arrays-in-expressions"></a>Matrici nelle espressioni
Quando un identificatore di un tipo di matrice viene visualizzata in un'espressione diversa da `sizeof`, AddressOf (**&**), o l'inizializzazione di un riferimento, viene convertito in un puntatore al primo elemento della matrice. Ad esempio:  
  
```  
char szError1[] = "Error: Disk drive not ready.";  
char *psz = szError1;  
```  
  
 Il puntatore `psz` fa riferimento al primo elemento della matrice `szError1`. Tenere presente che, a differenza dei puntatori, le matrici non sono l-value modificabili. Pertanto, la seguente assegnazione non è valida:  
  
```  
szError1 = psz;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Array](../cpp/arrays-cpp.md)
