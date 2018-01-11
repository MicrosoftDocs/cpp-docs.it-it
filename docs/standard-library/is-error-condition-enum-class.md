---
title: Classe is_error_condition_enum | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: system_error/std::is_error_condition_enum
dev_langs: C++
helpviewer_keywords: is_error_condition_enum class
ms.assetid: 752bb87a-c61c-4304-9254-5aaf228b59c0
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a8a2fc2d8a353b3e1c2200dcacedfaeadcfa95d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iserrorconditionenum-class"></a>Classe is_error_condition_enum
Rappresenta un predicato di tipo che verifica l'enumerazione di [error_condition](../standard-library/error-condition-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <_Enum>
class is_error_condition_enum;
```  
  
## <a name="remarks"></a>Note  
 Un'istanza di questo [predicato di tipo](../standard-library/type-traits.md) contiene true se il tipo `_Enum` è un valore di enumerazione adatto per l'archiviazione in un oggetto di tipo `error_condition`.  
  
 È possibile aggiungere specializzazioni a questo tipo per i tipi definiti dall'utente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<system_error>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [<system_error>](../standard-library/system-error.md)



