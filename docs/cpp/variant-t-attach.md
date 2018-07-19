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
ms.openlocfilehash: 42c275d085434cc8077a0629429c7c0e1cbbfcc3
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943790"
---
# <a name="varianttattach"></a>_variant_t::Attach
**Sezione specifica Microsoft**  
  
 Associa un `VARIANT` nell'oggetto di `_variant_t` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
void Attach(VARIANT& varSrc);  
```  
  
#### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto `VARIANT` da associare a questo oggetto `_variant_t` oggetto.  
  
## <a name="remarks"></a>Note  
 Acquisisce la proprietà del `VARIANT` incapsulandolo. Questa funzione membro rilascia qualsiasi esistente incapsulato `VARIANT`, quindi copia l'oggetto fornito `VARIANT`e imposta relativo `VARTYPE` su VT_EMPTY per assicurarsi che le relative risorse possono solo essere rilasciate dal `_variant_t` distruttore.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)