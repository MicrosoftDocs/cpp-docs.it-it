---
title: "_bstr_t::GetBSTR | Microsoft Docs"
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
  - "GetBSTR"
  - "_bstr_t::GetBSTR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetBSTR (metodo)"
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::GetBSTR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.  
  
## Sintassi  
  
```  
  
BSTR& GetBSTR( );  
  
```  
  
## Valore restituito  
 Inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.  
  
## Note  
 `GetBSTR` ha effetto su tutti gli oggetti `_bstr_t` che condividono un oggetto `BSTR`.  Più di un oggetto `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore copia e di `operator=`.  
  
## Esempio  
 Vedere [\_bstr\_t::Assign](../cpp/bstr-t-assign.md) per un esempio in cui si utilizza `GetBSTR`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)