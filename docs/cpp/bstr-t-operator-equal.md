---
title: _bstr_t::operator =
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::operator=
helpviewer_keywords:
- operator = [C++], bstr
- operator= [C++], bstr
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
ms.openlocfilehash: 97f0100d8a34253f3a1375d34b887d3d31a77f43
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62350871"
---
# <a name="bstrtoperator-"></a>_bstr_t::operator =

**Sezione specifica Microsoft**

Assegna un nuovo valore a un oggetto `_bstr_t` esistente.

## <a name="syntax"></a>Sintassi

```
_bstr_t& operator=(const _bstr_t& s1) throw ( );
_bstr_t& operator=(const char* s2);
_bstr_t& operator=(const wchar_t* s3);
_bstr_t& operator=(const _variant_t& var);
```

#### <a name="parameters"></a>Parametri

*s1*<br/>
Oggetto `_bstr_t` da assegnare a un oggetto esistente `_bstr_t`.

*s2*<br/>
Stringa multibyte da assegnare a un oggetto esistente `_bstr_t`.

*s3*<br/>
Stringa unicode da assegnare a un oggetto esistente `_bstr_t`.

*var*<br/>
Oggetto `_variant_t` da assegnare a un oggetto esistente `_bstr_t`.

**Fine sezione specifica Microsoft**

## <a name="example"></a>Esempio

Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **operatore =**.

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)