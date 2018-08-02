---
title: classe variant_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9315c2bb946cd80dd68153543ad6ae532ec9b7a0
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39460872"
---
# <a name="variantt-class"></a>Classe _variant_t
**Sezione specifica Microsoft**  
  
 Oggetto **variant_t** incapsulato dall'oggetto di `VARIANT` tipo di dati. La classe gestisce l'allocazione delle risorse e la deallocazione ed effettua chiamate di funzione al `VariantInit` e `VariantClear` come appropriato.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[_variant_t](../cpp/variant-t-variant-t.md)|Costruisce un **variant_t** oggetto.|  
  
### <a name="operations"></a>Operazioni  
  
|||  
|-|-|  
|[Attach](../cpp/variant-t-attach.md)|Associa un `VARIANT` nell'oggetto di **variant_t** oggetto.|  
|[Cancella](../cpp/variant-t-clear.md)|Cancella incapsulato `VARIANT` oggetto.|  
|[ChangeType](../cpp/variant-t-changetype.md)|Modifica il tipo dei **variant_t** oggetto indicato `VARTYPE`.|  
|[Detach](../cpp/variant-t-detach.md)|Scollega incapsulato `VARIANT` da questo oggetto **variant_t** oggetto.|  
|[SetString](../cpp/variant-t-setstring.md)|Assegna una stringa a questo **variant_t** oggetto.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../cpp/variant-t-operator-equal.md)|Assegna un nuovo valore a un oggetto esistente **variant_t** oggetto.|  
|[operatore = =,! =](../cpp/variant-t-relational-operators.md)|Confrontare due **variant_t** gli oggetti per verificarne l'uguaglianza o disuguaglianza.|  
|[Estrattori](../cpp/variant-t-extractors.md)|Estrarre dati da incapsulato `VARIANT` oggetto.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<comutil.h >  
  
 **Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t Is tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)