---
description: 'Ulteriori informazioni su: tipo di applicazione, creazione guidata applicazione MFC'
title: Tipo di applicazione, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.apptype
helpviewer_keywords:
- static libraries, MFC
ms.assetid: c3f62b0e-3f13-42c5-9859-d3890d0c3e1d
ms.openlocfilehash: 178e9c1319b17e356273fc3e59d2133c8d4aa54c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322785"
---
# <a name="application-type-mfc-application-wizard"></a>Tipo di applicazione, Creazione guidata applicazione MFC

Utilizzare questa pagina della [creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md) per progettare e aggiungere funzionalità di base a una nuova applicazione MFC.

- **Tipo di applicazione**

  Specifica il tipo di supporto del documento che si desidera creare nell'applicazione. Il tipo di applicazione selezionato determina le opzioni dell'interfaccia utente disponibili per l'applicazione. Per ulteriori informazioni [, vedere funzionalità dell'interfaccia utente, creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md) .

   Per ulteriori informazioni sui tipi di documenti, vedere:

  - [SDI e MDI](../../mfc/sdi-and-mdi.md)

  - [Finestre cornice](../../mfc/frame-windows.md)

  - [Classi della finestra cornice](../../mfc/frame-window-classes.md)

  - [Documenti, visualizzazioni e Framework](../../mfc/documents-views-and-the-framework.md)

  - [Finestre di dialogo](../../mfc/dialog-boxes.md)

  |Opzione|Description|
  |------------|-----------------|
  |**Documento singolo**|Crea un'architettura di interfaccia a documento singolo (SDI) per l'applicazione, in cui una classe di visualizzazione è basata sulla [classe CView](../../mfc/reference/cview-class.md). È possibile modificare la classe di base per la vista nella pagina [classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) della procedura guidata. Per creare un'applicazione basata su form, ad esempio, usare la [classe CFormView](../../mfc/reference/cformview-class.md) per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, la finestra cornice del documento può ospitare un solo documento.|
  |**Più documenti**|Crea un'architettura di interfaccia a documenti multipli (MDI) per l'applicazione, in cui è basata una classe di visualizzazione `CView` . È possibile modificare la classe di base per la visualizzazione nella pagina **classi generate** della procedura guidata. Per creare un'applicazione basata su form, ad esempio, usare `CFormView` per la classe di visualizzazione.<br /><br /> In questo tipo di applicazione, la finestra cornice del documento può ospitare più finestre figlio.|
  |**Documenti a schede**|Inserisce ogni documento in una scheda separata.|
  |**Basato sulla finestra di dialogo**|Crea un'architettura basata su finestre di dialogo per l'applicazione in cui è basata una classe della finestra di dialogo `CDialog` . Per creare una finestra di dialogo HTML, selezionare la casella **Usa finestra di dialogo HTML**.|
  |**Usa finestra di dialogo HTML**|Solo per le applicazioni della finestra di dialogo. Deriva la classe della finestra di dialogo dalla [classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) anziché da [CDialog](../../mfc/reference/cdialog-class.md). Se si seleziona questa casella, `CDHtmlDialog` viene elencato nella casella **classe di base** nella pagina [classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md) della procedura guidata.<br /><br /> Una finestra di `CDHtmlDialog` dialogo derivata da Visualizza le finestre di dialogo basate su HTML, scambia i dati con i controlli HTML e gestisce gli eventi HTML.|
  |**Più documenti di primo livello**|Crea un'architettura più di primo livello per l'applicazione, in cui è basata una classe di visualizzazione `CView` .<br /><br /> In questo tipo di applicazione, quando un utente fa clic su **nuovo** (o **nuovo frame**) dal menu **file** , l'applicazione crea una finestra il cui elemento padre è implicitamente il desktop. Il nuovo frame del documento viene visualizzato nella barra delle applicazioni e non è limitato all'area client della finestra dell'applicazione.|

