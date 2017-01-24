---
title: "_com_ptr_t::Release | Microsoft Docs"
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
  - "_com_ptr_t.Release"
  - "_com_ptr_t::Release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Release (metodo)"
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t::Release
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Chiama la funzione membro **Release** di **IUnknown** sul puntatore a interfaccia incapsulato.  
  
## Sintassi  
  
```  
  
void Release( );  
  
```  
  
## Note  
 Chiama `IUnknown::Release` sul puntatore a interfaccia incapsulato, generando un errore `E_POINTER` se questo puntatore a interfaccia è **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)