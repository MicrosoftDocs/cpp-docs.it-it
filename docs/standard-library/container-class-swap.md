---
title: Container Class::swap | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- swap method
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
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
translationtype: Machine Translation
ms.sourcegitcommit: f293f074f2b8e2334dc70fbebba8e6f4c17efecc
ms.openlocfilehash: 33ec601dcc8d32b85c2c38ed3fc5a07842a056fc
ms.lasthandoff: 02/24/2017

---
# <a name="container-classswap"></a>Container Class::swap
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionante dei contenitori usati nella libreria standard di C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard di C++).  
  
Scambia le sequenze controllate tra **\*this** e il relativo argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void swap(Container& right);
```  
  
## <a name="remarks"></a>Note  
Se **\*this.get\_allocator ==** _right_**.get_allocator**, esegue uno scambio in tempo costante. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.  
  
## <a name="see-also"></a>Vedere anche  
[Sample Container Class](../standard-library/sample-container-class.md) (Classe contenitore di esempio)

