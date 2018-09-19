---
title: _variant_t::_variant_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::_variant_t
dev_langs:
- C++
helpviewer_keywords:
- _variant_t class [C++], constructor
- _variant_t method [C++]
ms.assetid: a50e5b33-d4c6-4a26-8e7e-a0a25fd9895b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2c3b1bb7d345d87e4f592dc82971f1efe86dd9a2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46079583"
---
# <a name="varianttvariantt"></a>_variant_t::_variant_t

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
Puntatore a un `VARIANT` da copiare nel nuovo oggetto `_variant_t` oggetto.

*var_t_Src*<br/>
Oggetto `_variant_t` da copiare nel nuovo oggetto `_variant_t`.

*fCopy*<br/>
Se **false**, l'oggetto fornito `VARIANT` oggetto è associato al nuovo `_variant_t` oggetto senza creare una nuova copia `VariantCopy`.

*ISrc, sSrc*<br/>
Integer da copiare nel nuovo oggetto `_variant_t`.

*vtSrc*<br/>
Il `VARTYPE` per il nuovo `_variant_t` oggetto.

*fltSrc, dblSrc*<br/>
Un valore numerico da copiare nel nuovo oggetto `_variant_t`.

*cySrc*<br/>
Oggetto `CY` da copiare nel nuovo oggetto `_variant_t`.

*bstrSrc*<br/>
Oggetto `_bstr_t` da copiare nel nuovo oggetto `_variant_t`.

*strSrc, wstrSrc*<br/>
Una stringa da copiare nel nuovo oggetto `_variant_t`.

*bSrc*<br/>
Oggetto **bool** valore da copiare nel nuovo `_variant_t` oggetto.

*pIUknownSrc*<br/>
Puntatore a interfaccia COM a un oggetto VT_UNKNOWN da copiare nel nuovo `_variant_t` oggetto.

*pDispSrc*<br/>
Puntatore a interfaccia COM a un oggetto VT_DISPATCH da copiare nel nuovo `_variant_t` oggetto.

*decSrc*<br/>
Un valore `DECIMAL` da copiare nel nuovo oggetto `_variant_t`.

*bSrc*<br/>
Un valore `BYTE` da copiare nel nuovo oggetto `_variant_t`.

*cSrc*<br/>
Oggetto **char** valore da copiare nel nuovo `_variant_t` oggetto.

*usSrc*<br/>
Oggetto **short senza segno** valore da copiare nel nuovo `_variant_t` oggetto.

*ulSrc*<br/>
Oggetto **long senza segno** valore da copiare nel nuovo `_variant_t` oggetto.

*iSrc*<br/>
Un' **int** valore da copiare nel nuovo `_variant_t` oggetto.

*uiSrc*<br/>
Un' **int senza segno** valore da copiare nel nuovo `_variant_t` oggetto.

*i8Src*<br/>
Un' **__int64** valore da copiare nel nuovo `_variant_t` oggetto.

*ui8Src*<br/>
Un' **unsigned __int64** valore da copiare nel nuovo `_variant_t` oggetto.

## <a name="remarks"></a>Note

- **variant_t ()** costruisce un oggetto vuoto `_variant_t` oggetto `VT_EMPTY`.

- **variant_t (VARIANT &***varSrc***)** costruisce un `_variant_t` da una copia dell'oggetto di `VARIANT` oggetto.     Il tipo variant viene mantenuto.

- **variant_t (VARIANT**<strong>\*</strong>*pVarSrc***)** costruisce un `_variant_t` da una copia dell'oggetto di `VARIANT` oggetto.     Il tipo variant viene mantenuto.

- **variant_t ( variant_t &***var_t_Src***)** costruisce un `_variant_t` da un altro oggetto `_variant_t` oggetto.     Il tipo variant viene mantenuto.

- **variant_t (VARIANT &***varSrc* **, bool**`fCopy`**)** costruisce un `_variant_t` oggetto da un oggetto esistente `VARIANT` oggetto.       Se *fCopy* viene **false**, il **VARIANT** oggetto viene associato al nuovo oggetto senza creare una copia.

