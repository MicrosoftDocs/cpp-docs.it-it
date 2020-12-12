---
description: 'Altre informazioni su: uso delle classi per la scrittura di applicazioni per Windows'
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
ms.openlocfilehash: b94155b565872b614efa291699cecbaf4770fdaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322712"
---
# <a name="using-the-classes-to-write-applications-for-windows"></a>Utilizzo delle classi per la creazione di applicazioni per Windows

Insieme, le classi nella libreria MFC (Microsoft Foundation Class) costituiscono un "Framework applicazione", in cui viene creata un'applicazione per il sistema operativo Windows. A un livello generale, il Framework definisce lo scheletro di un'applicazione e fornisce implementazioni standard dell'interfaccia utente che possono essere inserite nello scheletro. Il tuo lavoro come programmatore consiste nel compilare il resto dello scheletro, che sono le cose specifiche per l'applicazione. È possibile iniziare utilizzando la creazione guidata applicazione MFC per creare i file per un'applicazione iniziale molto completa. Usare gli editor di risorse Microsoft Visual C++ per progettare visivamente gli elementi dell'interfaccia utente, Visualizzazione classi comandi per connettere tali elementi al codice e la libreria di classi per implementare la logica specifica dell'applicazione.

La versione 3,0 e successive del framework MFC supporta la programmazione per le piattaforme Win32, tra cui Microsoft Windows 95 e versioni successive e Windows NT versione 3,51 e successive. Il supporto Win32 per MFC include il multithreading. Se è necessario eseguire la programmazione a 16 bit, utilizzare la versione 1,5 *x* .

Questa famiglia di articoli presenta una panoramica generale del Framework applicazione. Vengono inoltre esaminati gli oggetti principali che costituiscono l'applicazione e il modo in cui vengono creati. Gli argomenti trattati in questi articoli sono i seguenti:

- [Framework](../mfc/framework-mfc.md).

- Divisione del lavoro tra il Framework e il codice, come descritto in [compilazione del Framework](../mfc/building-on-the-framework.md).

- [Classe dell'applicazione](../mfc/cwinapp-the-application-class.md), che incapsula la funzionalità a livello di applicazione.

- Il modo in cui i [modelli di documento](../mfc/document-templates-and-the-document-view-creation-process.md) creano e gestiscono documenti e le relative visualizzazioni e finestre cornice.

- Classe [CWnd](../mfc/window-objects.md), la classe base radice di tutte le finestre.

- [Oggetti grafici](../mfc/graphic-objects.md), ad esempio penne e pennelli.

Altre parti del Framework includono:

- [Oggetti finestra: Panoramica](../mfc/window-objects.md)

- [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

- [CObject, la classe base radice in MFC](../mfc/using-cobject.md)

- [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

- [Finestre di dialogo](../mfc/dialog-boxes.md)

- [Controlli](../mfc/controls-mfc.md)

- [Barre di controllo](../mfc/control-bars.md)

- [OLE](../mfc/ole-in-mfc.md)

- [Gestione della memoria](../mfc/memory-management.md)

   Oltre a offrire un vantaggio per la scrittura di applicazioni per il sistema operativo Windows, MFC rende molto più semplice scrivere applicazioni che utilizzano in modo specifico la tecnologia di collegamento e incorporamento OLE. È possibile rendere l'applicazione un contenitore di modifica visiva OLE, un server di modifica visiva OLE o entrambi, ed è possibile aggiungere l'automazione in modo che altre applicazioni possano usare oggetti dell'applicazione o persino indirizzarli in modalità remota.

- [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

   OLE Control Development Kit (CDK) è ora completamente integrato con il Framework. Questa famiglia di articoli fornisce una panoramica dello sviluppo di controlli ActiveX con MFC. I controlli ActiveX erano noti in precedenza come controlli OLE.

- [Programmazione di database](../data/data-access-programming-mfc-atl.md)

   MFC fornisce inoltre due set di classi di database che semplificano la scrittura di applicazioni di accesso ai dati. Utilizzando le classi di database ODBC, è possibile connettersi ai database tramite un driver Open Database Connectivity (ODBC), selezionare i record dalle tabelle e visualizzare le informazioni sui record in un form sullo schermo. Utilizzando le classi DAO (Data Access Object), è possibile utilizzare i database di tramite il motore di database di Microsoft Jet o origini dati esterne (non Jet), incluse le origini dati ODBC.

   MFC è inoltre completamente abilitato per la scrittura di applicazioni che utilizzano i set di caratteri Unicode e multibyte (MBCS), in particolare DBCS (Double-byte character set).

Per una guida generale alla documentazione di MFC, vedere gli [argomenti generali di MFC](../mfc/general-mfc-topics.md).

## <a name="see-also"></a>Vedi anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
