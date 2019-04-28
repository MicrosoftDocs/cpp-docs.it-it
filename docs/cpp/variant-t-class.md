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
ms.openlocfilehash: 69976cab9caed653a8278f80821569b613f690eb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62165950"
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
|[operator ==, !=](../cpp/variant-t-relational-operators.md)|Confrontare due **variant_t** gli oggetti per verificarne l'uguaglianza o disuguaglianza.|
|[Estrattori](../cpp/variant-t-extractors.md)|Estrarre dati da incapsulato `VARIANT` oggetto.|

**Fine sezione specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:** \<comutil.h >

**Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t Is tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per altre informazioni)

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)