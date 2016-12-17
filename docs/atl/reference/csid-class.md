---
title: "CSid Class | Microsoft Docs"
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
  - "CSid"
  - "ATL::CSid"
  - "ATL.CSid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSid class"
ms.assetid: be58b7ca-5958-49c3-a833-ca341aaaf753
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSid Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per una struttura `SID` \(ID di sicurezza\).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CSid  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSid::CSidArray](../Topic/CSid::CSidArray.md)|Matrice di oggetti `CSid`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSid::CSid](../Topic/CSid::CSid.md)|Costruttore.|  
|[CSid::~CSid](../Topic/CSid::~CSid.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSid::AccountName](../Topic/CSid::AccountName.md)|Restituisce il nome dell'account associato all'oggetto `CSid`.|  
|[CSid::Domain](../Topic/CSid::Domain.md)|Restituisce il nome del dominio associato all'oggetto `CSid`.|  
|[CSid::EqualPrefix](../Topic/CSid::EqualPrefix.md)|Verifica dei prefissi `SID` \(ID di sicurezza\) per uguaglianza.|  
|[CSid::GetLength](../Topic/CSid::GetLength.md)|Restituisce la lunghezza dell'oggetto `CSid`.|  
|[CSid::GetPSID](../Topic/CSid::GetPSID.md)|Restituisce un puntatore a una struttura `SID`.|  
|[CSid::GetPSID\_IDENTIFIER\_AUTHORITY](../Topic/CSid::GetPSID_IDENTIFIER_AUTHORITY.md)|Restituisce un puntatore a una struttura **SID\_IDENTIFIER\_AUTHORITY**.|  
|[CSid::GetSubAuthority](../Topic/CSid::GetSubAuthority.md)|Restituisce un subauthority specificato in una struttura **SID** .|  
|[CSid::GetSubAuthorityCount](../Topic/CSid::GetSubAuthorityCount.md)|Restituisce il numero di subauthority.|  
|[CSid::IsValid](../Topic/CSid::IsValid.md)|Verifica dell'oggetto `CSid` la validità.|  
|[CSid::LoadAccount](../Topic/CSid::LoadAccount.md)|Aggiorna l'oggetto `CSid` fornito il nome account e il dominio, o una struttura esistente `SID`.|  
|[CSid::Sid](../Topic/CSid::Sid.md)|Restituisce la stringa ID.|  
|[CSid::SidNameUse](../Topic/CSid::SidNameUse.md)|Restituisce una descrizione dello stato dell'oggetto `CSid`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \=](../Topic/CSid::operator%20=.md)|Operatore di assegnazione.|  
|[SID const l'operatore \*](../Topic/CSid::operator%20const%20SID%20*.md)|Esegue il cast di un oggetto `CSid` a un puntatore a una struttura `SID`.|  
  
### Operatori globali  
  
|||  
|-|-|  
|[\=\= dell'operatore](../Topic/CSid::operator%20==.md)|Test due oggetti di descrittore di sicurezza per uguaglianza|  
|[operatore\! \=](../Topic/CSid::operator%20!=.md)|Test due oggetti di descrittore di sicurezza disuguaglianza|  
|[operatore \<](../Topic/CSid::operator%20%3C.md)|Confronta il valore di di due oggetti di descrittore di sicurezza.|  
|[operatore \>](../Topic/CSid::operator%20%3E.md)|Confronta il valore di di due oggetti di descrittore di sicurezza.|  
|[\<\= dell'operatore](../Topic/CSid::operator%20%3C=.md)|Confronta il valore di di due oggetti di descrittore di sicurezza.|  
|[\>\= dell'operatore](../Topic/CSid::operator%20%3E=.md)|Confronta il valore di di due oggetti di descrittore di sicurezza.|  
  
## Note  
 La struttura `SID` è una struttura di lunghezza variabile utilizzata per identificare in modo univoco utenti o gruppi.  
  
 Le applicazioni non devono modificare direttamente la struttura `SID`, ma utilizzano i metodi descritti in questa classe wrapper.  Vedere anche [AtlGetOwnerSid](../Topic/AtlGetOwnerSid.md), [AtlSetGroupSid](../Topic/AtlSetGroupSid.md), [AtlGetGroupSid](../Topic/AtlGetGroupSid.md)e [AtlSetOwnerSid](../Topic/AtlSetOwnerSid.md).  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio di sicurezza](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)   
 [Operators Alphabetical Reference](../../atl/reference/atl-operators.md)