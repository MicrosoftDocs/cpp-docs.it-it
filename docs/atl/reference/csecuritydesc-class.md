---
title: "CSecurityDesc Class | Microsoft Docs"
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
  - "ATL::CSecurityDesc"
  - "ATL.CSecurityDesc"
  - "CSecurityDesc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSecurityDesc class"
ms.assetid: 3767a327-378f-4690-ba40-4d9f6a1f5ee4
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSecurityDesc Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per la struttura **SECURITY\_DESCRIPTOR**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CSecurityDesc  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityDesc::CSecurityDesc](../Topic/CSecurityDesc::CSecurityDesc.md)|Costruttore.|  
|[CSecurityDesc::~CSecurityDesc](../Topic/CSecurityDesc::~CSecurityDesc.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityDesc::FromString](../Topic/CSecurityDesc::FromString.md)|Converte un descrittore di sicurezza di formato stringa in un descrittore di sicurezza valido e funzionale.|  
|[CSecurityDesc::GetControl](../Topic/CSecurityDesc::GetControl.md)|Recupera le informazioni di controllo dal descrittore di sicurezza.|  
|[CSecurityDesc::GetDacl](../Topic/CSecurityDesc::GetDacl.md)|Recupera le informazioni di \(DACL\) dell'elenco di controllo di accesso discrezionale dal descrittore di sicurezza.|  
|[CSecurityDesc::GetGroup](../Topic/CSecurityDesc::GetGroup.md)|Recupera le informazioni principali del gruppo dal descrittore di sicurezza.|  
|[CSecurityDesc::GetOwner](../Topic/CSecurityDesc::GetOwner.md)|Recupera il informaton il proprietario del descrittore di sicurezza.|  
|[CSecurityDesc::GetPSECURITY\_DESCRIPTOR](../Topic/CSecurityDesc::GetPSECURITY_DESCRIPTOR.md)|Restituisce un puntatore a una struttura **SECURITY\_DESCRIPTOR**.|  
|[CSecurityDesc::GetSacl](../Topic/CSecurityDesc::GetSacl.md)|Recupera le informazioni di \(SACL\) dell'elenco di controllo di accesso del sistema dal descrittore di sicurezza.|  
|[CSecurityDesc::IsDaclAutoInherited](../Topic/CSecurityDesc::IsDaclAutoInherited.md)|Determina se il DACL è configurato per supportare la propagazione automatica.|  
|[CSecurityDesc::IsDaclDefaulted](../Topic/CSecurityDesc::IsDaclDefaulted.md)|Determina se il descrittore di sicurezza è configurato con un'impostazione predefinita DACL.|  
|[CSecurityDesc::IsDaclPresent](../Topic/CSecurityDesc::IsDaclPresent.md)|Determina se il descrittore di sicurezza contiene un DACL.|  
|[CSecurityDesc::IsDaclProtected](../Topic/CSecurityDesc::IsDaclProtected.md)|Determina se il DACL è configurato per impedire le modifiche.|  
|[CSecurityDesc::IsGroupDefaulted](../Topic/CSecurityDesc::IsGroupDefaulted.md)|Determina se l'id di sicurezza \(SID\) del gruppo del descrittore di sicurezza è stato impostato per impostazione predefinita.|  
|[CSecurityDesc::IsOwnerDefaulted](../Topic/CSecurityDesc::IsOwnerDefaulted.md)|Determina se il PROCESSO del proprietario del descrittore di sicurezza è stato impostato per impostazione predefinita.|  
|[CSecurityDesc::IsSaclAutoInherited](../Topic/CSecurityDesc::IsSaclAutoInherited.md)|Determina se il SACL è configurato per supportare la propagazione automatica.|  
|[CSecurityDesc::IsSaclDefaulted](../Topic/CSecurityDesc::IsSaclDefaulted.md)|Determina se il descrittore di sicurezza è configurato con un'impostazione predefinita SACL.|  
|[CSecurityDesc::IsSaclPresent](../Topic/CSecurityDesc::IsSaclPresent.md)|Determina se il descrittore di sicurezza contiene un SACL.|  
|[CSecurityDesc::IsSaclProtected](../Topic/CSecurityDesc::IsSaclProtected.md)|Determina se il SACL è configurato per impedire le modifiche.|  
|[CSecurityDesc::IsSelfRelative](../Topic/CSecurityDesc::IsSelfRelative.md)|Determina se il descrittore di sicurezza è nel formato automatica relativo.|  
|[CSecurityDesc::MakeAbsolute](../Topic/CSecurityDesc::MakeAbsolute.md)|Chiamare questo metodo per convertire il descrittore di sicurezza nel formato assoluto.|  
|[CSecurityDesc::MakeSelfRelative](../Topic/CSecurityDesc::MakeSelfRelative.md)|Chiamare questo metodo per convertire il descrittore di sicurezza al formato di automatica relativo.|  
|[CSecurityDesc::SetControl](../Topic/CSecurityDesc::SetControl.md)|Imposta i bit di controllo di un descrittore di sicurezza.|  
|[CSecurityDesc::SetDacl](../Topic/CSecurityDesc::SetDacl.md)|Imposta le informazioni in un DACL.  Se un DACL è già presente nel descrittore di sicurezza, viene sostituito.|  
|[CSecurityDesc::SetGroup](../Topic/CSecurityDesc::SetGroup.md)|Imposta le informazioni principali del gruppo di un descrittore di sicurezza assoluto di formato, sostituire qualsiasi già presente primario di informazioni del gruppo.|  
|[CSecurityDesc::SetOwner](../Topic/CSecurityDesc::SetOwner.md)|Imposta le informazioni del proprietario di un descrittore di sicurezza assoluto di formato, sostituire già presente qualsiasi di informazioni del proprietario.|  
|[CSecurityDesc::SetSacl](../Topic/CSecurityDesc::SetSacl.md)|Imposta le informazioni in un SACL.  Se un SACL è già presente nel descrittore di sicurezza, viene sostituito.|  
|[CSecurityDesc::ToString](../Topic/CSecurityDesc::ToString.md)|Converte un descrittore di sicurezza in un formato stringa.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSecurityDesc::operator const SECURITY\_DESCRIPTOR \*](../Topic/CSecurityDesc::operator%20const%20SECURITY_DESCRIPTOR%20*.md)|Restituisce un puntatore a una struttura **SECURITY\_DESCRIPTOR**.|  
|[CSecurityDesc::operator \=](../Topic/CSecurityDesc::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 La struttura **SECURITY\_DESCRIPTOR** contiene le informazioni sulla sicurezza associate a un oggetto.  Le applicazioni utilizzano questa struttura per impostare ed eseguire una query sullo stato di sicurezza di un oggetto.  Vedere anche [AtlGetSecurityDescriptor](../Topic/AtlGetSecurityDescriptor.md).  
  
 Le applicazioni non devono modificare direttamente la struttura **SECURITY\_DESCRIPTOR** e invece necessario utilizzare i metodi della classe forniti.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio di sicurezza](../../top/visual-cpp-samples.md)   
 [SECURITY\_DESCRIPTOR](http://msdn.microsoft.com/library/windows/desktop/aa379561)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Security Global Functions](../../atl/reference/security-global-functions.md)