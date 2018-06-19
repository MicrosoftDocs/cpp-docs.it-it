---
title: Moniker asincroni in Internet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [MFC], asynchronous
- MFC, asynchronous monikers
- asynchronous monikers [MFC]
- Web applications [MFC], asynchronous
- downloading Internet resources and asynchronous monikers
- optimization [MFC], asynchronous downloading across Internet
- Internet [MFC], asynchronous downloading
ms.assetid: 418b0c64-0046-4dae-8118-c9c762b5822e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fb9828734985c25996e7e2d1a6f390a0b629d998
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33343363"
---
# <a name="asynchronous-monikers-on-the-internet"></a>Moniker asincroni in Internet
Internet richiede nuovi approcci per la progettazione dell'applicazione a causa l'accesso di rete lenta. Le applicazioni devono eseguire l'accesso alla rete in modo asincrono per evitare di bloccare l'interfaccia utente. Classe MFC [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) fornisce un supporto asincrono per il download dei file.  
  
 Con il moniker asincroni, è possibile estendere l'applicazione COM per il download asincrono da Internet e fornire il rendering progressivo di oggetti di grandi dimensioni, ad esempio le bitmap e gli oggetti VRML. Moniker asincroni consentono una proprietà del controllo ActiveX o un file su Internet possono essere scaricati senza bloccare la risposta dell'interfaccia utente.  
  
## <a name="advantages-of-asynchronous-monikers"></a>Vantaggi di moniker asincroni  
 È possibile utilizzare i moniker asincroni per:  
  
-   Scaricare codice e i file senza bloccare.  
  
-   Scaricare le proprietà nei controlli ActiveX senza bloccare.  
  
-   Ricevere notifiche di avanzamento del download.  
  
-   Tenere traccia dell'avanzamento e le informazioni sullo stato pronto.  
  
-   Fornire informazioni sullo stato all'utente sullo stato di avanzamento.  
  
-   Consentire all'utente di annullare un download in qualsiasi momento.  
  
## <a name="mfc-classes-for-asynchronous-monikers"></a>Classi MFC per moniker asincroni  
 [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md) derivato da [CMonikerFile](../mfc/reference/cmonikerfile-class.md), che a sua volta è derivato da [COleStreamFile](../mfc/reference/colestreamfile-class.md). Oggetto `COleStreamFile` oggetto che rappresenta un flusso di dati; un `CMonikerFile` viene utilizzata da object un `IMoniker` per ottenere i dati e un `CAsyncMonikerFile` oggetto avviene in modo asincrono.  
  
 Moniker asincroni vengono utilizzati principalmente in applicazioni abilitate per Internet e i controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un esempio è l'utilizzo di [CDataPathProperty](../mfc/reference/cdatapathproperty-class.md) per fornire proprietà asincrone per i controlli ActiveX.  
  
## <a name="mfc-classes-for-data-paths-in-activex-controls"></a>Classi MFC per i percorsi di dati in controlli ActiveX  
 Le classi MFC `CDataPathProperty` e [CCachedDataPathProperty](../mfc/reference/ccacheddatapathproperty-class.md) implementare proprietà del controllo ActiveX che può essere caricata in modo asincrono. Le proprietà asincrone vengono caricate dopo l'avvio sincrono. Controlli ActiveX asincroni chiamano ripetutamente un callback per indicare la disponibilità di nuovi dati durante un processo di exchange di proprietà di lunga durata.  
  
 L'oggetto `CDataPathProperty` è derivato da `CAsyncMonikerFile`. L'oggetto `CCachedDataPathProperty` è derivato da `CDataPathProperty`. Per implementare le proprietà asincrone nei controlli ActiveX, derivare una classe da `CDataPathProperty` o `CCachedDataPathProperty`ed eseguire l'override [OnDataAvailable](../mfc/reference/casyncmonikerfile-class.md#ondataavailable) e altre notifiche che si desidera ricevere.  
  
#### <a name="to-download-a-file-using-asynchronous-monikers"></a>Per scaricare un file di utilizzo di moniker asincroni  
  
1.  Dichiarare una classe derivata da [CAsyncMonikerFile](../mfc/reference/casyncmonikerfile-class.md).  
  
2.  Eseguire l'override [OnDataAvailable](../mfc/reference/casyncmonikerfile-class.md#ondataavailable) per visualizzare i dati.  
  
3.  Eseguire l'override di altre funzioni membro, incluso [OnProgress](../mfc/reference/casyncmonikerfile-class.md#onprogress), [OnStartBinding](../mfc/reference/casyncmonikerfile-class.md#onstartbinding), e [OnStopBinding](../mfc/reference/casyncmonikerfile-class.md#onstopbinding).  
  
4.  Dichiarare un'istanza di questa classe e usarlo per aprire gli URL.  
  
 Per informazioni sul download in modo asincrono in un controllo ActiveX, vedere [controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

