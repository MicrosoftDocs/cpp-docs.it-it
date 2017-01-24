---
title: "_com_error::ErrorInfo | Microsoft Docs"
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
  - "_com_error::ErrorInfo"
  - "ErrorInfo"
  - "_com_error.ErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ErrorInfo (metodo)"
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::ErrorInfo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Recupera l'oggetto **IErrorInfo** passato al costruttore.  
  
## Sintassi  
  
```  
  
IErrorInfo * ErrorInfo( ) const throw( );  
  
```  
  
## Valore restituito  
 Elemento **IErrorInfo** non elaborato passato al costruttore.  
  
## Note  
 Recupera l'elemento **IErrorInfo** incapsulato in un oggetto `_com_error` oppure **NULL** se non viene registrato alcun elemento **IErrorInfo**.  Al termine dell'utilizzo, il chiamante deve chiamare **Release** sull'oggetto restituito.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)