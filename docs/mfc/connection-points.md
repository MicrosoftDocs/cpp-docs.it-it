---
title: Punti di connessione
ms.date: 11/19/2018
f1_keywords:
- IConnectionPoint
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
ms.openlocfilehash: 1a8fc4742b8bf686edf75f3b98cc283b9bf9881b
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620733"
---
# <a name="connection-points"></a>Punti di connessione

In questo articolo viene illustrato come implementare i punti di connessione (noti in precedenza come punti di connessione OLE) utilizzando le classi MFC `CCmdTarget` e `CConnectionPoint` .

In passato, il Component Object Model (COM) definisce un meccanismo generale ( `IUnknown::QueryInterface` *) che consentiva agli oggetti di implementare ed esporre le funzionalità nelle interfacce. Tuttavia, un meccanismo corrispondente che consentiva agli oggetti di esporre la loro capacità di chiamare interfacce specifiche non è stato definito. Ovvero COM definisce il modo in cui i puntatori in ingresso agli oggetti (puntatori alle interfacce di tale oggetto) sono stati gestiti, ma non disponeva di un modello esplicito per le interfacce in uscita (puntatori che l'oggetto contiene alle interfacce di altri oggetti). COM dispone ora di un modello, denominato punti di connessione, che supporta questa funzionalità.

Una connessione è costituita da due parti: l'oggetto che chiama l'interfaccia, denominato origine e l'oggetto che implementa l'interfaccia, denominato sink. Un punto di connessione è l'interfaccia esposta dall'origine. Esponendo un punto di connessione, un'origine consente ai sink di stabilire connessioni a se stesso (origine). Tramite il meccanismo del punto di connessione (l' `IConnectionPoint` interfaccia), un puntatore all'interfaccia di sink viene passato all'oggetto di origine. Questo puntatore fornisce all'origine l'accesso all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, l'origine può chiamare il metodo appropriato dell'implementazione del sink. Nella figura seguente viene illustrato il punto di connessione appena descritto.

![Punto di connessione implementato](../mfc/media/vc37lh1.gif "Punto di connessione implementato") <br/>
Punto di connessione implementato

MFC implementa questo modello nelle classi [CConnectionPoint](reference/cconnectionpoint-class.md) e [CCmdTarget](reference/ccmdtarget-class.md) . Le classi derivate da `CConnectionPoint` implementano l' `IConnectionPoint` interfaccia, utilizzate per esporre punti di connessione ad altri oggetti. Le classi derivate da `CCmdTarget` implementano l' `IConnectionPointContainer` interfaccia, che può enumerare tutti i punti di connessione disponibili di un oggetto o trovare un punto di connessione specifico.

Per ogni punto di connessione implementato nella classe, è necessario dichiarare una parte di connessione che implementa il punto di connessione. Se si implementano uno o più punti di connessione, è necessario dichiarare anche una singola mappa di connessione nella classe. Una mappa di connessione è una tabella di punti di connessione supportata dal controllo ActiveX.

Negli esempi seguenti viene illustrata una semplice mappa di connessione e un punto di connessione. Nel primo esempio viene dichiarata la mappa di connessione e il punto; nel secondo esempio viene implementata la mappa e il punto. Si noti che `CMyClass` deve essere una `CCmdTarget` classe derivata da. Nel primo esempio, il codice viene inserito nella dichiarazione di classe, nella sezione **protected** :

[!code-cpp[NVC_MFCConnectionPoints#1](codesnippet/cpp/connection-points_1.h)]

Le macro **BEGIN_CONNECTION_PART** e **END_CONNECTION_PART** dichiarano una classe incorporata, `XSampleConnPt` derivata da `CConnectionPoint` , che implementa questo particolare punto di connessione. Se si desidera eseguire l'override `CConnectionPoint` di qualsiasi funzione membro o aggiungere funzioni membro personalizzate, dichiararle tra queste due macro. Ad esempio, la `CONNECTION_IID` macro esegue l'override della `CConnectionPoint::GetIID` funzione membro quando viene inserita tra queste due macro.

Nel secondo esempio, il codice viene inserito nel file di implementazione del controllo (file con estensione cpp). Questo codice implementa la mappa di connessione, che include il punto di connessione `SampleConnPt` :

[!code-cpp[NVC_MFCConnectionPoints#2](codesnippet/cpp/connection-points_2.cpp)]

Se la classe dispone di più di un punto di connessione, inserire macro **CONNECTION_PART** aggiuntive tra le macro **BEGIN_CONNECTION_MAP** e **END_CONNECTION_MAP** .

Infine, aggiungere una chiamata a `EnableConnections` nel costruttore della classe. Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#3](codesnippet/cpp/connection-points_3.cpp)]

Una volta inserito il codice, la `CCmdTarget` classe derivata da espone un punto di connessione per l' `ISampleSink` interfaccia. Questo esempio è illustrato nella figura seguente.

![Punto di connessione implementato tramite MFC](../mfc/media/vc37lh2.gif "Punto di connessione implementato tramite MFC") <br/>
Un punto di connessione implementato con MFC

In genere, i punti di connessione supportano il "multicast", ovvero la possibilità di trasmettere più sink connessi alla stessa interfaccia. Il frammento di esempio seguente illustra come eseguire il multicast scorrendo ogni sink in un punto di connessione:

[!code-cpp[NVC_MFCConnectionPoints#4](codesnippet/cpp/connection-points_4.cpp)]

In questo esempio viene recuperato il set corrente di connessioni nel `SampleConnPt` punto di connessione con una chiamata a `CConnectionPoint::GetConnections` . Scorre quindi le connessioni e chiama `ISampleSink::SinkFunc` su ogni connessione attiva.

## <a name="see-also"></a>Vedere anche

[MFC COM](mfc-com.md)
