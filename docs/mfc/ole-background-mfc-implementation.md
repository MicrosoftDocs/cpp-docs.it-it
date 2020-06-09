---
title: 'Sfondo OLE: implementazione MFC'
ms.date: 11/04/2016
f1_keywords:
- IMarshall
- IMoniker
helpviewer_keywords:
- MFC libraries, implementing
- OLE MFC library implementation
- OLE IMarshal interface
- IMoniker interface, MFC
- IMarshall class [MFC]
- OLE, compound files
- OLE IMoniker interface
- OLE IUnknown
ms.assetid: 2b67016a-d78e-4d60-925f-c28ec8fb6180
ms.openlocfilehash: 1dffdafbd02697db5aec341fec253c84217a0faf
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619868"
---
# <a name="ole-background-mfc-implementation"></a>Sfondo OLE: implementazione MFC

A causa della dimensione e della complessità delle API OLE non elaborate, chiamarle direttamente per scrivere applicazioni OLE può essere molto dispendioso in termini di tempo. L'obiettivo dell'implementazione di OLE da parte della libreria Microsoft Foundation Class è di ridurre la quantità di lavoro necessaria a scrivere applicazioni complete compatibili con OLE.

In questo articolo vengono illustrate le parti dell'API OLE che non sono state implementate all'interno di MFC. Nella discussione viene inoltre illustrato il modo in cui viene implementato il mapping alla sezione OLE del Windows SDK.

## <a name="portions-of-ole-not-implemented-by-the-class-library"></a><a name="_core_portions_of_ole_not_implemented_by_the_class_library"></a>Parti di OLE non implementate dalla libreria di classi

Alcune interfacce e alcune funzionalità OLE non sono fornite direttamente da MFC. Se si desidera utilizzare queste funzionalità, è possibile chiamare direttamente l'API OLE.

Interfaccia IMoniker l' `IMoniker` interfaccia viene implementata dalla libreria di classi (ad esempio, la `COleServerItem` classe) ma non è stata precedentemente esposta al programmatore. Per ulteriori informazioni su questa interfaccia, vedere implementazioni del moniker OLE nella sezione OLE del Windows SDK. Tuttavia, vedere anche la classe [CMonikerFile](reference/cmonikerfile-class.md) e [CAsyncMonikerFile](reference/casyncmonikerfile-class.md).

Interfacce IUnknown e IMarshal l' `IUnknown` interfaccia viene implementata dalla libreria di classi, ma non è esposta al programmatore. L' `IMarshal` interfaccia non viene implementata dalla libreria di classi ma viene utilizzata internamente. I server di automazione costruiti utilizzando la libreria di classi includono già funzionalità di marshalling incorporate.

I file composti docfiles (file composti) sono parzialmente supportati dalla libreria di classi. Non è supportata alcuna delle funzioni che modificano direttamente i file compositi al di là della creazione. MFC utilizza la classe `COleFileStream` per supportare la manipolazione dei flussi con funzioni di file standard. Per ulteriori informazioni, vedere l'articolo [contenitori: file composti](containers-compound-files.md).

I server in-process e i gestori di oggetti in-process e i gestori di oggetti consentono l'implementazione di dati di modifica visivi o di oggetti COM (Full Component Object Model) in una libreria di collegamento dinamico (DLL). A tale scopo, è possibile implementare la propria DLL chiamando direttamente l'API OLE. Tuttavia, se si scrive un server di automazione che non dispone di interfaccia utente, è possibile utilizzare AppWizard per trasformarlo in un server in-process e inserirlo completamente in una DLL. Per ulteriori informazioni su questi argomenti, vedere [server di automazione](automation-servers.md).

> [!TIP]
> Il modo più semplice per implementare un server di automazione è di inserirlo in una DLL. MFC supporta questo approccio.

Per ulteriori informazioni sul modo in cui le classi OLE di Microsoft Foundation implementano le interfacce OLE, vedere note tecniche MFC [38](tn038-mfc-ole-iunknown-implementation.md), [39](tn039-mfc-ole-automation-implementation.md)e [40](tn040-mfc-ole-in-place-resizing-and-zooming.md).

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](ole-background.md)<br/>
[Sfondo OLE: strategie di implementazione](ole-background-implementation-strategies.md)
