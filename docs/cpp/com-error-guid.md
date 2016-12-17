---
title: "_com_error::GUID | Microsoft Docs"
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
  - "GUID"
  - "_com_error.GUID"
  - "_com_error::GUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GUID (metodo)"
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::GUID
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Chiama la funzione **IErrorInfo::GetGUID**.  
  
## Sintassi  
  
```  
  
GUID GUID( ) const throw( );  
  
```  
  
## Valore restituito  
 Restituisce il risultato di **IErrorInfo::GetGUID** per l'oggetto **IErrorInfo** registrato nell'oggetto `_com_error`.  Se nessun oggetto **IErrorInfo** viene registrato, restituisce `GUID_NULL`.  
  
## Note  
 Qualsiasi errore durante la chiamata al metodo **IErrorInfo::GetGUID** viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)