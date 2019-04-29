---
title: Utilizzo delle classi per la creazione di applicazioni per Windows
ms.date: 11/04/2016
helpviewer_keywords:
- Windows applications [MFC], MFC application framework
- MFC, application development
- applications [OLE], MFC application framework
- MFC ActiveX controls [MFC], creating
- OLE applications [MFC], MFC application framework
- database applications [MFC], creating
ms.assetid: 73f63470-857d-43dd-9a54-b38b7be0f1b7
ms.openlocfilehash: c8b3d7061c0ef06063d9c6993f24d23fc2e1f92e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411474"
---
# <a name="using-the-classes-to-write-applications-for-windows"></a>Utilizzo delle classi per la creazione di applicazioni per Windows

Le classi nella libreria di classi MFC (Microsoft Foundation) nel loro insieme, costituiscono un "applicazione framework" in cui si compila un'applicazione per il sistema operativo Windows. A livello generale, il framework definisce lo scheletro di un'applicazione e fornisce le implementazioni dell'interfaccia utente standard che possono essere inserite in tale struttura. Il compito del programmatore consiste nel compilare il resto della struttura, che sono tutte le operazioni che sono specifiche dell'applicazione. Tramite la creazione guidata applicazione MFC per creare i file per un'applicazione molto approfondita starter, è possibile ottenere un punto di partenza. Utilizzare l'editor di risorse Microsoft Visual C++ per progettare visivamente gli elementi dell'interfaccia utente comandi di visualizzazione classi per connettere tali elementi al codice e la libreria di classi per implementare la logica specifica dell'applicazione.

Versione 3.0 e versioni successive del framework MFC supporta la programmazione per le piattaforme Win32, tra cui Microsoft Windows 95 e versioni successive e Windows NT versione 3.51 e successive. Il supporto di Win32 MFC include il multithreading. Usare la versione 1.5*x* se è necessario eseguire la programmazione a 16 bit.

Questa serie di articoli vengono fornite informazioni generali del framework dell'applicazione. Vengono inoltre descritti gli oggetti principali che costituiscono l'applicazione e come vengono creati. Tra gli argomenti trattati in questi articoli sono i seguenti:

- [Il framework](../mfc/framework-mfc.md).

- Divisione del lavoro tra framework e il codice, come descritto in [compilazione nel Framework](../mfc/building-on-the-framework.md).

- [La classe dell'applicazione](../mfc/cwinapp-the-application-class.md), che incapsula la funzionalità a livello di applicazione.

- La modalità [modelli di documento](../mfc/document-templates-and-the-document-view-creation-process.md) creare e gestire documenti e le visualizzazioni associate e finestre cornice.

- Classe [CWnd](../mfc/window-objects.md), la classe di base di radice di tutte le finestre.

- [Oggetti grafici](../mfc/graphic-objects.md), ad esempio penne e pennelli.

Altre parti del framework includono:

- [Oggetti finestra: panoramica](../mfc/window-objects.md)

- [Gestione di messaggi e mapping](../mfc/message-handling-and-mapping.md)

- [CObject, la classe di Base di radice in MFC](../mfc/using-cobject.md)

- [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

- [Finestre di dialogo](../mfc/dialog-boxes.md)

- [Controlli](../mfc/controls-mfc.md)

- [Barre di controllo](../mfc/control-bars.md)

- [OLE](../mfc/ole-in-mfc.md)

- [Gestione della memoria](../mfc/memory-management.md)

   Oltre a offrirti un vantaggio nella scrittura di applicazioni per il sistema operativo Windows, MFC anche rende molto più semplice scrivere applicazioni che usano in modo specifico collegamento e incorporamento tecnologia OLE. È possibile apportare all'applicazione un oggetto OLE visual modifica contenitore, un server di modifica visual OLE o entrambi, e in modo che altre applicazioni possono usare gli oggetti dell'applicazione o persino unità in modalità remota, è possibile aggiungere automazione.

- [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

   Il kit di sviluppo di controllo OLE (CDK) è ora completamente integrato con il framework. Questa serie di articoli fornisce una panoramica di sviluppo di controlli ActiveX con MFC. (I controlli ActiveX sono state precedentemente noto come controlli OLE).

- [Programmazione di database](../data/data-access-programming-mfc-atl.md)

   MFC fornisce anche due set di classi di database che semplificano l'accesso ai dati la scrittura delle applicazioni. Usa le classi di database ODBC, è possibile connettersi ai database tramite un driver Open Database Connectivity (ODBC), selezionare record da tabelle e visualizzare informazioni sui record in un modulo sullo schermo. Usa le classi di oggetto DAO (Data Access), per lavorare con i database tramite il motore di database Microsoft Jet o origini di dati esterno (non-Jet), tra cui origini dati ODBC.

   Inoltre, MFC sono completamente abilitati per la scrittura di applicazioni che utilizzano Unicode e imposta di caratteri multibyte (MBCS), in particolare double-byte character set (DBCS).

Per una Guida generale alla documentazione MFC, vedere [argomenti MFC generali](../mfc/general-mfc-topics.md).

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
