---
title: "CAtlTransactionManager Class | Microsoft Docs"
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
  - "CAtlTransactionManager"
  - "atltransactionmanager/ATL::CAtlTransactionManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlTransactionManager class"
ms.assetid: b01732dc-1d16-4b42-bfac-b137fca2b740
caps.latest.revision: 25
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlTransactionManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe di CAtlTransactionManager fornisce un wrapper funzioni di \(KTM\) di gestione transazioni del kernel.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
class CAtlTransactionManager;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTransactionManager::~CAtlTransactionManager](../Topic/CAtlTransactionManager::~CAtlTransactionManager.md)|Distruttore di CAtlTransactionManager.|  
|[CAtlTransactionManager::CAtlTransactionManager](../Topic/CAtlTransactionManager::CAtlTransactionManager.md)|Costruttore di CAtlTransactionManager.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTransactionManager::Close](../Topic/CAtlTransactionManager::Close.md)|Chiude un handle della transazione.|  
|[CAtlTransactionManager::Commit](../Topic/CAtlTransactionManager::Commit.md)|Richieste che la transazione viene eseguito il commit.|  
|[CAtlTransactionManager::Create](../Topic/CAtlTransactionManager::Create.md)|Crea un handle della transazione.|  
|[CAtlTransactionManager::CreateFile](../Topic/CAtlTransactionManager::CreateFile.md)|Crea o si apre un file, un flusso di file, o una directory come operazione di processo.|  
|[CAtlTransactionManager::DeleteFile](../Topic/CAtlTransactionManager::DeleteFile.md)|Rimuove un file esistente come operazione di processo.|  
|[CAtlTransactionManager::FindFirstFile](../Topic/CAtlTransactionManager::FindFirstFile.md)|Cerca una directory un file o della sottodirectory come operazione di processo.|  
|[CAtlTransactionManager::GetFileAttributes](../Topic/CAtlTransactionManager::GetFileAttributes.md)|Recupera gli attributi di file system per un file o una directory specificata come operazione di processo.|  
|[CAtlTransactionManager::GetFileAttributesEx](../Topic/CAtlTransactionManager::GetFileAttributesEx.md)|Recupera gli attributi di file system per un file o una directory specificata come operazione di processo.|  
|[CAtlTransactionManager::GetHandle](../Topic/CAtlTransactionManager::GetHandle.md)|Restituisce l'handle della transazione.|  
|[CAtlTransactionManager::IsFallback](../Topic/CAtlTransactionManager::IsFallback.md)|Determina se le chiamate di fallback sono attivate.|  
|[CAtlTransactionManager::MoveFile](../Topic/CAtlTransactionManager::MoveFile.md)|Sposta un file o una directory, inclusi i relativi elementi figlio, come operazione di processo.|  
|[CAtlTransactionManager::RegCreateKeyEx](../Topic/CAtlTransactionManager::RegCreateKeyEx.md)|Creare la chiave del Registro di sistema specificato e lo associa a una transazione.  Se la chiave già esiste, la funzione viene aperta.|  
|[CAtlTransactionManager::RegDeleteKey](../Topic/CAtlTransactionManager::RegDeleteKey.md)|Elimina una sottochiave e i relativi valori dalla visualizzazione specifica della piattaforma specificata del Registro di sistema come operazione di processo.|  
|[CAtlTransactionManager::RegOpenKeyEx](../Topic/CAtlTransactionManager::RegOpenKeyEx.md)|Aprire la chiave del Registro di sistema specificato e lo associa a una transazione.|  
|[CAtlTransactionManager::Rollback](../Topic/CAtlTransactionManager::Rollback.md)|Richieste che la transazione viene ripristinata.|  
|[CAtlTransactionManager::SetFileAttributes](../Topic/CAtlTransactionManager::SetFileAttributes.md)|Imposta gli attributi di un file o una directory come operazione di processo.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlTransactionManager::m\_bFallback](../Topic/CAtlTransactionManager::m_bFallback.md)|`TRUE` se il fallback è supportato; `FALSE` in caso contrario.|  
|[CAtlTransactionManager::m\_hTransaction](../Topic/CAtlTransactionManager::m_hTransaction.md)|Handle della transazione.|  
  
## Note  
  
## Gerarchia di ereditarietà  
 [ATL::CAtlTransactionManager](../../atl/reference/catltransactionmanager-class.md)  
  
## Requisiti  
 **Header:** atltransactionmanager.h  
  
## Vedere anche  
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)