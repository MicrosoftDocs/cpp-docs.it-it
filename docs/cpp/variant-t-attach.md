---
title: _variant_t::Attach | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::Attach
- _variant_t.Attach
dev_langs:
- C++
helpviewer_keywords:
- Attach method [C++]
- VARIANT object [C++], attach
- VARIANT object
ms.assetid: 2f02bd08-2306-4477-aa88-d2a5dee2b859
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 93c4ec0b4d25f1ca0ec03d9aae1dd9e1c16b79a9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="varianttattach"></a>_variant_t::Attach
**Sezione specifica Microsoft**  
  
 Collega un **VARIANT** nell'oggetto di `_variant_t` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void Attach(  
   VARIANT& varSrc   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto **VARIANT** da associare a questo oggetto `_variant_t` oggetto.  
  
## <a name="remarks"></a>Note  
 Acquisisce la proprietà del **VARIANT** incapsulandolo. Questa funzione membro rilascia qualsiasi esistente incapsulato **VARIANT**, quindi copia fornito **VARIANT**e imposta relativo **VARTYPE** per `VT_EMPTY` per assicurarsi che il relativo le risorse possono essere rilasciate solo per il `_variant_t` distruttore.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)