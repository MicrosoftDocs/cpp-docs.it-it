---
title: _bstr_t Class
ms.date: 11/04/2016
f1_keywords:
- _bstr_t
helpviewer_keywords:
- BSTR object
- _bstr_t class
- BSTR object [C++], COM encapsulation
ms.assetid: 58841fef-fe21-4a84-aab9-780262b5201f
ms.openlocfilehash: f521681da10eeda3b8024b0865d5164021296353
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88838711"
---
# <a name="_bstr_t-class"></a>_bstr_t Class

**Specifico di Microsoft**

Un `_bstr_t` oggetto incapsula il [tipo di dati BSTR](/previous-versions/windows/desktop/automat/bstr). La classe gestisce l'allocazione e la deallocazione delle risorse tramite chiamate di funzione a `SysAllocString` e `SysFreeString` e ad altre `BSTR` API quando appropriato. La classe **_bstr_t** usa il conteggio dei riferimenti per evitare un sovraccarico eccessivo.

### <a name="construction"></a>Edilizia

| Costruttore | Descrizione |
|--|--|
| [_bstr_t](../cpp/bstr-t-bstr-t.md) | Costruisce un oggetto `_bstr_t`. |

### <a name="operations"></a>Gestione operativa

| Funzione | Descrizione |
|--|--|
| [Assign](../cpp/bstr-t-assign.md) | Copia `BSTR` in  `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`. |
| [Attach](../cpp/bstr-t-attach.md) | Collega un wrapper `_bstr_t` a  `BSTR`. |
| [copy](../cpp/bstr-t-copy.md) | Costruisce una copia dell'oggetto `BSTR` incapsulato. |
| [Scollega](../cpp/bstr-t-detach.md) | Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`. |
| [GetAddress](../cpp/bstr-t-getaddress.md) | Punta a `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`. |
| [GetBSTR](../cpp/bstr-t-getbstr.md) | Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`. |
| [length](../cpp/bstr-t-length.md) | Restituisce il numero di caratteri presenti in `_bstr_t`. |

### <a name="operators"></a>Operatori

| Operatore | Descrizione |
|--|--|
| [operatore =](../cpp/bstr-t-operator-equal.md) | Assegna un nuovo valore a un oggetto `_bstr_t` esistente. |
| [operatore + =](../cpp/bstr-t-operator-add-equal-plus.md) | Aggiunge caratteri alla fine dell'oggetto `_bstr_t`. |
| [operatore +](../cpp/bstr-t-operator-add-equal-plus.md) | Concatena due stringhe. |
| [operatore!](../cpp/bstr-t-operator-logical-not.md) | Controlla se incapsulato `BSTR` è una stringa null. |
| [operator = =,! =, \<, > , \<=, >=](../cpp/bstr-t-relational-operators.md) | Confronta due oggetti `_bstr_t`. |
| [operatore wchar_t * &#124; char\*](../cpp/bstr-t-wchar-t-star-bstr-t-char-star.md) | Estrae i puntatori all'oggetto Unicode incapsulato o all'oggetto multibyte `BSTR`. |

**TERMINA specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:**\<comutil.h>

**Lib:** comsuppw. lib o comsuppwd. lib (vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
