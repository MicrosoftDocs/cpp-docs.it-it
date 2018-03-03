---
title: classe variant_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _variant_t
dev_langs:
- C++
helpviewer_keywords:
- _variant_t class [C++], operators
- _variant_t class
- _variant_t class [C++], member functions
- VARIANT object
- VARIANT object [C++], COM encapsulation
ms.assetid: 6a3cbd4e-0ae8-425e-b4cf-ca0df894c93f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 57a4d7e4019e742ff8adc50bb78a926dff34d55a
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="variantt-class"></a>Classe _variant_t
**Sezione specifica Microsoft**  
  
 Oggetto `_variant_t` incapsulata dall'oggetto di `VARIANT` tipo di dati. La classe gestisce l'allocazione delle risorse e la deallocazione e chiamate di funzione per **VariantInit** e **VariantClear** come appropriato.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[_variant_t](../cpp/variant-t-variant-t.md)|Costruisce un oggetto `_variant_t`.|  
  
### <a name="operations"></a>Operazioni  
  
|||  
|-|-|  
|[Attach](../cpp/variant-t-attach.md)|Collega un **VARIANT** nell'oggetto di `_variant_t` oggetto.|  
|[Cancella](../cpp/variant-t-clear.md)|Cancella incapsulato **VARIANT** oggetto.|  
|[ChangeType](../cpp/variant-t-changetype.md)|Il tipo di modifica di `_variant_t` oggetto per il functoid **VARTYPE**.|  
|[Detach](../cpp/variant-t-detach.md)|Scollega incapsulato **VARIANT** oggetto da questo `_variant_t` oggetto.|  
|[SetString](../cpp/variant-t-setstring.md)|Assegna una stringa a questo oggetto `_variant_t`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[Operator =](../cpp/variant-t-operator-equal.md)|Assegna un nuovo valore a un oggetto `_variant_t` esistente.|  
|[operator ==, !=](../cpp/variant-t-relational-operators.md)|Confronta due oggetti `_variant_t` per verificarne l'uguaglianza o la disuguaglianza.|  
|[Estrattori](../cpp/variant-t-extractors.md)|Estrarre dati da incapsulato **VARIANT** oggetto.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<comutil.h >  
  
 **Lib:** comsuppw.lib o comsuppwd.lib (vedere [/Zc: wchar_t (wchar_t è il tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)