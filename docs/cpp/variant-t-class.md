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
- _variant_t class, operators
- _variant_t class
- _variant_t class, member functions
- VARIANT object
- VARIANT object, COM encapsulation
ms.assetid: 6a3cbd4e-0ae8-425e-b4cf-ca0df894c93f
caps.latest.revision: 10
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
ms.openlocfilehash: 3c074061955adbb1682bb7d96345a31fcf8f04e7
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="variantt-class"></a>Classe _variant_t
**Sezione specifica Microsoft**  
  
 Oggetto `_variant_t` incapsulata dall'oggetto di `VARIANT` tipo di dati. La classe gestisce l'allocazione delle risorse e la deallocazione e chiamate di funzione per **VariantInit** e **VariantClear** come appropriato.  
  
### <a name="construction"></a>Costruzione  
  
|||  
|-|-|  
|[variant_t](../cpp/variant-t-variant-t.md)|Costruisce un oggetto `_variant_t`.|  
  
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
|[operatore = =,! =](../cpp/variant-t-relational-operators.md)|Confronta due oggetti `_variant_t` per verificarne l'uguaglianza o la disuguaglianza.|  
|[Estrattori](../cpp/variant-t-extractors.md)|Estrarre dati da incapsulato **VARIANT** oggetto.|  
  
**Fine sezione specifica Microsoft**  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** comutil.h  
  
 **Lib:** comsuppw.lib o comsuppwd.lib (vedere [/Zc: wchar_t (wchar_t è il tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
