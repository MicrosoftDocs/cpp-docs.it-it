---
title: Classe alignment_of | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- alignment_of
- std::alignment_of
- type_traits/std::alignment_of
dev_langs:
- C++
helpviewer_keywords:
- alignment_of class
- alignment_of
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: dee638b0260deff1d8701353c7119fc1b0082685
ms.lasthandoff: 02/24/2017

---
# <a name="alignmentof-class"></a>Classe alignment_of
Ottiene l'allineamento del tipo specificato. Questo struct viene implementato in termini di [alignof](../cpp/alignof-and-alignas-cpp.md). Usare `alignof` direttamente quando è sufficiente eseguire una query di un valore di allineamento. Usare alignment_of quando è necessaria una costante integrale, ad esempio quando si esegue l'invio di tag.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct alignment_of;
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 La query di tipo contiene il valore dell'allineamento del tipo `Ty`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe aligned_storage](../standard-library/aligned-storage-class.md)

