---
title: Creazione guidata aggiunta classe MFC
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.mfc.simple.overview
helpviewer_keywords:
- MFC Add Class Wizard
- wizards [MFC]
ms.assetid: ad3b0989-d307-43b2-9417-3f9a78889024
ms.openlocfilehash: 245963d4222188f16fd334d6950e04584ac1e978
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51520842"
---
# <a name="mfc-add-class-wizard"></a>Creazione guidata aggiunta classe MFC

Utilizzare questa procedura guidata codice per aggiungere una classe a un progetto MFC esistente o aggiungere una classe a un progetto ATL che supporta MFC. È anche possibile aggiungere classi MFC per i progetti Win32 dotati di supporto di MFC. La funzionalità specificata durante la creazione del progetto determinano le opzioni disponibili nella finestra di dialogo.

## <a name="names"></a>Nomi

In questa pagina, specificare il nome della classe, la classe di base e i nomi di file per la nuova classe.

- **Nome classe**

  Specifica il nome della nuova classe e fornisce la base predefinita per i nomi dei file in questa pagina e gli ID. Le classi C++ è in genere iniziano con "C", ad esempio, "CMyClass" diventa "MyClass", e così via.

- **Classe base**

  Specifica il nome della classe di base per la nuova classe. Per impostazione predefinita, è la classe di base [CWnd](../../mfc/reference/cwnd-class.md). La classe di base che è selezionare determina se le altre caselle in questa pagina sono attivi.

  Il tipo di classe che è impostato come classe di base determina se la classe ha un ID di finestra di dialogo o un ID di risorsa. I tipi di classi generali sono come segue:

  - Le classi quali [CButton](../../mfc/reference/cbutton-class.md), [CWnd](../../mfc/reference/cwnd-class.md), o [CDocument](../../mfc/reference/cdocument-class.md), che non richiedono una finestra di dialogo ID o ID di risorsa. Queste classi non usano un ID di risorsa o finestra di dialogo. Se si seleziona una di queste classi per la classe base, il **ID finestra di dialogo** finestra e il **DHTML resource ID** casella sono visualizzate in grigio.

  - Le classi quali [CDialog](../../mfc/reference/cdialog-class.md), [CFormView](../../mfc/reference/cformview-class.md), o [CPropertyPage](../../mfc/reference/cpropertypage-class.md), che richiede un ID di finestra di dialogo.

  - La classe [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md), che richiede un ID di finestra di dialogo, un ID di risorsa DHTML e il nome di un file HTML.

  Per le classi che richiedono un ID di finestra di dialogo, può risultare più efficiente usare la [editor di risorse](../../windows/resource-editors.md) per creare la risorsa finestra di dialogo, assegnare l'ID nel [finestra proprietà](/visualstudio/ide/reference/properties-window)e quindi creare una classe associata con tale ID di risorsa. Visualizzare [creazione di una nuova finestra di dialogo](../../windows/creating-a-new-dialog-box.md) per altre informazioni sulla creazione di una finestra di dialogo di Windows standard.

  > [!NOTE]
  > Se si crea una risorsa finestra di dialogo prima e la nuova classe da derivare `CDHtmlDialog`, eliminare il Windows standard **OK** e **Annulla** i pulsanti visualizzati nella finestra di dialogo impostazione predefinita. Nella finestra di dialogo standard di Windows si trova il DHTML form che contiene il proprio **OK** e **Annulla** pulsanti.

  Mentre la finestra di dialogo può contenere controlli Windows sia DHTML (controlli), non è consigliabile.

- **ID finestra di dialogo**

  Specifica l'ID della finestra di dialogo, se è stato selezionato `CDialog`, `CFormView`, `CPropertyPage`, o `CDHtmlDialog` come il **classe di Base**.

- **File con estensione h**

  Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.

  La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **File con estensione cpp**

  Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

  La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Active accessibility**

  Abilita il supporto di MFC per Active Accessibility chiamando [EnableActiveAccessibility](../../mfc/reference/cwnd-class.md#enableactiveaccessibility) nel costruttore. Questa opzione è disponibile per le classi derivate da [CWnd](../../mfc/reference/cwnd-class.md).

- **ID della risorsa DHTML**

  Si applica alle classi derivate da `CDHtmlDialog` solo. Specifica l'ID risorsa della finestra di dialogo DHTML. L'ID risorsa viene visualizzato nella sezione HTML del file RC del progetto, con il nome del file HTML della finestra di dialogo. La risorsa DHTML, identificata da questo ID, è ospitata nella finestra di dialogo, identificato da **ID finestra di dialogo**.

- **. File HTM**

  Si applica alle classi derivate da `CDHtmlDialog` solo. Imposta il nome del file HTML per la finestra di dialogo DHTML. Per impostazione predefinita, il nome del file si basa sul nome della classe. Il nome del file viene visualizzato nella sezione HTML del file RC del progetto, insieme all'ID di risorsa. finestra di dialogo DHTML

- **Automazione**

  Imposta il livello di classe di supporto per [automazione](../../mfc/automation.md). Automazione a livello di classe è disponibile per tutte le classi che supportano l'automazione. È anche disponibile per i progetti creati con il supporto per automazione. Vale a dire, un progetto MFC che [supporta ATL](../../atl/reference/mfc-support-in-atl-projects.md), o un progetto MFC per cui è stata selezionata la **automazione** casella di controllo nel [funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) pagina di MFC Creazione guidata applicazione.

  |Opzione|Descrizione|
  |------------|-----------------|
  |**None**|Indica che la classe non dispone di alcun supporto di automazione.|
  |**Automazione**|Indica che la classe supporta l'automazione. Se si seleziona questa opzione, la classe appena creata è disponibile come oggetto programmabile dalle applicazioni client di automazione, ad esempio Microsoft Visual Basic e Microsoft Excel. Questa opzione non è disponibile per le classi base elencate dopo questa tabella.|
  |**Oggetto generabile dall'ID di tipo**|Indica che il progetto sia la classe supporta le altre applicazioni di creazione di oggetti di questa classe usando l'automazione. Con questa opzione, i client di automazione possono creare direttamente un oggetto di automazione. L'ID del tipo nella casella di testo viene usato dall'applicazione client per specificare l'oggetto da creare; è a livello di sistema e deve essere univoco. Questa opzione non è disponibile per le classi base elencate dopo questa tabella.|

  Supporto di automazione non è disponibile per le classi di base seguenti:

  - `CAsyncMonitorFile`

  - `CAsyncSocket`

  - `CCachedDataPathProperty`

  - `CConnectionPoint`

  - `CDatabase`

  - `CDataPathProperty`

  - `CHttpFilter`

  - `CHttpServer`

  - `CInternetSession`

  - `CObject`

  - `CSocket`

- **ID del tipo**

  Imposta l'ID del tipo della classe. Il **Typeid** finestra consente di concatenare il nome del progetto e il nuovo nome della classe come indicato di seguito: *ClasseMFC*. Questo ID è modificabile solo se si seleziona il **Automation** opzione **creabile da ID tipo**.

- **Generare risorse DocTemplate**

  Indica che i documenti creati dall'applicazione dispongano di risorse al modello di documento. Per attivare questa casella di controllo, il progetto deve supportare l'architettura documento/visualizzazione MFC e la classe di base di questa classe deve essere [CFormView](../../mfc/reference/cformview-class.md).

  Visualizzare [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Classe MFC](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
