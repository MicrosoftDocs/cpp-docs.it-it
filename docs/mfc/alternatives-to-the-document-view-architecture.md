---
title: Alternative all'architettura documento / visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- documents [MFC], applications without
- CDocument class [MFC], space requirements
- views [MFC], applications without
ms.assetid: 2c22f352-a137-45ce-9971-c142173496fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1b99d8fb82b014fc2221f1ec1c0e6ad08ee75b4c
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930287"
---
# <a name="alternatives-to-the-documentview-architecture"></a>Alternative all'architettura documento/visualizzazione
Le applicazioni MFC in genere utilizzano l'architettura documento/visualizzazione per gestire le informazioni, i formati dei file e la rappresentazione visiva dei dati per gli utenti. Per la maggior parte delle applicazioni desktop, l'architettura documento/visualizzazione è un'architettura di applicazione appropriata ed efficiente. Questa architettura separa i dati dalla visualizzazione e, in molti casi, semplifica l'applicazione e riduce il codice ridondante.  
  
 Tuttavia, l'architettura documento/visualizzazione non è adatta in alcune situazioni. Considerare i seguenti esempi:  
  
-   Se si sta effettuando il porting di un'applicazione per Windows scritta in C, è possibile che si desideri completare il porting prima di aggiungere il supporto documento/visualizzazione all'applicazione.  
  
-   Se si sta scrivendo un'utilità semplice, potrebbe essere possibile evitare di utilizzare l'architettura documento/visualizzazione.  
  
-   Se il codice originale combina già la gestione dei dati con visualizzazione dei dati, non vale la pena passare il codice al modello documento/visualizzazione perché è necessario separare le due funzionalità. Potrebbe essere meglio lasciare il codice così com'è.  
  
 Per creare un'applicazione che non utilizza l'architettura documento/visualizzazione, deselezionare la **Supporto architettura documento/visualizzazione** casella di controllo nel passaggio 1 della creazione guidata applicazione MFC. Vedere [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) per informazioni dettagliate.  
  
> [!NOTE]
>  Le applicazioni basate su finestra di dialogo prodotte dalla creazione guidata applicazione MFC non utilizzano l'architettura documento/visualizzazione, pertanto **Supporto architettura documento/visualizzazione** casella di controllo è disabilitata se si seleziona il tipo di finestra di dialogo dell'applicazione.  
  
 Le procedure guidate di Visual C++, nonché gli editor di origine e di finestre di dialogo, utilizzano l'applicazione generata come per qualsiasi altra applicazione generata mediante la creazione guidata. L'applicazione può supportare le barre degli strumenti, barre di scorrimento e una barra di stato e dispone di un **sui** casella. L'applicazione non registrerà alcun modello di documento e non conterrà una classe documento.  
  
 Notare che l'applicazione generata dispone di una classe di visualizzazione `CChildView`, derivata da `CWnd`. MFC crea e posiziona un'istanza della classe di visualizzazione all'interno delle finestre cornice create dall'applicazione. MFC impone ancora di utilizzare una finestra di visualizzazione, in quanto semplifica il posizionamento e la gestione del contenuto dell'applicazione. È possibile aggiungere codice per il disegno al membro `OnPaint` di questa classe. Il codice dovrebbe aggiungere delle barre di scorrimento alla visualizzazione anziché alla cornice.  
  
 Poiché l'architettura documento/visualizzazione fornita da MFC è responsabile dell'implementazione di molte delle funzionalità di base di un'applicazione, la sua assenza nel progetto significa che il programmatore è responsabile dell'implementazione di molte funzionalità importanti dell'applicazione:  
  
-   Fornito da Creazione guidata applicazione MFC, il menu per l'applicazione contiene solo **New** e **Esci** comandi il **File** menu. (Il **New** comando è supportato solo per le applicazioni MDI, il supportano non le applicazioni SDI senza documento/visualizzazione.) La risorsa menu generata non supporterà un elenco "Usati di recente" (MRU).  
  
-   È necessario aggiungere le funzioni del gestore e le implementazioni per i comandi che verranno supportati dall'applicazione, inclusi **Open** e **salvare** sul **File** menu. MFC in genere fornisce il codice per supportare queste funzionalità, ma tale supporto è associato strettamente all'architettura documento/visualizzazione.  
  
-   La barra degli strumenti per l'applicazione, se richiesta, sarà minima.  
  
 Si consiglia di utilizzare la Creazione guidata applicazione MFC per creare applicazioni senza l'architettura documento/visualizzazione, poiché la procedura guidata garantisce la creazione di un'architettura MFC corretta. Tuttavia, se è necessario evitare l'utilizzo della procedura guidata, di seguito sono descritti diversi approcci per evitare di inserire l'architettura documento/visualizzazione nel codice:  
  
-   Considerare il documento come un'appendice non utilizzata e implementare il codice di gestione dei dati nella classe di visualizzazione, come suggerito in precedenza. L'overhead del documento è relativamente basso. Una singola [CDocument](../mfc/reference/cdocument-class.md) oggetto comporta una piccola quantità di overhead di per sé, più il leggero overhead delle `CDocument`di classi base [CCmdTarget](../mfc/reference/ccmdtarget-class.md) e [CObject](../mfc/reference/cobject-class.md). Entrambe le classi precedenti sono piccole.  
  
     Dichiarato in `CDocument`:  
  
    -   Due oggetti `CString`.  
  
    -   Tre **BOOL**s.  
  
    -   Un puntatore `CDocTemplate`.  
  
    -   Un oggetto `CPtrList` contenente un elenco delle visualizzazioni del documento.  
  
     Inoltre, il documento richiede il tempo necessario per creare l'oggetto documento, i relativi oggetti visualizzazione, una finestra cornice e un oggetto modello di documento.  
  
-   Trattare sia il documento che la visualizzazione come appendici inutilizzate. Inserire il codice di disegno e di gestione dei dati nella finestra cornice invece che nella visualizzazione. Questo approccio è più vicino al modello di programmazione del linguaggio C.  
  
-   Eseguire l'override delle parti del framework MFC che creano il documento e la visualizzazione per evitarne la creazione. Il processo di creazione del documento ha inizio con una chiamata a `CWinApp::AddDocTemplate`. Eliminare tale chiamata dalla funzione membro `InitInstance` della classe dell'applicazione e, invece, creare manualmente una finestra cornice in `InitInstance`. Inserire il codice di gestione dei dati nella classe della finestra cornice. Il processo di creazione documento/visualizzazione è illustrato [creazione documento/visualizzazione](../mfc/document-view-creation.md). Questo approccio comporta più lavoro e richiede una conoscenza più approfondita del framework, ma elimina completamente il sovraccarico della struttura documento/visualizzazione.  
  
 L'articolo [MFC: utilizzo di classi di Database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md) fornisce esempi più concreti delle alternative di documento/visualizzazione nel contesto di applicazioni di database.  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

