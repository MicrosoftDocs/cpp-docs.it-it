---
title: "_variant_t::operator = | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_variant_t.operator="
  - "_variant_t::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "= (operatore), oggetti specifici di Visual C++"
  - "operatore =, variant"
  - "operator=, variant"
ms.assetid: 77622723-6e49-4dec-9e0f-fa74028f1a3c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t::operator =
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
## Sintassi  
  
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
  
## Note  
 L'operatore consente di assegnare un nuovo valore all'oggetto `_variant_t`:  
  
-   **operator\=\(**  *varSrc*  **\)** Assegna un valore **VARIANT** esistente a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *pVarSrc*  **\)** Assegna un valore **VARIANT** esistente a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *var\_t\_Src*  **\)** Assegna un oggetto `_variant_t` esistente a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *sSrc*  **\)** Assegna uno **short** Integer a un oggetto `_variant_t`.  
  
-   **operator\=\(**  `lSrc`  **\)** Assegna un **long** Integer a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *fltSrc*  **\)** Assegna un valore numerico **float** a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *dblSrc*  **\)** Assegna un valore numerico **double** a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *cySrc*  **\)** Assegna un oggetto **CY** a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *bstrSrc*  **\)** Assegna un oggetto `BSTR` a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *wstrSrc*  **\)** Assegna una stringa Unicode a un oggetto `_variant_t`.  
  
-   **operator\=\(**  `strSrc`  **\)** Assegna una stringa multibyte a un oggetto `_variant_t`.  
  
-   **operator\=\(**  `bSrc` **\)** Assegna un valore `bool` a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *pDispSrc*  **\)** Assegna un oggetto **VT\_DISPATCH** a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *pIUnknownSrc*  **\)** Assegna un oggetto **VT\_UNKNOWN** a un oggetto `_variant_t`.  
  
-   **operator\=\(**  *decSrc*  **\)** Assegna un valore **DECIMAL** a un oggetto `_variant_t`.  
  
-   **operator\=\(**  `bSrc` **\)** Assegna un valore **BYTE** a un oggetto `_variant_t`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_variant\_t](../cpp/variant-t-class.md)