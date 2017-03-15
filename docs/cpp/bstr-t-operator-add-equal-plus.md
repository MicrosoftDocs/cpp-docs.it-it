---
title: "_bstr_t::operator +=, + | Microsoft Docs"
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
  - "_bstr_t::operator+"
  - "_bstr_t::operator+="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "+ (operatore), _bstr_t (oggetti)"
  - "+= (operatore), aggiunta di stringhe"
ms.assetid: d28316ce-c2c8-4a38-bdb3-44fa4e582c44
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::operator +=, +
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Aggiunge i caratteri al termine dell'oggetto `_bstr_t` o concatena due stringhe.  
  
## Sintassi  
  
```  
  
      _bstr_t& operator+=(  
   const _bstr_t& s1   
);  
_bstr_t operator+(  
   const _bstr_t& s1   
);  
friend _bstr_t operator+(  
   const char* s2,  
   const _bstr_t& s1   
);  
friend _bstr_t operator+(  
   const wchar_t* s3,  
   const _bstr_t& s1   
);  
```  
  
#### Parametri  
 *s1*  
 Oggetto `_bstr_t`.  
  
 *s2*  
 Stringa multibyte.  
  
 `s3`  
 Stringa Unicode.  
  
## Note  
 Questi operatori eseguono la concatenazione di stringhe:  
  
-   **operator\+\=\(**  *s1*  **\)** Aggiunge i caratteri in `BSTR` incapsulato di *s1* alla fine di `BSTR` incapsulato di questo oggetto.  
  
-   **operator\+\(**  *s1*  **\)** Restituisce `_bstr_t` nuovo che è costituito dalla concatenazione di `BSTR` di questo oggetto con quello di *s1*.  
  
-   **operator\+\(**  *s2*  **&#124;**  *s1*  **\)** Restituisce `_bstr_t` nuovo che è costituito dalla concatenazione di una stringa multibyte *s2*, convertita in formato Unicode, con `BSTR` incapsulato in *s1*.  
  
-   **operator\+\(**  `s3` **,**  *s1*  **\)** Restituisce `_bstr_t` nuovo che è costituito dalla concatenazione di una stringa Unicode `s3` con `BSTR` incapsulato in *s1*.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)