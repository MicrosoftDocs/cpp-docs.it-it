---
title: _variant_t::_variant_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _variant_t::_variant_t
dev_langs:
- C++
helpviewer_keywords:
- _variant_t class [C++], constructor
- _variant_t method [C++]
ms.assetid: a50e5b33-d4c6-4a26-8e7e-a0a25fd9895b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cd85a54e9f73352894f6575051fe1ea8be0698fb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 *varSrc*  
 Oggetto **VARIANT** oggetto da copiare nel nuovo `_variant_t` oggetto.  
  
 *pVarSrc*  
 Puntatore a un **VARIANT** oggetto da copiare nel nuovo `_variant_t` oggetto.  
  
 *var_t_Src*  
 Oggetto `_variant_t` da copiare nel nuovo oggetto `_variant_t`.  
  
 `fCopy`  
 Se false, l'oggetto fornito **VARIANT** oggetto è associato al nuovo `_variant_t` oggetto senza creare una nuova copia da **VariantCopy**.  
  
 *ISrc, sSrc*  
 Integer da copiare nel nuovo oggetto `_variant_t`.  
  
 `vtSrc`  
 Il **VARTYPE** per il nuovo `_variant_t` oggetto.  
  
 *fltSrc, dblSrc*  
 Un valore numerico da copiare nel nuovo oggetto `_variant_t`.  
  
 `cySrc`  
 Oggetto **CY** oggetto da copiare nel nuovo `_variant_t` oggetto.  
  
 `bstrSrc`  
 Oggetto `_bstr_t` da copiare nel nuovo oggetto `_variant_t`.  
  
 *strSrc, wstrSrc*  
 Una stringa da copiare nel nuovo oggetto `_variant_t`.  
  
 `bSrc`  
 Un valore `bool` da copiare nel nuovo oggetto `_variant_t`.  
  
 `pIUknownSrc`  
 Puntatore a interfaccia COM per un **VT_UNKNOWN** oggetto da copiare nel nuovo `_variant_t` oggetto.  
  
 `pDispSrc`  
 Puntatore a interfaccia COM per un **VT_DISPATCH** oggetto da copiare nel nuovo `_variant_t` oggetto.  
  
 `decSrc`  
 Oggetto **decimale** valore da copiare nel nuovo `_variant_t` oggetto.  
  
 `bSrc`  
 Oggetto **BYTE** valore da copiare nel nuovo `_variant_t` oggetto.  
  
 `cSrc`  
 Un valore `char` da copiare nel nuovo oggetto `_variant_t`.  
  
 *usSrc*  
 Oggetto **unsigned short** valore da copiare nel nuovo `_variant_t` oggetto.  
  
 *ulSrc*  
 Un valore `unsigned long` da copiare nel nuovo oggetto `_variant_t`.  
  
 `iSrc`  
 Un valore `int` da copiare nel nuovo oggetto `_variant_t`.  
  
 *uiSrc*  
 Un valore `unsigned int` da copiare nel nuovo oggetto `_variant_t`.  
  
 *i8Src*  
 Un _**int64** valore da copiare nel nuovo `_variant_t` oggetto.  
  
 *ui8Src*  
 Un **unsigned int64** valore da copiare nel nuovo `_variant_t` oggetto.  
  
## <a name="remarks"></a>Note  
  
-   **variant_t ()** costruisce un oggetto vuoto `_variant_t` oggetto `VT_EMPTY`.  
  
-   **variant_t (VARIANT &***varSrc***)** costruisce una `_variant_t` oggetto da una copia del **VARIANT** oggetto. Il tipo variant viene mantenuto.  
  
-   **variant_t (VARIANT\****pVarSrc***)** costruisce una `_variant_t` oggetto da una copia del **VARIANT** oggetto. Il tipo variant viene mantenuto.  
  
-   **variant_t (classe variant_t &***var_t_Src***)** costruisce una `_variant_t` oggetto da un altro `_variant_t` oggetto. Il tipo variant viene mantenuto.  
  