- **variant_t (short***sSrc* **, VARTYPE**`vtSrc`**= VT_I2)** costruisce un `_variant_t` oggetto di tipo VT_I2 o VT_BOOL da un **breve** valore intero.       Qualsiasi altro `VARTYPE` provoca un errore E_INVALIDARG.

- **variant_t (long** `lSrc` **, VARTYPE**`vtSrc`**= VT_I4)** costruisce una `_variant_t` oggetto di tipo VT_I4, VT_BOOL o VT_ERROR da un **long**  valore intero.       Qualsiasi altro `VARTYPE` provoca un errore E_INVALIDARG.

- **variant_t (float**`fltSrc`**)** costruisce un `_variant_t` oggetto di tipo VT_R4 da un **float** valore numerico.    

- **variant_t (double** `dblSrc` **, VARTYPE**`vtSrc`**= VT_R8)** costruisce una `_variant_t` oggetto di tipo VT_R8 o VT_DATE da un **doppia** valore numerico.       Qualsiasi altro `VARTYPE` provoca un errore E_INVALIDARG.

- **variant_t (CY &**`cySrc`**)** costruisce un `_variant_t` VT_CY dal tipo di oggetto di un `CY` oggetto.    

- **variant_t ( bstr_t &**`bstrSrc`**)** costruisce un `_variant_t` oggetto di tipo VT_BSTR da un `_bstr_t` oggetto.     Un nuovo `BSTR` viene allocato.

- **variant_t (wchar_t** <strong>\*</strong> *wstrSrc***)** costruisce un `_variant_t` oggetto di tipo VT_BSTR da una stringa Unicode.   Un nuovo `BSTR` viene allocato.

- **variant_t (char**<strong>\*</strong>`strSrc`**)** costruisce un `_variant_t` oggetto di tipo VT_BSTR da una stringa.     Un nuovo `BSTR` viene allocato.

- **variant_t (bool**`bSrc`**)** costruisce un `_variant_t` VT_BOOL dal tipo di oggetto di un **bool** valore.    

- **variant_t (IUnknown** <strong>\*</strong> `pIUknownSrc` **, bool**`fAddRef`**= true)** costruisce un `_variant_t` oggetto di tipo VT_UNKNOWN da un puntatore a interfaccia COM.       Se `fAddRef` viene **true**, quindi `AddRef` viene chiamato sul puntatore a interfaccia indicato per rispondere alla chiamata a `Release` che si verificherà quando il `_variant_t` oggetto viene eliminato definitivamente. È responsabilità dell'utente per chiamare `Release` sul puntatore a interfaccia indicato. Se `fAddRef` viene **false**, questo costruttore acquisisce la proprietà del puntatore a interfaccia indicato; non chiamare `Release` sul puntatore a interfaccia indicato.

- **variant_t (IDispatch** <strong>\*</strong> `pDispSrc` **, bool**`fAddRef`**= true)** costruisce un `_variant_t` oggetto di Digitare VT_DISPATCH da un puntatore a interfaccia COM.       Se `fAddRef` viene **true**, quindi `AddRef` viene chiamato sul puntatore a interfaccia indicato per rispondere alla chiamata a `Release` che si verificherà quando il `_variant_t` oggetto viene eliminato definitivamente. È responsabilità dell'utente per chiamare `Release` sul puntatore a interfaccia indicato. Se `fAddRef` viene **false**, questo costruttore acquisisce la proprietà del puntatore a interfaccia indicato; non chiamare `Release` sul puntatore a interfaccia indicato.

- **variant_t (DECIMAL &**`decSrc`**)** costruisce un `_variant_t` VT_DECIMAL dal tipo di oggetto di un `DECIMAL` valore.    

- **variant_t (BYTE**`bSrc`**)** costruisce un `_variant_t` oggetto di tipo `VT_UI1` da un `BYTE` valore.    

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)