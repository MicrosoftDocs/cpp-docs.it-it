---
title: _variant_t::_variant_t
ms.date: 11/04/2016
f1_keywords:
- _variant_t::_variant_t
helpviewer_keywords:
- _variant_t class [C++], constructor
- _variant_t method [C++]
ms.assetid: a50e5b33-d4c6-4a26-8e7e-a0a25fd9895b
ms.openlocfilehash: fff116ef04967a1887eaa075d92d3ea0283d5427
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187531"
---
# <a name="_variant_t_variant_t"></a>_variant_t::_variant_t

**Sezione specifica Microsoft**

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
Puntatore a un oggetto `VARIANT` da copiare nel nuovo oggetto `_variant_t`.

*var_t_Src*<br/>
Oggetto `_variant_t` da copiare nel nuovo oggetto `_variant_t`.

*fCopy*<br/>
Se **false**, l'oggetto `VARIANT` fornito viene associato al nuovo oggetto `_variant_t` senza creare una nuova copia per `VariantCopy`.

*ISrc, sSrc*<br/>
Integer da copiare nel nuovo oggetto `_variant_t`.

*vtSrc*<br/>
`VARTYPE` per il nuovo oggetto `_variant_t`.

*fltSrc, dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `_variant_t`.

*cySrc*<br/>
Oggetto `CY` da copiare nel nuovo oggetto `_variant_t`.

*bstrSrc*<br/>
Oggetto `_bstr_t` da copiare nel nuovo oggetto `_variant_t`.

*strSrc, wstrSrc*<br/>
Una stringa da copiare nel nuovo oggetto `_variant_t`.

*bSrc*<br/>
Valore **bool** da copiare nel nuovo oggetto `_variant_t`.

*pIUknownSrc*<br/>
Puntatore a interfaccia COM a un oggetto VT_UNKNOWN da incapsulare nel nuovo oggetto `_variant_t`.

*pDispSrc*<br/>
Puntatore a interfaccia COM a un oggetto VT_DISPATCH da incapsulare nel nuovo oggetto `_variant_t`.

*decSrc*<br/>
Un valore `DECIMAL` da copiare nel nuovo oggetto `_variant_t`.

*bSrc*<br/>
Un valore `BYTE` da copiare nel nuovo oggetto `_variant_t`.

*cSrc*<br/>
Valore **char** da copiare nel nuovo oggetto `_variant_t`.

*usSrc*<br/>
Valore **short senza segno** da copiare nel nuovo oggetto `_variant_t`.

*ulSrc*<br/>
Valore **Long senza segno** da copiare nel nuovo oggetto `_variant_t`.

*iSrc*<br/>
Valore **int** da copiare nel nuovo oggetto `_variant_t`.

*uiSrc*<br/>
Valore **unsigned int** da copiare nel nuovo oggetto `_variant_t`.

*i8Src*<br/>
Valore **__int64** da copiare nel nuovo oggetto `_variant_t`.

*ui8Src*<br/>
Valore **__int64 senza segno** da copiare nel nuovo oggetto `_variant_t`.

## <a name="remarks"></a>Osservazioni

- **_variant_t ()** Costruisce un oggetto `_variant_t` vuoto, `VT_EMPTY`.

- **_variant_t (variante &**  *varSrc*  **)** Costruisce un oggetto `_variant_t` da una copia dell'oggetto `VARIANT`. Il tipo variant viene mantenuto.

- **_variant_t (variante** <strong>\*</strong> *pVarSrc* **)** Costruisce un oggetto `_variant_t` da una copia dell'oggetto `VARIANT`. Il tipo variant viene mantenuto.

- **_variant_t (_variant_t &**  *var_t_Src*  **)** Costruisce un oggetto `_variant_t` da un altro oggetto `_variant_t`. Il tipo variant viene mantenuto.

- **_variant_t (variant &** *varSrc* **, bool**`fCopy` **)** Costruisce un oggetto `_variant_t` da un oggetto `VARIANT` esistente. Se *fCopy* è **false**, l'oggetto **Variant** viene associato al nuovo oggetto senza creare una copia.

