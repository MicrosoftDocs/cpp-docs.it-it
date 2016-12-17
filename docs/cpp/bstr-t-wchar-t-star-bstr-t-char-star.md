---
title: "_bstr_t::wchar_t*, _bstr_t::char* | Microsoft Docs"
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
  - "_bstr_t::wchar_t*"
  - "_bstr_t::char*"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatore char*"
  - "operatore wchar_t*"
ms.assetid: acd9f4a7-b427-42c2-aaae-acae21cab317
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::wchar_t*, _bstr_t::char*
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Vengono restituiti i caratteri BSTR come matrice di caratteri "narrow" o "wide".  
  
## Sintassi  
  
```  
  
      operator const wchar_t*( ) const throw( );   
operator wchar_t*( ) const throw( );   
operator const char*( ) const;   
operator char*( ) const;  
```  
  
## Note  
 Questi operatori possono essere utilizzati per estrarre i dati del carattere che è incapsulato dall'oggetto `BSTR`.  Assegnare un nuovo al puntatore restituito non modifica i dati BSTR di origine.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)