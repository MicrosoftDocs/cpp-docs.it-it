---
title: "Metodo FtmBase::UnmarshalInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase::UnmarshalInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UnmarshalInterface (metodo)"
ms.assetid: 6850a621-e9a6-4001-bc1e-bd5d1b121adc
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo FtmBase::UnmarshalInterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inizializza un proxy appena creato e restituisce un puntatore all'interfaccia di quel proxy.  
  
## Sintassi  
  
```  
STDMETHODIMP UnmarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __deref_out void **ppv  
) override;  
```  
  
#### Parametri  
 `pStm`  
 Puntatore al flusso dal quale il puntatore a interfaccia deve essere unmarshaled.  
  
 `riid`  
 Riferimento all'identificatore di interfaccia per essere unmarshaled.  
  
 `ppv`  
 Quando questa operazione completa, l'indirizzo di una variabile puntatore che riceve un puntatore a interfaccia richiesta in `riid`.  Se l'operazione riesce, \*`ppv` contiene un puntatore a interfaccia richiesta dell'interfaccia per essere unmarshaled.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, E\_FAIL o E\_NOINTERFACE.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)