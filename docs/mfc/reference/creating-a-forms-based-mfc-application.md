---
title: Creazione di un'applicazione MFC basata su form | Microsoft Docs
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
ms.openlocfilehash: 692370e06668152cb6f5d5ecc762a3bbe991af08
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46374659"
---
# <a name="creating-a-forms-based-mfc-application"></a>Creazione di un'applicazione MFC basata su form

Un modulo è una finestra di dialogo con i controlli che consentono agli utenti di accedere e possibilmente modificare dati. È possibile sviluppare un'applicazione in cui l'utente seleziona da una gamma di form. In genere, un'applicazione basata su form consente di accedere ai form facendo clic su **New** dalle **File** menu. Un'applicazione basata su finestra di dialogo, che consente agli utenti l'accesso a un **New** opzione il **File** menu, si tratta di un'applicazione basata su form.

Un'interfaccia a documento singolo (SDI), applicazione basata su form consente solo un'istanza di un form venga eseguito in un momento specifico. È possibile eseguire diverse forme nello stesso momento da un'applicazione basata su form SDI selezionando un nuovo form scegliendo il **New** opzione il **File** menu.

Se si crea un'interfaccia a documenti multipli (MDI), applicazione basata su form, l'applicazione sarà in grado di supportare più istanze dello stesso modulo.

Se si crea un'applicazione con supporto di primo livello di documento più, il desktop è implicito padre per il documento e il frame del documento non è limitato all'area client dell'applicazione. È possibile aprire più istanze del documento, ognuno con un proprio frame, menu e icona della barra attività. È possibile chiudere istanze successive dei documenti singolarmente, ma se si seleziona il **Exit** opzione il **File** menu dell'istanza iniziale, l'applicazione chiude tutte le istanze.

SDI e MDI più applicazioni di documento di primo livello sono basate su tutti i form e utilizzano l'architettura documento/visualizzazione.

Qualsiasi applicazione basata su finestra di dialogo, per definizione, è basata su form. Un'applicazione basata su finestra di dialogo non utilizza l'architettura documento/visualizzazione, è necessario gestire i metodi di creazione e l'accesso per i form aggiuntivi.

La classe base per le applicazioni basate su form è [CFormView](../../mfc/reference/cformview-class.md). Se l'applicazione dispone di supporto di database, quindi è anche possibile selezionare qualsiasi classe che deriva da `CFormView`. Un modulo è qualsiasi finestra derivato da `CFormView` o da qualsiasi classe che eredita da `CFormView`.

Anche se si usa una classe di base, ad esempio [CView](../../mfc/reference/cview-class.md), è in un secondo momento può rendere le applicazioni basate su form da [aggiunta di una classe MFC](../../mfc/reference/adding-an-mfc-class.md) derivata da `CFormView` e controllando il **generare DocTemplate le risorse** casella di controllo la [Creazione guidata classe MFC](../../mfc/reference/document-template-strings-mfc-add-class-wizard.md).

Dopo aver completato la procedura guidata, si apre il progetto, e se è stato selezionato `CFormView` (o una classe che eredita da `CFormView`) come classe base o se è stata creata un'applicazione basata su finestra di dialogo, Visual C++ consente di aprire l'editor finestre. A questo punto, si è pronti per progettare il primo form.

### <a name="to-begin-creating-a-forms-based-mfc-executable"></a>Per iniziare a creare un file eseguibile MFC basata su form

1. Seguire le istruzioni disponibili nel [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).

1. Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, selezionare la **Supporto architettura documento/visualizzazione** casella di controllo.

1. Selezionare **singolo documento**, **più documenti**, o **più documenti di primo livello**.

    > [!NOTE]
    >  Se si sceglie un'applicazione SDI o MDI più applicazioni di interfaccia di documento di primo livello, per impostazione predefinita `CView` viene impostato come classe base per la visualizzazione dell'applicazione nel [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina della procedura guidata. Per creare un'applicazione basata su form, è necessario selezionare `CFormView` come classe base per la visualizzazione dell'applicazione. Si noti che la procedura guidata non fornisce alcun supporto di stampa per un'applicazione basata su form.

1. Impostare le opzioni di progetto desiderato nelle altre pagine della procedura guidata.

1. Fare clic su **fine** per generare lo scheletro dell'applicazione.

Per altre informazioni, vedere:

- [Classi visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)

- [Alternative all'architettura documento/visualizzazione](../../mfc/alternatives-to-the-document-view-architecture.md)

- [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Visualizzazioni di form](../../mfc/form-views-mfc.md)<br/>
[Creazione di un'applicazione MFC di tipo Esplora file](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)<br/>
[Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

