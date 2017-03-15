---
title: "_com_ptr_t::Detach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::Detach"
  - "_com_ptr_t.Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach (metodo)"
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _com_ptr_t::Detach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Estrae e restituisce un puntatore a interfaccia incapsulato.  
  
## Sintassi  
  
```  
  
Interface* Detach( ) throw( );  
  
```  
  
## Note  
 Estrae e restituisce un puntatore a interfaccia incapsulato, quindi cancella lo spazio di archiviazione del puntatore incapsulato impostandolo su **NULL**.  In questo modo il puntatore a interfaccia viene rimosso dall'incapsulamento.  È responsabilità dell'utente effettuare la chiamata a **Release** sul puntatore a interfaccia restituito.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)