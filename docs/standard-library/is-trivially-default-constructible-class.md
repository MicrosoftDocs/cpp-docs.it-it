---
title: Classe is_trivially_default_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_trivially_default_constructible
- type_traits/std::is_trivially_default_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_default_constructible
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
caps.latest.revision: 17
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
ms.openlocfilehash: dd41fbdcc33250bc60a0b919b17dd52862549a77
ms.lasthandoff: 02/24/2017

---
# <a name="istriviallydefaultconstructible-class"></a>Classe is_trivially_default_constructible
Verifica se il tipo ha un costruttore predefinito semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct is_trivially_default_constructible;
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è una classe che ha un costruttore semplice; in caso contrario, contiene false.  
  
 Un costruttore predefinito per una classe `Ty` è piuttosto semplice se:  
  
-   è un costruttore predefinito dichiarato in modo implicito  
  
-   la classe `Ty` non ha funzioni virtuali  
  
-   la classe `Ty` non ha basi virtuali  
  
-   tutte le basi dirette della classe `Ty` hanno costruttori semplici  
  
-   le classi di tutti i membri dati non statici del tipo di classe hanno costruttori semplici  
  
-   le classi di tutti i membri dati non statici di tipo matrice della classe hanno costruttori semplici  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




