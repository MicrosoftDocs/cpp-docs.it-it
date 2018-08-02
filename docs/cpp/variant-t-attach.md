---
title: _variant_t::Attach | Microsoft Docs
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
ms.openlocfilehash: 567a3387e79244443b784549d6223a14f78103ce
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39464684"
---
# <a name="varianttattach"></a>_variant_t::Attach
**Sezione specifica Microsoft**  
  
 Associa un `VARIANT` nell'oggetto di **variant_t** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void Attach(VARIANT& varSrc);  
```  
  
#### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto `VARIANT` oggetto da associare a questo **variant_t** oggetto.  
  
## <a name="remarks"></a>Note  
 Acquisisce la proprietà del `VARIANT` incapsulandolo. Questa funzione membro rilascia qualsiasi incapsulato esistente `VARIANT`, quindi copia l'oggetto fornito `VARIANT`e imposta relativo `VARTYPE` su VT_EMPTY per assicurarsi che le relative risorse possono essere rilasciate solo per il **variant_t** distruttore.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)