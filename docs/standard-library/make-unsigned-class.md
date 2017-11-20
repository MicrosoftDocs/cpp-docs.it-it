---
title: Classe make_unsigned | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::make_unsigned
dev_langs: C++
helpviewer_keywords:
- make_unsigned class
- make_unsigned
ms.assetid: 7a6a3c4f-1a4c-47e8-9ee2-ac1f7b669353
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c071aebac468e0feeb8e0964fe04527a29140a5a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="makeunsigned-class"></a>Classe make_unsigned
Rende la dimensione del tipo o del tipo non firmato più piccolo superiore o uguale a quella del tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct make_unsigned;

template <class T>
using make_unsigned_t = typename make_unsigned<T>::type;
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`T`|Tipo da modificare.|  
  
## <a name="remarks"></a>Note  
 Un’istanza del modificatore di tipo contiene un tipo modificato che è `T` se `is_unsigned<T>` include true. In caso contrario è il tipo con segno più piccolo `ST` per il quale `sizeof (T) <= sizeof (ST)`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



