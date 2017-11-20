---
title: Classe is_nothrow_destructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: type_traits/std::is_nothrow_destructible
dev_langs: C++
helpviewer_keywords: is_nothrow_destructible
ms.assetid: 0bbd8a28-e312-4d72-bd28-aac027f974d3
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 37f085f0a330af04c4167b381ea43608c693a02a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="isnothrowdestructible-class"></a>Classe is_nothrow_destructible
Verifica se il tipo è distruttibile e se il distruttore è noto al compilatore come elemento che non genera eccezioni.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
struct is_nothrow_destructible;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del tipo di predicato contiene true se `T` è un tipo distruttibile e se il distruttore è noto al compilatore come elemento che non genera eccezioni. In caso contrario, contiene false.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



