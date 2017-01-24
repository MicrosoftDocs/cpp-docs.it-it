---
title: "CPropExchange Class | Microsoft Docs"
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
  - "CPropExchange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [MFC], OLE"
  - "CPropExchange (classe)"
  - "OLE (controlli), persistenza"
ms.assetid: ed872180-e770-4942-892a-92139d501fab
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPropExchange Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta l'implementazione di persistenza per i controlli OLE.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE CPropExchange  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropExchange::ExchangeBlobProp](../Topic/CPropExchange::ExchangeBlobProp.md)|Scambia una proprietà di \(BLOB\) dell'oggetto binario di grandi dimensioni.|  
|[CPropExchange::ExchangeFontProp](../Topic/CPropExchange::ExchangeFontProp.md)|Scambia una proprietà del carattere.|  
|[CPropExchange::ExchangePersistentProp](../Topic/CPropExchange::ExchangePersistentProp.md)|Scambia una proprietà tra un controllo e un file.|  
|[CPropExchange::ExchangeProp](../Topic/CPropExchange::ExchangeProp.md)|Scambia le proprietà di qualsiasi tipo incorporato.|  
|[CPropExchange::ExchangeVersion](../Topic/CPropExchange::ExchangeVersion.md)|Scambia il numero di versione di un controllo OLE.|  
|[CPropExchange::GetVersion](../Topic/CPropExchange::GetVersion.md)|Recupera il numero di versione di un controllo OLE.|  
|[CPropExchange::IsAsynchronous](../Topic/CPropExchange::IsAsynchronous.md)|Determina se gli scambi di proprietà vengono eseguite in modo asincrono.|  
|[CPropExchange::IsLoading](../Topic/CPropExchange::IsLoading.md)|Indica se le proprietà vengono caricato nel controllo o si salvande da.|  
  
## Note  
 `CPropExchange` non dispone di una classe base.  
  
 Stabilisce il contesto e la direzione di uno scambio di proprietà.  
  
 La persistenza è lo scambio di informazioni sullo stato del controllo, generalmente rappresentato dalle proprietà, tra il controllo stesso e un supporto.  
  
 Il framework crea un oggetto derivato da `CPropExchange` quando riceve una notifica delle proprietà di un controllo OLE devono essere caricati da o essere archiviate in un archivio permanente.  
  
 Il framework consente di passare un puntatore a questo oggetto `CPropExchange` alla funzione `DoPropExchange` del controllo.  Se è stata utilizzata una procedura guidata per creare i file iniziali per il controllo, chiamate di funzione `COleControl::DoPropExchange`di `DoPropExchange` del controllo.  La versione della classe base scambia le proprietà di azione del controllo; modificare la versione derivata della classe per lo scambio di proprietà aggiunta al controllo.  
  
 `CPropExchange` può essere utilizzato per serializzare le proprietà di un controllo o per inizializzare le proprietà di un controllo sul caricamento o la creazione di un controllo.  Le funzioni membro `ExchangeFontProp` e `ExchangeProp``CPropExchange` possono archiviare le proprietà su e caricati da supporti diversi.  
  
 Per ulteriori informazioni su l `CPropExchange`, vedere l'articolo [Controlli ActiveX MFC: Pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
## Gerarchia di ereditarietà  
 `CPropExchange`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleControl::DoPropExchange](../Topic/COleControl::DoPropExchange.md)