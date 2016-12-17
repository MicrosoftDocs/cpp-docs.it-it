---
title: "CSacl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSacl"
  - "ATL::CSacl"
  - "CSacl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSacl class"
ms.assetid: 8624889b-aebc-4183-9d29-a20f07837f05
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSacl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per una struttura di SACL \(elenco di controllo di accesso di sistema\).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CSacl : public CAcl  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::CSacl](../Topic/CSacl::CSacl.md)|Costruttore.|  
|[CSacl::~CSacl](../Topic/CSacl::~CSacl.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::AddAuditAce](../Topic/CSacl::AddAuditAce.md)|Aggiunge una voce \(ACE\) di controllo di accesso dell'oggetto `CSacl`.|  
|[CSacl::GetAceCount](../Topic/CSacl::GetAceCount.md)|Restituisce il numero di voci \(ACEs\) di controllo di accesso nell'oggetto `CSacl`.|  
|[CSacl::RemoveAce](../Topic/CSacl::RemoveAce.md)|Rimuove un motore di database di Access specifico \(voce di controllo di accesso\) dall'oggetto **CSacl** .|  
|[CSacl::RemoveAllAces](../Topic/CSacl::RemoveAllAces.md)|Rimuove tutti ACE contenuti nell'oggetto `CSacl`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSacl::operator \=](../Topic/CSacl::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 Un SACL contiene le voci \(ACEs\) di controllo di accesso che specificano i tipi di tentativi di accesso che generano i record di controllo nel log eventi sicurezza di un controller di dominio.  Si noti che un SACL genera le voci del registro soltanto sul controller di dominio in cui il tentativo di accesso si verifica, non su ogni controller di dominio che contiene una replica dell'oggetto.  
  
 Per impostare o recuperare il SACL del descrittore di sicurezza di un oggetto, il privilegio di SE\_SECURITY\_NAME deve essere abilitato il token di accesso del thread di richiesta.  Il gruppo di amministratori ciò concedere i privilegi per impostazione predefinita e può essere concesse ad altri utenti o gruppi.  Fare concedere il privilegio non è necessario solo: prima che l'operazione definita dal privilegio possa essere eseguita, il privilegio sia abilitato il token di accesso di sicurezza per rendere effettive.  Il modello consente i privilegi di essere abilitato solo per le operazioni di sistema specifiche e quindi di essere disabilitato quando non sono più necessarie.  Vedere [AtlGetSacl](../Topic/AtlGetSacl.md) e [AtlSetSacl](../Topic/AtlSetSacl.md) per esempi di abilitare SE\_SECURITY\_NAME.  
  
 Utilizzare i metodi della classe forniti per aggiungere, rimuovere, creare ed eliminare le ACE dall'oggetto **SACL**.  Vedere anche [AtlGetSacl](../Topic/AtlGetSacl.md) e [AtlSetSacl](../Topic/AtlSetSacl.md).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CAcl](../../atl/reference/cacl-class.md)  
  
 `CSacl`  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [CAcl Class](../../atl/reference/cacl-class.md)   
 [ACLs](http://msdn.microsoft.com/library/windows/desktop/aa374872)   
 [ACEs](http://msdn.microsoft.com/library/windows/desktop/aa374868)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)