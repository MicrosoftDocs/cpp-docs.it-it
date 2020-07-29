---
title: _variant_t::_variant_t
ms.date: 11/04/2016
f1_keywords:
- _variant_t::_variant_t
helpviewer_keywords:
- _variant_t class [C++], constructor
- _variant_t method [C++]
ms.assetid: a50e5b33-d4c6-4a26-8e7e-a0a25fd9895b
ms.openlocfilehash: 50c10eb4ff617f4bcdc69d2e1781a9920b9eb0e5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233561"
---
# <a name="_variant_t_variant_t"></a>_variant_t::_variant_t

**Specifico di Microsoft**

Costruisce un oggetto `_variant_t`.

## <a name="syntax"></a>Sintassi

```
_variant_t( ) throw( );

_variant_t(
   const VARIANT& varSrc
);

_variant_t(
   const VARIANT* pVarSrc
);

_variant_t(
   const _variant_t& var_t_Src
);

_variant_t(
   VARIANT& varSrc,
   bool fCopy
);

_variant_t(
   short sSrc,
   VARTYPE vtSrc = VT_I2
);

_variant_t(
   long lSrc,
   VARTYPE vtSrc = VT_I4
);

_variant_t(
   float fltSrc
) throw( );

_variant_t(
   double dblSrc,
   VARTYPE vtSrc = VT_R8
);

_variant_t(
   const CY& cySrc
) throw( );

_variant_t(
   const _bstr_t& bstrSrc
);

_variant_t(
   const wchar_t *wstrSrc
);

_variant_t(
   const char* strSrc
);

_variant_t(
   IDispatch* pDispSrc,
   bool fAddRef = true
) throw( );

_variant_t(
   bool bSrc
) throw( );

_variant_t(
   IUnknown* pIUknownSrc,
   bool fAddRef = true
) throw( );

_variant_t(
   const DECIMAL& decSrc
) throw( );

_variant_t(
   BYTE bSrc
) throw( );

variant_t(
   char cSrc
) throw();

_variant_t(
   unsigned short usSrc
) throw();

_variant_t(
   unsigned long ulSrc
) throw();

_variant_t(
   int iSrc
) throw();

_variant_t(
   unsigned int uiSrc
) throw();

_variant_t(
   __int64 i8Src
) throw();

_variant_t(
   unsigned __int64 ui8Src
) throw();
```

#### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` da copiare nel nuovo oggetto `_variant_t`.

*pVarSrc*<br/>
Puntatore a un `VARIANT` oggetto da copiare nel nuovo `_variant_t` oggetto.

*var_t_Src*<br/>
Oggetto `_variant_t` da copiare nel nuovo oggetto `_variant_t`.

*fCopy*<br/>
Se **`false`** , l' `VARIANT` oggetto fornito viene associato al nuovo `_variant_t` oggetto senza creare una nuova copia da `VariantCopy` .

*ISrc, sSrc*<br/>
Integer da copiare nel nuovo oggetto `_variant_t`.

*vtSrc*<br/>
`VARTYPE`Per il nuovo `_variant_t` oggetto.

*fltSrc, dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `_variant_t`.

*cySrc*<br/>
Oggetto `CY` da copiare nel nuovo oggetto `_variant_t`.

*bstrSrc*<br/>
Oggetto `_bstr_t` da copiare nel nuovo oggetto `_variant_t`.

*strSrc, wstrSrc*<br/>
Una stringa da copiare nel nuovo oggetto `_variant_t`.

*bSrc*<br/>
**`bool`** Valore da copiare nel nuovo `_variant_t` oggetto.

*pIUknownSrc*<br/>
Puntatore a interfaccia COM a un oggetto VT_UNKNOWN da incapsulare nel nuovo `_variant_t` oggetto.

*pDispSrc*<br/>
Puntatore a interfaccia COM a un oggetto VT_DISPATCH da incapsulare nel nuovo `_variant_t` oggetto.

*decSrc*<br/>
Un valore `DECIMAL` da copiare nel nuovo oggetto `_variant_t`.

*bSrc*<br/>
Un valore `BYTE` da copiare nel nuovo oggetto `_variant_t`.

*cSrc*<br/>
**`char`** Valore da copiare nel nuovo `_variant_t` oggetto.

*usSrc*<br/>
**`unsigned short`** Valore da copiare nel nuovo `_variant_t` oggetto.

*ulSrc*<br/>
**`unsigned long`** Valore da copiare nel nuovo `_variant_t` oggetto.

*iSrc*<br/>
**`int`** Valore da copiare nel nuovo `_variant_t` oggetto.

*uiSrc*<br/>
**`unsigned int`** Valore da copiare nel nuovo `_variant_t` oggetto.

*i8Src*<br/>
**`__int64`** Valore da copiare nel nuovo `_variant_t` oggetto.

*ui8Src*<br/>
Valore **__int64 senza segno** da copiare nel nuovo `_variant_t` oggetto.

