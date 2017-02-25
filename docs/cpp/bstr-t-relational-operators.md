---
title: "Operatori relazionali _bstr_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::operator>"
  - "_bstr_t::operator=="
  - "_bstr_t::operator>="
  - "_bstr_t::operator!="
  - "_bstr_t::operator<"
  - "_bstr_t::operator<="
  - "_bstr_t::operator!"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!= (operatore)"
  - "< (operatore), confronto tra oggetti specifici"
  - "<= (operatore), oggetti specifici"
  - "== (operatore), oggetti specifici di Visual C++"
  - "> (operatore), confronto tra oggetti specifici"
  - ">= (operatore), confronto tra oggetti specifici"
  - "operatore !=, operatori relazionali"
  - "operatore <, bstr"
  - "operatore <=, bstr"
  - "operatore ==, bstr"
  - "operatore >, bstr"
  - "operatore >=, bstr"
  - "operator!=, operatori relazionali"
  - "operator<, bstr"
  - "operator<=, bstr"
  - "operator==, bstr"
  - "operator>=, bstr"
  - "operatori relazionali, _bstr_t (classe)"
ms.assetid: e153da72-37c3-4d8a-b8eb-730d65da64dd
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Operatori relazionali _bstr_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Confronta due oggetti `_bstr_t`.  
  
## Sintassi  
  
```  
  
      bool operator!( ) const throw( );   
bool operator==(  
   const _bstr_t& str   
) const throw( );  
bool operator!=(  
   const _bstr_t& str   
) const throw( );  
bool operator<(  
   const _bstr_t& str   
) const throw( );  
bool operator>(  
   const _bstr_t& str   
) const throw( );  
bool operator<=(  
   const _bstr_t& str   
) const throw( );  
bool operator>=(  
   const _bstr_t& str   
) const throw( );  
```  
  
## Note  
 Questi operatori confrontano due oggetti `_bstr_t` lessicograficamente.  Gli operatori restituiscono **true** se i confronti reggono, altrimenti restituiscono **false**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)