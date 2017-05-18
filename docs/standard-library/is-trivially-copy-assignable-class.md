---
title: Classe is_trivially_copy_assignable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_trivially_copy_assignable
- type_traits/std::is_trivially_copy_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_copy_assignable
ms.assetid: 7410133e-f367-493f-92a7-e34e3ec5e879
caps.latest.revision: 12
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: 97935fed1736f111557a0cb86811a86d60505107
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="istriviallycopyassignable-class"></a>Classe is_trivially_copy_assignable
Verifica se il tipo ha un operatore di assegnazione di copia semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct is_trivially_copy_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un operatore di assegnazione di copia semplice; in caso contrario, contiene false.  
  
 Un costruttore di assegnazione per una classe `T` è semplice se è fornito in modo implicito, la classe `T` non ha funzioni virtuali, la classe `T` non ha basi virtuali, le classi di tutti i membri di dati non statici di tipo classe hanno operatori di assegnazione semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe hanno operatori di assegnazione semplice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




