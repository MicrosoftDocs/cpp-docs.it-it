---
title: "_variant_t::_variant_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_variant_t::_variant_t"
  - "_variant_t._variant_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_variant_t (classe), costruttore"
  - "_variant_t (metodo)"
ms.assetid: a50e5b33-d4c6-4a26-8e7e-a0a25fd9895b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# _variant_t::_variant_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Costruisce un oggetto `_variant_t`.  
  
## Sintassi  
  
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
  
#### Parametri  
 *varSrc*  
 Oggetto **VARIANT** da copiare nel nuovo oggetto `_variant_t`.  
  
 *pVarSrc*  
 Puntatore a un oggetto **VARIANT** da copiare nel nuovo oggetto `_variant_t`.  
  
 *var\_t\_Src*  
 Oggetto `_variant_t` da copiare nel nuovo oggetto `_variant_t`.  
  
 `fCopy`  
 Se è false, l'oggetto **VARIANT** specificato viene associato al nuovo oggetto `_variant_t` senza che **VariantCopy** debba eseguire una nuova copia.  
  
 *ISrc, sSrc*  
 Integer da copiare nel nuovo oggetto `_variant_t`.  
  
 `vtSrc`  
 Il **VARTYPE** del nuovo oggetto `_variant_t`.  
  
 *fltSrc, dblSrc*  
 Un valore numerico da copiare nel nuovo oggetto `_variant_t`.  
  
 `cySrc`  
 Oggetto **CY** da copiare nel nuovo oggetto `_variant_t`.  
  
 `bstrSrc`  
 Oggetto `_bstr_t` da copiare nel nuovo oggetto `_variant_t`.  
  
 *strSrc, wstrSrc*  
 Una stringa da copiare nel nuovo oggetto `_variant_t`.  
  
 `bSrc`  
 Un valore `bool` da copiare nel nuovo oggetto `_variant_t`.  
  
 `pIUknownSrc`  
 Puntatore a interfaccia COM a un oggetto **VT\_UNKNOWN** da copiare nel nuovo oggetto `_variant_t`.  
  
 `pDispSrc`  
 Puntatore a interfaccia COM a un oggetto **VT\_DISPATCH** da copiare nel nuovo oggetto `_variant_t`.  
  
 `decSrc`  
 Un valore **DECIMAL** da copiare nel nuovo oggetto `_variant_t`.  
  
 `bSrc`  
 Un valore **BYTE** da copiare nel nuovo oggetto `_variant_t`.  
  
 `cSrc`  
 Un valore `char` da copiare nel nuovo oggetto `_variant_t`.  
  
 *usSrc*  
 Un valore **unsigned short** da copiare nel nuovo oggetto `_variant_t`.  
  
 *ulSrc*  
 Un valore `unsigned long` da copiare nel nuovo oggetto `_variant_t`.  
  
 `iSrc`  
 Un valore `int` da copiare nel nuovo oggetto `_variant_t`.  
  
 *uiSrc*  
 Un valore `unsigned int` da copiare nel nuovo oggetto `_variant_t`.  
  
 *i8Src*  
 Un valore \_\_**int64** da copiare nel nuovo oggetto `_variant_t`.  
  
 *ui8Src*  
 Un valore **unsigned \_\_int64** da copiare nel nuovo oggetto `_variant_t`.  
  
## Note  
  
-   **\_variant\_t\( \)** Crea un oggetto vuoto `_variant_t`, `VT_EMPTY`.  
  
-   **\_variant\_t\( VARIANT&**  *varSrc*  **\)** Costruisce un oggetto `_variant_t` da una copia dell'oggetto **VARIANT**.  Il tipo variant viene mantenuto.  
  
-   **\_variant\_t\( VARIANT\***  *pVarSrc*  **\)** Costruisce un oggetto `_variant_t` da una copia dell'oggetto **VARIANT**.  Il tipo variant viene mantenuto.  
  
-   **\_variant\_t\( \_variant\_t&**  *var\_t\_Src*  **\)** Costruisce un oggetto `_variant_t` da un altro oggetto `_variant_t`.  Il tipo variant viene mantenuto.  
  
