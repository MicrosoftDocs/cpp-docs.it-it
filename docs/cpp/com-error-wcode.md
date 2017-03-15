---
title: "_com_error::WCode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error.WCode"
  - "_com_error::WCode"
  - "WCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WCode (metodo)"
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# _com_error::WCode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Recupera il codice di errore a 16 bit il cui mapping si trova in `HRESULT` incapsulato.  
  
## Sintassi  
  
```  
  
WORD WCode ( ) const throw( );  
  
```  
  
## Valore restituito  
 Se `HRESULT` si trova nell'intervallo tra 0x80040200 e 0x8004FFFF, il metodo **WCode** restituisce `HRESULT` meno 0x80040200; in caso contrario, restituisce zero.  
  
## Note  
 Il metodo **WCode** viene utilizzato per annullare un mapping che si verifica nel codice di supporto COM.  Il wrapper per una proprietà o un metodo **dispinterface** chiama una routine di supporto che assembla gli argomenti e chiama **IDispatch::Invoke**.  Al termine, se un errore `HRESULT` `DISP_E_EXCEPTION` viene restituito, vengono recuperate le informazioni sugli errori dalla struttura **EXCEPINFO** passata a **IDispatch::Invoke**.  Il codice di errore può essere un valore a 16 bit memorizzato nel membro `wCode` della struttura **EXCEPINFO** o un valore a 32 bit completo nel membro **scode** della struttura **EXCEPINFO**.  Se viene restituito un `wCode` a 16 bit, è necessario eseguire prima il mapping di un errore `HRESULT` a 32 bit.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_com\_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)   
 [\_com\_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)   
 [Classe \_com\_error](../cpp/com-error-class.md)