---
title: "_com_ptr_t::GetInterfacePtr | Microsoft Docs"
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
  - "_com_ptr_t::GetInterfacePtr"
  - "_com_ptr_t.GetInterfacePtr"
  - "GetInterfacePtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInterfacePtr (metodo)"
ms.assetid: 55e3e2c7-c939-48b5-a905-4b9cbefeea7e
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t::GetInterfacePtr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Restituisce un puntatore a interfaccia incapsulato.  
  
## Sintassi  
  
```  
  
      Interface* GetInterfacePtr( ) const throw( );   
Interface*& GetInterfacePtr() throw();  
```  
  
## Note  
 Restituisce il puntatore a un'interfaccia incapsulata, che può essere **NULL**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)