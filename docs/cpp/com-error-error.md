---
title: "_com_error::Error | Microsoft Docs"
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
  - "_com_error.Error"
  - "_com_error::Error"
  - "Error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Error (metodo)"
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::Error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Recupera l'elemento `HRESULT` passato al costruttore.  
  
## Sintassi  
  
```  
  
HRESULT Error( ) const throw( );  
  
```  
  
## Valore restituito  
 L'elemento `HRESULT` non elaborato passato nel costruttore.  
  
## Note  
 Recupera l'elemento incapsulato `HRESULT` in un oggetto `_com_error`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)