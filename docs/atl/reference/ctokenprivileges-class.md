---
title: "CTokenPrivileges Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CTokenPrivileges"
  - "CTokenPrivileges"
  - "ATL.CTokenPrivileges"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTokenPrivileges class"
ms.assetid: 89590105-f001-4014-870d-142926091231
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CTokenPrivileges Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per la struttura **TOKEN\_PRIVILEGES**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CTokenPrivileges  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenPrivileges::CTokenPrivileges](../Topic/CTokenPrivileges::CTokenPrivileges.md)|Costruttore.|  
|[CTokenPrivileges::~CTokenPrivileges](../Topic/CTokenPrivileges::~CTokenPrivileges.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenPrivileges::Add](../Topic/CTokenPrivileges::Add.md)|Aggiunge uno o più privilegi all'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::Delete](../Topic/CTokenPrivileges::Delete.md)|Rimuove un privilegio dall'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::DeleteAll](../Topic/CTokenPrivileges::DeleteAll.md)|Elimina tutti i privilegi dall'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::GetCount](../Topic/CTokenPrivileges::GetCount.md)|Restituisce il numero di voci di privilegi dell'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::GetDisplayNames](../Topic/CTokenPrivileges::GetDisplayNames.md)|Recupera i nomi visualizzati dei privilegi contenuti nell'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::GetLength](../Topic/CTokenPrivileges::GetLength.md)|Restituisce le dimensioni del buffer in byte richieste di conservare la struttura **TOKEN\_PRIVILEGES** rappresentata dall'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::GetLuidsAndAttributes](../Topic/CTokenPrivileges::GetLuidsAndAttributes.md)|Recupera localmente identificatori univoci \(LUIDs\) e i flag dell'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::GetNamesAndAttributes](../Topic/CTokenPrivileges::GetNamesAndAttributes.md)|Recupera i flag di nomi e degli attributi di privilegi dall'oggetto `CTokenPrivileges`.|  
|[CTokenPrivileges::GetPTOKEN\_PRIVILEGES](../Topic/CTokenPrivileges::GetPTOKEN_PRIVILEGES.md)|Restituisce un puntatore a una struttura **TOKEN\_PRIVILEGES**.|  
|[CTokenPrivileges::LookupPrivilege](../Topic/CTokenPrivileges::LookupPrivilege.md)|Recupera l'attributo associato a un nome specificato di privilegi.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTokenPrivileges::operator const TOKEN\_PRIVILEGES \*](../Topic/CTokenPrivileges::operator%20const%20TOKEN_PRIVILEGES%20*.md)|Esegue il cast di un valore a un puntatore a una struttura **TOKEN\_PRIVILEGES**.|  
|[CTokenPrivileges::operator \=](../Topic/CTokenPrivileges::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o un thread e viene allocato a ogni utente registrati in un sistema di Windows NT o Windows 2000.  
  
 Il token di accesso utilizzato per descrivere i vari privilegi di sicurezza concesse a ciascun utente.  Un privilegio consiste in un numero a 64 bit definito localmente un identificatore univoco \([LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261)\) e una stringa del descrittore.  
  
 La classe `CTokenPrivileges` è un wrapper per la struttura [TOKEN\_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630) e contiene 0 o più privilegi.  I privilegi è possibile aggiungere, eliminare, o possibile eseguire una query utilizzando i metodi della classe forniti.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio di sicurezza](../../top/visual-cpp-samples.md)   
 [TOKEN\_PRIVILEGES](http://msdn.microsoft.com/library/windows/desktop/aa379630)   
 [LUID](http://msdn.microsoft.com/library/windows/desktop/aa379261)   
 [LUID\_AND\_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379263)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)