---
title: Moniker asincroni in Internet
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX controls [MFC], asynchronous
- MFC, asynchronous monikers
- asynchronous monikers [MFC]
- Web applications [MFC], asynchronous
- downloading Internet resources and asynchronous monikers
- optimization [MFC], asynchronous downloading across Internet
- Internet [MFC], asynchronous downloading
ms.assetid: 418b0c64-0046-4dae-8118-c9c762b5822e
ms.openlocfilehash: 63bdc8372223075804d8c710909909382167b2c2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591295"
---
# <a name="asynchronous-monikers-on-the-internet"></a>Moniker asincroni in Internet

Internet richiede nuovi approcci alla progettazione dell'applicazione a causa l'accesso di rete lenta. Le applicazioni devono eseguire l'accesso alla rete in modo asincrono per evitare di bloccare l'interfaccia utente. Classe MFC [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) fornisce il supporto asincrono per il download dei file.

Con moniker asincroni, è possibile estendere l'applicazione COM per il download asincrono da Internet e fornire progressivo per il rendering di oggetti di grandi dimensioni, ad esempio bitmap e VRML oggetti. Moniker asincroni consentono una proprietà del controllo ActiveX o un file su Internet possono essere scaricati senza bloccare la risposta dell'interfaccia utente.

## <a name="advantages-of-asynchronous-monikers"></a>Vantaggi di moniker asincroni

È possibile usare moniker asincroni per:

- Scaricare il codice e i file senza bloccare.

- Scaricare le proprietà nei controlli ActiveX senza bloccare.

- Ricevere notifiche di avanzamento del download.

- Tenere traccia dell'avanzamento e le informazioni sullo stato pronto.

- Fornire informazioni sullo stato per l'utente sullo stato di avanzamento.

- Consentire all'utente di annullare un download in qualsiasi momento.

## <a name="mfc-classes-for-asynchronous-monikers"></a>Classi MFC per i moniker asincroni

[CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) deriva dal [CMonikerFile](../mfc/reference/cmonikerfile-class.md), che a sua volta deriva da [COleStreamFile](../mfc/reference/colestreamfile-class.md). Oggetto `COleStreamFile` oggetto che rappresenta un flusso di dati; un `CMonikerFile` dell'oggetto viene utilizzato un `IMoniker` per ottenere i dati e un `CAsyncMonikerFile` oggetto operazione in modo asincrono.

Moniker asincroni vengono utilizzati principalmente in applicazioni abilitate per Internet e i controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un esempio tipico è l'uso di [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md) per fornire proprietà asincrona per i controlli ActiveX.

## <a name="mfc-classes-for-data-paths-in-activex-controls"></a>Classi MFC per i percorsi dei dati nei controlli ActiveX

Le classi MFC `CDataPathProperty` e [CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md) implementare proprietà del controllo ActiveX che possono essere caricate in modo asincrono. Proprietà asincroni vengono caricate dopo l'inizializzazione sincrona. Controlli ActiveX asincroni richiamano ripetutamente un callback per indicare la disponibilità di nuovi dati durante il processo di lunga durata proprietà exchange.

L'oggetto `CDataPathProperty` è derivato da `CAsyncMonikerFile`. L'oggetto `CCachedDataPathProperty` è derivato da `CDataPathProperty`. Per implementare le proprietà asincrone nei controlli ActiveX, derivare una classe dalla classe `CDataPathProperty` oppure `CCachedDataPathProperty`ed eseguire l'override [OnDataAvailable](../mfc/reference/casyncmonikerfile-class.md#ondataavailable) e altre notifiche che si desidera ricevere.

#### <a name="to-download-a-file-using-asynchronous-monikers"></a>Per scaricare un file utilizzando i moniker asincroni

1. Dichiarare una classe derivata da [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).

1. Eseguire l'override [OnDataAvailable](../mfc/reference/casyncmonikerfile-class.md#ondataavailable) per visualizzare i dati.

1. Eseguire l'override di altre funzioni membro, inclusi [OnProgress](../mfc/reference/casyncmonikerfile-class.md#onprogress), [OnStartBinding](../mfc/reference/casyncmonikerfile-class.md#onstartbinding), e [OnStopBinding](../mfc/reference/casyncmonikerfile-class.md#onstopbinding).

1. Dichiarare un'istanza di questa classe e usarlo per aprire gli URL.

Per informazioni sul download in modo asincrono in un controllo ActiveX, vedere [controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md).

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

