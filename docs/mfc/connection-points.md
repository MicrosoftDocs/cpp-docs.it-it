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
ms.openlocfilehash: bf21e7bf591a5b1977784db1542053817a73e6cd
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175483"
---
# <a name="connection-points"></a>Punti di connessione

Questo articolo illustra come implementare i punti di connessione (precedentemente noti come punti di connessione OLE) usando le classi MFC `CCmdTarget` e `CConnectionPoint`.

In passato, il modello COM (Component Object) è definito un meccanismo generale (`IUnknown::QueryInterface`*) che consentiva di oggetti da implementare e di esporre funzionalità nelle interfacce. Tuttavia, non è stato definito un meccanismo di corrispondente per consentire agli oggetti per esporre le proprie funzionalità per chiamare le interfacce specifiche. In altre parole, COM definiti in ingresso come puntatori agli oggetti gestiti (puntatori alle interfacce dell'oggetto), ma non disponeva di un modello esplicito per le interfacce in uscita (l'oggetto contiene alle interfacce degli altri oggetti puntatori). COM è ora disponibile un modello, denominato punti di connessione, che supporta questa funzionalità.

Una connessione è costituito da due parti: l'oggetto che chiama l'interfaccia, chiamato l'origine e l'oggetto che implementa l'interfaccia, chiamata sink. Un punto di connessione è l'interfaccia esposta dall'origine. Tramite l'esposizione di un punto di connessione, un'origine consente ai sink stabilire connessioni a se stessa (origine). Tramite la connessione punto meccanismo (il `IConnectionPoint` interface), viene passato un puntatore all'interfaccia sink per l'oggetto di origine. Puntatore ' this ' fornisce l'origine con accesso all'implementazione del sink di un set di funzioni membro. Ad esempio, per generare un evento implementato dal sink, origine possa chiamare il metodo appropriato dell'implementazione del sink. La figura seguente illustra la connessione punto appena descritto.

![Punto di connessione implementato](../mfc/media/vc37lh1.gif "punto di connessione implementato") <br/>
Punto di connessione implementato

MFC implementa questo modello i [CConnectionPoint](../mfc/reference/cconnectionpoint-class.md) e [CCmdTarget](../mfc/reference/ccmdtarget-class.md) classi. Le classi derivate da `CConnectionPoint` implementano il `IConnectionPoint` interfaccia, utilizzato per esporre i punti di connessione ad altri oggetti. Le classi derivate da `CCmdTarget` implementano il `IConnectionPointContainer` interfaccia, che è possibile enumerare tutti i punti di connessione disponibili di un oggetto o trovare un punto di connessione specifico.

Per ogni punto di connessione implementato nella classe, è necessario dichiarare una parte di connessione che implementa il punto di connessione. Se si implementano uno o più punti di connessione, è necessario dichiarare anche una mappa di singola connessione nella classe. Una mappa di connessioni è una tabella dei punti di connessione supportate dal controllo ActiveX.

Gli esempi seguenti illustrano una mappa di connessione semplice e un punto di connessione. Nel primo esempio viene dichiarata la mappa delle connessioni e un punto; Nel secondo esempio implementa il mapping e il punto. Si noti che `CMyClass` deve essere un `CCmdTarget`-classe derivata. Nel primo esempio, viene inserito nella dichiarazione di classe, sotto il **protetti** sezione:

[!code-cpp[NVC_MFCConnectionPoints#1](../mfc/codesnippet/cpp/connection-points_1.h)]

Il **BEGIN_CONNECTION_PART** e **END_CONNECTION_PART viene** le macro dichiarano una classe incorporata, `XSampleConnPt` (derivato da `CConnectionPoint`), che implementa questa particolare connessione punto. Se si desidera eseguire l'override di qualsiasi `CConnectionPoint` funzioni membro o aggiungere funzioni di membro personalizzata, dichiarare le variabili tra questi due macro. Ad esempio, il `CONNECTION_IID` sostituzioni di macro di `CConnectionPoint::GetIID` funzione membro quando viene inserita tra questi due macro.

Nel secondo esempio, codice viene inserito nel file di implementazione del controllo (cpp). Questo codice implementa la mappa delle connessioni, che include il punto di connessione, `SampleConnPt`:

[!code-cpp[NVC_MFCConnectionPoints#2](../mfc/codesnippet/cpp/connection-points_2.cpp)]

Se la classe dispone di più di una connessione punto, inserire ulteriori **CONNECTION_PART** macro tra le **macro BEGIN_CONNECTION_MAP** e **END_CONNECTION_MAP** macro.

Infine, aggiungere una chiamata a `EnableConnections` nel costruttore della classe. Ad esempio:

[!code-cpp[NVC_MFCConnectionPoints#3](../mfc/codesnippet/cpp/connection-points_3.cpp)]

Dopo aver inserito questo codice, il `CCmdTarget`-classe derivata espone un punto di connessione per il `ISampleSink` interfaccia. La figura seguente illustra questo esempio.

![Punto di connessione implementato tramite MFC](../mfc/media/vc37lh2.gif "punto di connessione implementato tramite MFC") <br/>
Un punto di connessione implementato con MFC

In genere, i punti di connessione supportano "multicasting", ovvero la possibilità di trasmettere più nei sink connessa all'interfaccia stessa. Il frammento di esempio seguente viene illustrato come multicast scorrendo ogni sink in un punto di connessione:

[!code-cpp[NVC_MFCConnectionPoints#4](../mfc/codesnippet/cpp/connection-points_4.cpp)]

Questo esempio recupera il set corrente di connessioni nel `SampleConnPt` punto di connessione con una chiamata a `CConnectionPoint::GetConnections`. Quindi esegue l'iterazione attraverso le connessioni e le chiamate `ISampleSink::SinkFunc` su tutte le connessioni attive.

## <a name="see-also"></a>Vedere anche

[MFC COM](../mfc/mfc-com.md)

