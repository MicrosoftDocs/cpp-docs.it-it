---
title: "_com_error::HelpContext | Microsoft Docs"
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
  - "_com_error::HelpContext"
  - "HelpContext"
  - "_com_error.HelpContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HelpContext (metodo)"
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::HelpContext
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Chiama la funzione **IErrorInfo::GetHelpContext**.  
  
## Sintassi  
  
```  
  
DWORD HelpContext( ) const throw( );  
  
```  
  
## Valore restituito  
 Restituisce il risultato di **IErrorInfo::GetHelpContext** per l'oggetto **IErrorInfo** registrato nell'oggetto `_com_error`.  Se non viene registrato alcun oggetto **IErrorInfo**, restituisce zero.  
  
## Note  
 Qualsiasi errore durante la chiamata al metodo **IErrorInfo::GetHelpContext** viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)