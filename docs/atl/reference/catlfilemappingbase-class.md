---
title: "CAtlFileMappingBase Class | Microsoft Docs"
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
  - "ATL.CAtlFileMappingBase"
  - "ATL::CAtlFileMappingBase"
  - "CAtlFileMappingBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlFileMappingBase class"
ms.assetid: be555723-2790-4f57-a8fb-be4d68460775
caps.latest.revision: 20
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlFileMappingBase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un file mappato alla memoria.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAtlFileMappingBase  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFileMappingBase::CAtlFileMappingBase](../Topic/CAtlFileMappingBase::CAtlFileMappingBase.md)|Costruttore.|  
|[CAtlFileMappingBase::~CAtlFileMappingBase](../Topic/CAtlFileMappingBase::~CAtlFileMappingBase.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFileMappingBase::CopyFrom](../Topic/CAtlFileMappingBase::CopyFrom.md)|Chiamare questo metodo per copiare da un oggetto mappa del file.|  
|[CAtlFileMappingBase::GetData](../Topic/CAtlFileMappingBase::GetData.md)|Chiamare questo metodo per ottenere dati da un oggetto mappa del file.|  
|[CAtlFileMappingBase::GetHandle](../Topic/CAtlFileMappingBase::GetHandle.md)|Chiamare questo metodo per restituire un handle di file.|  
|[CAtlFileMappingBase::GetMappingSize](../Topic/CAtlFileMappingBase::GetMappingSize.md)|Chiamare questo metodo per ottenere la dimensione di rilevamento da un oggetto mappa del file.|  
|[CAtlFileMappingBase::MapFile](../Topic/CAtlFileMappingBase::MapFile.md)|Chiamare questo metodo per creare un oggetto mappa del file.|  
|[CAtlFileMappingBase::MapSharedMem](../Topic/CAtlFileMappingBase::MapSharedMem.md)|Chiamare questo metodo per creare un oggetto mappa del file che consente l'accesso completo a tutti i processi.|  
|[CAtlFileMappingBase::OpenMapping](../Topic/CAtlFileMappingBase::OpenMapping.md)|Chiamare questo metodo per restituire un handle per l'oggetto del mapping del file.|  
|[CAtlFileMappingBase::Unmap](../Topic/CAtlFileMappingBase::Unmap.md)|Chiamare questo metodo per annullare il mapping di un oggetto mappa del file.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFileMappingBase::operator \=](../Topic/CAtlFileMappingBase::operator%20=.md)|Imposta l'oggetto corrente dei file in un altro oggetto mappa del file.|  
  
## Note  
 Il mapping del file è l'associazione del contenuto di un file con una parte dello spazio degli indirizzi virtuali di un processo.  Questa classe fornisce metodi per creare il mapping del file mappati che programmi di uscita semplice per accedere e condividere dati.  
  
 Per ulteriori informazioni, vedere [Mapping del file](http://msdn.microsoft.com/library/windows/desktop/aa366556) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Requisiti  
 **Header:** atlfile.h  
  
## Vedere anche  
 [CAtlFileMapping Class](../../atl/reference/catlfilemapping-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)