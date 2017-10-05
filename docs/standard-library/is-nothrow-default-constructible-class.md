---
title: Classe is_nothrow_default_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::is_nothrow_default_constructible
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_default_constructible
ms.assetid: c576fcc9-5be1-43aa-b93a-64d3f1848887
caps.latest.revision: 21
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
ms.openlocfilehash: 4ade369f00121d02b8cf60d50dba6b7552a3f605
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="isnothrowdefaultconstructible-class"></a>Classe is_nothrow_default_constructible
Verifica se il tipo ha un costruttore predefinito non generante.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct is_nothrow_default_constructible;
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` ha un costruttore predefinito nothrow; in caso contrario, contiene false. Un'istanza del tipo predicato è equivalente a `is_nothrow_constructible<Ty>`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




