---
title: Classe money_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- locale/std::money_base
- money_base
- std::money_base
- std.money_base
dev_langs:
- C++
helpviewer_keywords:
- money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
caps.latest.revision: 19
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
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 4af0f51a820fc0011285b6c5a690f496e8fd4afe
ms.lasthandoff: 02/24/2017

---
# <a name="moneybase-class"></a>Classe money_base
Questa classe descrive un'enumerazione e una struttura comuni a tutte le specializzazioni della classe modello [moneypunct](../standard-library/moneypunct-class.md).  
  
## <a name="syntax"></a>Sintassi  
```    
struct pattern
{
   char field[_PATTERN_FIELD_SIZE];
};  
```  
## <a name="remarks"></a>Note  
 L'enumerazione **part** descrive i valori possibili degli elementi del campo matrice nel modello di struttura. I valori di **part** sono:  
  
- **none** per trovare la corrispondenza con zero o più spazi o per non generare nulla.  
  
- **sign** per trovare la corrispondenza con un segno positivo o negativo o per generare tale segno.  
  
- **space** per trovare la corrispondenza con zero o più spazi o per generare uno spazio.  
  
- **symbol** per trovare la corrispondenza con un simbolo di valuta o per generare tale simbolo.  
  
- **value** per trovare la corrispondenza con un valore monetario o per generare tale valore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)




