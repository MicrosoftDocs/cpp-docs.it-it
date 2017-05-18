---
title: Guidata aggiunta classe MFC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.class.mfc.simple.overview
dev_langs:
- C++
helpviewer_keywords:
- MFC Add Class Wizard
- wizards [MFC]
ms.assetid: ad3b0989-d307-43b2-9417-3f9a78889024
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: 08d258c2b8386a4dd0c1d24c6ac6aa10f6c04a63
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="mfc-add-class-wizard"></a>Creazione guidata aggiunta classe MFC
Questa procedura guidata di codice per aggiungere una classe a un progetto MFC esistente o aggiungere una classe a un progetto ATL che supporta MFC. È inoltre possibile aggiungere classi MFC ai progetti Win32 che dispongono del supporto MFC. Le funzionalità specificate durante la creazione del progetto determinano le opzioni disponibili nella finestra di dialogo.  
  
## <a name="names"></a>Nomi  
 In questa pagina, specificare il nome della classe, la classe di base e i nomi di file per la nuova classe.  
  
 **Nome della classe**  
 Specifica il nome della nuova classe e fornisce la base predefinita per i nomi di ID e i file in questa pagina. Le classi C++ iniziano in genere con "C", ad esempio, "CMyClass" diventa "MyClass", e così via.  
  
 **Classe di base**  
 Specifica il nome della classe di base per la nuova classe. Per impostazione predefinita, la classe base è [CWnd](../../mfc/reference/cwnd-class.md). La classe di base selezionata determina se le altre caselle in questa pagina sono attive.  
  
 Il tipo di classe che è impostato come classe di base determina se la classe ha un ID di finestra di dialogo o un ID risorsa. I tipi generali di classi sono come segue:  
  
-   Le classi quali [CButton](../../mfc/reference/cbutton-class.md), [CWnd](../../mfc/reference/cwnd-class.md), o [CDocument](../../mfc/reference/cdocument-class.md), che non richiedono una finestra di dialogo ID o ID di risorsa. Queste classi non utilizzano un ID di finestra di dialogo o risorsa. Se si seleziona una di queste classi per la classe base, il **ID di finestra di dialogo** casella e **ID risorsa DHTML** casella vengono visualizzati in grigio.  
  
-   Le classi quali [CDialog](../../mfc/reference/cdialog-class.md), [CFormView](../../mfc/reference/cformview-class.md), o [CPropertyPage](../../mfc/reference/cpropertypage-class.md), che richiedono un ID di finestra di dialogo.  
  
-   La classe [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md), che richiede un ID di finestra di dialogo, un ID risorsa DHTML e un nome di file HTML.  
  
 Per le classi che richiedono un ID di finestra di dialogo, può risultare più efficiente utilizzare il [editor risorse](../../windows/resource-editors.md) per creare la risorsa finestra di dialogo, assegnare il relativo ID nel [finestra proprietà](/visualstudio/ide/reference/properties-window)e quindi creare una classe associata all'ID di risorsa. Vedere [la creazione di una nuova finestra di dialogo](../../windows/creating-a-new-dialog-box.md) per ulteriori informazioni sulla creazione di una finestra di dialogo standard di Windows.  
  
