---
title: Classe is_standard_layout | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_standard_layout
dev_langs: C++
helpviewer_keywords:
- is_standard_layout class
- is_standard_layout
ms.assetid: 15ccf111-f537-45ef-b552-59152a7ba312
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a1ab603cad2bd38bd0b001fc48929b298720435f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="isstandardlayout-class"></a>Classe is_standard_layout
Verifica se il tipo è un layout standard.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct is_standard_layout;
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Ty`|Tipo su cui eseguire una query|  
  
## <a name="remarks"></a>Note  
 Un'istanza di questo predicato di tipo contiene true se il tipo `Ty` è una classe che ha un layout standard di oggetti membro in memoria; in caso contrario, contiene false.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



