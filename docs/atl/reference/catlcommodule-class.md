---
title: "CAtlComModule Class | Microsoft Docs"
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
  - "ATL.CAtlComModule"
  - "CAtlComModule"
  - "ATL::CAtlComModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlComModule class"
ms.assetid: af5dd71a-a0d1-4a2e-9a24-154a03381c75
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlComModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un modulo server COM.  
  
## Sintassi  
  
```  
  
   class CAtlComModule :  
public _ATL_COM_MODULE  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlComModule::CAtlComModule](../Topic/CAtlComModule::CAtlComModule.md)|Costruttore.|  
|[CAtlComModule::~CAtlComModule](../Topic/CAtlComModule::~CAtlComModule.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlComModule::RegisterServer](../Topic/CAtlComModule::RegisterServer.md)|Chiamare questo metodo per aggiornare il Registro di sistema per ogni oggetto della mappa oggetto.|  
|[CAtlComModule::RegisterTypeLib](../Topic/CAtlComModule::RegisterTypeLib.md)|Chiamare questo metodo per registrare una libreria dei tipi.|  
|[CAtlComModule::UnregisterServer](../Topic/CAtlComModule::UnregisterServer.md)|Chiamare questo metodo per annullare la registrazione di ogni oggetto nella mappa oggetto.|  
|[CAtlComModule::UnRegisterTypeLib](../Topic/CAtlComModule::UnRegisterTypeLib.md)|Chiamare questo metodo per annullare la registrazione di una libreria dei tipi.|  
  
## Note  
 `CAtlComModule` implementa un modulo server COM, consentendo a un client di accedere ai componenti del modulo.  
  
 Questa classe sostituisce la classe precedente [CComModule](../../atl/reference/ccommodule-class.md) utilizzata nelle versioni precedenti ATL.  Vedere [Classi del modulo ATL](../../atl/atl-module-classes.md) per ulteriori informazioni.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_COM\_MODULE](../Topic/_ATL_COM_MODULE.md)  
  
 `CAtlComModule`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [\_ATL\_COM\_MODULE](../Topic/_ATL_COM_MODULE.md)   
 [Class Overview](../../atl/atl-class-overview.md)