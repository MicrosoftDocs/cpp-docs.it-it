---
title: "_bstr_t::GetAddress | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::GetAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetAddress (metodo)"
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# _bstr_t::GetAddress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Libera la memoria per qualsiasi stringa esistente e restituisce l'indirizzo di una nuova stringa allocata.  
  
## Sintassi  
  
```  
  
BSTR* GetAddress( );  
  
```  
  
## Valore restituito  
 Puntatore all'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.  
  
## Note  
 `GetAddress` ha effetto su tutti gli oggetti `_bstr_t` che condividono un oggetto `BSTR`.  Più di un oggetto `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore copia e di `operator=`.  
  
## Esempio  
 Vedere [\_bstr\_t::Assign](../cpp/bstr-t-assign.md) per un esempio in cui si utilizza `GetAddress`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)