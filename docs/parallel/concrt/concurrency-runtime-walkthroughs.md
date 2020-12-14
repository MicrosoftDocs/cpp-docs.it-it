---
description: 'Altre informazioni su: runtime di concorrenza procedure dettagliate'
title: Procedure dettagliate del runtime di concorrenza
ms.date: 11/04/2016
helpviewer_keywords:
- walkthroughs [Concurrency Runtime]
- Concurrency Runtime, walkthroughs
ms.assetid: 7374c5e9-54eb-44bf-9ed9-5e190cfd290b
ms.openlocfilehash: 733a4dddbd800042257a89f88d93a5a6ac11de63
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257238"
---
# <a name="concurrency-runtime-walkthroughs"></a>Procedure dettagliate del runtime di concorrenza

Negli argomenti basati su scenari di questa sezione viene illustrato come utilizzare molte delle funzionalità del runtime di concorrenza.

## <a name="in-this-section"></a>Contenuto della sezione

[Procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)<br/>
Viene illustrato come utilizzare le interfacce [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) e [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) insieme alle attività per inviare richieste HTTP GET e post a un servizio web in un'app piattaforma UWP (Universal Windows Platform) (UWP).

[Procedura dettagliata: creazione di un'applicazione Agent-Based](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)<br/>
Viene descritto come creare un'applicazione di base basata su agenti.

[Procedura dettagliata: creazione di un agente del flusso di flussi](../../parallel/concrt/walkthrough-creating-a-dataflow-agent.md)<br/>
Viene illustrato come creare applicazioni basate su agenti basate su un flusso di data, anziché su un flusso di controllo.

[Procedura dettagliata: creazione di una rete di Image-Processing](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
Viene illustrato come creare una rete di blocchi di messaggi asincroni che eseguono l'elaborazione di immagini.

[Procedura dettagliata: implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md)<br/>
Viene illustrato come calcolare in modo asincrono i valori per un uso successivo.

[Procedura dettagliata: utilizzo di join per impedire il deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)<br/>
Usa il problema dei filosofi a cena per illustrare come usare la classe [Concurrency:: join](../../parallel/concrt/reference/join-class.md) per impedire un deadlock nell'applicazione.

[Procedura dettagliata: rimozione di lavoro da un thread di User-Interface](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)<br/>
Viene illustrato come migliorare le prestazioni di un'applicazione MFC che disegna il frattale di Mandelbrot.

[Procedura dettagliata: uso della runtime di concorrenza in un'applicazione COM-Enabled](../../parallel/concrt/walkthrough-using-the-concurrency-runtime-in-a-com-enabled-application.md)<br/>
Viene illustrato come utilizzare il runtime di concorrenza in un'applicazione che utilizza l'Component Object Model (COM).

[Procedura dettagliata: adattamento del codice esistente per l'utilizzo di attività leggere](../../parallel/concrt/walkthrough-adapting-existing-code-to-use-lightweight-tasks.md)<br/>
Mostra come adattare il codice esistente che usa l'API Windows per creare ed eseguire un thread per usare un'attività leggera.

[Procedura dettagliata: creazione di un blocco di messaggi personalizzato](../../parallel/concrt/walkthrough-creating-a-custom-message-block.md)<br/>
Viene descritto come creare un tipo di blocco di messaggi personalizzato che ordina i messaggi in arrivo in base alla priorità.

## <a name="related-sections"></a>Sezioni correlate

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
Introduce il Framework di programmazione simultaneo per Visual C++.
