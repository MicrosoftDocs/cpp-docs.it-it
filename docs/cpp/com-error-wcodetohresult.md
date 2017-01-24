---
title: "_com_error::WCodeToHRESULT | Microsoft Docs"
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
  - "_com_error::WCodeToHRESULT"
  - "_com_error.WCodeToHRESULT"
  - "WCodeToHRESULT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WCodeToHRESULT (metodo)"
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::WCodeToHRESULT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Esegue il mapping di `wCode` a 16 bit a `HRESULT` a 32 bit.  
  
## Sintassi  
  
```  
  
      static HRESULT WCodeToHRESULT(  
   WORD wCode   
) throw( );  
```  
  
#### Parametri  
 `wCode`  
 `wCode` a 16 bit di cui eseguire il mapping a `HRESULT` a 32 bit.  
  
## Valore restituito  
 `HRESULT` a 32 bit di cui è stato eseguito il mapping da `wCode` a 16 bit.  
  
## Note  
 Vedere la funzione membro [WCode](../cpp/com-error-wcode.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_com\_error::WCode](../cpp/com-error-wcode.md)   
 [\_com\_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [Classe \_com\_error](../cpp/com-error-class.md)