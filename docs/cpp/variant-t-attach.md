---
title: _variant_t::Attach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 33e21d3bea71c80b8b60df222682fda560fbce9c
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
