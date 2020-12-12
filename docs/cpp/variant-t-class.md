---
description: 'Altre informazioni su: _variant_t Class'
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
ms.openlocfilehash: e720d78e6f7fd22fc369d4b39804260892e235c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116613"
---
# <a name="_variant_t-class"></a>Classe _variant_t

**Specifico di Microsoft**

Un oggetto **_variant_t** incapsula il `VARIANT` tipo di dati. La classe gestisce l'allocazione e la deallocazione delle risorse e le chiamate di funzione a `VariantInit` e `VariantClear` nel modo appropriato.

### <a name="construction"></a>Edilizia

| Nome | Description |
|--|--|
| [_variant_t](../cpp/variant-t-variant-t.md) | Costruisce un oggetto **_variant_t** . |

### <a name="operations"></a>Gestione operativa

| Nome | Description |
|--|--|
| [Attach](../cpp/variant-t-attach.md) | Connette un `VARIANT` oggetto all'oggetto **_variant_t** . |
| [Cancella](../cpp/variant-t-clear.md) | Cancella l'oggetto incapsulato `VARIANT` . |
| [ChangeType](../cpp/variant-t-changetype.md) | Imposta il tipo dell'oggetto **_variant_t** sull'oggetto indicato `VARTYPE` . |
| [Scollega](../cpp/variant-t-detach.md) | Scollega l'oggetto incapsulato `VARIANT` da questo oggetto **_variant_t** . |
| [SetString](../cpp/variant-t-setstring.md) | Assegna una stringa a questo oggetto **_variant_t** . |

### <a name="operators"></a>Operatori

| Nome | Description |
|--|--|
| [Operatore =](../cpp/variant-t-operator-equal.md) | Assegna un nuovo valore a un oggetto **_variant_t** esistente. |
| [operatore = =,! =](../cpp/variant-t-relational-operators.md) | Confrontare due oggetti **_variant_t** per verificarne l'uguaglianza o la disuguaglianza. |
| [Estrattori](../cpp/variant-t-extractors.md) | Estrae i dati dall'oggetto incapsulato `VARIANT` . |

**TERMINA specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:**\<comutil.h>

**Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedi anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
