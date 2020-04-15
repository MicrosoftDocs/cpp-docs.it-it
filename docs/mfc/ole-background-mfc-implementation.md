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
ms.openlocfilehash: 25c98c3683a8656bb5188f22d0464d25a4901f49
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364536"
---
# <a name="ole-background-mfc-implementation"></a>Sfondo OLE: implementazione MFC

A causa della dimensione e della complessità delle API OLE non elaborate, chiamarle direttamente per scrivere applicazioni OLE può essere molto dispendioso in termini di tempo. L'obiettivo dell'implementazione di OLE da parte della libreria Microsoft Foundation Class è di ridurre la quantità di lavoro necessaria a scrivere applicazioni complete compatibili con OLE.

In questo articolo vengono illustrate le parti dell'API OLE che non sono state implementate all'interno di MFC. La discussione spiega anche come ciò che viene implementato esegue il mapping alla sezione OLE di Windows SDK.

## <a name="portions-of-ole-not-implemented-by-the-class-library"></a><a name="_core_portions_of_ole_not_implemented_by_the_class_library"></a>Parti di OLE non implementate dalla libreria di classi

Alcune interfacce e alcune funzionalità OLE non sono fornite direttamente da MFC. Se si desidera utilizzare queste funzionalità, è possibile chiamare direttamente l'API OLE.

Interfaccia IMoniker `IMoniker` L'interfaccia viene implementata dalla `COleServerItem` libreria di classi (ad esempio, la classe) ma non è stata precedentemente esposta al programmatore. Per ulteriori informazioni su questa interfaccia, vedere Implementazioni OLE Moniker nella sezione OLE di Windows SDK. Tuttavia, vedere anche la classe [CMonikerFile](../mfc/reference/cmonikerfile-class.md) e [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).

Interfacce IUnknown e `IUnknown` IMarshal L'interfaccia viene implementata dalla libreria di classi ma non è esposta al programmatore. L'interfaccia `IMarshal` non viene implementata dalla libreria di classi, ma viene utilizzata internamente. I server di automazione costruiti utilizzando la libreria di classi includono già funzionalità di marshalling incorporate.

I file composti Docfiles (file composti) sono parzialmente supportati dalla libreria di classi. Non è supportata alcuna delle funzioni che modificano direttamente i file compositi al di là della creazione. MFC utilizza `COleFileStream` la classe per supportare la modifica di flussi con funzioni di file standard. Per ulteriori informazioni, vedere l'articolo [Contenitori: file compositi](../mfc/containers-compound-files.md).

I server in-process e i gestori di oggetti nei server in-process e nei gestori di oggetti consentono l'implementazione di dati di modifica visiva o oggetti COM (Component Object Model) completi in una libreria a collegamento dinamico (DLL). A tale scopo, è possibile implementare la propria DLL chiamando direttamente l'API OLE. Tuttavia, se si scrive un server di automazione che non dispone di interfaccia utente, è possibile utilizzare AppWizard per trasformarlo in un server in-process e inserirlo completamente in una DLL. Per ulteriori informazioni su questi argomenti, vedere [Server di automazione](../mfc/automation-servers.md).

> [!TIP]
> Il modo più semplice per implementare un server di automazione è di inserirlo in una DLL. MFC supporta questo approccio.

Per ulteriori informazioni su come le classi OLE di Microsoft Foundation implementano le interfacce OLE, vedere le note tecniche MFC [38](../mfc/tn038-mfc-ole-iunknown-implementation.md), [39](../mfc/tn039-mfc-ole-automation-implementation.md)e [40](../mfc/tn040-mfc-ole-in-place-resizing-and-zooming.md).

## <a name="see-also"></a>Vedere anche

[Sfondo OLE](../mfc/ole-background.md)<br/>
[Sfondo OLE: strategie di implementazione](../mfc/ole-background-implementation-strategies.md)
