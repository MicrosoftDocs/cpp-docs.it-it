---
title: Server di automazione
ms.date: 11/04/2016
helpviewer_keywords:
- Automation servers
- COM components, Automation servers
- dispatch maps [MFC], Automation servers
- servers, Automation
ms.assetid: 523fd155-51ce-4f91-b986-b74bdbdd7d92
ms.openlocfilehash: 391cb2f6ff5673296f40e21113e3a6510f71d475
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370831"
---
# <a name="automation-servers"></a>Server di automazione

L'automazione consente all'applicazione di modificare gli oggetti implementati in un'altra applicazione o di esporre gli oggetti in modo che possano essere modificati. Un server di automazione è un'applicazione che espone oggetti programmabili (denominati oggetti di automazione) ad altre applicazioni (denominati client di [automazione).](../mfc/automation-clients.md) I server di automazione sono talvolta denominati componenti di automazione.

L'esposizione di oggetti di automazione consente ai client di automatizzare determinate procedure accedendo direttamente agli oggetti e alle funzionalità resi disponibili dal server. L'esposizione di oggetti in questo modo è utile quando le applicazioni forniscono funzionalità utili per altre applicazioni. Ad esempio, un elaboratore di testi potrebbe esporre la funzionalità di controllo ortografico in modo che altri programmi possano utilizzarla. L'esposizione degli oggetti consente quindi ai fornitori di migliorare le funzionalità delle applicazioni utilizzando la funzionalità già pronta di altre applicazioni.

Questi oggetti di automazione dispongono di proprietà e metodi come interfaccia esterna. Le proprietà sono attributi denominati dell'oggetto di automazione. Le proprietà sono simili ai membri dati di una classe C . I metodi sono funzioni che funzionano sugli oggetti di automazione. I metodi sono simili alle funzioni membro pubbliche di una classe di C.

> [!NOTE]
> Anche se le proprietà sono come i membri dati di C, non sono direttamente accessibili. Per fornire l'accesso trasparente, impostare una variabile interna nell'oggetto di automazione con una coppia di funzioni membro get/set per accedervi.

Esponendo le funzionalità dell'applicazione tramite un'interfaccia comune e ben definita, l'automazione consente di compilare applicazioni in un unico linguaggio di programmazione generale come Microsoft Visual Basic anziché in diversi linguaggi di macro specifici dell'applicazione.

## <a name="support-for-automation-servers"></a><a name="_core_support_for_automation_servers"></a>Supporto per i server di automazione

Con il framework MFC e Visual C, i server Visual C e il framework MFC forniscono un ampio supporto per i server di automazione. Gestiscono gran parte dell'overhead necessario per la creazione di un server di automazione, in modo da poter concentrare gli sforzi sulle funzionalità dell'applicazione.

Il meccanismo principale del framework per il supporto dell'automazione è la mappa di invio, un set di macro che si espande nelle dichiarazioni e nelle chiamate necessarie per esporre metodi e proprietà per OLE. Una tipica mappa di spedizione è simile alla seguente:A typical dispatch map looks like this:

[!code-cpp[NVC_MFCAutomation#1](../mfc/codesnippet/cpp/automation-servers_1.cpp)]

La [Creazione guidata classe](reference/mfc-class-wizard.md) e Visualizzazione classi facilitano la gestione delle mappe di invio. Quando si aggiunge un nuovo metodo o una nuova `DISP_FUNCTION` `DISP_PROPERTY` proprietà a una classe, Visual Studio aggiunge una o più macro corrispondenti con parametri che indicano il nome della classe, i nomi esterni e interni del metodo o della proprietà e i tipi di dati.

La finestra di dialogo **Aggiungi classe** semplifica inoltre la dichiarazione delle classi di automazione e la gestione delle relative proprietà e operazioni. Quando si utilizza la finestra di dialogo Aggiungi classe per aggiungere una classe al progetto, specificare la relativa classe base. Se la classe di base consente l'automazione, nella finestra di dialogo Aggiungi classe vengono visualizzati i controlli utilizzati per specificare se la nuova classe deve supportare l'automazione, se è "OLE creabile" (ovvero, se gli oggetti della classe possono essere creati su una richiesta da un client COM) e il nome esterno per il client COM da utilizzare.

La finestra di dialogo **Aggiungi classe** crea quindi una dichiarazione di classe, incluse le macro appropriate per le funzionalità OLE specificate. Aggiunge inoltre lo scheletro di codice per l'implementazione delle funzioni membro della classe.

La Creazione guidata applicazione MFC semplifica i passaggi necessari per ottenere l'applicazione server di automazione da zero. Se si seleziona la casella di controllo **Automazione** nella pagina Funzionalità `InitInstance` **avanzate,** la Creazione guidata applicazione MFC aggiunge alla funzione dell'applicazione le chiamate necessarie per registrare gli oggetti di automazione ed eseguire l'applicazione come server di automazione.

### <a name="what-do-you-want-to-do"></a>Cosa vuoi fare

- [Informazioni sui client di automazione](../mfc/automation-clients.md)

- [Ulteriori informazioni sulla classe CCmdTarget](../mfc/reference/ccmdtarget-class.md)

- [Ulteriori informazioni sulla classe COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)

## <a name="see-also"></a>Vedere anche

[Automazione](../mfc/automation.md)<br/>
[Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)
