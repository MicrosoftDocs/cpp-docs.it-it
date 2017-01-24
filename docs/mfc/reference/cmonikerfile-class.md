---
title: "CMonikerFile Class | Microsoft Docs"
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
  - "CMonikerFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMonikerFile class"
  - "IMoniker interface"
  - "IMoniker interface, associazione"
  - "monikers, MFC"
ms.assetid: 87be5966-f4f7-4235-bce2-1fa39e9417de
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMonikerFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un flusso di dati \([IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034)\) denominati da [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705).  
  
## Sintassi  
  
```  
class CMonikerFile : public COleStreamFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::CMonikerFile](../Topic/CMonikerFile::CMonikerFile.md)|Costruisce un oggetto `CMonikerFile`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::Close](../Topic/CMonikerFile::Close.md)|Rimuove e rilascia il flusso e rilascia il moniker.|  
|[CMonikerFile::Detach](../Topic/CMonikerFile::Detach.md)|Rimuove `IMoniker` da questo oggetto `CMonikerFile`.|  
|[CMonikerFile::GetMoniker](../Topic/CMonikerFile::GetMoniker.md)|Restituisce il moniker corrente.|  
|[CMonikerFile::Open](../Topic/CMonikerFile::Open.md)|Aprire il file specificato per ottenere un flusso.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMonikerFile::CreateBindContext](../Topic/CMonikerFile::CreateBindContext.md)|Ottiene il contesto di associazione o crea un contesto di associazione inizializzato impostazione predefinita.|  
  
## Note  
 Moniker contiene informazioni analogamente a un nome di percorso di un file.  Se un puntatore a un'interfaccia `IMoniker` di un oggetto di moniker, è possibile ottenere l'accesso al file identificato senza avere qualsiasi altra informazione sulla posizione specifica il file effettivamente si trova.  
  
 Derivato da `COleStreamFile`, `CMonikerFile` utilizza un moniker o una rappresentazione di stringa che può trasformare un moniker e le associazioni al flusso per il quale il moniker abbia un nome.  È possibile leggere e scrivere nel flusso.  L'obiettivo reale `CMonikerFile` consiste nel fornire l'accesso semplice a `IStream`oggetto denominato da `IMoniker`oggetti in modo da non dover associare automaticamente a un flusso manualmente, ma dispone di funzionalità `CFile` nel flusso.  
  
 `CMonikerFile` non può essere utilizzato per associare un valore diverso da un flusso.  Se si desidera associare all'archiviazione o a un oggetto, è necessario utilizzare l'interfaccia `IMoniker`.  
  
 Per ulteriori informazioni sui flussi e i moniker, vedere [COleStreamFile](../../mfc/reference/colestreamfile-class.md)*in riferimenti alla libreria MFC* e in [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) e [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 `CMonikerFile`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [COleStreamFile Class](../../mfc/reference/colestreamfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)