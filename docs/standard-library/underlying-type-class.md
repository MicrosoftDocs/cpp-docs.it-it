---
title: Classe underlying_type | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- underlying_type
- type_traits/std::underlying_type
dev_langs:
- C++
helpviewer_keywords:
- underlying_type
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
caps.latest.revision: 13
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
ms.openlocfilehash: 95012fdeb3ac78d5e1cc76e03ed851a0b9701f5e
ms.lasthandoff: 02/24/2017

---
# <a name="underlyingtype-class"></a>Classe underlying_type
Genera il tipo integrale sottostante per un tipo di enumerazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
struct underlying_type;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo da modificare.  
  
## <a name="remarks"></a>Note  
 Il typedef del membro `type` della classe modello assegna un nome al tipo integrale sottostante di `T` quando `T` è un tipo di enumerazione; in caso contrario, non è presente alcun typedef del membro `type`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




