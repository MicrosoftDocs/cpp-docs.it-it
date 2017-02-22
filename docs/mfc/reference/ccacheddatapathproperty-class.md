---
title: "CCachedDataPathProperty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCachedDataPathProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], asincrono"
  - "asynchronous controls [C++]"
  - "CCachedDataPathProperty class"
  - "memory files [C++]"
  - "controlli OLE [C++], asincrono"
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CCachedDataPathProperty Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una proprietà del controllo OLE ha trasferito in modo asincrono e memorizzato nella cache in un file di memoria.  
  
## Sintassi  
  
```  
class CCachedDataPathProperty : public CDataPathProperty  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCachedDataPathProperty::CCachedDataPathProperty](../Topic/CCachedDataPathProperty::CCachedDataPathProperty.md)|Costruisce un oggetto `CCachedDataPathProperty`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCachedDataPathProperty::m\_Cache](../Topic/CCachedDataPathProperty::m_Cache.md)|Oggetto di`CMemFile` in cui memorizzare i dati.|  
  
## Note  
 Un file di memoria viene archiviato in RAM anziché su disco e risulta utile per i trasferimenti temporanei veloci.  
  
 Con **CAysncMonikerFile** e `CDataPathProperty`, `CCachedDataPathProperty` fornisce la funzionalità per l'utilizzo dei moniker asincroni nei controlli OLE.  Con gli oggetti `CCachedDataPathProperty`, è possibile trasferire i dati in modo asincrono da un URL o archiviare il database di origine e memorizzarlo in un file di memoria tramite la variabile pubblica `m_Cache`.  Tutti i dati vengono archiviati nel file di memoria e non è necessario eseguire l'override [OnDataAvailable](../Topic/CAsyncMonikerFile::OnDataAvailable.md) a meno che non si desideri controllare per le notifiche e rispondere.  Ad esempio, se vengono trasferite di un file di .GIF e si desidera notificare al controllo che più dati sono arrivati e devono essere ridisegnata, override `OnDataAvailable` per eseguire la notifica.  
  
 La classe `CCachedDataPathProperty` è derivata da `CDataPathProperty`.  
  
 Per ulteriori informazioni su come utilizzare i moniker asincroni e di controlli ActiveX nelle applicazioni Internet, vedere i seguenti argomenti:  
  
-   [Primi passaggi Internet: controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
-   [Primi passaggi Internet: moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 [CAsyncMonikerFile](../../mfc/reference/casyncmonikerfile-class.md)  
  
 [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)  
  
 `CCachedDataPathProperty`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [CDataPathProperty Class](../../mfc/reference/cdatapathproperty-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDataPathProperty Class](../../mfc/reference/cdatapathproperty-class.md)