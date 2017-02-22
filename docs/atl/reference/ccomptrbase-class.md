---
title: "CComPtrBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComPtrBase"
  - "ATL::CComPtrBase<T>"
  - "ATL.CComPtrBase<T>"
  - "ATL::CComPtrBase"
  - "CComPtrBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComPtrBase class"
ms.assetid: 6dbe9543-dee8-4a97-b02f-dd3a25f4a1a0
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComPtrBase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce una base per le classi intelligenti del puntatore utilizzando le routine di memoria basata su COM.  
  
## Sintassi  
  
```  
  
      template <  
   class T   
> class CComPtrBase  
```  
  
#### Parametri  
 `T`  
 Il tipo di oggetto da fare riferimento il puntatore intelligente.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::~CComPtrBase](../Topic/CComPtrBase::~CComPtrBase.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::Advise](../Topic/CComPtrBase::Advise.md)|Chiamare questo metodo per creare una connessione tra il punto di connessione di `CComPtrBase` e il sink di un client.|  
|[CComPtrBase::Attach](../Topic/CComPtrBase::Attach.md)|Chiamare questo metodo per eseguire la proprietà di un puntatore esistente.|  
|[CComPtrBase::CoCreateInstance](../Topic/CComPtrBase::CoCreateInstance.md)|Chiamare questo metodo per creare un oggetto classe associata a un ID di programma o di ID della classe|  
|[CComPtrBase::CopyTo](../Topic/CComPtrBase::CopyTo.md)|Chiamare questo metodo per copiare il puntatore `CComPtrBase` a un'altra variabile puntatore.|  
|[CComPtrBase::Detach](../Topic/CComPtrBase::Detach.md)|Chiamare questo metodo per liberare la proprietà di un puntatore.|  
|[CComPtrBase::IsEqualObject](../Topic/CComPtrBase::IsEqualObject.md)|Chiamare questo metodo per controllare se i punti specifici **IUnknown** allo stesso oggetto associato a `CComPtrBase` oggetto.|  
|[CComPtrBase::QueryInterface](../Topic/CComPtrBase::QueryInterface.md)|Chiamare questo metodo per restituire un puntatore a un'interfaccia specificata.|  
|[CComPtrBase::Release](../Topic/CComPtrBase::Release.md)|Chiamare questo metodo per rilasciare l'interfaccia.|  
|[CComPtrBase::SetSite](../Topic/CComPtrBase::SetSite.md)|Chiamare questo metodo per impostare il sito dell'oggetto `CComPtrBase` a **IUnknown** dell'oggetto padre.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::operator T\*](../Topic/CComPtrBase::operator%20T*.md)|l'operatore di cast.|  
|[CComPtrBase::operator \!](../Topic/CComPtrBase::operator%20!.md)|Operatore NOT.|  
|[CComPtrBase::operator &](../Topic/CComPtrBase::operator%20&.md)|Operatore &.|  
|[CComPtrBase::operator \*](../Topic/CComPtrBase::operator%20*.md)|L'operatore \*.|  
|[CComPtrBase::operator \<](../Topic/CComPtrBase::operator%20%3C.md)|L'operatore minore di.|  
|[CComPtrBase::operator \=\=](../Topic/CComPtrBase::operator%20==.md)|l'operatore di uguaglianza.|  
|[CComPtrBase::operator \-\>](../Topic/CComPtrBase::operator%20-%3E.md)|L'operatore di puntatore a membro.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPtrBase::p](../Topic/CComPtrBase::p.md)|La variabile membro dati puntatore.|  
  
## Note  
 Questa classe fornisce la base per altri puntatori intelligenti che utilizzano le routine di gestione della memoria COM, come [CComQIPtr](../../atl/reference/ccomqiptr-class.md) e [CComPtr](../../atl/reference/ccomptr-class.md).  Le classi derivate aggiunti i relativi costruttori e operatori, ma si basano sui metodi forniti da `CComPtrBase`.  
  
## Requisiti  
 **Header:** atlcomcli.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)