---
description: "Altre informazioni su: creazione di un'applicazione MFC Forms-Based"
title: Creazione di un'applicazione MFC basata su form
ms.date: 09/09/2019
f1_keywords:
- vc.appwiz.mfcforms.project
helpviewer_keywords:
- applications [MFC], forms-based
- forms-based applications [MFC]
ms.assetid: 048d2f7d-b60d-4386-ad8e-71d49af9c05e
ms.openlocfilehash: 2023f4f2c074ef1d0e3adf936cd4c31bd334b795
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343238"
---
# <a name="creating-a-forms-based-mfc-application"></a>Creazione di un'applicazione MFC basata su form

Un modulo è una finestra di dialogo con controlli che consentono a un utente di accedere e possibilmente modificare i dati. Potrebbe essere necessario sviluppare un'applicazione in cui l'utente seleziona da una selezione di moduli. In genere, un'applicazione basata su form consente all'utente di accedere ai moduli facendo clic su **nuovo** dal menu **file** . Un'applicazione basata su finestre di dialogo, che non consente agli utenti di accedere a una **nuova** opzione nel menu **file** , viene anche considerata un'applicazione basata su form.

Un'interfaccia a documento singolo (SDI), un'applicazione basata su form consente l'esecuzione di una sola istanza di un particolare modulo alla volta. È possibile eseguire diversi formati contemporaneamente da un'applicazione basata su moduli SDI selezionando un nuovo modulo dalla **nuova** opzione nel menu **file** .

Se si crea un'interfaccia a documenti multipli (MDI), un'applicazione basata su form, l'applicazione sarà in grado di supportare più istanze dello stesso formato.

Se si crea un'applicazione con più supporto per documenti di livello superiore, il desktop è l'elemento padre implicito per il documento e il frame del documento non è limitato all'area client dell'applicazione. È possibile aprire più istanze del documento, ognuna con un frame, un menu e un'icona della barra delle applicazioni. È possibile chiudere singolarmente le istanze successive dei documenti, ma se si seleziona l'opzione **Esci** dal menu **file** dell'istanza iniziale, l'applicazione chiuderà tutte le istanze.

SDI, MDI e più applicazioni di documento di primo livello sono basate su form e utilizzano l'architettura documento/visualizzazione.

Qualsiasi applicazione basata su finestre di dialogo, per definizione, è basata su form. Un'applicazione basata su finestre di dialogo non utilizza l'architettura documento/visualizzazione, pertanto è necessario gestire i metodi di creazione e accesso per i moduli aggiuntivi.

La classe base per le applicazioni basate su form è [CFormView](cformview-class.md). Se l'applicazione dispone del supporto per i database, è anche possibile selezionare qualsiasi classe che derivi da `CFormView` . Un modulo è qualsiasi finestra derivata da `CFormView` o da qualsiasi classe che eredita da `CFormView` .

Anche se si usa una classe di base come [CView](cview-class.md), in un secondo momento è possibile rendere le applicazioni basate su moduli [aggiungendo una classe MFC](adding-an-mfc-class.md) derivata da `CFormView` .

Una volta completata la procedura guidata, il progetto viene aperto e, se è stata selezionata l'opzione `CFormView` (o una classe che eredita da `CFormView` ) come classe di base o se è stata creata un'applicazione basata su finestre di dialogo, Visual C++ apre l'editor finestre. A questo punto, è possibile progettare il primo form.

### <a name="to-begin-creating-a-forms-based-mfc-executable"></a>Per iniziare a creare un eseguibile MFC basato su form

1. Seguire le istruzioni riportate in [creazione di un'applicazione MFC](creating-an-mfc-application.md) per un'applicazione MFC basata su form.

1. Nella pagina [tipo di applicazione](application-type-mfc-application-wizard.md) della creazione guidata applicazione MFC, selezionare la casella di controllo **supporto architettura documento/visualizzazione** .

1. Selezionare un **singolo documento**, **più documenti** o **più documenti di primo livello**.

    > [!NOTE]
    >  Se per impostazione predefinita è stata scelta un'applicazione SDI, MDI o più di livello principale per l'interfaccia di documento, `CView` viene impostata come classe di base per la visualizzazione dell'applicazione nella pagina [classi generate](generated-classes-mfc-application-wizard.md) della procedura guidata. Per creare un'applicazione basata su form, è necessario selezionare `CFormView` come classe di base per la visualizzazione dell'applicazione. Si noti che la procedura guidata non fornisce alcun supporto per la stampa di un'applicazione basata su form.

1. Impostare eventuali altre opzioni di progetto desiderate nelle altre pagine della procedura guidata.

1. Fare clic su **fine** per generare l'applicazione Skeleton.

Per altre informazioni, vedere:

- [Classi di viste derivate](../derived-view-classes-available-in-mfc.md)

- [Alternative all'architettura documento/visualizzazione](../alternatives-to-the-document-view-architecture.md)

- [Scelte di progettazione delle applicazioni](../application-design-choices.md)

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](mfc-application-wizard.md)<br/>
[Visualizzazioni Maschera](../form-views-mfc.md)<br/>
[Creazione di un file Explorer-Style applicazione MFC](creating-a-file-explorer-style-mfc-application.md)<br/>
[Creazione di un'applicazione MFC Browser-Style Web](creating-a-web-browser-style-mfc-application.md)
