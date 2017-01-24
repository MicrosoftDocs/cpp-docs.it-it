---
title: "CAtlWinModule Class | Microsoft Docs"
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
  - "ATL::CAtlWinModule"
  - "ATL.CAtlWinModule"
  - "CAtlWinModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlWinModule class"
ms.assetid: 7ec844af-0f68-4a34-b0c8-9de50a025df0
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlWinModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce il supporto per i componenti di finestre tramite ATL.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAtlWinModule : public _ATL_WIN_MODULE  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlWinModule::CAtlWinModule](../Topic/CAtlWinModule::CAtlWinModule.md)|Costruttore.|  
|[CAtlWinModule::~CAtlWinModule](../Topic/CAtlWinModule::~CAtlWinModule.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlWinModule::AddCreateWndData](../Topic/CAtlWinModule::AddCreateWndData.md)|Aggiunge un oggetto dati.|  
|[CAtlWinModule::ExtractCreateWndData](../Topic/CAtlWinModule::ExtractCreateWndData.md)|Restituisce un puntatore a un oggetto dati del modulo della finestra.|  
  
## Note  
 Questa classe fornisce supporto per tutte le classi ATL che richiedono funzionalità di utilizzo di windows.  
  
## Gerarchia di ereditarietà  
 [\_ATL\_WIN\_MODULE](../Topic/_ATL_WIN_MODULE.md)  
  
 `CAtlWinModule`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [\_ATL\_WIN\_MODULE](../Topic/_ATL_WIN_MODULE.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)