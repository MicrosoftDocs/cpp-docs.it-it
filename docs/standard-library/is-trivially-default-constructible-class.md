---
title: Classe is_trivially_default_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- type_traits/std::is_trivially_default_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_default_constructible
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dd0b63b1f088eadf2ba2a253083d0f2878c2b751
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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