> [!NOTE]
>  Se si crea innanzitutto una risorsa finestra di dialogo e derivare la nuova classe da `CDHtmlDialog`, eliminare standard di Windows **OK** e **Annulla** pulsanti visualizzati nella finestra di dialogo predefinita. Nella finestra di dialogo standard di Windows si trova il DHTML form che contiene il proprio **OK** e **Annulla** pulsanti.  
  
 Mentre la finestra di dialogo può contenere controlli Windows sia DHTML (controlli), non è consigliabile.  
  
 **ID finestra di dialogo**  
 Specifica l'ID della finestra di dialogo, se si seleziona `CDialog`, `CFormView`, `CPropertyPage`, o `CDHtmlDialog` come il **classe di Base**.  
  
 **file con estensione h**  
 Imposta il nome del file di intestazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome classe**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso prescelto o per aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, il non verrà salvato nella posizione selezionata finché non si sceglie **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se la dichiarazione di classe al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **file con estensione cpp**  
 Imposta il nome del file di implementazione per la nuova classe dell'oggetto. Per impostazione predefinita, questo nome è basato sul nome fornito in **nome classe**. Fare clic sul pulsante con puntini di sospensione per salvare il nome del file nel percorso desiderato. Il file non viene salvato nel percorso selezionato fino a quando non si fa clic su **fine** nella procedura guidata.  
  
 La procedura guidata non sovrascrive un file. Se si seleziona il nome di un file esistente, quando si fa clic su **fine**, verrà richiesto di indicare se è necessario aggiungere l'implementazione della classe in base al contenuto del file. Fare clic su **Sì** per aggiungere il file, fare clic su **n** per tornare alla procedura guidata e specificare un altro nome di file.  
  
 **Active accessibility**  
 Abilita il supporto di MFC per Active Accessibility chiamando [EnableActiveAccessibility](../../mfc/reference/cwnd-class.md#enableactiveaccessibility) nel costruttore. Questa opzione è disponibile per le classi derivate da [CWnd](../../mfc/reference/cwnd-class.md).  
  
 **ID risorsa DHTML**  
 Si applica alle classi derivate da `CDHtmlDialog` solo. Specifica l'ID risorsa della finestra di dialogo DHTML. L'ID di risorsa viene visualizzato nella sezione HTML del file RC del progetto, con il nome del file HTML della finestra di dialogo. La risorsa DHTML identificata da questo ID è contenuta nella finestra di dialogo, identificata da **ID di finestra di dialogo**.  
  
 **. In formato HTM.**  
 Si applica alle classi derivate da `CDHtmlDialog` solo. Imposta il nome del file HTML per la finestra di dialogo DHTML. Per impostazione predefinita, questo nome di file è basato sul nome della classe. Il nome del file viene visualizzato nella sezione HTML del file RC del progetto, insieme all'ID di risorsa. casella finestra di dialogo DHTML  
  
 **Automazione**  
 Imposta il livello di classe di supporto per [automazione](../../mfc/automation.md). Automazione a livello di classe è disponibile per tutte le classi che supportano l'automazione. È inoltre disponibile per i progetti creati con il supporto per l'automazione. Vale a dire un progetto MFC che [supporto ATL](../../atl/reference/mfc-support-in-atl-projects.md), o un progetto MFC per cui è stata selezionata la **automazione** casella di controllo il [funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) pagina della creazione guidata applicazione MFC.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**None**|Indica che la classe non dispone di alcun supporto di automazione.|  
|**Automazione**|Indica che la classe supporta l'automazione. Se si seleziona questa opzione, la classe appena creata è disponibile come oggetto programmabile dalle applicazioni client di automazione, ad esempio Microsoft Visual Basic e Microsoft Excel. Questa opzione non è disponibile per le classi base elencate dopo questa tabella.|  
|**Creabile da ID tipo**|Indica che la classe e progetto supportare altre applicazioni di creazione di oggetti di questa classe utilizzando l'automazione. Con questa opzione, i client di automazione possono creare direttamente un oggetto di automazione. L'ID di tipo nella casella di testo viene utilizzato dall'applicazione client per specificare l'oggetto da creare; è a livello di sistema e deve essere univoco. Questa opzione non è disponibile per le classi base elencate dopo questa tabella.|  
  
 Supporto di automazione non è disponibile per le classi di base seguenti:  
  
-   `CAsyncMonitorFile`  
  
-   `CAsyncSocket`  
  
-   `CCachedDataPathProperty`  
  
-   `CConnectionPoint`  
  
-   `CDatabase`  
  
-   `CDataPathProperty`  
  
-   `CHttpFilter`  
  
-   `CHttpServer`  
  
-   `CInternetSession`  
  
-   `CObject`  
  
-   `CSocket`  
  
 **ID tipo**  
 Imposta l'ID del tipo della classe. Il **ID tipo** casella concatena il nome del progetto e il nuovo nome della classe come segue: *ClasseMFC*. Questo ID è modificabile solo se è stato selezionato il **automazione** opzione **creabile da ID tipo**.  
  
 **Genera risorse DocTemplate**  
 Indica che i documenti creati dall'applicazione dispongano di risorse modello di documento. Per attivare questa casella di controllo, il progetto deve supportare l'architettura documento/visualizzazione MFC e la classe base di questa classe deve essere [CFormView](../../mfc/reference/cformview-class.md).  
  
 Vedere [modelli di documento e il processo di creazione documento/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe MFC](../../mfc/reference/adding-an-mfc-class.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)

