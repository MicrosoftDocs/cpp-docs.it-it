---
title: "CAutoRevertImpersonation Class | Microsoft Docs"
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
  - "ATL::CAutoRevertImpersonation"
  - "CAutoRevertImpersonation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoRevertImpersonation class"
ms.assetid: 43732849-1940-4bd4-9d52-7a5698bb8838
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAutoRevertImpersonation Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe ripristina gli oggetti [CAccessToken](../../atl/reference/caccesstoken-class.md) a uno stato nonimpersonating quando esce dall'ambito.  
  
## Sintassi  
  
```  
  
class CAutoRevertImpersonation  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoRevertImpersonation::CAutoRevertImpersonation](../Topic/CAutoRevertImpersonation::CAutoRevertImpersonation.md)|Costruisce un oggetto `CAutoRevertImpersonation`|  
|[CAutoRevertImpersonation::~CAutoRevertImpersonation](../Topic/CAutoRevertImpersonation::~CAutoRevertImpersonation.md)|Elimina l'oggetto e ripristina la rappresentazione del token di accesso.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoRevertImpersonation::Attach](../Topic/CAutoRevertImpersonation::Attach.md)|Automatizzare la riga visivo di un token di accesso.|  
|[CAutoRevertImpersonation::Detach](../Topic/CAutoRevertImpersonation::Detach.md)|Annulla la riga automatica di rappresentazione.|  
|[CAutoRevertImpersonation::GetAccessToken](../Topic/CAutoRevertImpersonation::GetAccessToken.md)|Recupera l'oggetto corrente del token di accesso associata all'oggetto.|  
  
## Note  
 [token di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374909) è un oggetto che descrive il contesto di sicurezza di un processo o un thread e viene allocato a ogni utente registrati in un sistema di Windows NT o Windows 2000.  Questi token di accesso possono essere rappresentati con la classe `CAccessToken`.  
  
 È talvolta necessario rappresentare i token di accesso.  Questa classe viene fornita per praticità, ma non consente la rappresentazione dei token di accesso, esegue solo la riga automatica a uno stato nonimpersonated.  Questo perché la rappresentazione di accesso del token può essere eseguita in molti modi.  
  
 Per un'introduzione al modello di controllo di accesso in Windows, vedere [controllo di accesso](http://msdn.microsoft.com/library/windows/desktop/aa374860) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlsecurity.h  
  
## Vedere anche  
 [Esempio ATLSecurity](../../top/visual-cpp-samples.md)   
 [Access Tokens](http://msdn.microsoft.com/library/windows/desktop/aa374909)   
 [Class Overview](../../atl/atl-class-overview.md)