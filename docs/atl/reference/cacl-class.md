---
title: "CAcl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAcl"
  - "ATL::CAcl"
  - "ATLSECURITY/CAcl"
  - "ATL.CAcl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAcl class"
ms.assetid: 20bcb9af-dc1c-4737-b923-3864776680d6
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CAcl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per una struttura `ACL` \(access control list\).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAcl  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::CAccessMaskArray](../Topic/CAcl::CAccessMaskArray.md)|Una matrice di Oggetti. `ACCESS_MASK`.|  
|[CAcl::CAceFlagArray](../Topic/CAcl::CAceFlagArray.md)|Una matrice di Oggetti. `BYTE`.|  
|[CAcl::CAceTypeArray](../Topic/CAcl::CAceTypeArray.md)|Una matrice di Oggetti. `BYTE`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::CAcl](../Topic/CAcl::CAcl.md)|Costruttore.|  
|[CAcl::~CAcl](../Topic/CAcl::~CAcl.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::GetAceCount](../Topic/CAcl::GetAceCount.md)|Restituisce il numero di oggetti \(ACE\) della voce di controllo di accesso.|  
|[CAcl::GetAclEntries](../Topic/CAcl::GetAclEntries.md)|Recupera le voci di \(ACL\) dell'elenco di controllo di accesso dall'oggetto `CAcl`.|  
|[CAcl::GetAclEntry](../Topic/CAcl::GetAclEntry.md)|Recupera tutte informazioni su una voce in un oggetto `CAcl`.|  
|[CAcl::GetLength](../Topic/CAcl::GetLength.md)|Restituisce la lunghezza di ACL.|  
|[CAcl::GetPACL](../Topic/CAcl::GetPACL.md)|Restituisce un PACL \(puntatore a un ACL\).|  
|[CAcl::IsEmpty](../Topic/CAcl::IsEmpty.md)|Verifica dell'oggetto `CAcl` per voci.|  
|[CAcl::IsNull](../Topic/CAcl::IsNull.md)|Restituisce lo stato dell'oggetto `CAcl`.|  
|[CAcl::RemoveAce](../Topic/CAcl::RemoveAce.md)|Rimuove un motore di database di Access specifico \(voce di controllo di accesso\) dall'oggetto `CAcl`.|  
|[CAcl::RemoveAces](../Topic/CAcl::RemoveAces.md)|Rimuove tutti gli assi \(voci di controllo di accesso\) da `CAcl` applicati a `CSid`specificato.|  
|[CAcl::SetEmpty](../Topic/CAcl::SetEmpty.md)|Contrassegna l'oggetto `CAcl` come vuoto.|  
|[CAcl::SetNull](../Topic/CAcl::SetNull.md)|Contrassegna l'oggetto `CAcl` come `NULL`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAcl::operator const ACL \*](../Topic/CAcl::operator%20const%20ACL%20*.md)|Esegue il cast di un oggetto `CAcl` a una struttura `ACL`.|  
|[CAcl::operator \=](../Topic/CAcl::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 La struttura **ACL** è l'intestazione di un ACL \(access control list\).  Un ACL include un elenco sequenziale di zero o più [ACE](http://msdn.microsoft.com/library/windows/desktop/aa374868) \(voci di controllo di accesso\).  I singoli ACE in un ACL sono numerati da 0 *a n\-1*, dove *n* è il numero di ACE in.  Per modificare un ACL, un'applicazione si riferisce a una voce \(ACE\) di controllo di accesso in l ACL dal relativo indice.  
  
 Esistono due tipi di ACL:  
  
-   Discrezionale  
  
-   Sistema  
  
 Un ACL discrezionale viene controllato dal proprietario di un oggetto o di accesso chiunque disponga **WRITE\_DAC** all'oggetto.  Specifica gli utenti specifici di accesso e gruppi è necessario un oggetto.  Ad esempio, il proprietario di un file può contenere un ACL discrezionale per verificare che gli utenti e i gruppi possono avere accesso al file.  
  
 Un oggetto può essere informazioni sulla sicurezza a livello di sistema associate, sotto forma di sistema ACL controllato da un amministratore di sistema.  Un sistema ACL può consentire che l'amministratore di sistema controlli qualsiasi tentativo di accesso a un oggetto.  
  
 Per ulteriori informazioni, vedere la descrizione [ACL](http://msdn.microsoft.com/library/windows/desktop/aa374872) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)