- **_variant_t (Short***sSrc* **, VarType**`vtSrc` **= VT_I2)** Costruisce un oggetto `_variant_t` di tipo VT_I2 o VT_BOOL da un valore **short** Integer. Qualsiasi altro `VARTYPE` genera un errore E_INVALIDARG.

- **_variant_t (long**`lSrc` **, VARTYPE**`vtSrc` **= VT_I4)** Costruisce un oggetto `_variant_t` di tipo VT_I4, VT_BOOL o VT_ERROR da un valore **Long** Integer. Qualsiasi altro `VARTYPE` genera un errore E_INVALIDARG.

- **_variant_t (float**`fltSrc` **)** Costruisce un oggetto `_variant_t` di tipo VT_R4 da un valore numerico **float** .

- **_variant_t (double**`dblSrc` **, VARTYPE**`vtSrc` **= VT_R8)** Costruisce un oggetto `_variant_t` di tipo VT_R8 o VT_DATE da un valore numerico **doppio** . Qualsiasi altro `VARTYPE` genera un errore E_INVALIDARG.

- **_variant_t (CY &** `cySrc` **)** Costruisce un oggetto `_variant_t` di tipo VT_CY da un oggetto `CY`.

- **_variant_t (_bstr_t &** `bstrSrc` **)** Costruisce un oggetto `_variant_t` di tipo VT_BSTR da un oggetto `_bstr_t`. Un nuovo `BSTR` viene allocato.

- **_variant_t (wchar_t** <strong>\*</strong> *wstrSrc*  **)** Costruisce un oggetto `_variant_t` di tipo VT_BSTR da una stringa Unicode. Un nuovo `BSTR` viene allocato.

- **_variant_t (char** <strong>\*</strong>`strSrc` **)** Costruisce un oggetto `_variant_t` di tipo VT_BSTR da una stringa. Un nuovo `BSTR` viene allocato.

- **_variant_t (bool**`bSrc` **)** Costruisce un oggetto `_variant_t` di tipo VT_BOOL da un valore **bool** .

- **_variant_t (IUnknown** <strong>\*</strong>`pIUknownSrc` **, bool**`fAddRef` **= true)** Costruisce un oggetto `_variant_t` di tipo VT_UNKNOWN da un puntatore a interfaccia COM. Se `fAddRef` è **true**, viene chiamato `AddRef` sul puntatore a interfaccia specificato in modo che corrisponda alla chiamata a `Release` che si verificheranno quando l'oggetto `_variant_t` viene eliminato definitivamente. È necessario chiamare `Release` sul puntatore a interfaccia specificato. Se `fAddRef` è **false**, questo costruttore acquisisce la proprietà del puntatore a interfaccia fornito; non chiamare `Release` sul puntatore a interfaccia specificato.

- **_variant_t (IDispatch** <strong>\*</strong>`pDispSrc` **, bool**`fAddRef` **= true)** Costruisce un oggetto `_variant_t` di tipo VT_DISPATCH da un puntatore a interfaccia COM. Se `fAddRef` è **true**, viene chiamato `AddRef` sul puntatore a interfaccia specificato in modo che corrisponda alla chiamata a `Release` che si verificheranno quando l'oggetto `_variant_t` viene eliminato definitivamente. È necessario chiamare `Release` sul puntatore a interfaccia specificato. Se `fAddRef` è **false**, questo costruttore acquisisce la proprietà del puntatore a interfaccia fornito; non chiamare `Release` sul puntatore a interfaccia specificato.

- **_variant_t (& DEcimale**`decSrc` **)** Costruisce un oggetto `_variant_t` di tipo VT_DECIMAL da un valore di `DECIMAL`.

- **_variant_t (** `bSrc`byte **)** Costruisce un oggetto `_variant_t` di tipo `VT_UI1` da un valore di `BYTE`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
