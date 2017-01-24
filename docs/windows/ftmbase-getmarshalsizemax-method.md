---
title: "Metodo FtmBase::GetMarshalSizeMax | Microsoft Docs"
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
  - "ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetMarshalSizeMax (metodo)"
ms.assetid: b416b1bf-c73e-45d5-abb8-04921c1a0c94
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo FtmBase::GetMarshalSizeMax
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il limite superiore del numero di byte necessari per eseguire il marshalling di un puntatore a interfaccia specificato all'oggetto specificato.  
  
## Sintassi  
  
```  
STDMETHODIMP GetMarshalSizeMax(  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags,  
   __out DWORD *pSize  
) override;  
```  
  
#### Parametri  
 `riid`  
 Riferimento all'identificatore di interfaccia del marshalling.  
  
 `pv`  
 Puntatore a interfaccia da disporre; può essere NULL.  
  
 `dwDestContext`  
 Contesto di destinazione in cui l'interfaccia specificata deve essere unmarshaled.  
  
 Specificare uno o più valori di enumerazione di MSHCTX.  
  
 Attualmente, la disposizione può verificarsi in un altra stanza del processo corrente \(MSHCTX\_INPROC\) o in un altro processo nello stesso computer come processo corrente \(MSHCTX\_LOCAL\).  
  
 `pvDestContext`  
 Riservato per utilizzi futuri; deve essere NULL.  
  
 `mshlflags`  
 La flag indica se i dati da disporre devono essere trasmessi al processo client — il caso tipico — oppure se devono essere scritti in una tabella globale, in cui possono essere recuperati da più client.  Specificare uno o più valori di enumerazione di MSHLFLAGS.  
  
 `pSize`  
 Quando questa operazione viene completata, un puntatore al limite superiore alla quantità di dati da immettere nel flusso di disposizione.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, E\_FAIL o E\_NOINTERFACE.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)