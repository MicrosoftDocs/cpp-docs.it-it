---
title: "_com_ptr_t::Attach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::Attach"
  - "_com_ptr_t.Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach (metodo)"
  - "COM (interfacce), puntatore di associazione"
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _com_ptr_t::Attach
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.  
  
## Sintassi  
  
```  
  
      void Attach(  
   Interface* pInterface   
) throw( );  
void Attach(  
   Interface* pInterface,  
   bool fAddRef   
) throw( );  
```  
  
#### Parametri  
 `pInterface`  
 Puntatore a interfaccia raw.  
  
 `fAddRef`  
 Se è **true**, viene chiamato `AddRef`.  Se è **false**, l'oggetto `_com_ptr_t` accetta la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`.  
  
## Note  
  
-   **Attach\(**  `pInterface`  **\)** L'elemento `AddRef` non viene chiamato.  La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`.  **Release** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  
  
-   **Attach\(**  `pInterface` **,**  `fAddRef`  **\)** Se `fAddRef` è **true**, viene chiamato `AddRef` per incrementare il conteggio dei riferimenti del puntatore a interfaccia incapsulato.  Se `fAddRef` è **false**, questo oggetto `_com_ptr_t` accetta la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`.  **Release** viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)