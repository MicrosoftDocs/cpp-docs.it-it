---
title: Classe money_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xlocmon/std::money_base
dev_langs: C++
helpviewer_keywords: money_base class
ms.assetid: 1a303c15-9272-4f26-ae16-dcf43a0fd38a
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: de697e26d04e9d70cb1bbbdf4ecbf269d6918e4e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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



