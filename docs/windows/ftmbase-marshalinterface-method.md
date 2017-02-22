---
title: "Metodo FtmBase::MarshalInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase::MarshalInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MarshalInterface (metodo)"
ms.assetid: fc8421b4-06e4-4925-b908-c285fe4790d2
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo FtmBase::MarshalInterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Scrive in un flusso i dati necessari per inizializzare un oggetto proxy in alcuni processi client.  
  
## Sintassi  
  
```  
STDMETHODIMP MarshalInterface(  
   __in IStream *pStm,  
   __in REFIID riid,  
   __in_opt void *pv,  
   __in DWORD dwDestContext,  
   __reserved void *pvDestContext,  
   __in DWORD mshlflags  
) override;  
```  
  
#### Parametri  
 `pStm`  
 Puntatore al flusso da utilizzare durante la disposizione.  
  
 `riid`  
 Riferimento all'identificatore di interfaccia del marshalling.  Questa interfaccia deve essere derivata dall'interfaccia IUnknown.  
  
 `pv`  
 Puntatore al puntatore dell'interfaccia da marshalling, può essere NULL se il chiamante non dispone di un puntatore all'interfaccia desiderata.  
  
 `dwDestContext`  
 Contesto di destinazione in cui l'interfaccia specificata deve essere unmarshaled.  
  
 Specificare uno o più valori di enumerazione di MSHCTX.  
  
 L'Unmarshaling può verificarsi in un altro apartment del processo corrente \(MSHCTX\_INPROC\) o in un altro processo nello stesso computer come processo corrente \(MSHCTX\_LOCAL\).  
  
 `pvDestContext`  
 Riservato per utilizzi futuri; deve essere zero.  
  
 `mshlflags`  
 Specifica se i dati da disporre devono essere trasmessi al processo client — il caso tipico — oppure se devono essere scritti in una tabella globale, in cui possono essere recuperati da più client.  
  
## Valore restituito  
 S\_OK  
 Il puntatore a interfaccia è stato schierato correttamente.  
  
 E\_NOINTERFACE  
 Il tipo di interfaccia specificato non è supportato.  
  
 STG\_E\_MEDIUMFULL  
 Il flusso è pieno.  
  
 E\_FAIL  
 Operazione non riuscita.  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe FtmBase](../windows/ftmbase-class.md)