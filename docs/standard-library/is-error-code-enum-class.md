---
title: Classe is_error_code_enum | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::is_error_code_enum
- std.is_error_code_enum
- is_error_code_enum
- std::is_error_code_enum
dev_langs:
- C++
helpviewer_keywords:
- is_error_code_enum class
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
caps.latest.revision: 15
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
translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: 65c818260a4da28c3134e7fb9e124993b0200b74
ms.lasthandoff: 02/24/2017

---
# <a name="iserrorcodeenum-class"></a>Classe is_error_code_enum
Rappresenta un predicato di tipo che verifica l'enumerazione di [error_code](../standard-library/error-code-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <_Enum>
class is_error_code_enum;
```  
  
## <a name="remarks"></a>Note  
 Un'istanza di questo [predicato di tipo](../standard-library/type-traits.md) contiene true se il tipo `_Enum` è un valore di enumerazione adatto per l'archiviazione in un oggetto di tipo `error_code`.  
  
 È possibile aggiungere specializzazioni a questo tipo per i tipi definiti dall'utente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<system_error>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [<system_error>](../standard-library/system-error.md)




