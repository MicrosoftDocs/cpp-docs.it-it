---
title: "_bstr_t::Detach | Microsoft Docs"
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
  - "_bstr_t::Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach (metodo)"
ms.assetid: cc8284bd-f68b-4fff-b2e6-ce8354dabf8b
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.  
  
## Sintassi  
  
```  
  
BSTR Detach( ) throw;  
  
```  
  
## Valore restituito  
 L'elemento `BSTR` di cui è stato eseguito il wrapping da `_bstr_t`.  
  
## Esempio  
 Vedere [\_bstr\_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo di **Detach**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)