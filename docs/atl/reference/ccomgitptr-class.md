---
title: "CComGITPtr Class | Microsoft Docs"
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
  - "ATL::CComGITPtr<T>"
  - "CComGITPtr"
  - "ATL.CComGITPtr"
  - "ATL.CComGITPtr<T>"
  - "ATL::CComGITPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComGITPtr class"
ms.assetid: af895acb-525a-4555-bb67-b241b7df515b
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComGITPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la gestione dei puntatori a interfaccia e della tabella globale \(GIT\) dell'interfaccia.  
  
## Sintassi  
  
```  
  
      template <  
   class T   
>  
class CComGITPtr  
```  
  
#### Parametri  
 `T`  
 Il tipo di puntatore a interfaccia da archiviare in GIT.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::CComGITPtr](../Topic/CComGITPtr::CComGITPtr.md)|Costruttore.|  
|[CComGITPtr::~CComGITPtr](../Topic/CComGITPtr::~CComGITPtr.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::Attach](../Topic/CComGITPtr::Attach.md)|Chiamare questo metodo per registrare un puntatore a interfaccia nella tabella globale \(GIT\) dell'interfaccia.|  
|[CComGITPtr::CopyTo](../Topic/CComGITPtr::CopyTo.md)|Chiamare questo metodo per copiare l'interfaccia la tabella globale \(GIT\) di interfaccia a puntatore passato.|  
|[CComGITPtr::Detach](../Topic/CComGITPtr::Detach.md)|Chiamare questo metodo per annullare l'associazione l'interfaccia dall'oggetto `CComGITPtr`.|  
|[CComGITPtr::GetCookie](../Topic/CComGITPtr::GetCookie.md)|Chiamare questo metodo per restituire i cookie dall'oggetto `CComGITPtr`.|  
|[CComGITPtr::Revoke](../Topic/CComGITPtr::Revoke.md)|Chiamare questo metodo per rimuovere l'interfaccia la tabella globale \(GIT\) dell'interfaccia.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::operator DWORD](../Topic/CComGITPtr::operator%20DWORD.md)|Restituisce i cookie dall'oggetto `CComGITPtr`.|  
|[CComGITPtr::operator \=](../Topic/CComGITPtr::operator%20=.md)|Operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComGITPtr::m\_dwCookie](../Topic/CComGITPtr::m_dwCookie.md)|Il cookie.|  
  
## Note  
 Gli oggetti che aggregano il gestore di marshalling con modello di threading Free e dover utilizzare i puntatori a interfaccia ottenuti da altri oggetti devono effettuare alcuni passaggi aggiuntivi per garantire che le interfacce siano correttamente eseguito il marshalling.  In genere questo comporta l'archiviazione dei puntatori a interfaccia in GIT e ottenere il puntatore da GIT ogni volta che viene utilizzato.  La classe `CComGITPtr` viene fornita per consentire l'utilizzo dei puntatori a interfaccia archiviati nel GIT.  
  
> [!NOTE]
>  La funzionalità generale della tabella dell'interfaccia è disponibile solo in Windows 95 con 1,1 DCOM e versioni successive, Windows 98, Windows NT 4.0 con Service Pack 3 e versioni successive e Windows 2000.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Gestore del marshalling con modello di threading Free](../../atl/atl-and-the-free-threaded-marshaler.md)   
 [Accessing Interfaces Across Apartments](http://msdn.microsoft.com/library/windows/desktop/ms682353)   
 [When to Use the Global Interface Table](http://msdn.microsoft.com/library/windows/desktop/ms693729)   
 [Class Overview](../../atl/atl-class-overview.md)