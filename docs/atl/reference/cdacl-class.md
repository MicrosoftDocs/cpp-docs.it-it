---
title: "CDacl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CDacl"
  - "CDacl"
  - "ATL.CDacl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDacl class"
ms.assetid: 2dc76616-6362-4967-b6cf-e2d39ca37ddd
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CDacl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per una struttura di DACL \(elenco di controllo di accesso discrezionale\).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CDacl : public CAcl  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDacl::CDacl](../Topic/CDacl::CDacl.md)|Costruttore.|  
|[CDacl::~CDacl](../Topic/CDacl::~CDacl.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDacl::AddAllowedAce](../Topic/CDacl::AddAllowedAce.md)|Aggiunge un motore di database di Access consentite \(voce di controllo di accesso\) all'oggetto `CDacl`.|  
|[CDacl::AddDeniedAce](../Topic/CDacl::AddDeniedAce.md)|Aggiunge un motore di database di Access negato all'oggetto `CDacl`.|  
|[CDacl::GetAceCount](../Topic/CDacl::GetAceCount.md)|Restituisce il numero di ACE \(voci di controllo di accesso\) nell'oggetto `CDacl`.|  
|[CDacl::RemoveAce](../Topic/CDacl::RemoveAce.md)|Rimuove un motore di database di Access specifico \(voce di controllo di accesso\) dall'oggetto `CDacl`.|  
|[CDacl::RemoveAllAces](../Topic/CDacl::RemoveAllAces.md)|Rimuove tutti ACE contenuti nell'oggetto `CDacl`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDacl::operator \=](../Topic/CDacl::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 Il descrittore di sicurezza di un oggetto può contenere un DACL.  Un DACL contiene zero o più voci \(ACE di controllo di accesso\) che identificano gli utenti e i gruppi che possono accedere all'oggetto.  Se un DACL è vuoto \(ovvero contiene ACE zero, nessun accesso in modo esplicito viene concessa, pertanto accesso in modo implicito negato.  Tuttavia, se il descrittore di sicurezza di un oggetto non ha un DACL, l'oggetto viene sprotetto e ognuno ha accesso completo.  
  
 Per recuperare il DACL di un oggetto, è necessario essere il proprietario dell'oggetto o avere accesso di READ\_CONTROL all'oggetto.  Per modificare il DACL di un oggetto, è necessario disporre di accesso di WRITE\_DAC all'oggetto.  
  
 Utilizzare i metodi della classe forniti per creare, aggiungere, rimuovere e eliminare le ACE dall'oggetto `CDacl`.  Vedere anche [AtlGetDacl](../Topic/AtlGetDacl.md) e [AtlSetDacl](../Topic/AtlSetDacl.md).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CAcl](../../atl/reference/cacl-class.md)  
  
 `CDacl`  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio di sicurezza](../../top/visual-cpp-samples.md)   
 [CAcl Class](../../atl/reference/cacl-class.md)   
 [ACLs](http://msdn.microsoft.com/library/windows/desktop/aa374872)   
 [ACEs](http://msdn.microsoft.com/library/windows/desktop/aa374868)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)