-   **variant_t (VARIANT &***varSrc* **, bool**`fCopy`**)** costruisce una `_variant_t` oggetto da un oggetto esistente  **VARIANT** oggetto. Se `fCopy` è **false**, **VARIANT** oggetto è associato al nuovo oggetto senza creare una copia.  
  
-   **variant_t (breve***sSrc* **, VARTYPE**`vtSrc`**= VT_I2)** costruisce una `_variant_t` oggetto di tipo `VT_I2` o `VT_BOOL` da un **breve** valore intero. Qualsiasi altro **VARTYPE** comporta un `E_INVALIDARG` errore.  
  
-   **variant_t (long** `lSrc` **, VARTYPE**`vtSrc`**= VT_I4)** costruisce una `_variant_t` oggetto di tipo `VT_I4`, `VT_BOOL`, o `VT_ERROR` da un **lungo** valore intero. Qualsiasi altro **VARTYPE** comporta un `E_INVALIDARG` errore.  
  
-   **variant_t (float**`fltSrc`**)** costruisce una `_variant_t` oggetto di tipo `VT_R4` da un **float** valore numerico.  
  
-   **variant_t (double** `dblSrc` **, VARTYPE**`vtSrc`**= VT_R8)** costruisce una `_variant_t` oggetto di tipo `VT_R8` o `VT_DATE` da un **doppie** valore numerico. Qualsiasi altro **VARTYPE** comporta un `E_INVALIDARG` errore.  
  
-   **variant_t (CY &**`cySrc`**)** costruisce una `_variant_t` oggetto di tipo `VT_CY` da un **CY** oggetto.  
  
-   **variant_t ( bstr_t &**`bstrSrc`**)** costruisce una `_variant_t` oggetto di tipo `VT_BSTR` da un `_bstr_t` oggetto. Un nuovo `BSTR` viene allocato.  
  
-   **variant_t (wchar_t \***  *wstrSrc***)** costruisce una `_variant_t` oggetto di tipo `VT_BSTR` da una stringa Unicode. Un nuovo `BSTR` viene allocato.  
  
-   **variant_t (char\***`strSrc`**)** costruisce una `_variant_t` oggetto di tipo `VT_BSTR` da una stringa. Un nuovo `BSTR` viene allocato.  
  
-   **variant_t (bool**`bSrc`**)** costruisce una `_variant_t` oggetto di tipo `VT_BOOL` da un `bool` valore.  
  
-   **variant_t (IUnknown\***  `pIUknownSrc` **, bool**`fAddRef`**= true)** costruisce una `_variant_t` oggetto di tipo **VT_UNKNOWN**  da un puntatore a interfaccia COM. Se `fAddRef` è **true**, quindi `AddRef` viene chiamato sul puntatore a interfaccia specificato per rispondere alla chiamata a **versione** che viene eseguita quando il `_variant_t` oggetto viene eliminato definitivamente. È responsabilità dell'utente chiamare **versione** sul puntatore a interfaccia specificato. Se `fAddRef` è **false**, questo costruttore acquisisce la proprietà del puntatore a interfaccia indicato; non chiamare **versione** sul puntatore a interfaccia specificato.  
  
-   **variant_t (IDispatch\***  `pDispSrc` **, bool**`fAddRef`**= true)** costruisce una `_variant_t` oggetto di tipo **VT_DISPATCH**  da un puntatore a interfaccia COM. Se `fAddRef` è **true**, quindi `AddRef` viene chiamato sul puntatore a interfaccia specificato per rispondere alla chiamata a **versione** che viene eseguita quando il `_variant_t` oggetto viene eliminato definitivamente. È responsabilità dell'utente chiamare **versione** sul puntatore a interfaccia specificato. Se **fAddRef** è false, questo costruttore acquisisce la proprietà del puntatore a interfaccia indicato; non chiamare **versione** sul puntatore a interfaccia specificato.  
  
-   **variant_t (decimale &**`decSrc`**)** costruisce una `_variant_t` oggetto di tipo **VT_DECIMAL** da un **decimale** valore.  
  
-   **variant_t (BYTE**`bSrc`**)** costruisce una `_variant_t` oggetto di tipo `VT_UI1` da un **BYTE** valore.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)