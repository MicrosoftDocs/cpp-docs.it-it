---
title: Creazione guidata aggiunta classe MFC
ms.date: 09/06/2019
f1_keywords:
- vc.codewiz.class.mfc.simple.overview
helpviewer_keywords:
- MFC Add Class Wizard
- wizards [MFC]
ms.assetid: ad3b0989-d307-43b2-9417-3f9a78889024
ms.openlocfilehash: 2c82e084de2123c579299ca6490bdfcfdac5d255
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70908019"
---
# <a name="mfc-add-class-wizard"></a>Creazione guidata aggiunta classe MFC

Utilizzare questa procedura guidata codice per aggiungere una classe a un progetto MFC esistente o per aggiungere una classe a un progetto ATL che supporta MFC. È inoltre possibile aggiungere classi MFC ai progetti Win32 con supporto MFC. Le funzionalità specificate al momento della creazione del progetto determinano le opzioni disponibili in questa finestra di dialogo. Per accedere alla procedura guidata, fare clic su **Aggiungi classe** in [creazione guidata](mfc-class-wizard.md)classe.

![Aggiunta guidata classe MFC](media/add-mfc-class-wizard.png "Aggiunta guidata classe MFC")

## <a name="names"></a>Nomi

In questa pagina specificare il nome della classe, la classe base e i nomi file per la nuova classe.

- **Nome classe**

  Specifica il nome della nuova classe e fornisce la base predefinita per i nomi di ID e file in questa pagina. C++le classi iniziano in genere con "C", quindi, ad esempio, "CMyClass" diventa "MyClass. h" e così via.

- **Classe base**

  Specifica il nome della classe di base per la nuova classe. Per impostazione predefinita, la classe base è [CWnd](../../mfc/reference/cwnd-class.md). La classe base selezionata determina se le altre caselle della pagina sono attive.

  Il tipo di classe impostato come classe di base determina se la classe dispone di un ID di finestra di dialogo o di un ID di risorsa. I tipi generali delle classi sono i seguenti:

  - Classi come [CButton](../../mfc/reference/cbutton-class.md), [CWnd](../../mfc/reference/cwnd-class.md)o [CDocument](../../mfc/reference/cdocument-class.md), che non necessitano di un ID di finestra di dialogo o di una risorsa. Queste classi non usano una finestra di dialogo o un ID di risorsa. Se si seleziona una di queste classi per la classe di base, le caselle **ID finestra di dialogo** e **ID risorsa DHTML** sono visualizzate in grigio.

  - Classi quali [CDialog](../../mfc/reference/cdialog-class.md), [CFormView](../../mfc/reference/cformview-class.md)o [CPROPERTYPAGE](../../mfc/reference/cpropertypage-class.md), che richiedono un ID di finestra di dialogo.

  - La classe [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md), che richiede un ID di finestra di dialogo, un ID di risorsa DHTML e un nome di file HTML.

  Per le classi che richiedono un ID finestra di dialogo, potrebbe risultare più efficiente usare l' [Editor risorse](../../windows/resource-editors.md) per creare la risorsa finestra di dialogo, assegnare il relativo ID nella [creazione guidata classe](mfc-class-wizard.md)e quindi creare una classe associata all'ID risorsa. Per ulteriori informazioni sulla creazione di una finestra di dialogo standard di Windows, vedere [creazione di una nuova](../../windows/creating-a-new-dialog-box.md) finestra di dialogo.

  > [!NOTE]
  > Se si crea prima una risorsa finestra di dialogo e si deriva la nuova `CDHtmlDialog`classe da, eliminare i pulsanti Windows **OK** e **Annulla** standard visualizzati nella finestra di dialogo predefinita. La finestra di dialogo standard di Windows ospita il formato DHTML, che contiene i pulsanti **OK** e **Annulla** .

  Sebbene la finestra di dialogo possa contenere sia controlli Windows che controlli DHTML, non è consigliabile.

- **ID finestra di dialogo**

  Specifica l'ID della finestra di dialogo, se è `CDialog`stata selezionata `CPropertyPage`l'opzione `CDHtmlDialog` , `CFormView`, o come **classe di base**.

- **File con estensione h**

  Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.

  La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **File con estensione cpp**

  Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, il nome è basato sul nome specificato in **Nome classe**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **Fine** nella procedura guidata.

  La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se l'implementazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

- **Accessibilità attiva**

  Abilita il supporto di MFC per Active Accessibility chiamando [EnableActiveAccessibility](../../mfc/reference/cwnd-class.md#enableactiveaccessibility) nel costruttore. Questa opzione è disponibile per le classi derivate da [CWnd](../../mfc/reference/cwnd-class.md).

- **Automazione**

  Imposta il livello di supporto della classe per l' [automazione](../../mfc/automation.md). L'automazione a livello di classe è disponibile per tutte le classi che supportano l'automazione. È disponibile anche per i progetti creati con supporto per l'automazione. Ovvero un progetto MFC che [supporta ATL](../../atl/reference/mfc-support-in-atl-projects.md)oppure un progetto MFC per il quale è stata selezionata la casella di controllo **automazione** nella pagina [funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) della creazione guidata applicazione MFC.

   Il supporto per l'automazione non è disponibile per le classi di base seguenti:

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

## <a name="see-also"></a>Vedere anche

[Classe MFC](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)
