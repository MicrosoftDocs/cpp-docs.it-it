---
title: "CTokenGroups Class | Microsoft Docs"
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
  - "ATL::CTokenGroups"
  - "ATL.CTokenGroups"
  - "CTokenGroups"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTokenGroups class"
ms.assetid: 2ab08076-4b08-4487-bc70-ec6dee304190
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTokenGroups Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per la struttura **TOKEN\_GROUPS**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CTokenGroups  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenGroups::CTokenGroups](../Topic/CTokenGroups::CTokenGroups.md)|Costruttore.|  
|[CTokenGroups::~CTokenGroups](../Topic/CTokenGroups::~CTokenGroups.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenGroups::Add](../Topic/CTokenGroups::Add.md)|Aggiunge `CSid` o una struttura esistente **TOKEN\_GROUPS**oggetto `CTokenGroups`.|  
|[CTokenGroups::Delete](../Topic/CTokenGroups::Delete.md)|Elimina `CSid` e i relativi attributi collegati dall'oggetto `CTokenGroups`.|  
|[CTokenGroups::DeleteAll](../Topic/CTokenGroups::DeleteAll.md)|Elimina tutti gli oggetti `CSid` e i rispettivi attributi collegati dall'oggetto `CTokenGroups`.|  
|[CTokenGroups::GetCount](../Topic/CTokenGroups::GetCount.md)|Restituisce il numero di oggetti `CSid` gli attributi e collegati contenuti nell'oggetto **CTokenGroups** .|  
|[CTokenGroups::GetLength](../Topic/CTokenGroups::GetLength.md)|Restituisce la dimensione dell'oggetto `CTokenGroups`.|  
|[CTokenGroups::GetPTOKEN\_GROUPS](../Topic/CTokenGroups::GetPTOKEN_GROUPS.md)|Recupera un puntatore a una struttura **TOKEN\_GROUPS**.|  
|[CTokenGroups::GetSidsAndAttributes](../Topic/CTokenGroups::GetSidsAndAttributes.md)|Recupera gli oggetti e gli attributi `CSid` che appartengono all'oggetto `CTokenGroups`.|  
|[CTokenGroups::LookupSid](../Topic/CTokenGroups::LookupSid.md)|Recupera gli attributi associati a un oggetto `CSid`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenGroups::operator const TOKEN\_GROUPS \*](../Topic/CTokenGroups::operator%20const%20TOKEN_GROUPS%20*.md)|Esegue il cast `CTokenGroups` a un puntatore a una struttura **TOKEN\_GROUPS**.|  
|[CTokenGroups::operator \=](../Topic/CTokenGroups::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o un thread e viene allocato a ogni utente registrati in un sistema di Windows NT o Windows 2000.  
  
 La classe **CTokenGroups** è un wrapper per la struttura [TOKEN\_GROUPS](http://msdn.microsoft.com/library/windows/desktop/aa379624), contenente le informazioni sugli ID di sicurezza \(SIDs\) del gruppo in un token di accesso.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio di sicurezza](../../top/visual-cpp-samples.md)   
 [CSid Class](../../atl/reference/csid-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)