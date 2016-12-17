---
title: "Punti di connessione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IConnectionPoint"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCmdTarget (classe), e punti di connessione"
  - "COM, punti di connessione"
  - "punti di connessione [C++]"
  - "connessioni, punti di connessione"
  - "IConnectionPoint (interfaccia)"
  - "interfacce, IConnectionPoint"
  - "MFC [C++], supporto COM"
  - "MFC COM, punti di connessione"
  - "punti di connessione OLE COM"
  - "sink, punti di connessione"
ms.assetid: bc9fd7c7-8df6-4752-ac8c-0b177442c88d
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Punti di connessione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra come implementare i punti di connessione \(precedentemente noto come punti di connessione OLE\) utilizzando le classi MFC `CCmdTarget` e `CConnectionPoint`.  
  
 In passato, il modello COM \(Component Object Model \(COM\) definisce un meccanismo generale \(**IUnknown::QueryInterface**\) che oggetti consenti per implementare ed esporre la funzionalità delle interfacce.  Tuttavia, un meccanismo corrispondente che gli oggetti consenti per esporre le proprie funzionalità chiamare le interfacce specifiche non definite.  Ovvero COM definito come puntatori in ingresso a oggetti \(puntatori alle interfacce di tale oggetto\) sono stati gestiti, ma non include un modello esplicito per le interfacce in uscita \(puntatori l'oggetto utilizza ad altri oggetti interfacce\).  COM ora il modello, denominato punti di connessione, che supporta questa funzionalità.  
  
 Una connessione ha due parti: l'oggetto che chiama l'interfaccia, denominata l'origine e l'oggetto che implementa l'interfaccia chiamata, il sink.  Un punto di connessione è un'interfaccia esposta dall'origine.  Esponendo un punto di connessione, un'origine consente ai sink stabilire le connessioni se stessa \(l'origine\).  Mediante il meccanismo dei punti di connessione \(l'interfaccia di **IConnectionPoint** \), un puntatore all'interfaccia del sink viene passato all'oggetto di origine.  Questo puntatore fornisce l'origine l'accesso all'implementazione del sink di un insieme di funzioni membro.  Ad esempio, per generare un evento implementato il sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink.  Nella figura seguente viene illustrato il punto di connessione appena descritto.  
  
 ![Punto di connessione implementato](../mfc/media/vc37lh1.png "vc37LH1")  
Punto di connessione implementato  
  
 MFC implementa questo modello nelle classi di [CCmdTarget](../mfc/reference/ccmdtarget-class.md) e di [CConnectionPoint](../mfc/reference/cconnectionpoint-class.md).  Le classi derivate da **CConnectionPoint** implementano l'interfaccia di **IConnectionPoint**, utilizzata per esporre i punti di connessione ad altri oggetti.  Le classi derivate da `CCmdTarget` implementano l'interfaccia di **IConnectionPointContainer**, che può enumerare tutti i punti di connessione disponibili su un oggetto o la ricerca uno specifico punto di connessione.  
  
 Per ciascun punto di connessione implementato nella classe, è necessario dichiarare una parte della connessione che implementa il punto di connessione.  Se si implementa uno o più punti di connessione, è necessario inoltre possibile dichiarare una singola mappa connessioni nella classe.  Una mappa connessioni è una tabella dei punti di connessione supportato dal controllo ActiveX.  
  
 Negli esempi che seguono una mappa delle connessioni semplice e un punto di connessione.  Il primo esempio dichiara la mappa delle connessioni e il punto; il secondo esempio viene implementata la mappa e il punto.  Si noti che `CMyClass` deve essere `CCmdTarget`\- classe derivata.  Nel primo esempio, il codice viene inserito nella dichiarazione di classe, nella sezione di **protetto** :  
  
 [!code-cpp[NVC_MFCConnectionPoints#1](../mfc/codesnippet/CPP/connection-points_1.h)]  
  
 `BEGIN_CONNECTION_PART` e macro di **END\_CONNECTION\_PART** dichiarare una classe incorporata, `XSampleConnPt` \(derivato da `CConnectionPoint`\), che implementa questo punto di connessione specifica.  Se si desidera eseguire l'override delle funzioni membro di `CConnectionPoint` o per aggiungere funzioni membro personalizzati, dichiarile tra queste due macro.  Ad esempio, la macro di `CONNECTION_IID` eseguire l'override della funzione membro di `CConnectionPoint::GetIID` una volta inserita tra queste due macro.  
  
 Nel secondo esempio, il codice viene inserito nel file di implementazione del controllo \(file CPP\).  Questo codice implementa la mappa delle connessioni, inclusi il punto di connessione, `SampleConnPt`:  
  
 [!code-cpp[NVC_MFCConnectionPoints#2](../mfc/codesnippet/CPP/connection-points_2.cpp)]  
  
 Se la classe dispone di più punti di connessione, inserire le macro aggiuntive di `CONNECTION_PART` tra `BEGIN_CONNECTION_MAP` e macro di `END_CONNECTION_MAP`.  
  
 Infine, aggiungere una chiamata a `EnableConnections` nel costruttore della classe.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCConnectionPoints#3](../mfc/codesnippet/CPP/connection-points_3.cpp)]  
  
 Una volta che il codice è stato inserito, il `CCmdTarget`\- classe derivata espone un punto di connessione per l'interfaccia di **ISampleSink** .  Nella figura seguente viene illustrato questo esempio.  
  
 ![Punto di connessione implementato tramite MFC](../mfc/media/vc37lh2.png "vc37LH2")  
Un punto di connessione implementato con MFC  
  
 In genere, i punti di connessione supportano il "multicasting" \- la possibilità di trasmettere per comunicare ai sink più collegati agli stessi interfaccia.  Nel codice riportato di seguito viene illustrato come a multicast scorrendo ogni sink su un punto di connessione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#4](../mfc/codesnippet/CPP/connection-points_4.cpp)]  
  
 In questo esempio vengono recuperati l'impostazione corrente delle connessioni sul punto di connessione di `SampleConnPt` con una chiamata a `CConnectionPoint::GetConnections`.  Quindi scorre le connessioni e chiama **ISampleSink::SinkFunc** su ogni connessione attiva.  
  
## Vedere anche  
 [MFC COM](../mfc/mfc-com.md)