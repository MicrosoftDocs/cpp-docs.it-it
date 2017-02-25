---
title: "Classe FtmBase | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ftm/Microsoft::WRL::FtmBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FtmBase (classe)"
ms.assetid: 275f3b71-2975-4f92-89e7-d351e96496df
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Classe FtmBase
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un oggetto di gestore di marshalling threading free.  
  
## Sintassi  
  
```  
  
class FtmBase : public Microsoft::WRL::Implements<  
   Microsoft::WRL::RuntimeClassFlags< WinRtClassicComMix >,   
   Microsoft::WRL::CloakedIid< IMarshal > >;  
```  
  
## Note  
 Per ulteriori informazioni, vedere l'argomento "IMarshal" sezione "Interfacce COM" sotto\-argomento di "Riferimento COM" nella Libreria MSDN.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore FtmBase::FtmBase](../windows/ftmbase-ftmbase-constructor.md)|Inizializza una nuova istanza della classe FtmBase.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo FtmBase::CreateGlobalInterfaceTable](../windows/ftmbase-createglobalinterfacetable-method.md)|Crea una tabella globale dell'interfaccia \(GIT\).|  
|[Metodo FtmBase::DisconnectObject](../windows/ftmbase-disconnectobject-method.md)|Rilascia forzatamente tutte le connessioni esterne verso un oggetto.  Il server dell'oggetto chiamata l'implementazione dell'oggetto di questo metodo prima dello spegnimento.|  
|[Metodo FtmBase::GetMarshalSizeMax](../windows/ftmbase-getmarshalsizemax-method.md)|Ottiene il limite superiore del numero di byte necessari per eseguire il marshalling di un puntatore a interfaccia specificato all'oggetto specificato.|  
|[Metodo FtmBase::GetUnmarshalClass](../windows/ftmbase-getunmarshalclass-method.md)|Ottiene il CLSID utilizzato da COM per individuare la DLL che contiene il codice per il proxy corrispondente.  COM carica questa DLL per creare un'istanza non inizializzata del proxy.|  
|[Metodo FtmBase::MarshalInterface](../windows/ftmbase-marshalinterface-method.md)|Scrive in un flusso i dati necessari per inizializzare un oggetto proxy in alcuni processi client.|  
|[Metodo FtmBase::ReleaseMarshalData](../windows/ftmbase-releasemarshaldata-method.md)|Elimina un pacchetto di dati su cui è stato eseguito il marshalling.|  
|[Metodo FtmBase::UnmarshalInterface](../windows/ftmbase-unmarshalinterface-method.md)|Inizializza un proxy appena creato e restituisce un puntatore all'interfaccia di quel proxy.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati FtmBase::marshaller\_](../windows/ftmbase-marshaller-data-member.md)|Mantiene un riferimento al gestore threading free di marshalling.|  
  
## Gerarchia di ereditarietà  
 `FtmBase`  
  
## Requisiti  
 **Header:** ftm.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)