---
title: "CConnectionPoint Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CConnectionPoint"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CConnectionPoint class"
ms.assetid: f0f23a1e-5e8c-41a9-aa6c-1a4793b28e8f
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CConnectionPoint Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce un tipo speciale di interfaccia utilizzata per comunicare con altri oggetti OLE, denominato "un punto di connessione."  
  
## Sintassi  
  
```  
class CConnectionPoint : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConnectionPoint::CConnectionPoint](../Topic/CConnectionPoint::CConnectionPoint.md)|Costruisce un oggetto `CConnectionPoint`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CConnectionPoint::GetConnections](../Topic/CConnectionPoint::GetConnections.md)|Recupera tutti i punti di connessione in una mappa delle connessioni.|  
|[CConnectionPoint::GetContainer](../Topic/CConnectionPoint::GetContainer.md)|Recupera il contenitore controllo proprietario della mappa delle connessioni.|  
|[CConnectionPoint::GetIID](../Topic/CConnectionPoint::GetIID.md)|Recupera l'id di interfaccia di un punto di connessione.|  
|[CConnectionPoint::GetMaxConnections](../Topic/CConnectionPoint::GetMaxConnections.md)|Recupera il numero massimo di punti di connessione supportato da un controllo.|  
|[CConnectionPoint::GetNextConnection](../Topic/CConnectionPoint::GetNextConnection.md)|Recupera un puntatore all'elemento di collegamento a `pos`.|  
|[CConnectionPoint::GetStartPosition](../Topic/CConnectionPoint::GetStartPosition.md)|Inizia un'iterazione di mapping restituendo un valore di percorso che può essere passato a una chiamata `GetNextConnection`.|  
|[CConnectionPoint::OnAdvise](../Topic/CConnectionPoint::OnAdvise.md)|Chiamato dal framework quando si definiscono o interrompendo le connessioni.|  
|[CConnectionPoint::QuerySinkInterface](../Topic/CConnectionPoint::QuerySinkInterface.md)|Recupera un puntatore a un'interfaccia richiesta del sink.|  
  
## Note  
 A differenza delle normali interfacce OLE, utilizzate per implementare ed esporre la funzionalità di un controllo OLE, a un punto di connessione un'interfaccia in uscita che può iniziare azioni su altri oggetti, ad esempio gli eventi di consentono e notifiche di modifica.  
  
 Una connessione è costituita da due parti: l'oggetto che chiama l'interfaccia, definita "l'origine," e l'oggetto che implementa l'interfaccia, denominato "sink." Esponendo un punto di connessione, un database di origine consente ai sink stabilire connessioni se stesso.  Tramite il meccanismo dei punti di connessione, un oggetto di origine ottiene un puntatore all'implementazione del sink di un set di funzioni membro.  Ad esempio, per generare un evento implementato dal sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink.  
  
 Per impostazione predefinita, `COleControl`nella classe derivata implementa due punti di connessione: uno per gli eventi e uno per le notifiche di modifica della proprietà.  Queste connessioni vengono utilizzate, rispettivamente, che consentono di eventi e per la comunicazione del sink, ad esempio il contenitore del controllo\) quando un valore di proprietà è stato modificato.  Il supporto inoltre disponibile per i controlli OLE implementare i punti di connessione aggiuntivi.  Per ogni punto di connessione aggiuntivo implementato nella classe del controllo, è necessario dichiarare "una parte della connessione" che implementa il punto di connessione.  Se si implementa uno o più punti di connessione, è necessario dichiarare una singola "mappa delle connessioni" nella classe del controllo.  
  
 L'esempio seguente illustra una mappa di connessioni semplice e un punto di connessione per il controllo OLE `Sample`, consistenti di due frammenti di codice: la prima parte dichiara la mappa delle connessioni e il punto; il secondo implementa questi mapping e scegliere.  Il primo frammento viene inserito nella dichiarazione della classe del controllo, sotto la sezione `protected` :  
  
 [!code-cpp[NVC_MFCConnectionPoints#7](../../mfc/codesnippet/CPP/cconnectionpoint-class_1.h)]  
  
 Le macro `END_CONNECTION_PART` e `BEGIN_CONNECTION_PART` creando una classe incorporata, `XSampleConnPt` \(derivata da `CConnectionPoint`\) che implementa questo punto di connessione specifica.  Se si desidera eseguire l'override delle funzioni membro `CConnectionPoint`, o aggiungere le funzioni membro personalizzati, dichiarile tra queste due macro.  Ad esempio, la macro `CONNECTION_IID` esegue l'override della funzione membro `CConnectionPoint::GetIID` quando inserito tra queste due macro.  
  
 Il secondo frammento di codice viene inserito nel file di implementazione \(.CPP\) della classe del controllo.  Questo codice implementa la mappa delle connessioni, inclusi il punto di connessione aggiuntivo, `SampleConnPt`:  
  
 [!code-cpp[NVC_MFCConnectionPoints#2](../../mfc/codesnippet/CPP/cconnectionpoint-class_2.cpp)]  
  
 Una volta che questi frammenti di codice sono stati inseriti, il controllo OLE di esempio espone un punto di connessione per l'interfaccia **ISampleSink**.  
  
 In genere, i punti di connessione supportano il "multicasting", che è la possibilità di carattere per comunicare ai sink più connesso alla stessa interfaccia.  Nel frammento di codice che illustra come eseguire il multicasting scorrendo ogni sink su un punto di connessione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#4](../../mfc/codesnippet/CPP/cconnectionpoint-class_3.cpp)]  
  
 L'esempio recupera l'impostazione corrente delle connessioni sul punto di connessione `SampleConnPt` con una chiamata a `CConnectionPoint::GetConnections`.  Si scorre le connessioni e chiama `ISampleSink::SinkFunc` su ogni connessione attiva.  
  
 Per ulteriori informazioni su l `CConnectionPoint`, vedere l'articolo [Punti di connessione](../../mfc/connection-points.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CConnectionPoint`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)