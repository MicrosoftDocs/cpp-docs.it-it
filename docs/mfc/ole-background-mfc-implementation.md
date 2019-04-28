---
title: 'Sfondo OLE: Implementazione MFC'
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
ms.openlocfilehash: f793c7d7303a49057e46c32eb658ea7eea8e9ccc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62186729"
---
# <a name="ole-background-mfc-implementation"></a>Sfondo OLE: Implementazione MFC

A causa della dimensione e della complessità delle API OLE non elaborate, chiamarle direttamente per scrivere applicazioni OLE può essere molto dispendioso in termini di tempo. L'obiettivo dell'implementazione di OLE da parte della libreria Microsoft Foundation Class è di ridurre la quantità di lavoro necessaria a scrivere applicazioni complete compatibili con OLE.

In questo articolo vengono illustrate le parti dell'API OLE che non sono state implementate all'interno di MFC. La discussione illustra inoltre come quello che viene implementato esegue il mapping alla sezione OLE di Windows SDK.

##  <a name="_core_portions_of_ole_not_implemented_by_the_class_library"></a> Parti di OLE non implementate dalla libreria di classi

Alcune interfacce e alcune funzionalità OLE non sono fornite direttamente da MFC. Se si desidera utilizzare queste funzionalità, è possibile chiamare direttamente l'API OLE.

Interfaccia IMoniker il `IMoniker` interfaccia viene implementata dalla libreria di classi (ad esempio, il `COleServerItem` classe), ma non sia stata precedentemente esposta al programmatore. Per altre informazioni su questa interfaccia, vedere le implementazioni OLE del Moniker nella sezione OLE di Windows SDK. Tuttavia, vedere anche le classi [CMonikerFile](../mfc/reference/cmonikerfile-class.md) e [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).

Interfacce IUnknown e IMarshal il `IUnknown` interfaccia viene implementata dalla libreria di classi ma non viene esposta al programmatore. Il `IMarshal` interfaccia non è implementato dalla libreria di classi ma viene utilizzata internamente. I server di automazione costruiti utilizzando la libreria di classi includono già funzionalità di marshalling incorporate.

Docfiles (file compositi) file compositi sono parzialmente supportati dalla libreria di classi. Non è supportata alcuna delle funzioni che modificano direttamente i file compositi al di là della creazione. MFC utilizza la classe `COleFileStream` per supportare l'elaborazione di flussi con funzioni di file standard. Per altre informazioni, vedere l'articolo [contenitori: File compositi](../mfc/containers-compound-files.md).

Server in-Process e gestori di oggetti server In-process e gestori di oggetti consentano l'implementazione di modifica visiva di dati o oggetti modello COM (Component Object) completi in una libreria di collegamento dinamico (DLL). A tale scopo, è possibile implementare la propria DLL chiamando direttamente l'API OLE. Tuttavia, se si scrive un server di automazione che non dispone di interfaccia utente, è possibile utilizzare AppWizard per trasformarlo in un server in-process e inserirlo completamente in una DLL. Per altre informazioni su questi argomenti, vedere [server di automazione](../mfc/automation-servers.md).

> [!TIP]
>  Il modo più semplice per implementare un server di automazione è di inserirlo in una DLL. MFC supporta questo approccio.

Per altre informazioni sul modo in cui le classi OLE di Microsoft Foundation implementano le interfacce OLE, vedere le note tecniche MFC [38](../mfc/tn038-mfc-ole-iunknown-implementation.md), [39](../mfc/tn039-mfc-ole-automation-implementation.md), e [40](../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](../mfc/ole-background.md)<br/>
[Sfondo OLE: strategie di implementazione](../mfc/ole-background-implementation-strategies.md)
