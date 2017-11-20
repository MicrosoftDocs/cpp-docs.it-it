---
title: Classe is_trivially_default_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 9ad38fb23b5ac205a283969ea50041c1bfba2806
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

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



