---
title: "Metodo FtmBase::DisconnectObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase::DisconnectObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DisconnectObject (metodo)"
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo FtmBase::DisconnectObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rilascia forzatamente tutte le connessioni esterne verso un oggetto.  Il server dell'oggetto chiamata l'implementazione dell'oggetto di questo metodo prima dello spegnimento.  
  
## Sintassi  
  
```  
STDMETHODIMP DisconnectObject(  
   __in DWORD dwReserved  
) override;  
```  
  
#### Parametri  
 `dwReserved`  
 Riservato per utilizzi futuri; deve essere zero.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)