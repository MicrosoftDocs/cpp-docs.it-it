---
title: "CAsyncMonikerFile Class | Microsoft Docs"
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
  - "CAsyncMonikerFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], asincrono"
  - "asynchronous controls [C++]"
  - "CAsyncMonikerFile class"
  - "IMoniker interface, associazione"
  - "monikers [C++], MFC"
  - "controlli OLE [C++], asincrono"
ms.assetid: 17378b66-a49a-4b67-88e3-7756ad26a2fc
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAsyncMonikerFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità per l'utilizzo dei moniker asincroni in controlli ActiveX \(precedentemente controlli OLE\).  
  
## Sintassi  
  
```  
class CAsyncMonikerFile : public CMonikerFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncMonikerFile::CAsyncMonikerFile](../Topic/CAsyncMonikerFile::CAsyncMonikerFile.md)|Costruisce un oggetto `CAsyncMonikerFile`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncMonikerFile::Close](../Topic/CAsyncMonikerFile::Close.md)|Chiude e libera tutte le risorse.|  
|[CAsyncMonikerFile::GetBinding](../Topic/CAsyncMonikerFile::GetBinding.md)|Recupera un puntatore all'associazione di trasferimento asincrono.|  
|[CAsyncMonikerFile::GetFormatEtc](../Topic/CAsyncMonikerFile::GetFormatEtc.md)|Recupera il formato dei dati nel flusso.|  
|[CAsyncMonikerFile::Open](../Topic/CAsyncMonikerFile::Open.md)|Aprire un file in modo asincrono.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncMonikerFile::CreateBindStatusCallback](../Topic/CAsyncMonikerFile::CreateBindStatusCallback.md)|Crea un oggetto COM che implementa `IBindStatusCallback`.|  
|[CAsyncMonikerFile::GetBindInfo](../Topic/CAsyncMonikerFile::GetBindInfo.md)|Chiamato dalla raccolta di sistema OLE per richiedere informazioni sul tipo di associazione a essere creato.|  
|[CAsyncMonikerFile::GetPriority](../Topic/CAsyncMonikerFile::GetPriority.md)|Chiamato dalla raccolta di sistema OLE per ottenere la priorità di associazione.|  
|[CAsyncMonikerFile::OnDataAvailable](../Topic/CAsyncMonikerFile::OnDataAvailable.md)|Chiamato per fornire dati come diventa disponibile al client durante le operazioni di associazione asincrona.|  
|[CAsyncMonikerFile::OnLowResource](../Topic/CAsyncMonikerFile::OnLowResource.md)|Chiamato quando le risorse sono insufficienti.|  
|[CAsyncMonikerFile::OnProgress](../Topic/CAsyncMonikerFile::OnProgress.md)|Chiamato per indicare lo stato di avanzamento del processo di download di dati.|  
|[CAsyncMonikerFile::OnStartBinding](../Topic/CAsyncMonikerFile::OnStartBinding.md)|Chiamato quando l'associazione è alto iniziale.|  
|[CAsyncMonikerFile::OnStopBinding](../Topic/CAsyncMonikerFile::OnStopBinding.md)|Chiamato quando il trasferimento asincrono viene arrestato.|  
  
## Note  
 Derivato da [CMonikerFile](../../mfc/reference/cmonikerfile-class.md), che a sua volta deriva da [COleStreamFile](../../mfc/reference/colestreamfile-class.md), `CAsyncMonikerFile` utilizza l'interfaccia [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) per accedere al flusso di dati in modo asincrono, inclusi i file di carico in modo asincrono da un URL.  I file possono essere datapath proprietà dei controlli ActiveX.  
  
 I moniker asincroni vengono utilizzati principalmente in applicazioni e controlli ActiveX internet abilitati fornire un'interfaccia utente attive durante il trasferimento di file.  Un esempio tipico di questo è l'utilizzo [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md) fornire proprietà asincrone per i controlli ActiveX.  L'oggetto `CDataPathProperty` convincerà ripetutamente un callback per indicare la disponibilità di nuovi dati durante il processo lungo di scambio di proprietà.  
  
 Per ulteriori informazioni su come utilizzare i moniker asincroni e di controlli ActiveX nelle applicazioni Internet, vedere i seguenti articoli:  
  
-   [Primi passaggi Internet: moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
-   [Primi passaggi Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 `CAsyncMonikerFile`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [CMonikerFile Class](../../mfc/reference/cmonikerfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMonikerFile Class](../../mfc/reference/cmonikerfile-class.md)   
 [CDataPathProperty Class](../../mfc/reference/cdatapathproperty-class.md)   
 [Asynchronous Versus Synchronous Monikers](http://msdn.microsoft.com/library/windows/desktop/ms687193)