-   **\_variant\_t\( VARIANT&**  *varSrc* **, bool**  `fCopy`  **\)** Costruisce un oggetto `_variant_t` da un oggetto **VARIANT** esistente.  Se `fCopy` è **false**, l'oggetto **VARIANT** viene associato al nuovo oggetto senza che ne venga eseguita una copia.  
  
-   **\_variant\_t\( short**  *sSrc* **, VARTYPE**  `vtSrc`  **\= VT\_I2 \)** Costruisce un oggetto `_variant_t` di tipo `VT_I2` o `VT_BOOL` da uno **short** Integer.  Qualsiasi altro **VARTYPE** ha come risultato un errore `E_INVALIDARG`.  
  
-   **\_variant\_t\( long**  `lSrc` **, VARTYPE**  `vtSrc`  **\= VT\_I4 \)** Costruisce un oggetto `_variant_t` di tipo `VT_I4`, `VT_BOOL` o `VT_ERROR` da un intero **long**.  Qualsiasi altro **VARTYPE** ha come risultato un errore `E_INVALIDARG`.  
  
-   **\_variant\_t\( float**  `fltSrc`  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_R4` da un valore numerico **float**.  
  
-   **\_variant\_t\( double**  `dblSrc` **, VARTYPE**  `vtSrc`  **\= VT\_R8 \)** Costruisce un oggetto `_variant_t` di tipo `VT_R8` o `VT_DATE` da un valore numerico **double**.  Qualsiasi altro **VARTYPE** ha come risultato un errore `E_INVALIDARG`.  
  
-   **\_variant\_t\( CY&**  `cySrc`  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_CY` da un oggetto **CY**.  
  
-   **\_variant\_t\( \_bstr\_t&**  `bstrSrc`  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_BSTR` da un oggetto `_bstr_t`.  Un nuovo `BSTR` viene allocato.  
  
-   **\_variant\_t\( wchar\_t \*** *wstrSrc*  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_BSTR` da una stringa Unicode.  Un nuovo `BSTR` viene allocato.  
  
-   **\_variant\_t\( char\***  `strSrc`  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_BSTR` da una stringa.  Un nuovo `BSTR` viene allocato.  
  
-   **\_variant\_t\( bool**  `bSrc`  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_BOOL` da un valore `bool`.  
  
-   **\_variant\_t\( IUnknown\***  `pIUknownSrc` **, bool**  `fAddRef`  **\= true \)** Costruisce un oggetto `_variant_t` di tipo **VT\_UNKNOWN** da un puntatore a interfaccia COM.  Se `fAddRef` è **true**, `AddRef` viene chiamato sul puntatore a interfaccia specificato per rispondere alla chiamata a **Release** che viene eseguita quando l'oggetto `_variant_t` viene distrutto.  È responsabilità dell'utente effettuare la chiamata a **Release** sul puntatore a interfaccia indicato.  Se `fAddRef` è **false**, questo costruttore acquisisce la proprietà del puntatore a interfaccia indicato; non chiamare **Release** sul puntatore a interfaccia indicato.  
  
-   **\_variant\_t\( IDispatch\***  `pDispSrc` **, bool**  `fAddRef`  **\= true \)** Costruisce un oggetto `_variant_t` di tipo **VT\_DISPATCH** da un puntatore a interfaccia COM.  Se `fAddRef` è **true**, `AddRef` viene chiamato sul puntatore a interfaccia specificato per rispondere alla chiamata a **Release** che viene eseguita quando l'oggetto `_variant_t` viene distrutto.  È responsabilità dell'utente effettuare la chiamata a **Release** sul puntatore a interfaccia indicato.  Se **fAddRef** è false, questo costruttore acquisisce la proprietà del puntatore a interfaccia indicato; non chiamare **Release** sul puntatore a interfaccia indicato.  
  
-   **\_variant\_t\( DECIMAL&**  `decSrc`  **\)** Costruisce un oggetto `_variant_t` di tipo **VT\_DECIMAL** da un valore **DECIMAL**.  
  
-   **\_variant\_t\( BYTE**  `bSrc`  **\)** Costruisce un oggetto `_variant_t` di tipo `VT_UI1` da un valore **BYTE**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)