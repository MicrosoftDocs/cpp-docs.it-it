---
title: Server di automazione
ms.date: 11/04/2016
helpviewer_keywords:
- Automation servers
- COM components, Automation servers
- dispatch maps [MFC], Automation servers
- servers, Automation
ms.assetid: 523fd155-51ce-4f91-b986-b74bdbdd7d92
ms.openlocfilehash: 510acfa032ca4303962164a19130ecd1971060fc
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907967"
---
# <a name="automation-servers"></a>Server di automazione

L'automazione consente all'applicazione di modificare gli oggetti implementati in un'altra applicazione o di esporre oggetti in modo che possano essere modificati. Un server di automazione è un'applicazione che espone gli oggetti programmabili (detti oggetti di automazione) ad altre applicazioni, denominate [client di automazione](../mfc/automation-clients.md). I server di automazione sono talvolta denominati componenti di automazione.

L'esposizione di oggetti di automazione consente ai client di automatizzare determinate procedure accedendo direttamente agli oggetti e alle funzionalità resi disponibili dal server. L'esposizione di oggetti in questo modo è utile quando le applicazioni forniscono funzionalità utili per altre applicazioni. Ad esempio, un elaboratore di testo potrebbe esporre la propria funzionalità di controllo ortografico, in modo che possa essere usata da altri programmi. L'esposizione degli oggetti consente ai fornitori di migliorare le funzionalità delle applicazioni utilizzando la funzionalità di altre applicazioni predisposta.

Questi oggetti di automazione dispongono di proprietà e metodi come interfaccia esterna. Le proprietà sono attributi denominati dell'oggetto di automazione. Le proprietà sono simili ai membri dati di C++ una classe. I metodi sono funzioni che funzionano sugli oggetti di automazione. I metodi sono simili alle funzioni membro pubbliche di C++ una classe.

> [!NOTE]
>  Sebbene le proprietà siano C++ come i membri dati, non sono direttamente accessibili. Per fornire l'accesso trasparente, impostare una variabile interna nell'oggetto di automazione con una coppia di funzioni membro get/set per accedervi.

Esponendo la funzionalità dell'applicazione tramite un'interfaccia comune e ben definita, l'automazione rende possibile la creazione di applicazioni in un unico linguaggio di programmazione generale, ad esempio Microsoft Visual Basic invece che in macro diversificate specifiche dell'applicazione Lingue.

##  <a name="_core_support_for_automation_servers"></a>Supporto per i server di automazione

Visual C++ e il framework MFC forniscono supporto completo per i server di automazione. Gestiscono gran parte del sovraccarico dovuto alla creazione di un server di automazione, in modo da poter concentrare il lavoro sulle funzionalità dell'applicazione.

Il meccanismo principale del Framework per il supporto dell'automazione è la mappa di invio, un set di macro che si espande nelle dichiarazioni e le chiamate necessarie per esporre metodi e proprietà per OLE. Una mappa di invio tipica è simile alla seguente:

[!code-cpp[NVC_MFCAutomation#1](../mfc/codesnippet/cpp/automation-servers_1.cpp)]

La [creazione guidata classe](reference/mfc-class-wizard.md) e visualizzazione classi assistono alla gestione delle mappe di invio. Quando si aggiunge un nuovo metodo o proprietà a una classe, Visual Studio aggiunge una macro `DISP_FUNCTION` o `DISP_PROPERTY` corrispondente con parametri che indicano il nome della classe, i nomi esterni e interni del metodo o della proprietà e i tipi di dati.

La finestra di dialogo **Aggiungi classe** semplifica anche la dichiarazione delle classi di automazione e la gestione delle relative proprietà e operazioni. Quando si usa la finestra di dialogo Aggiungi classe per aggiungere una classe al progetto, è necessario specificare la relativa classe di base. Se la classe base consente l'automazione, nella finestra di dialogo Aggiungi classe vengono visualizzati i controlli utilizzati per specificare se la nuova classe deve supportare l'automazione, indipendentemente dal fatto che sia "OLE generabile", ovvero se gli oggetti della classe possono essere creati in una richiesta da un client COM. e il nome esterno per il client COM da usare.

La finestra di dialogo **Aggiungi classe** crea quindi una dichiarazione di classe, incluse le macro appropriate per le funzionalità OLE specificate. Aggiunge anche il codice di scheletro per l'implementazione delle funzioni membro della classe.

La creazione guidata applicazione MFC semplifica i passaggi necessari per l'applicazione del server di automazione. Se si seleziona la casella di controllo **automazione** dalla pagina **funzionalità avanzate** , la creazione guidata applicazione MFC aggiunge alla `InitInstance` funzione dell'applicazione le chiamate necessarie per registrare gli oggetti di automazione ed eseguire l'applicazione come Server di automazione.

### <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

- [Informazioni sui client di automazione](../mfc/automation-clients.md)

- [Altre informazioni sulla classe CCmdTarget](../mfc/reference/ccmdtarget-class.md)

- [Altre informazioni sulla classe COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)

## <a name="see-also"></a>Vedere anche

[Automazione](../mfc/automation.md)<br/>
[Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)
