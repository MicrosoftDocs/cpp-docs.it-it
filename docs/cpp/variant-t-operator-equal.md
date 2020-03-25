---
title: _variant_t::operator =
ms.date: 11/04/2016
f1_keywords:
- _variant_t::operator=
helpviewer_keywords:
- operator= [C++], variant
- operator = [C++], variant
- = operator [C++], with specific Visual C++ objects
ms.assetid: 77622723-6e49-4dec-9e0f-fa74028f1a3c
ms.openlocfilehash: 402251592a87b723d75fd1b2cd0786be7b17dbfc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187622"
---
# <a name="_variant_toperator-"></a>_variant_t::operator =

**Sezione specifica Microsoft**

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

- **operatore = (**  *varSrc*  **)** Assegna un `VARIANT` esistente a un oggetto `_variant_t`.

- **operatore = (**  *pVarSrc*  **)** Assegna un `VARIANT` esistente a un oggetto `_variant_t`.

- **operatore = (**  *var_t_Src*  **)** Assegna un oggetto `_variant_t` esistente a un oggetto `_variant_t`.

- **operatore = (**  *sSrc*  **)** Assegna un valore integer **breve** a un oggetto `_variant_t`.

- **operatore = (** `lSrc` **)** Assegna un valore **Long** Integer a un oggetto `_variant_t`.

- **operatore = (**  *fltSrc*  **)** Assegna un valore numerico **float** a un oggetto `_variant_t`.

- **operatore = (**  *dblSrc*  **)** Assegna un valore numerico **doppio** a un oggetto `_variant_t`.

- **operatore = (**  *cySrc*  **)** Assegna un oggetto `CY` a un oggetto `_variant_t`.

- **operatore = (**  *bstrSrc*  **)** Assegna un oggetto `BSTR` a un oggetto `_variant_t`.

- **operatore = (**  *wstrSrc*  **)** Assegna una stringa Unicode a un oggetto `_variant_t`.

- **operatore = (** `strSrc` **)** Assegna una stringa multibyte a un oggetto `_variant_t`.

- **operatore = (** `bSrc` **)** Assegna un valore **bool** a un oggetto `_variant_t`.

- **operatore = (**  *pDispSrc*  **)** Assegna un oggetto `VT_DISPATCH` a un oggetto `_variant_t`.

- **operatore = (**  *pIUnknownSrc*  **)** Assegna un oggetto `VT_UNKNOWN` a un oggetto `_variant_t`.

- **operatore = (**  *decSrc*  **)** Assegna un valore `DECIMAL` a un oggetto `_variant_t`.

- **operatore = (** `bSrc` **)** Assegna un valore `BYTE` a un oggetto `_variant_t`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