## <a name="remarks"></a>Osservazioni

- **_variant_t ()** Costruisce un `_variant_t` oggetto vuoto, `VT_EMPTY` .

- **_variant_t (variante&** *varSrc***)** Costruisce un `_variant_t` oggetto da una copia dell' `VARIANT` oggetto.     Il tipo variant viene mantenuto.

- **_variant_t (VARIANT** <strong>\*</strong> *pVarSrc***)** costruisce un `_variant_t` oggetto da una copia dell' `VARIANT` oggetto.     Il tipo variant viene mantenuto.

- **_variant_t (_variant_t&** *var_t_Src***)** Costruisce un `_variant_t` oggetto da un altro `_variant_t` oggetto.     Il tipo variant viene mantenuto.

- **_variant_t (variante&** *varSrc* **, bool** `fCopy` **)** costruisce un `_variant_t` oggetto da un `VARIANT` oggetto esistente.       Se *fCopy* è **`false`** , l'oggetto **Variant** viene associato al nuovo oggetto senza creare una copia.

- **_variant_t (Short***sSrc* **, VarType** `vtSrc` **= VT_I2)** costruisce un `_variant_t` oggetto di tipo VT_I2 o VT_BOOL da un **`short`** valore integer.       Tutti gli altri `VARTYPE` risultati generano un errore di E_INVALIDARG.

- **_variant_t (Long** `lSrc` **, VarType** `vtSrc` **= VT_I4)** costruisce un `_variant_t` oggetto di tipo VT_I4, VT_BOOL o VT_ERROR da un **`long`** valore integer.       Tutti gli altri `VARTYPE` risultati generano un errore di E_INVALIDARG.

- **_variant_t (float** `fltSrc` **)** costruisce un `_variant_t` oggetto di tipo VT_R4 da un **`float`** valore numerico.    

- **_variant_t (Double** `dblSrc` **, VarType** `vtSrc` **= VT_R8)** costruisce un `_variant_t` oggetto di tipo VT_R8 o VT_DATE da un **`double`** valore numerico.       Tutti gli altri `VARTYPE` risultati generano un errore di E_INVALIDARG.

- **_variant_t (CY&** `cySrc` **)** costruisce un `_variant_t` oggetto di tipo VT_CY da un `CY` oggetto.    

- **_variant_t (_bstr_t&** `bstrSrc` **)** costruisce un `_variant_t` oggetto di tipo VT_BSTR da un `_bstr_t` oggetto.     Un nuovo `BSTR` viene allocato.

- **_variant_t (wchar_t** <strong>\*</strong> *wstrSrc*  **)** costruisce un `_variant_t` oggetto di tipo VT_BSTR da una stringa Unicode. Un nuovo `BSTR` viene allocato.

- **_variant_t (Char)** <strong>\*</strong> `strSrc` **)** Costruisce un `_variant_t` oggetto di tipo VT_BSTR da una stringa.     Un nuovo `BSTR` viene allocato.

- **_variant_t (bool** `bSrc` **)** costruisce un `_variant_t` oggetto di tipo VT_BOOL da un **`bool`** valore.    

- **_variant_t (IUnknown)** <strong>\*</strong> `pIUknownSrc` **, bool** `fAddRef` **= true)** Costruisce un `_variant_t` oggetto di tipo VT_UNKNOWN da un puntatore a interfaccia com.       Se `fAddRef` è **`true`** , `AddRef` viene chiamato sul puntatore a interfaccia specificato in modo che corrisponda alla chiamata a `Release` che si verificherà quando l' `_variant_t` oggetto viene eliminato definitivamente. È necessario chiamare `Release` sul puntatore a interfaccia specificato. Se `fAddRef` è **`false`** , questo costruttore acquisisce la proprietà del puntatore a interfaccia fornito. non chiamare `Release` sul puntatore a interfaccia specificato.

- **_variant_t (IDispatch** <strong>\*</strong> `pDispSrc` **, bool** `fAddRef` **= true)** Costruisce un `_variant_t` oggetto di tipo VT_DISPATCH da un puntatore a interfaccia com.       Se `fAddRef` è **`true`** , `AddRef` viene chiamato sul puntatore a interfaccia specificato in modo che corrisponda alla chiamata a `Release` che si verificherà quando l' `_variant_t` oggetto viene eliminato definitivamente. È necessario chiamare `Release` sul puntatore a interfaccia specificato. Se `fAddRef` è **`false`** , questo costruttore acquisisce la proprietà del puntatore a interfaccia fornito. non chiamare `Release` sul puntatore a interfaccia specificato.

- **_variant_t (&decimale ** `decSrc` **)** costruisce un `_variant_t` oggetto di tipo VT_DECIMAL da un `DECIMAL` valore.    

- **_variant_t (byte** `bSrc` **)** costruisce un `_variant_t` oggetto di tipo `VT_UI1` da un `BYTE` valore.    

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
