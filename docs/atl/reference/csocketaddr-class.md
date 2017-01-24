---
title: "CSocketAddr Class | Microsoft Docs"
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
  - "CSocketAddr"
  - "ATL.CSocketAddr"
  - "ATL::CSocketAddr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSocketAddr class"
ms.assetid: 2fb2d8a7-899e-4a36-a342-cc9f4fcdd68c
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSocketAddr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per convertire i nomi host agli indirizzi host, sia per IPv4 di supporto che i formati di IPV6.  
  
## Sintassi  
  
```  
  
class CSocketAddr  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocketAddr::CSocketAddr](../Topic/CSocketAddr::CSocketAddr.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocketAddr::FindAddr](../Topic/CSocketAddr::FindAddr.md)|Chiamare questo metodo per convertire il nome host forniti al computer host.|  
|[CSocketAddr::FindINET4Addr](../Topic/CSocketAddr::FindINET4Addr.md)|Chiamare questo metodo per convertire il nome host IPv4 al computer host.|  
|[CSocketAddr::FindINET6Addr](../Topic/CSocketAddr::FindINET6Addr.md)|Chiamare questo metodo per convertire il nome host IPv6 al computer host.|  
|[CSocketAddr::GetAddrInfo](../Topic/CSocketAddr::GetAddrInfo.md)|Chiamare questo metodo per restituire un puntatore a un elemento specifico nell'elenco **addrinfo**.|  
|[CSocketAddr::GetAddrInfoList](../Topic/CSocketAddr::GetAddrInfoList.md)|Chiamare questo metodo per restituire un puntatore all'elenco **addrinfo**.|  
  
## Note  
 Questa classe fornisce una versione IP metodo indipendente da abbiano gli indirizzi di rete da utilizzare con i wrapper di funzioni API e di socket sockets di Windows in librerie.  
  
 I membri di questa classe utilizzati per trovare gli indirizzi di rete utilizzano la funzione [getaddrinfo](http://msdn.microsoft.com/library/windows/desktop/ms738520)API Win32.  
  
 Questa classe supporta entrambi gli indirizzi di rete di IPv4 andIPv6.  
  
## Requisiti  
 **Header:** atlsocket.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)