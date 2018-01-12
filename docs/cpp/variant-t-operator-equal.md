---
title: _variant_t::operator = | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: _variant_t::operator=
dev_langs: C++
helpviewer_keywords:
- operator= [C++], variant
- operator = [C++], variant
- = operator [C++], with specific Visual C++ objects
ms.assetid: 77622723-6e49-4dec-9e0f-fa74028f1a3c
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 88998f18c750e064ee8eae254ca7ee4487be7176
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
-   **operatore = (***varSrc***)** assegna un oggetto esistente **VARIANT** per un `_variant_t` oggetto.  
  
-   **operatore = (***pVarSrc***)** assegna un oggetto esistente **VARIANT** per un `_variant_t` oggetto.  
  
-   **operatore = (***var_t_Src***)** assegna un oggetto esistente `_variant_t` l'oggetto in un `_variant_t` oggetto.  
  
-   **operatore = (***sSrc***)** assegna un **breve** valore intero da un `_variant_t` oggetto.  
  
-   **operatore = (**`lSrc`**)** assegna un **lungo** valore intero da un `_variant_t` oggetto.  
  
-   **operatore = (***fltSrc***)** assegna un **float** valore numerico da un `_variant_t` oggetto.  
  
-   **operatore = (***dblSrc***)** assegna un **doppie** valore numerico da un `_variant_t` oggetto.  
  
-   **operatore = (***cySrc***)** assegna un **CY** l'oggetto in un `_variant_t` oggetto.  
  
-   **operatore = (***bstrSrc***)** assegna un `BSTR` l'oggetto in un `_variant_t` oggetto.  
  
-   **operatore = (***wstrSrc***)** assegna una stringa Unicode a un `_variant_t` oggetto.  
  
-   **operatore = (**`strSrc`**)** assegna una stringa multibyte da una `_variant_t` oggetto.  
  
-   **operatore = (** `bSrc` **)** assegna un `bool` valore un `_variant_t` oggetto.  
  
-   **operatore = (***pDispSrc***)** assegna un **VT_DISPATCH** l'oggetto in un `_variant_t` oggetto.  
  
-   **operatore = (***pIUnknownSrc***)** assegna un **VT_UNKNOWN** l'oggetto in un `_variant_t` oggetto.  
  
-   **operatore = (***decSrc***)** assegna un **decimale** valore un `_variant_t` oggetto.  
  
-   **operatore = (** `bSrc` **)** assegna un **BYTE** valore un `_variant_t` oggetto.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)