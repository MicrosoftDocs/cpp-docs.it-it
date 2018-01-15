---
title: Struttura identity | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: utility/std::identity
dev_langs: C++
helpviewer_keywords:
- identity class
- identity structure
ms.assetid: 990756fd-7969-4b39-ad7e-0878e8dac8fd
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c9166383cbe79835cc3790826fc2e617eca22484
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="identity-structure"></a>Struttura identity
Struct che fornisce una definizione di tipo come parametro di modello.  
  
## <a name="syntax"></a>Sintassi  
```  
struct identity {
   typedef Type type;
   Type operator()(const Type& left) const;
   };  
```  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Valore da identificare.|  
  
## <a name="remarks"></a>Note  
 La classe contiene la definizione di tipo pubblico `type`, che equivale al tipo di parametro di modello. Viene usata insieme alla funzione modello [forward](../standard-library/utility-functions.md#forward) per garantire che un parametro di funzione abbia il tipo desiderato.  
  
 Per compatibilità con il codice meno recente, la classe definisce anche la funzione di identità `operator()` che restituisce il relativo argomento `left`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<utility>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<utility>](../standard-library/utility.md)



