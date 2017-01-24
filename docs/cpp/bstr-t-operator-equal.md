---
title: "_bstr_t::operator = | Microsoft Docs"
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
  - "_bstr_t::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "= (operatore), oggetti specifici di Visual C++"
  - "operatore =, bstr"
  - "operator=, bstr"
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::operator =
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Assegna un nuovo valore a un oggetto `_bstr_t` esistente.  
  
## Sintassi  
  
```  
  
      _bstr_t& operator=(  
   const _bstr_t& s1   
) throw ( );  
_bstr_t& operator=(  
   const char* s2   
);  
_bstr_t& operator=(  
   const wchar_t* s3   
);  
_bstr_t& operator=(  
   const _variant_t& var   
);  
```  
  
#### Parametri  
 *s1*  
 Oggetto `_bstr_t` da assegnare a un oggetto esistente `_bstr_t`.  
  
 *s2*  
 Stringa multibyte da assegnare a un oggetto esistente `_bstr_t`.  
  
 `s3`  
 Stringa unicode da assegnare a un oggetto esistente `_bstr_t`.  
  
 `var`  
 Oggetto `_variant_t` da assegnare a un oggetto esistente `_bstr_t`.  
  
 **Fine sezione specifica Microsoft**  
  
## Esempio  
 Per un esempio dell'utilizzo di `operator=`, vedere [\_bstr\_t::Assign](../cpp/bstr-t-assign.md).  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)