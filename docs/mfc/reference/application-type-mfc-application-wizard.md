---
title: Tipo di applicazione, creazione guidata applicazione MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfc.exe.apptype
dev_langs:
- C++
helpviewer_keywords:
- static libraries, MFC
ms.assetid: c3f62b0e-3f13-42c5-9859-d3890d0c3e1d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e7d27245e06350a9174699fc20246d5e8997795d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46434377"
---
# <a name="application-type-mfc-application-wizard"></a>Tipo di applicazione, Creazione guidata applicazione MFC

Utilizzare questa pagina della finestra di [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md) per progettare e aggiungere funzionalità di base a una nuova applicazione MFC.

- **Tipo di applicazione**

   Specifica il tipo di supporto di documento che si desidera creare nell'applicazione. Il tipo di applicazione selezionata determina le opzioni dell'interfaccia utente disponibili per l'applicazione. Visualizzare [funzionalità dell'interfaccia utente, creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md) per altre informazioni.

   Per altre informazioni sui tipi di documenti, vedere:

   - [SDI e MDI](../../mfc/sdi-and-mdi.md)

   - [Finestre cornice](../../mfc/frame-windows.md)

   - [Classi di finestre cornice](../../mfc/frame-window-classes.md)

   - [Documenti, visualizzazioni e framework](../../mfc/documents-views-and-the-framework.md)

   - [Finestre di dialogo](../../mfc/dialog-boxes.md)

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Singolo documento**|Crea un'architettura di interfaccia (SDI) singolo documento per l'applicazione, in una classe di visualizzazione è basata sullo [classe CView](../../mfc/reference/cview-class.md). È possibile modificare la classe base per la visualizzazione nel [classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della procedura guidata. Per creare un'applicazione basata su form, ad esempio, usare [classe CFormView](../../mfc/reference/cformview-class.md) per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, finestra cornice del documento può contenere un solo documento.|
   |**Più documenti**|Crea un'architettura (MDI) interfaccia a documenti multipli per l'applicazione, in una classe di visualizzazione è basata su `CView`. È possibile modificare la classe base per la visualizzazione nel **classi generate** pagina della procedura guidata. Per creare un'applicazione basata su form, ad esempio, usare `CFormView` per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, finestra cornice del documento può contenere più finestre figlio.|
   |**Documenti a schede**|Posiziona ogni documento in una scheda separata.|
   |**Finestra di dialogo basata**|Crea un'architettura basata su finestra di dialogo per l'applicazione in una classe di finestra di dialogo si basa su `CDialog`. (Per creare una finestra di dialogo HTML, selezionare la casella **finestra di dialogo HTML Usa**.)|
   |**Usa finestra di dialogo HTML**|Finestra di dialogo solo per le applicazioni. Deriva la classe di finestra di dialogo dalla [classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) invece di [classe CDialog](../../mfc/reference/cdialog-class.md). Se si seleziona questa casella `CDHtmlDialog` è elencato nella **classe di Base** nella casella il [classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della procedura guidata.<br /><br /> Oggetto `CDHtmlDialog`-finestra di dialogo derivata consente di visualizzare le finestre di dialogo basata su HTML, scambia dati con HTML controllano e gestisce gli eventi HTML.|
   |**Più documenti di primo livello**|Crea un'architettura di primo livello multipli per l'applicazione, in una classe di visualizzazione si basa su `CView`.<br /><br /> In questo tipo di applicazione, quando un utente fa clic **New** (o **nuovo Frame**) nella **File** menu, l'applicazione crea una finestra del cui padre è implicitamente il desktop. Il nuovo frame del documento viene visualizzato nella barra delle applicazioni e non è limitato all'area client della finestra dell'applicazione.|

- **Supporto per l'architettura documento/visualizzazione**

   Specifica se includere l'architettura documento/visualizzazione all'interno dell'applicazione tramite il [CDocument (classe)](../../mfc/reference/cdocument-class.md) e il [classe CView](../../mfc/reference/cview-class.md) (impostazione predefinita). Deselezionare questa casella di controllo se si trasferisce un'applicazione non MFC o se si desidera ridurre le dimensioni del file eseguibile compilato. Per impostazione predefinita, un'applicazione senza l'architettura documento/visualizzazione è derivata dalla [classe CWinApp](../../mfc/reference/cwinapp-class.md), e non include il supporto MFC per aprire un documento da un file su disco.

- **Lingua della risorsa**

   Imposta la lingua delle risorse. L'elenco Visualizza le lingue disponibili nel sistema, come installati da Visual Studio. Se si desidera selezionare una lingua diversa dalla lingua di sistema, la cartella di modello appropriato per tale lingua deve essere già installata. Per altre informazioni sull'installazione di risorse di lingua diverse da quella predefinita disponibile nel **lingua della risorsa** elenco, vedere [supportate procedure guidate per altri linguaggi](../../ide/wizard-support-for-other-languages.md).

   Il linguaggio selezionato viene riflessa nel **stringhe localizzate** opzione delle [stringhe modello documento, creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md) pagina della procedura guidata.

- **Usare le librerie di Unicode**

   Specifica se viene utilizzata la versione Unicode o non Unicode delle librerie MFC.

- **Stile del progetto**

   Indica se l'applicazione ha un standard MFC, Esplora File, Visual Studio, o architettura di Office e visualizzazione. Per altre informazioni, vedere [creazione di un'applicazione MFC di tipo Esplora File](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md).

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Standard MFC**|Fornisce un'architettura di applicazioni MFC standard.|
   |**Esplora file**|Implementa un'applicazione simile a Esplora File tramite una finestra con separatore in cui il riquadro a sinistra è un [classe CTreeView](../../mfc/reference/ctreeview-class.md) e il riquadro destro è un [classe CListView](../../mfc/reference/clistview-class.md).|
   |**Visual Studio**|Implementa un'applicazione di Visual Studio-like che contiene quattro riquadri ancorabili (**visualizzazione File**, **Visualizzazione classi**, **proprietà**, e **Output**) che vengono ricavati [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) e una finestra cornice principale che è derivata da [CMDIFrameWndEx (classe)](../../mfc/reference/cmdiframewndex-class.md) (impostazione predefinita).|
   |**Office**|Implementa un'applicazione simile a Office che contiene una barra multifunzione che è derivata da [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md), una barra di Outlook che è derivata da [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md), derivato da una barra del titolo [Classe CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)e una cornice principale che è derivata da [CMDIFrameWndEx (classe)](../../mfc/reference/cmdiframewndex-class.md).|

- **I colori e stile di visualizzazione**

   Determina lo stile di visualizzazione dell'applicazione. Sono disponibili le seguenti opzioni:

   - **Windows Native o predefinita**

   - **Office 2003**

   - **Visual Studio 2005**

   - **Office 2007 (tema blu)**

   - **Office 2007 (tema di colore nero)**

   - **Office 2007 (grigio)**

   - **Office 2007 (azzurro)**

- **Abilitare il passaggio dello stile di visualizzazione**

   Specifica se l'utente modificabili lo stile di visualizzazione dell'applicazione in fase di esecuzione, in genere selezionando lo stile di visualizzazione appropriato dal menu o la barra multifunzione.

- **Uso di MFC**

   Specifica la modalità di collegamento alla libreria MFC. Per impostazione predefinita, MFC viene collegato come una DLL condivisa.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Usa MFC in una DLL condivisa**|Collega la libreria MFC per un'applicazione come DLL condivisa. L'applicazione effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione consente di ridurre i requisiti di memoria e disco di applicazioni costituite da più file eseguibili che usano la libreria MFC. Applicazioni Win32 e di MFC è possono chiamare funzioni della DLL (impostazione predefinita)|
   |**Usa MFC in una libreria statica**|Collega un'applicazione per la libreria statica di MFC in fase di compilazione.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Tipi di file creati per i progetti di Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md)

