---
title: 'Contenitori: Funzionalità avanzate'
ms.date: 11/04/2016
helpviewer_keywords:
- links [MFC], to embedded OLE objects
- containers [MFC], links to embedded OLE objects
- containers [MFC], advanced features
- container/server applications [MFC]
- embedded objects [MFC]
- OLE controls [MFC], containers
- OLE containers [MFC], advanced features
- server/container applications [MFC]
- containers [MFC], container applications
ms.assetid: 221fd99c-b138-40fa-ad6a-974e3b3ad1f8
ms.openlocfilehash: 9d83ba601766f4b6fb84576571239a250169abb1
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57278704"
---
# <a name="containers-advanced-features"></a>Contenitori: Funzionalità avanzate

In questo articolo vengono descritti i passaggi necessari per incorporare funzionalità avanzate facoltative nelle applicazioni contenitore esistenti. Tali funzionalità sono:

- [Un'applicazione che corrisponde a un contenitore e un server](#_core_creating_a_container_server_application)

- [Un collegamento OLE a un oggetto incorporato](#_core_links_to_embedded_objects)

##  <a name="_core_creating_a_container_server_application"></a> Creazione di un'applicazione contenitore/Server

Un'applicazione contenitore/server è un'applicazione che funge sia da contenitore che da server. Microsoft Word per Windows ne è un esempio. È possibile incorporare i documenti di Word per Windows in altre applicazioni ed è inoltre possibile importare elementi nei documenti di Word per Windows. La procedura che consente di trasformare un'applicazione sia in un contenitore che in un server completo (non è possibile creare un'applicazione contenitore/server ridotto) è analoga a quella per la creazione di un server completo.

L'articolo [server: Implementazione di un Server](../mfc/servers-implementing-a-server.md) elencata una serie di attività necessarie per implementare un'applicazione server. Per convertire un'applicazione contenitore in un'applicazione contenitore/server, è necessario eseguire alcune di quelle attività, con l'aggiunta di codice al contenitore. Di seguito vengono elencati i principali aspetti da considerare:

- Il codice del contenitore creato dalla creazione guidata applicazioni inizializza il sottosistema OLE. Non sarà necessario modificare o aggiungere nulla per tale supporto.

- Laddove la classe base di una classe di documento è `COleDocument`, modificare la classe base in `COleServerDoc`.

- Eseguire l'override `COleClientItem::CanActivate` per evitare di modificare gli elementi sul posto quando il server stesso è utilizzato per la modifica sul posto.

   Ad esempio, l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) ha incorporato un elemento creato dall'applicazione contenitore/server. Aprire l'applicazione OCLIENT e modificare sul posto l'elemento creato dall'applicazione contenitore/server. Quando si modifica l'elemento dell'applicazione, si decide che si desidera incorporare un elemento creato dall'esempio OLE MFC [HIERSVR](../visual-cpp-samples.md). A tale scopo, non utilizzare l'attivazione sul posto. È necessario aprire completamente HIERSVR per attivare questo elemento. Poiché la libreria MFC non supporta questa funzionalità OLE, l'override di `COleClientItem::CanActivate` consente di verificare questa situazione ed evitare un possibile errore di runtime nell'applicazione.

Se si crea una nuova applicazione e si desidera che funga da applicazione contenitore/server, selezionare tale opzione nella finestra di dialogo Opzioni OLE nella creazione guidata applicazione e tale supporto verrà creato automaticamente. Per altre informazioni, vedere l'articolo [Panoramica: Creazione di un contenitore di controlli ActiveX](../mfc/reference/creating-an-mfc-activex-control-container.md). Per informazioni su esempi di MFC, vedere Esempi relativi a MFC.

Notare che non è possibile inserire un'applicazione MDI in se stessa. Un'applicazione contenitore/server non può essere inserita in se stessa a meno che non sia un'applicazione SDI.

##  <a name="_core_links_to_embedded_objects"></a> Collegamenti a oggetti incorporati

I collegamenti alla funzionalità Oggetti incorporati consentono all'utente di creare un documento con un collegamento OLE a un oggetto incorporato all'interno dell'applicazione contenitore. Ad esempio, è possibile creare un documento in un elaboratore di testo contenente un foglio di calcolo incorporato. Se l'applicazione supporta i collegamenti a oggetti incorporati, è possibile incollare un collegamento al foglio di calcolo contenuto nel documento dell'elaboratore di testo. Questa funzionalità consente all'applicazione di utilizzare le informazioni contenute nel foglio di lavoro senza sapere da dove provenga originariamente.

#### <a name="to-link-to-embedded-objects-in-your-application"></a>Per eseguire il collegamento a oggetti incorporati nell'applicazione

1. Derivare la classe del documento da `COleLinkingDoc` anziché da `COleDocument`.

1. Creare un ID di classe OLE (**CLSID**) per l'applicazione tramite il generatore di ID di classe incluso con gli strumenti di sviluppo OLE.

1. Registrare l'applicazione con OLE.

1. Creare un oggetto `COleTemplateServer` come membro della classe dell'applicazione.

1. Nella funzione membro `InitInstance` della classe dell'applicazione, effettuare le operazioni seguenti:

   - Connettere l'oggetto `COleTemplateServer` ai modelli di documento chiamando la funzione membro `ConnectTemplate` dell'oggetto.

   - Chiamare il `COleTemplateServer::RegisterAll` funzione membro per registrare tutti gli oggetti di classe con il sistema OLE.

   - Chiamare il metodo `COleTemplateServer::UpdateRegistry`. L'unico parametro per `UpdateRegistry` deve essere *OAT_CONTAINER* se l'applicazione non viene avviata con l'opzione "/Embedded". In questo modo l'applicazione viene registrata come contenitore in grado di supportare collegamenti a oggetti incorporati.

         If the application is launched with the "/Embedded" switch, it should not show its main window, similar to a server application.

L'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) implementa questa funzionalità. Per un esempio di questa procedura, vedere la `InitInstance` funzionare nel *OCLIENT. CPP* file di questa applicazione di esempio.

## <a name="see-also"></a>Vedere anche

[Contenitori](../mfc/containers.md)<br/>
[Server](../mfc/servers.md)
