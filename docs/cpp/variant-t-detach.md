---
title: _variant_t::Detach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _variant_t::Detach
- _variant_t.Detach
dev_langs:
- C++
helpviewer_keywords:
- VARIANT object [C++], detatch
- Detach method [C++]
- VARIANT object
ms.assetid: c348ac08-62cf-4657-a16f-974a79c12158
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 577b4874dd6d89c0c6c60b1a7981e74944e77ba8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="varianttdetach"></a>_variant_t::Detach
**Sezione specifica Microsoft**  
  
 Scollega incapsulato **VARIANT** oggetto da questo `_variant_t` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
VARIANT Detach( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 Incapsulato **VARIANT**.  
  
## <a name="remarks"></a>Note  
 Estrae e restituisce incapsulato **VARIANT**, quindi rimuove il `_variant_t` oggetto senza eliminarlo. Questa funzione membro rimuove il **VARIANT** dall'incapsulamento e imposta il **VARTYPE** di questo `_variant_t` oggetto `VT_EMPTY`. È responsabilità dell'utente di rilasciare l'oggetto restituito **VARIANT** chiamando il [VariantClear](http://msdn.microsoft.com/en-us/28741d81-8404-4f85-95d3-5c209ec13835) (funzione).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)