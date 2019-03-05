---
title: Server di automazione
ms.date: 11/04/2016
helpviewer_keywords:
- Automation servers
- COM components, Automation servers
- dispatch maps [MFC], Automation servers
- servers, Automation
ms.assetid: 523fd155-51ce-4f91-b986-b74bdbdd7d92
ms.openlocfilehash: 39e870db2f5476a630a8ed3bc68944dbb164d469
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57305133"
---
# <a name="automation-servers"></a>Server di automazione

Automazione rende possibile per l'applicazione possa modificare oggetti implementati in un'altra applicazione o esporli in modo che possano essere modificati. Un server di automazione è un'applicazione che espone gli oggetti programmabili, denominati oggetti di automazione, ad altre applicazioni (chiamati [i client di automazione](../mfc/automation-clients.md)). Server di automazione sono talvolta denominati componenti di automazione.

Esposizione di oggetti di automazione consente ai client di automazione di alcune procedure accedendo direttamente gli oggetti e funzionalità server rende disponibili. Esposizione di oggetti in questo modo è utile quando le applicazioni forniscono funzionalità utili per le altre applicazioni. Ad esempio, un elaboratore di testo potrebbe esporre la funzionalità di controllo ortografico in modo che altri programmi possono utilizzarlo. In questo modo, l'esposizione degli oggetti consente ai fornitori di migliorare la funzionalità delle proprie applicazioni usando la funzionalità preconfezionate di altre applicazioni.

Questi oggetti di automazione hanno proprietà e metodi come interfaccia esterna. Gli attributi dell'oggetto di automazione sono denominate proprietà. Le proprietà sono come i membri dati di una classe C++. I metodi sono funzioni che operano su oggetti di automazione. I metodi sono analoghe alle funzioni membro pubblico di una classe C++.

> [!NOTE]
>  Anche se le proprietà sono come i membri dati di C++, non sono direttamente accessibili. Per fornire un accesso trasparente, impostare una variabile interna nell'oggetto di automazione con una coppia di funzioni membro get/set per accedervi.

Esponendo la funzionalità dell'applicazione tramite un'interfaccia comune e ben definita, automazione consente di creare applicazioni in un unico generale linguaggio di programmazione, ad esempio Microsoft Visual Basic, invece di in diversi, specifici dell'applicazione (macro) Lingue.

##  <a name="_core_support_for_automation_servers"></a> Supporto per i server di automazione

Visual C++ e il framework MFC fornisce supporto completo per i server di automazione. Di gestione di gran lunga l'overhead coinvolto nella creazione di un server di automazione, pertanto è possibile concentrare l'attenzione sulle funzionalità dell'applicazione.

Il principale meccanismo di framework per il supporto di automazione è la mappa di invio, un set di macro che si estende le dichiarazioni e le chiamate necessarie per esporre metodi e proprietà per OLE. Una tipica mappa di invio è simile alla seguente:

[!code-cpp[NVC_MFCAutomation#1](../mfc/codesnippet/cpp/automation-servers_1.cpp)]

La finestra proprietà e visualizzazione classi utili per la gestione di mappe di invio. Quando si aggiunge un nuovo metodo o una proprietà a una classe, Visual C++ aggiunge un che corrisponde `DISP_FUNCTION` o `DISP_PROPERTY` macro con parametri che indicano i nomi interni ed esterni dei tipi di metodo o proprietà e i dati, il nome della classe.

Il **Aggiungi classe** nella finestra di dialogo semplifica anche la dichiarazione di classi di automazione e la gestione delle relative proprietà e operazioni. Quando si utilizza la finestra di dialogo Aggiungi classe per aggiungere una classe al progetto, si specifica la classe di base. Se la classe di base consente l'automazione, la finestra di dialogo Aggiungi classe Visualizza controlli da usare per specificare se la nuova classe deve supportare l'automazione, sia che si tratti di "OLE generabile" (ovvero, se gli oggetti della classe possano essere creati in una richiesta da un client COM) e il nome esterno per il client COM da utilizzare.

Il **Aggiungi classe** nella finestra di dialogo Crea quindi una dichiarazione di classe, incluse le macro appropriate per funzionalità OLE specificato. Aggiunge anche la struttura del codice per l'implementazione di funzioni membro della classe.

La creazione guidata applicazione MFC semplifica i passaggi necessari per far funzionare l'applicazione server di automazione il piede giusto. Se si seleziona il **automazione** casella di controllo dalle **funzionalità avanzate** pagina, la creazione guidata applicazione MFC viene aggiunto all'applicazione `InitInstance` funzionare le chiamate necessarie per registrare l'automazione gli oggetti ed eseguire l'applicazione come un server di automazione.

### <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

- [Informazioni su client di automazione](../mfc/automation-clients.md)

- [Altre informazioni sulla classe CCmdTarget](../mfc/reference/ccmdtarget-class.md)

- [Altre informazioni sulla classe COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)

## <a name="see-also"></a>Vedere anche

[Automazione](../mfc/automation.md)<br/>
[Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)
