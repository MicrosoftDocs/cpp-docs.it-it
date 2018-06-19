---
title: Utilizzo delle classi per la scrittura di applicazioni per Windows | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows applications [MFC], MFC application framework
- MFC, application development
- applications [OLE], MFC application framework
- MFC ActiveX controls [MFC], creating
- OLE applications [MFC], MFC application framework
- database applications [MFC], creating
ms.assetid: 73f63470-857d-43dd-9a54-b38b7be0f1b7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fa126f2772e1672a1484453fdffdd487b6c45959
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33386145"
---
# <a name="using-the-classes-to-write-applications-for-windows"></a>Utilizzo delle classi per la creazione di applicazioni per Windows
Nel loro insieme, le classi nella libreria Microsoft Foundation classe (MFC) costituiscono un "framework applicazione," in cui si compila un'applicazione per il sistema operativo Windows. A livello generale, il framework definisce la struttura di un'applicazione e fornisce le implementazioni dell'interfaccia utente standard che possono essere inserite in tale struttura. Il compito del programmatore consiste nel compilare il resto della struttura, che sono gli elementi che sono specifici dell'applicazione. È possibile ottenere un punto di partenza per la creazione guidata applicazione MFC per creare i file per un'applicazione. Utilizzare l'editor di risorse Microsoft Visual C++ per progettare visivamente, gli elementi dell'interfaccia utente comandi Visualizzazione classi per connettere tali elementi di codice e la libreria di classi per implementare la logica specifica dell'applicazione.  
  
 Versione 3.0 e versioni successive del framework MFC supporta la programmazione per le piattaforme Win32, tra cui Microsoft Windows 95 e versioni successive e Windows NT versione 3.51 e successive. Supporto di MFC Win32 include il multithreading. Utilizzare la versione 1.5*x* se è necessario effettuare la programmazione di 16 bit.  
  
 Questa serie di articoli vengono fornite informazioni generali del framework dell'applicazione. Vengono inoltre descritti gli oggetti principali che costituiscono l'applicazione e come vengono creati. Tra gli argomenti trattati in questi articoli sono i seguenti:  
  
-   [Il framework](../mfc/framework-mfc.md).  
  
-   Divisione del lavoro tra il framework e il codice, come descritto in [compilazione nel Framework](../mfc/building-on-the-framework.md).  
  
-   [La classe dell'applicazione](../mfc/cwinapp-the-application-class.md), che incapsula la funzionalità a livello di applicazione.  
  
-   Come [modelli di documento](../mfc/document-templates-and-the-document-view-creation-process.md) creare e gestire documenti e le visualizzazioni associate e finestre cornice.  
  
-   Classe [CWnd](../mfc/window-objects.md), la classe di base di radice di tutte le finestre.  
  
-   [Oggetti grafici](../mfc/graphic-objects.md), ad esempio penne e pennelli.  
  
 Includono altre parti del framework:  
  
-   [Oggetti delle finestre: Panoramica](../mfc/window-objects.md)  
  
-   [Mapping e la gestione dei messaggi](../mfc/message-handling-and-mapping.md)  
  
-   [CObject, la classe Base principale in MFC](../mfc/using-cobject.md)  
  
-   [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)  
  
-   [Finestre di dialogo](../mfc/dialog-boxes.md)  
  
-   [Controlli](../mfc/controls-mfc.md)  
  
-   [Barre di controllo](../mfc/control-bars.md)  
  
-   [OLE](../mfc/ole-in-mfc.md)  
  
-   [Gestione della memoria](../mfc/memory-management.md)  
  
     Oltre a offrire un vantaggio nella scrittura di applicazioni per il sistema operativo Windows, MFC rende molto più semplice scrivere applicazioni che utilizzano in modo specifico collegamento e incorporamento tecnologia OLE. È possibile rendere l'applicazione OLE modifica contenitore, un server di modifica visual OLE o entrambi visiva e automazione per aggiungere in modo che altre applicazioni possono utilizzare gli oggetti dell'applicazione o di controllare in remoto.  
  
-   [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)  
  
     Il kit di sviluppo di controllo OLE (CDK) è ora completamente integrato con il framework. La famiglia di questo articolo fornisce una panoramica di sviluppo di controlli ActiveX con MFC. (I controlli ActiveX sono stati precedentemente noto come controlli OLE).  
  
-   [Programmazione di database](../data/data-access-programming-mfc-atl.md)  
  
     MFC fornisce anche due set di classi di database che semplificano l'accesso ai dati di scrittura di applicazioni. Utilizzando le classi di database ODBC, è possibile connettersi ai database tramite un driver Open Database Connectivity (ODBC), selezionare i record dalle tabelle e visualizzare informazioni sui record in un modulo sullo schermo. Utilizzo delle classi di oggetti DAO (Data Access), è possibile utilizzare con i database tramite il motore di database Microsoft Jet o origini di dati (non Jet) esterne, incluse le origini dati ODBC.  
  
     Inoltre, MFC sono completamente abilitati per la scrittura di applicazioni che utilizzano Unicode e multibyte character set (MBCS), in particolare double-byte character set (DBCS).  
  
 Per una Guida generale per la documentazione di MFC, vedere [argomenti MFC generali](../mfc/general-mfc-topics.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)

