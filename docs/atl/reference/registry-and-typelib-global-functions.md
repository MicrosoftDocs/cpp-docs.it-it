---
title: "Registry and TypeLib Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegistryDataExchange function, funzioni globali"
ms.assetid: d58b8a4e-975c-4417-8b34-d3c847f679b3
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Registry and TypeLib Global Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni consentono il supporto per il carico e la registrazione della libreria dei tipi.  
  
> [!IMPORTANT]
>  Le funzioni elencate nelle tabelle seguenti non possono essere utilizzate nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlRegisterTypeLib](../Topic/AtlRegisterTypeLib.md)|Questa funzione viene chiamata per registrare una libreria dei tipi.|  
|[AtlUnRegisterTypeLib](../Topic/AtlUnRegisterTypeLib.md)|Questa funzione viene chiamata per annullare la registrazione di una libreria dei tipi|  
|[AtlLoadTypeLib](../Topic/AtlLoadTypeLib.md)|Questa funzione viene chiamata per caricare una libreria dei tipi.|  
|[AtlUpdateRegistryFromResourceD](../Topic/AtlUpdateRegistryFromResourceD.md)|Questa funzione viene chiamata per aggiornare il Registro di sistema dalla risorsa specificata.|  
|[RegistryDataExchange](../Topic/RegistryDataExchange.md)|Questa funzione viene chiamata per leggere da, o scrivere su, il Registro di sistema.  Chiamato da [Macro di scambio di dati del Registro Di Sistema](../../atl/reference/registry-data-exchange-macros.md).|  
  
 Controllo di queste funzioni che il nodo nel Registro di sistema nel programma viene utilizzato per archiviare le informazioni.  
  
|||  
|-|-|  
|[AtlGetPerUserRegistration](../Topic/AtlGetPerUserRegistration.md)|Recupera se l'applicazione reindirizza l'accesso al Registro di sistema nel nodo **HKEY\_CURRENT\_USER** \(**HKCU**\).|  
|[AtlSetPerUserRegistration](../Topic/AtlSetPerUserRegistration.md)|Imposta se l'applicazione reindirizza l'accesso al Registro di sistema nel nodo **HKEY\_CURRENT\_USER** \(**HKCU**\).|  
  
## Vedere anche  
 [Funzioni](../../atl/reference/atl-functions.md)