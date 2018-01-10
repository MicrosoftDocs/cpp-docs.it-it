---
title: Punti di connessione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: IConnectionPoint
dev_langs: C++
helpviewer_keywords:
- IConnectionPoint interface
- connections, connection points
- OLE COM connection points
- MFC COM, connection points
- COM, connection points
- interfaces, IConnectionPoint
- MFC, COM support
- connection points [MFC]
- CCmdTarget class [MFC], and connection points
- sinks, connection points
ms.assetid: bc9fd7c7-8df6-4752-ac8c-0b177442c88d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0d8bbb131aa5d4ce1b12cba84c3928b80a8b2a7e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="connection-points"></a>Punti di connessione
In questo articolo viene illustrato come implementare i punti di connessione (precedentemente noti come punti di connessione OLE) utilizzando le classi MFC `CCmdTarget` e `CConnectionPoint`.  
  
 In passato, il modello COM (Component Object) è definito un meccanismo generale (**IUnknown:: QueryInterface**) che consentiva di oggetti da implementare e di esporre funzionalità nelle interfacce. Tuttavia, non è stato definito un meccanismo corrispondente che consentita agli oggetti di esporre le proprie funzionalità di chiamare interfacce specifiche. Vale a dire COM definito come in ingresso puntatori agli oggetti gestiti (puntatori alle interfacce dell'oggetto), ma non dispone di un modello esplicito per le interfacce in uscita (puntatori contiene l'oggetto a interfacce degli altri oggetti). COM è ora disponibile un modello, denominato punti di connessione, che supporta questa funzionalità.  
  
 Una connessione dispone di due parti: oggetto che chiama l'interfaccia, denominata l'origine e l'oggetto che implementa l'interfaccia, denominato sink. Un punto di connessione è l'interfaccia esposta dall'origine. Per esporre un punto di connessione, un'origine consente sink stabilire connessioni a se stessa (origine). Tramite la connessione punto meccanismo (il **IConnectionPoint** interface), un puntatore all'interfaccia sink viene passato all'oggetto di origine. L'indicatore di misura consente all'origine di accedere all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink. La figura seguente illustra la connessione punto appena descritto.  
  
 ![Punto di connessione implementato](../mfc/media/vc37lh1.gif "vc37lh1")  
Punto di connessione implementato  
  
 MFC implementa questo modello di [CConnectionPoint](../mfc/reference/cconnectionpoint-class.md) e [CCmdTarget](../mfc/reference/ccmdtarget-class.md) classi. Le classi derivate da **CConnectionPoint** implementare il **IConnectionPoint** interfaccia utilizzata per esporre i punti di connessione ad altri oggetti. Le classi derivate da `CCmdTarget` implementare il **IConnectionPointContainer** interfaccia, che consentono di enumerare tutti i punti di connessione disponibili di un oggetto o di trovare un punto di connessione specifico.  
  
 Per ogni punto di connessione implementato nella classe, è necessario dichiarare una parte di connessione che implementa il punto di connessione. Se si implementano uno o più punti di connessione, è necessario dichiarare anche una mappa di singola connessione nella classe. Una mappa di connessione è una tabella dei punti di connessione supportati dal controllo ActiveX.  
  
 Gli esempi seguenti illustrano una mappa delle connessioni semplice e un punto di connessione. Il primo esempio dichiara la mappa di connessione e un punto. Nel secondo esempio implementa la mappa e punto. Si noti che `CMyClass` deve essere un `CCmdTarget`-classe derivata. Nel primo esempio, il codice viene inserito nella dichiarazione di classe, sotto il **protetti** sezione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#1](../mfc/codesnippet/cpp/connection-points_1.h)]  
  
 Il `BEGIN_CONNECTION_PART` e **END_CONNECTION_PART** macro dichiarano una classe incorporata, `XSampleConnPt` (derivato da `CConnectionPoint`), che implementa questa particolare connessione punto. Se si desidera eseguire l'override di qualsiasi `CConnectionPoint` funzioni membro o aggiungere funzioni di membro personalizzata, dichiararle tra queste due macro. Ad esempio, il `CONNECTION_IID` macro esegue l'override di `CConnectionPoint::GetIID` funzione membro quando viene inserita tra queste due macro.  
  
 Nel secondo esempio, il codice viene inserito nel file di implementazione del controllo (cpp). Questo codice implementa la mappa delle connessioni, che include il punto di connessione, `SampleConnPt`:  
  
 [!code-cpp[NVC_MFCConnectionPoints#2](../mfc/codesnippet/cpp/connection-points_2.cpp)]  
  
 Se la classe dispone di più di una connessione punto, inserire ulteriori `CONNECTION_PART` macro tra il `BEGIN_CONNECTION_MAP` e `END_CONNECTION_MAP` macro.  
  
 Infine, aggiungere una chiamata a `EnableConnections` nel costruttore della classe. Ad esempio:  
  
 [!code-cpp[NVC_MFCConnectionPoints#3](../mfc/codesnippet/cpp/connection-points_3.cpp)]  
  
 Dopo l'inserimento di questo codice, il `CCmdTarget`-classe derivata espone un punto di connessione per il **ISampleSink** interfaccia. Nella figura seguente viene illustrato in questo esempio.  
  
 ![Punto di connessione implementato tramite MFC](../mfc/media/vc37lh2.gif "vc37lh2")  
Un punto di connessione implementato con MFC  
  
 In genere, i punti di connessione supportano "multicasting", ovvero la possibilità di trasmettere a più sink connessi per la stessa interfaccia. Nel frammento di esempio seguente viene illustrato come multicast scorrendo ogni sink in un punto di connessione:  
  
 [!code-cpp[NVC_MFCConnectionPoints#4](../mfc/codesnippet/cpp/connection-points_4.cpp)]  
  
 In questo esempio recupera il set corrente di connessioni nel `SampleConnPt` punto di connessione con una chiamata a `CConnectionPoint::GetConnections`. Viene quindi scorsa le connessioni e le chiamate **ISampleSink::SinkFunc** su ogni connessione attiva.  
  
## <a name="see-also"></a>Vedere anche  
 [MFC COM](../mfc/mfc-com.md)

