---
title: Creazione di un'applicazione MFC di tipo Esplora file
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfcexplorer.project
helpviewer_keywords:
- browsers [MFC], Explorer-style applications
- MFC applications [MFC], Windows Explorer-style
- Explorer-style applications [MFC], creating
ms.assetid: f843ab5d-2d5d-41ca-88a4-badc0d2f8052
ms.openlocfilehash: 3ddeb2e875ccdb45dd0bc2b29a2da3c1498138ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50564762"
---
# <a name="creating-a-file-explorer-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo Esplora file

Molte applicazioni di sistema di Windows usano l'interfaccia utente (UI) per Esplora File. Quando si avvia Esplora File, ad esempio, viene visualizzata un'applicazione con un separatore verticale della barra di divisione dell'area client. Il lato sinistro dell'area client fornisce funzionalità di esplorazione ed e il lato destro dell'area client Mostra i dettagli relativi alla selezione effettuata nel riquadro sinistro. Quando un utente fa clic su un elemento nel riquadro sinistro, l'applicazione ripopola il riquadro destro. In un'applicazione MDI, è possibile usare i comandi nel **vista** menu per modificare la quantità di dettaglio visualizzato nel riquadro di destra. (In un'applicazione SDI o multipli documento di primo livello, è possibile modificare i dettagli usando solo i pulsanti della barra degli strumenti.)

Il contenuto dei riquadri dipende dall'applicazione. In un browser di file system, il riquadro a sinistra mostra una visualizzazione gerarchica delle directory o i computer o gruppi di computer, mentre il riquadro destro vengono visualizzate le cartelle, singoli file, o computer e informazioni dettagliate in proposito. Il contenuto non deve necessariamente essere costituito da file. Potrebbe trattarsi di messaggi di posta elettronica, segnalazioni di errore o altri elementi in un database.

La procedura guidata crea le classi seguenti per l'utente:

- Il `CLeftView` classe definisce il riquadro a sinistra dell'area client. È sempre derivato dalla [CTreeView](../../mfc/reference/ctreeview-class.md).

- C*ProjName*classe visualizzazione definisce il riquadro di destra dell'area client. Per impostazione predefinita, viene derivata da [CListView](../../mfc/reference/clistview-class.md) ma può essere un altro tipo di visualizzazione a seconda della classe specificata dalle **classe di Base** nell'elenco il [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina del procedura guidata.

L'applicazione generata può avere un'interfaccia a documento singolo (SDI), un'interfaccia a documenti multipli (MDI) o un'architettura di primo livello documenti multipli. Ogni finestra cornice viene creata l'applicazione viene divisa verticalmente usando [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md). Codifica di questo tipo di applicazione è simile al codice di una normale applicazione MFC che utilizza una barra di divisione, ad eccezione del fatto che questo tipo di applicazione include viste di controllo separato all'interno di ogni riquadro barra di divisione.

Se si usa la visualizzazione elenco predefinita nel riquadro di destra, la procedura guidata crea le opzioni di menu aggiuntive (in solo le applicazioni MDI) e i pulsanti della barra degli strumenti per passare lo stile della visualizzazione tra le icone grandi e piccole icone, elenco e modalità dettaglio.

### <a name="to-begin-creating-a-file-explorer-style-mfc-executable"></a>Per iniziare a creare un file eseguibile di tipo Esplora File MFC

1. Seguire le istruzioni disponibili nel [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).

1. Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, selezionare la **Esplora File** lo stile del progetto.

1. Impostare le opzioni desiderate nelle altre pagine della procedura guidata.

1. Fare clic su **fine** per generare lo scheletro dell'applicazione.

Per altre informazioni, vedere:

- [Tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md)

- [Classi visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)

- [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Creazione di un'applicazione MFC di tipo browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)<br/>
[Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)

