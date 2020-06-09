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
ms.openlocfilehash: 74add1ad894f883c67eefab888898c0abf518b83
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625040"
---
# <a name="asynchronous-monikers-on-the-internet"></a>Moniker asincroni in Internet

Internet richiede nuovi approcci alla progettazione delle applicazioni a causa dell'accesso di rete lento. Le applicazioni devono eseguire l'accesso alla rete in modo asincrono per evitare di bloccare l'interfaccia utente. La classe MFC [CAsyncMonikerFile](reference/casyncmonikerfile-class.md) fornisce supporto asincrono per il download dei file.

Con moniker asincroni, è possibile estendere l'applicazione COM per il download in modo asincrono in Internet e per fornire il rendering progressivo di oggetti di grandi dimensioni, ad esempio bitmap e oggetti VRML. I moniker asincroni consentono di scaricare una proprietà del controllo ActiveX o un file in Internet senza bloccare la risposta dell'interfaccia utente.

## <a name="advantages-of-asynchronous-monikers"></a>Vantaggi dei moniker asincroni

È possibile utilizzare moniker asincroni per:

- Scaricare il codice e i file senza bloccarsi.

- Scaricare le proprietà nei controlli ActiveX senza bloccarle.

- Ricevere le notifiche dello stato di avanzamento del download.

- Tenere traccia delle informazioni sullo stato di avanzamento e pronto.

- Fornire informazioni sullo stato all'utente sullo stato di avanzamento.

- Consente all'utente di annullare un download in qualsiasi momento.

## <a name="mfc-classes-for-asynchronous-monikers"></a>Classi MFC per moniker asincroni

[CAsyncMonikerFile](reference/casyncmonikerfile-class.md) deriva da [CMonikerFile](reference/cmonikerfile-class.md), che a sua volta deriva da [COleStreamFile](reference/colestreamfile-class.md). Un `COleStreamFile` oggetto rappresenta un flusso di dati. un `CMonikerFile` oggetto utilizza `IMoniker` per ottenere i dati e un oggetto in `CAsyncMonikerFile` modo asincrono.

I moniker asincroni vengono utilizzati principalmente in applicazioni abilitate per Internet e controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un esempio principale è l'uso di [CDataPathProperty](reference/cdatapathproperty-class.md) per fornire proprietà asincrone per i controlli ActiveX.

## <a name="mfc-classes-for-data-paths-in-activex-controls"></a>Classi MFC per percorsi dati nei controlli ActiveX

Le classi MFC `CDataPathProperty` e [CCachedDataPathProperty](reference/ccacheddatapathproperty-class.md) implementano le proprietà del controllo ActiveX che possono essere caricate in modo asincrono. Le proprietà asincrone vengono caricate dopo l'avvio sincrono. I controlli ActiveX asincroni richiamano ripetutamente un callback per indicare la disponibilità di nuovi dati durante un processo di scambio di proprietà lungo.

L'oggetto `CDataPathProperty` è derivato da `CAsyncMonikerFile`. L'oggetto `CCachedDataPathProperty` è derivato da `CDataPathProperty`. Per implementare le proprietà asincrone nei controlli ActiveX, derivare una classe da `CDataPathProperty` o `CCachedDataPathProperty` ed eseguire l'override di [ondataavailable](reference/casyncmonikerfile-class.md#ondataavailable) e di altre notifiche che si desidera ricevere.

#### <a name="to-download-a-file-using-asynchronous-monikers"></a>Per scaricare un file utilizzando moniker asincroni

1. Dichiarare una classe derivata da [CAsyncMonikerFile](reference/casyncmonikerfile-class.md).

1. Eseguire l'override di [ondataavailable](reference/casyncmonikerfile-class.md#ondataavailable) per visualizzare i dati.

1. Eseguire l'override di altre funzioni membro, tra cui [OnProgress](reference/casyncmonikerfile-class.md#onprogress), [onstarting](reference/casyncmonikerfile-class.md#onstartbinding)e [OnStop](reference/casyncmonikerfile-class.md#onstopbinding).

1. Dichiarare un'istanza di questa classe e usarla per aprire gli URL.

Per informazioni sul download asincrono in un controllo ActiveX, vedere [controlli ActiveX in Internet](activex-controls-on-the-internet.md).

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](mfc-internet-programming-tasks.md)<br/>
[Nozioni fondamentali sulla programmazione Internet MFC](mfc-internet-programming-basics.md)
