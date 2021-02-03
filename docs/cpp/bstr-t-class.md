---
title: _bstr_t (classe)
description: 'Altre informazioni su: _bstr_t Class'
ms.date: 02/02/2021
f1_keywords:
- _bstr_t
helpviewer_keywords:
- BSTR object
- _bstr_t class
- BSTR object [C++], COM encapsulation
ms.openlocfilehash: 71f5f0a27989b416cf4f13873254890db09ce334
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522872"
---
# <a name="_bstr_t-class"></a>Classe `_bstr_t`

**Specifico di Microsoft**

Un `_bstr_t` oggetto incapsula il [tipo di dati BSTR](/previous-versions/windows/desktop/automat/bstr). La classe gestisce l'allocazione e la deallocazione delle risorse tramite chiamate di funzione a [`SysAllocString`](/windows/win32/api/oleauto/nf-oleauto-sysallocstring) e [`SysFreeString`](/windows/win32/api/oleauto/nf-oleauto-sysfreestring) e ad altre `BSTR` API quando appropriato. La `_bstr_t` classe utilizza il conteggio dei riferimenti per evitare un sovraccarico eccessivo.

## <a name="members"></a>Membri

### <a name="construction"></a>Edilizia

| Costruttore | Descrizione |
|--|--|
| [`_bstr_t`](../cpp/bstr-t-bstr-t.md) | Costruisce un oggetto `_bstr_t`. |

### <a name="operations"></a>Gestione operativa

| Funzione | Descrizione |
|--|--|
| [`Assign`](../cpp/bstr-t-assign.md) | Copia `BSTR` in  `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`. |
| [`Attach`](../cpp/bstr-t-attach.md) | Collega un wrapper `_bstr_t` a  `BSTR`. |
| [`copy`](../cpp/bstr-t-copy.md) | Costruisce una copia dell'oggetto `BSTR` incapsulato. |
| [`Detach`](../cpp/bstr-t-detach.md) | Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`. |
| [`GetAddress`](../cpp/bstr-t-getaddress.md) | Punta a `BSTR` sottoposto a wrapping da un oggetto `_bstr_t`. |
| [`GetBSTR`](../cpp/bstr-t-getbstr.md) | Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`. |
| [`length`](../cpp/bstr-t-length.md) | Restituisce il numero di caratteri presenti in `_bstr_t`. |

### <a name="operators"></a>Operatori

| Operatore | Descrizione |
|--|--|
| [`operator =`](../cpp/bstr-t-operator-equal.md) | Assegna un nuovo valore a un oggetto `_bstr_t` esistente. |
| [`operator +=`](../cpp/bstr-t-operator-add-equal-plus.md) | Aggiunge caratteri alla fine dell'oggetto `_bstr_t`. |
| [`operator +`](../cpp/bstr-t-operator-add-equal-plus.md) | Concatena due stringhe. |
| [`operator !`](../cpp/bstr-t-operator-logical-not.md) | Controlla se incapsulato `BSTR` è una stringa null. |
| [`operator ==`](../cpp/bstr-t-relational-operators.md)<br/>[`operator !=`](../cpp/bstr-t-relational-operators.md)<br/>[`operator <`](../cpp/bstr-t-relational-operators.md)<br/>[`operator >`](../cpp/bstr-t-relational-operators.md)<br/>[`operator <=`](../cpp/bstr-t-relational-operators.md)<br/>[`operator >=`](../cpp/bstr-t-relational-operators.md) | Confronta due oggetti `_bstr_t`. |
| [`operator wchar_t*`](../cpp/bstr-t-wchar-t-star-bstr-t-char-star.md)<br/>[`operator char*`](../cpp/bstr-t-wchar-t-star-bstr-t-char-star.md)  | Estrae i puntatori all'oggetto Unicode incapsulato o all'oggetto multibyte `BSTR`. |

**TERMINA specifica Microsoft**

## <a name="requirements"></a>Requisiti

**Intestazione:**\<comutil.h>

**Lib:** *`comsuppw.lib`* oppure *`comsuppwd.lib`* (per ulteriori informazioni, vedere [ `/Zc:wchar_t` (wchar_t è di tipo nativo)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md)

## <a name="see-also"></a>Vedi anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)
