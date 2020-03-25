---
title: Classe _variant_t
ms.date: 11/04/2016
f1_keywords:
- _variant_t
helpviewer_keywords:
- _variant_t class [C++], operators
- _variant_t class
- _variant_t class [C++], member functions
- VARIANT object
- VARIANT object [C++], COM encapsulation
ms.assetid: 6a3cbd4e-0ae8-425e-b4cf-ca0df894c93f
ms.openlocfilehash: e11d31904fd8e54049f69ee4f6530d511c8c7f4e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187752"
---
# <a name="_variant_t-class"></a>Classe _variant_t

**Sezione specifica Microsoft**

Un oggetto **_variant_t** incapsula il tipo di dati `VARIANT`. La classe gestisce l'allocazione e la deallocazione delle risorse e effettua chiamate di funzione per `VariantInit` e `VariantClear` in base alle esigenze.

### <a name="construction"></a>Costruzioni

|||
|-|-|
|[_variant_t](../cpp/variant-t-variant-t.md)|Costruisce un oggetto **_variant_t** .|

### <a name="operations"></a>Operazioni

|||
|-|-|
|[Collega](../cpp/variant-t-attach.md)|Connette un oggetto `VARIANT` nell'oggetto **_variant_t** .|
|[Cancella](../cpp/variant-t-clear.md)|Cancella l'oggetto `VARIANT` incapsulato.|
|[ChangeType](../cpp/variant-t-changetype.md)|Consente di modificare il tipo dell'oggetto **_variant_t** nella `VARTYPE`indicata.|
|[Scollega](../cpp/variant-t-detach.md)|Disconnette l'oggetto `VARIANT` incapsulato da questo oggetto **_variant_t** .|
|[SetString](../cpp/variant-t-setstring.md)|Assegna una stringa a questo oggetto **_variant_t** .|

### <a name="operators"></a>Operatori

|||
|-|-|
|[Operatore =](../cpp/variant-t-operator-equal.md)|Assegna un nuovo valore a un oggetto **_variant_t** esistente.|
|[operatore = =,! =](../cpp/variant-t-relational-operators.md)|Confrontare due oggetti **_variant_t** per verificarne l'uguaglianza o la disuguaglianza.|
|[Estrattori](../cpp/variant-t-extractors.md)|Estrae i dati dall'oggetto `VARIANT` incapsulato.|

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<comutil. h >

**Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
