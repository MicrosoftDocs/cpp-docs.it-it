---
title: "Metodo DeferrableEventArgs::GetDeferral | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ef6dc7c5-b0be-4b85-8507-d3fd97f2185d
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo DeferrableEventArgs::GetDeferral
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene un riferimento all'oggetto [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) che rappresenta un evento posticipato.  
  
## Sintassi  
  
```cpp  
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)  
```  
  
#### Parametri  
 `result`  
 Puntatore che farà riferimento all'oggetto [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) fino al completamento della chiamata.  
  
## Valore restituito  
 S\_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## Note  
 Per un esempio di codice, vedere [Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md).  
  
## Requisiti  
 **Intestazione:** event.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md)