---
title: Classe is_final | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_final
dev_langs: C++
helpviewer_keywords: is_final
ms.assetid: 9dbad82f-6685-4909-94e8-98e4a93994b9
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 9f1ab7e0eb9a49e1ed73c2bc33d78b480f8ef907
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="isfinal-class"></a>Classe is_final
Verifica se il tipo è un tipo di classe contrassegnato come `final`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_final;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è un tipo di classe contrassegnato come `final`; in caso contrario, contiene false. Se `T` è un tipo di classe, deve essere un tipo completo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Identificatore final](../cpp/final-specifier.md)


