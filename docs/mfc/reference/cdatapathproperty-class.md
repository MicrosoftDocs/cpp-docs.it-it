---
title: "CDataPathProperty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDataPathProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], asincrono"
  - "asynchronous controls [C++]"
  - "CDataPathProperty class"
  - "controlli OLE [C++], asincrono"
ms.assetid: 1f96efdb-54e4-460b-862c-eba5d4103488
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CDataPathProperty Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una proprietà del controllo OLE che può essere caricata in modo asincrono.  
  
## Sintassi  
  
```  
class CDataPathProperty : public CAsyncMonikerFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataPathProperty::CDataPathProperty](../Topic/CDataPathProperty::CDataPathProperty.md)|Costruisce un oggetto `CDataPathProperty`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDataPathProperty::GetControl](../Topic/CDataPathProperty::GetControl.md)|Recupera il controllo OLE asincrono associato all'oggetto `CDataPathProperty`.|  
|[CDataPathProperty::GetPath](../Topic/CDataPathProperty::GetPath.md)|Recupera il percorso della proprietà.|  
|[CDataPathProperty::Open](../Topic/CDataPathProperty::Open.md)|Avvia il caricamento della proprietà asincroni per il controllo collegato ActiveX \(OLE\).|  
|[CDataPathProperty::ResetData](../Topic/CDataPathProperty::ResetData.md)|Chiama `CAsyncMonikerFile::OnDataAvailable` per notificare al contenitore delle proprietà del controllo sono stati modificati.|  
|[CDataPathProperty::SetControl](../Topic/CDataPathProperty::SetControl.md)|Imposta il controllo asincrono ActiveX \(OLE\) associato alla proprietà.|  
|[CDataPathProperty::SetPath](../Topic/CDataPathProperty::SetPath.md)|Imposta il nome del percorso della proprietà.|  
  
## Note  
 Le proprietà asincrone vengono caricati dopo l'avvio sincrono.  
  
 La classe `CDataPathProperty` è derivata da **CAysncMonikerFile**.  Per implementare le proprietà asincrone nei controlli OLE, derivare una classe da `CDataPathProperty`ed eseguire l'override [OnDataAvailable](../Topic/CAsyncMonikerFile::OnDataAvailable.md).  
  
 Per ulteriori informazioni su come utilizzare i moniker asincroni e di controlli ActiveX nelle applicazioni Internet, vedere i seguenti articoli:  
  
-   [Primi passaggi Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
-   [Primi passaggi Internet: moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 [CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)  
  
 `CDataPathProperty`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [MFC campione l'immagine](../../top/visual-cpp-samples.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncMonikerFile Class](../../mfc/reference/casyncmonikerfile-class.md)