- **Supporto per l'architettura documento/visualizzazione**

  Specifica se includere l'architettura documento/visualizzazione nell'applicazione usando la [classe CDocument](../../mfc/reference/cdocument-class.md) e la [classe CView](../../mfc/reference/cview-class.md) (impostazione predefinita). Deselezionare questa casella di controllo se si esegue il porting di un'applicazione non MFC o se si desidera ridurre le dimensioni del file eseguibile compilato. Per impostazione predefinita, un'applicazione senza architettura documento/visualizzazione è derivata dalla [classe CWinApp](../../mfc/reference/cwinapp-class.md)e non include il supporto MFC per l'apertura di un documento da un file su disco.

- **Lingua della risorsa**

  Imposta la lingua delle risorse. L'elenco Visualizza le lingue disponibili nel sistema, come installato da Visual Studio. Se si desidera selezionare una lingua diversa dalla lingua del sistema, è necessario che sia già installata la cartella del modello appropriata per tale lingua.

  La lingua selezionata viene riflessa nell'opzione **stringhe localizzate** della pagina [stringhe modello di documento, creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md) della procedura guidata.

- **Usare le librerie Unicode**

  Specifica se viene utilizzata la versione Unicode o non Unicode delle librerie MFC.

- **Stile progetto**

  Indica se l'applicazione dispone di un MFC standard, di Esplora file, di Visual Studio o di un'architettura di Office e di visualizzazione. Per ulteriori informazioni, vedere [creazione di un File Explorer-Style applicazione MFC](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md).

  |Opzione|Description|
  |------------|-----------------|
  |**Standard MFC**|Fornisce un'architettura di applicazione MFC standard.|
  |**Esplora file**|Implementa un'applicazione simile a Esplora file usando una finestra con barra di divisione in cui il riquadro sinistro è una [classe CTreeView](../../mfc/reference/ctreeview-class.md) e il riquadro destro è una [classe CListView](../../mfc/reference/clistview-class.md).|
  |**Visual Studio**|Implementa un'applicazione simile a Visual Studio che contiene quattro riquadri ancorabili (**visualizzazione file**, **Visualizzazione classi**, **proprietà** e **output**) derivati dalla [classe CDockablePane](../../mfc/reference/cdockablepane-class.md) e da una finestra cornice principale derivata dalla [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md) (impostazione predefinita).|
  |**Office**|Implementa un'applicazione simile a Office che contiene una barra multifunzione derivata dalla [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md), una barra di Outlook derivata dalla [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md), una barra del titolo derivata dalla [classe CMFCCaptionBar](../../mfc/reference/cmfccaptionbar-class.md)e un frame principale derivato dalla [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).|

- **Stile di visualizzazione e colori**

  Determina lo stile di visualizzazione dell'applicazione. Sono disponibili le opzioni seguenti:

  - **Windows nativo/predefinito**

  - **Office 2003**

  - **Visual Studio 2005**

  - **Office 2007 (tema blu)**

  - **Office 2007 (tema nero)**

  - **Office 2007 (tema Silver)**

  - **Office 2007 (tema Aqua)**

- **Abilita cambio stile di visualizzazione**

  Specifica se l'utente può modificare lo stile di visualizzazione dell'applicazione in fase di esecuzione, in genere selezionando lo stile di visualizzazione appropriato da un menu o una barra multifunzione.

- **Uso di MFC**

  Specifica la modalità di collegamento alla libreria MFC. Per impostazione predefinita, MFC è collegato come DLL condivisa.

  |Opzione|Description|
  |------------|-----------------|
  |**Usare MFC in una DLL condivisa**|Collega la libreria MFC a un'applicazione come DLL condivisa. L'applicazione effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione consente di ridurre i requisiti di memoria e disco delle applicazioni costituite da più file eseguibili che utilizzano la libreria MFC. Le applicazioni Win32 e MFC possono chiamare funzioni nella DLL (impostazione predefinita)|
  |**Usare MFC in una libreria statica**|Collega un'applicazione alla libreria MFC statica in fase di compilazione.|

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Tipi di file creati per i progetti di Visual Studio C++](../../build/reference/file-types-created-for-visual-cpp-projects.md)
