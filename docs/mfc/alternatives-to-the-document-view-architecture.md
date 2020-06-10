---
title: Alternative all'architettura documento/visualizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- documents [MFC], applications without
- CDocument class [MFC], space requirements
- views [MFC], applications without
ms.assetid: 2c22f352-a137-45ce-9971-c142173496fb
ms.openlocfilehash: 66325d1ae087b29f59f37197fb8695504bbddbc6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619748"
---
# <a name="alternatives-to-the-documentview-architecture"></a>Alternative all'architettura documento/visualizzazione

Le applicazioni MFC in genere utilizzano l'architettura documento/visualizzazione per gestire le informazioni, i formati dei file e la rappresentazione visiva dei dati per gli utenti. Per la maggior parte delle applicazioni desktop, l'architettura documento/visualizzazione è un'architettura di applicazione appropriata ed efficiente. Questa architettura separa i dati dalla visualizzazione e, in molti casi, semplifica l'applicazione e riduce il codice ridondante.

Tuttavia, l'architettura documento/visualizzazione non è adatta in alcune situazioni. Considerare i seguenti esempi:

- Se si sta effettuando il porting di un'applicazione per Windows scritta in C, è possibile che si desideri completare il porting prima di aggiungere il supporto documento/visualizzazione all'applicazione.

- Se si sta scrivendo un'utilità semplice, potrebbe essere possibile evitare di utilizzare l'architettura documento/visualizzazione.

- Se il codice originale combina già la gestione dei dati con visualizzazione dei dati, non vale la pena passare il codice al modello documento/visualizzazione perché è necessario separare le due funzionalità. Potrebbe essere meglio lasciare il codice così com'è.

Per creare un'applicazione che non utilizza l'architettura documento/visualizzazione, deselezionare la casella di controllo **supporto architettura documento/visualizzazione** nel passaggio 1 della creazione guidata applicazione MFC. Per informazioni dettagliate, vedere la [creazione guidata applicazione MFC](reference/mfc-application-wizard.md) .

> [!NOTE]
> Le applicazioni basate su finestra di dialogo generate dalla creazione guidata applicazione MFC non utilizzano l'architettura documento/visualizzazione, quindi la casella di controllo **supporto architettura documento/visualizzazione** è disabilitata se si seleziona il tipo di applicazione della finestra di dialogo.

Le procedure guidate di Visual C++, nonché gli editor di origine e di finestre di dialogo, utilizzano l'applicazione generata come per qualsiasi altra applicazione generata mediante la creazione guidata. L'applicazione può supportare barre degli strumenti, barre di scorrimento e una barra di stato e dispone **di una finestra informazioni su** . L'applicazione non registrerà alcun modello di documento e non conterrà una classe documento.

Si noti che l'applicazione generata dispone di una classe di visualizzazione, `CChildView` , derivata da `CWnd` . MFC crea e posiziona un'istanza della classe di visualizzazione all'interno delle finestre cornice create dall'applicazione. MFC impone ancora di utilizzare una finestra di visualizzazione, in quanto semplifica il posizionamento e la gestione del contenuto dell'applicazione. È possibile aggiungere codice per il disegno al membro `OnPaint` di questa classe. Il codice dovrebbe aggiungere delle barre di scorrimento alla visualizzazione anziché alla cornice.

Poiché l'architettura documento/visualizzazione fornita da MFC è responsabile dell'implementazione di molte delle funzionalità di base di un'applicazione, la sua assenza nel progetto significa che il programmatore è responsabile dell'implementazione di molte funzionalità importanti dell'applicazione:

- Come indicato nella creazione guidata applicazione MFC, il menu dell'applicazione contiene solo comandi **nuovi** e di **uscita** dal menu **file** . Il **nuovo** comando è supportato solo per le applicazioni MDI, non per le applicazioni SDI senza supporto per documenti/visualizzazioni. La risorsa di menu generata non supporterà un elenco MRU (usato più di recente).

- È necessario aggiungere le funzioni del gestore e le implementazioni per tutti i comandi supportati dall'applicazione, tra cui **Apri** e **Salva** nel menu **file** . MFC in genere fornisce il codice per supportare queste funzionalità, ma tale supporto è associato strettamente all'architettura documento/visualizzazione.

- La barra degli strumenti per l'applicazione, se richiesta, sarà minima.

Si consiglia di utilizzare la Creazione guidata applicazione MFC per creare applicazioni senza l'architettura documento/visualizzazione, poiché la procedura guidata garantisce la creazione di un'architettura MFC corretta. Tuttavia, se è necessario evitare l'utilizzo della procedura guidata, di seguito sono descritti diversi approcci per evitare di inserire l'architettura documento/visualizzazione nel codice:

- Considerare il documento come un'appendice non utilizzata e implementare il codice di gestione dei dati nella classe di visualizzazione, come suggerito in precedenza. L'overhead del documento è relativamente basso. Un singolo oggetto [CDocument](reference/cdocument-class.md) comporta una piccola quantità di overhead, oltre al sovraccarico ridotto delle `CDocument` classi base di, [CCmdTarget](reference/ccmdtarget-class.md) e [CObject](reference/cobject-class.md). Entrambe le classi precedenti sono piccole.

   Dichiarata in `CDocument` :

  - Due oggetti `CString`.

  - Tre **bool**.

  - Un puntatore `CDocTemplate`.

  - Un oggetto `CPtrList` contenente un elenco delle visualizzazioni del documento.

  Inoltre, il documento richiede il tempo necessario per creare l'oggetto documento, i relativi oggetti visualizzazione, una finestra cornice e un oggetto modello di documento.

- Trattare sia il documento che la visualizzazione come appendici inutilizzate. Inserire il codice di disegno e di gestione dei dati nella finestra cornice invece che nella visualizzazione. Questo approccio è più vicino al modello di programmazione del linguaggio C.

- Eseguire l'override delle parti del framework MFC che creano il documento e la visualizzazione per evitarne la creazione. Il processo di creazione del documento ha inizio con una chiamata a `CWinApp::AddDocTemplate`. Eliminare tale chiamata dalla funzione membro `InitInstance` della classe dell'applicazione e, invece, creare manualmente una finestra cornice in `InitInstance`. Inserire il codice di gestione dei dati nella classe della finestra cornice. Il processo di creazione documento/visualizzazione è illustrato in [creazione documento/visualizzazione](document-view-creation.md). Questo approccio comporta più lavoro e richiede una conoscenza più approfondita del framework, ma elimina completamente il sovraccarico della struttura documento/visualizzazione.

L'articolo [MFC: utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md) fornisce esempi più concreti di alternative documento/visualizzazione nel contesto di applicazioni di database.

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
