---
title: _variant_t::Detach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 895df401ab10ae85641fd2eed9f7a9654916f33f
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465232"
---
# <a name="varianttdetach"></a>_variant_t::Detach
**Sezione specifica Microsoft**  
  
 Scollega incapsulato `VARIANT` da questo oggetto `_variant_t` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
VARIANT Detach( );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Incapsulato `VARIANT`.  
  
## <a name="remarks"></a>Note  
 Estrae e restituisce incapsulato `VARIANT`, quindi Cancella questo `_variant_t` oggetto senza eliminarlo. Questa funzione membro rimuove il `VARIANT` dall'incapsulamento e imposta la `VARTYPE` di questo `_variant_t` oggetto parametro su VT_EMPTY. È responsabilità dell'utente per rilasciare l'oggetto restituito `VARIANT` chiamando il [VariantClear](http://msdn.microsoft.com/28741d81-8404-4f85-95d3-5c209ec13835) (funzione).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)