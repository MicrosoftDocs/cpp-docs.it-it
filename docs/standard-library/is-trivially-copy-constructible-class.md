---
title: Classe is_trivially_copy_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::is_trivially_copy_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_copy_constructible
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
caps.latest.revision: 24
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 3c99808198c527fb60105d9a2d5629d177da5461
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="istriviallycopyconstructible-class"></a>Classe is_trivially_copy_constructible
Verifica se il tipo ha un costruttore di copia semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_trivially_copy_constructible;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un costruttore di copia semplice; in caso contrario, contiene false.  
  
 Un costruttore di copia per una classe `T` è semplice se è dichiarato in modo implicito, la classe `T` non ha funzioni o basi virtuali, tutte le basi dirette della classe `T` hanno costruttori di copia semplice, le classi di tutti i membri di dati non statici di tipo classe hanno costruttori di copia semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe hanno costruttori di copia semplice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




