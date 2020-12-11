---
description: 'Altre informazioni su: _variant_t:: operator ='
title: _variant_t::operator =
ms.date: 11/04/2016
f1_keywords:
- _variant_t::operator=
helpviewer_keywords:
- operator= [C++], variant
- operator = [C++], variant
- = operator [C++], with specific Visual C++ objects
ms.assetid: 77622723-6e49-4dec-9e0f-fa74028f1a3c
ms.openlocfilehash: a304f0904f697ade7d04c6d12f375571a156e989
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161468"
---
# <a name="_variant_toperator-"></a>_variant_t::operator =

**Specifico di Microsoft**

## <a name="syntax"></a>Sintassi

```
_variant_t& operator=(
   const VARIANT& varSrc
);

_variant_t& operator=(
   const VARIANT* pVarSrc
);

_variant_t& operator=(
   const _variant_t& var_t_Src
);

_variant_t& operator=(
   short sSrc
);

_variant_t& operator=(
   long lSrc
);

_variant_t& operator=(
   float fltSrc
);

_variant_t& operator=(
   double dblSrc
);

_variant_t& operator=(
   const CY& cySrc
);

_variant_t& operator=(
   const _bstr_t& bstrSrc
);

_variant_t& operator=(
   const wchar_t* wstrSrc
);

_variant_t& operator=(
   const char* strSrc
);

_variant_t& operator=(
   IDispatch* pDispSrc
);

_variant_t& operator=(
   bool bSrc
);

_variant_t& operator=(
   IUnknown* pSrc
);

_variant_t& operator=(
   const DECIMAL& decSrc
);

_variant_t& operator=(
   BYTE bSrc
);

_variant_t& operator=(
   char cSrc
);

_variant_t& operator=(
   unsigned short usSrc
);

_variant_t& operator=(
   unsigned long ulSrc
);

_variant_t& operator=(
   int iSrc
);

_variant_t& operator=(
   unsigned int uiSrc
);

_variant_t& operator=(
   __int64 i8Src
);

_variant_t& operator=(
   unsigned __int64 ui8Src
);
```

## <a name="remarks"></a>Osservazioni

L'operatore consente di assegnare un nuovo valore all'oggetto `_variant_t`:

- **operatore = (**  *varSrc*  **)** Assegna un oggetto esistente `VARIANT` a un `_variant_t` oggetto.

- **operatore = (**  *pVarSrc*  **)** Assegna un oggetto esistente `VARIANT` a un `_variant_t` oggetto.

- **operatore = (**  *var_t_Src*  **)** Assegna un oggetto esistente `_variant_t` a un `_variant_t` oggetto.

- **operatore = (**  *sSrc*  **)** Assegna un **`short`** valore integer a un `_variant_t` oggetto.

- **operator = (** `lSrc` **)** assegna un **`long`** valore integer a un `_variant_t` oggetto.    

- **operatore = (**  *fltSrc*  **)** Assegna un **`float`** valore numerico a un `_variant_t` oggetto.

- **operatore = (**  *dblSrc*  **)** Assegna un **`double`** valore numerico a un `_variant_t` oggetto.

- **operatore = (**  *cySrc*  **)** Assegna un `CY` oggetto a un `_variant_t` oggetto.

- **operatore = (**  *bstrSrc*  **)** Assegna un `BSTR` oggetto a un `_variant_t` oggetto.

- **operatore = (**  *wstrSrc*  **)** Assegna una stringa Unicode a un `_variant_t` oggetto.

- **operator = (** `strSrc` **)** assegna una stringa multibyte a un `_variant_t` oggetto.    

- **operator = (** `bSrc` **)** assegna un **`bool`** valore a un `_variant_t` oggetto.  

- **operatore = (**  *pDispSrc*  **)** Assegna un `VT_DISPATCH` oggetto a un `_variant_t` oggetto.

- **operatore = (**  *pIUnknownSrc*  **)** Assegna un `VT_UNKNOWN` oggetto a un `_variant_t` oggetto.

- **operatore = (**  *decSrc*  **)** Assegna un `DECIMAL` valore a un `_variant_t` oggetto.

- **operator = (** `bSrc` **)** assegna un `BYTE` valore a un `_variant_t` oggetto.  

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _variant_t](../cpp/variant-t-class.md)
