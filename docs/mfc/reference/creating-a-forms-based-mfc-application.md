---
title: Creazione di un'applicazione MFC basata su form | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfcforms.project
dev_langs:
- C++
helpviewer_keywords:
- applications [MFC], forms-based
- forms-based applications [MFC]
ms.assetid: 048d2f7d-b60d-4386-ad8e-71d49af9c05e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a5ee588d7fe90e5bfc39aa8e4ab7a7499b62ad98
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-a-forms-based-mfc-application"></a>Creazione di un'applicazione MFC basata su form
Un modulo è una finestra di dialogo con i controlli che consentono agli utenti di accedere a ed eventualmente modificare dati. Si consiglia di sviluppare un'applicazione in cui l'utente seleziona da un insieme di form. In genere, un'applicazione basata su form consente il form di accesso utente facendo clic con pulsante **New** dal **File** menu. Un'applicazione basata su finestra di dialogo, che è possibile accedere a un **New** opzione il **File** menu, si tratta di un'applicazione basata su form.  
  
 Un'interfaccia a documento singolo (SDI), applicazione basata su form consente solo un'istanza di un particolare formato per l'esecuzione alla volta. È possibile eseguire più form contemporaneamente da un'applicazione basata su form SDI selezionando un nuovo form scegliendo il **New** opzione il **File** menu.  
  
 Se si crea un'interfaccia a documenti multipli (MDI), applicazione basata su form, l'applicazione sarà in grado di supportare più istanze dello stesso modulo.  
  
 Se si crea un'applicazione con supporto di primo livello di documento più, il desktop è implicitamente il padre per il documento e il frame del documento non è limitato all'area client dell'applicazione. È possibile aprire più istanze del documento, ognuno con il proprio frame, menu e l'icona della barra attività. È possibile chiudere istanze successive dei documenti singoli, ma se si seleziona il `Exit` opzione il **File** menu dell'istanza iniziale, l'applicazione chiude tutte le istanze.  
  
 SDI e MDI più applicazioni di primo livello di documento sono tutte le forme in base e utilizzano l'architettura documento/visualizzazione.  
  
 Le applicazioni basate su finestra di dialogo, per definizione, sono basata su form. Un'applicazione basata su finestra di dialogo non utilizza l'architettura documento/visualizzazione, è necessario gestire i metodi di creazione e di accesso per i form aggiuntivi.  
  
 La classe base per le applicazioni basate su form è [CFormView](../../mfc/reference/cformview-class.md). Se l'applicazione dispone di supporto per database, quindi è anche possibile selezionare qualsiasi classe che deriva da `CFormView`. Un modulo è qualsiasi finestra derivato da `CFormView` o da una classe che eredita da `CFormView`.  
  
 Anche se si utilizza una classe di base, ad esempio [CView](../../mfc/reference/cview-class.md), è in un secondo momento può rendere le applicazioni basate su form da [aggiunta di una classe MFC](../../mfc/reference/adding-an-mfc-class.md) derivato da `CFormView` e controllando il **generare DocTemplate risorse** nella casella di controllo di [Creazione guidata classe MFC](../../mfc/reference/document-template-strings-mfc-add-class-wizard.md).  
  
 Una volta completata la procedura guidata, verrà aperto il progetto, e se è selezionata `CFormView` (o una classe che eredita da `CFormView`) come classe base o se è stato creato un'applicazione basata su finestra di dialogo, Visual C++ aprirà l'editor della finestra di dialogo. A questo punto, si è pronti per progettare il form prima.  
  
### <a name="to-begin-creating-a-forms-based-mfc-executable"></a>Per iniziare a creare un file eseguibile MFC basata su form  
  
1.  Seguire le istruzioni [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, selezionare il **Supporto architettura documento/visualizzazione** casella di controllo.  
  
3.  Selezionare **singolo documento**, **più documenti**, o **più documenti di primo livello**.  
  
    > [!NOTE]
    >  Se si sceglie un'applicazione SDI o MDI più applicazione di interfaccia di primo livello di documento, per impostazione predefinita, `CView` è impostato come classe base per la visualizzazione dell'applicazione di [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della procedura guidata. Per creare un'applicazione basata su form, è necessario selezionare `CFormView` come classe base per la visualizzazione dell'applicazione. Si noti che la procedura guidata non fornisce alcun supporto di stampa per un'applicazione basata su form.  
  
4.  Impostare le opzioni di progetto desiderate nelle altre pagine della procedura guidata.  
  
5.  Fare clic su **fine** per generare lo scheletro di applicazione.  
  
 Per altre informazioni, vedere:  
  
-   [Classi visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Alternative all'architettura documento/visualizzazione](../../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Visualizzazioni di form](../../mfc/form-views-mfc.md)   
 [Creazione di un'applicazione MFC di tipo Esplora risorse di File](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)   
 [Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

