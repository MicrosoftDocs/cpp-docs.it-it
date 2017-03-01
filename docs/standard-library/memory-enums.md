---
title: Enumerazioni &lt;memory&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: b9be0a7b-0beb-40b2-8183-911de371c6b9
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 9c3440495d77b788658cffefc917d9960ca1f833
ms.lasthandoff: 02/24/2017

---
# <a name="ltmemorygt-enums"></a>Enumerazioni &lt;memory&gt;
||  
|-|  
|[Enumerazione pointer_safety](#pointer_safety_enumeration)|  
  
##  <a name="a-namepointersafetyenumerationa--pointersafety-enumeration"></a><a name="pointer_safety_enumeration"></a>  Enumerazione pointer_safety  
 Enumerazione dei valori possibili restituiti da `get_pointer_safety`.  
  
classe pointer_safety { relaxed, preferred, strict };  
  
### <a name="remarks"></a>Note  
 L'ambito di `enum` definisce i valori che possono essere restituiti da `get_pointer_safety``()`:  
  
 `relaxed` -- i puntatori non derivati in modo sicuro (ovviamente puntatori da dichiarare o oggetti allocati) sono considerati come quelli derivati in modo sicuro.  
  
 `preferred` -- come nella situazione precedente, ma i puntatori non derivati in modo sicuro non possono essere dereferenziati.  
  
 `strict` -- i puntatori non derivati in modo sicuro possono essere gestiti in modo diverso rispetto a quelli derivati in modo sicuro.  
  
## <a name="see-also"></a>Vedere anche  
 [\<memory>](../standard-library/memory.md)




