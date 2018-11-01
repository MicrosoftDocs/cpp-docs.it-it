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
ms.openlocfilehash: 6a8f31e8db6f5ca5a680dd47b5d5391c84ce5025
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50498270"
---
# <a name="varianttoperator-"></a>_variant_t::operator =

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

## <a name="remarks"></a>Note

L'operatore consente di assegnare un nuovo valore all'oggetto `_variant_t`:

- **operatore = (***varSrc***)** assegna un oggetto esistente `VARIANT` da un `_variant_t` oggetto.

- **operatore = (***pVarSrc***)** assegna un oggetto esistente `VARIANT` da un `_variant_t` oggetto.

- **operatore = (***var_t_Src***)** assegna un oggetto esistente `_variant_t` dell'oggetto a un `_variant_t` oggetto.    

- **operatore = (***sSrc***)** assegna un **breve** valore intero da un `_variant_t` oggetto.

- **operatore = (**`lSrc`**)** assegna un **long** valore intero da un `_variant_t` oggetto.

- **operatore = (***fltSrc***)** assegna un **float** il valore numerico per un `_variant_t` oggetto.

- **operatore = (***dblSrc***)** assegna un **double** il valore numerico per un `_variant_t` oggetto.

- **operatore = (***cySrc***)** assegna un `CY` dell'oggetto a un `_variant_t` oggetto.

- **operatore = (***bstrSrc***)** assegna un `BSTR` dell'oggetto a un `_variant_t` oggetto.

- **operatore = (***wstrSrc***)** assegna una stringa Unicode a un `_variant_t` oggetto.

- **operatore = (**`strSrc`**)** assegna una stringa multibyte a un `_variant_t` oggetto.

- **operatore = (** `bSrc` **)** assegna un **bool** valore un `_variant_t` oggetto.

- **operatore = (***pDispSrc***)** assegna un `VT_DISPATCH` dell'oggetto a un `_variant_t` oggetto.

- **operatore = (***pIUnknownSrc***)** assegna un `VT_UNKNOWN` dell'oggetto a un `_variant_t` oggetto.

- **operatore = (***decSrc***)** assegna un `DECIMAL` valore un `_variant_t` oggetto.

- **operatore = (** `bSrc` **)** assegna un `BYTE` valore un `_variant_t` oggetto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)