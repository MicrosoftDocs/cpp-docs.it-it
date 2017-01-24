---
title: "Metodo FtmBase::ReleaseMarshalData | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseMarshalData (metodo)"
ms.assetid: a94f9940-183a-4fde-8504-d223f346a0a9
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo FtmBase::ReleaseMarshalData
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elimina un pacchetto di dati su cui è stato eseguito il marshalling.  
  
## Sintassi  
  
```  
STDMETHODIMP ReleaseMarshalData(  
   __in IStream *pStm  
) override;  
```  
  
#### Parametri  
 `pStm`  
 Puntatore a un flusso che contiene il pacchetto di dati da eliminato.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)