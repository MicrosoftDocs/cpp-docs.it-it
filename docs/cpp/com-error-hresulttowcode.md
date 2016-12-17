---
title: "_com_error::HRESULTToWCode | Microsoft Docs"
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
  - "HRESULTToWCode"
  - "_com_error.HRESULTToWCode"
  - "_com_error::HRESULTToWCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HRESULTToWCode (metodo)"
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::HRESULTToWCode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Esegue il mapping di `HRESULT` a 32 bit a `wCode` a 16 bit.  
  
## Sintassi  
  
```  
  
      static WORD HRESULTToWCode(  
   HRESULT hr   
) throw( );  
```  
  
#### Parametri  
 `hr`  
 `HRESULT` a 32 bit di cui eseguire il mapping a `wCode` a 16 bit.  
  
## Valore restituito  
 `wCode` a 16 bit di cui è stato eseguito il mapping da `HRESULT` a 32 bit.  
  
## Note  
 Vedere [\_com\_error::WCode](../cpp/com-error-wcode.md) per ulteriori informazioni.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_com\_error::WCode](../cpp/com-error-wcode.md)   
 [\_com\_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [Classe \_com\_error](../cpp/com-error-class.md)