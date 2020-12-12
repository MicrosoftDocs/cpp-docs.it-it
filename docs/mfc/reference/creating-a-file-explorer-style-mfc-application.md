---
description: 'Altre informazioni su: creazione di un file Explorer-Style applicazione MFC'
title: Creazione di un'applicazione MFC di tipo Esplora file
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfcexplorer.project
helpviewer_keywords:
- browsers [MFC], Explorer-style applications
- MFC applications [MFC], Windows Explorer-style
- Explorer-style applications [MFC], creating
ms.assetid: f843ab5d-2d5d-41ca-88a4-badc0d2f8052
ms.openlocfilehash: 9419aae58cf34ec70585b952360cb12702424381
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301321"
---
# <a name="creating-a-file-explorer-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo Esplora file

Molte applicazioni di sistema Windows usano l'interfaccia utente per Esplora file. Quando si avvia Esplora file, ad esempio, viene visualizzata un'applicazione con una barra di divisione verticale che divide l'area client. Il lato sinistro dell'area client fornisce funzionalità di esplorazione ed esplorazione e il lato destro dell'area client Mostra i dettagli pertinenti alla selezione nel riquadro sinistro. Quando un utente fa clic su un elemento nel riquadro a sinistra, l'applicazione ripopola il riquadro di destra. In un'applicazione MDI, è possibile utilizzare i comandi del menu **Visualizza** per modificare la quantità di dettaglio visualizzata nel riquadro di destra. (In un'applicazione SDI o più documenti di primo livello, è possibile modificare il dettaglio usando solo i pulsanti della barra degli strumenti).

Il contenuto dei riquadri dipende dall'applicazione. In un browser di file System, il riquadro sinistro mostra una visualizzazione gerarchica di directory o computer o gruppi di computer, mentre nel riquadro destro vengono visualizzati cartelle, singoli file o computer e informazioni dettagliate su di essi. Il contenuto non deve necessariamente essere un file. Potrebbero trattarsi di messaggi di posta elettronica, report di errore o altri elementi di un database.

La procedura guidata crea automaticamente le classi seguenti:

- La `CLeftView` classe definisce il riquadro sinistro dell'area client. Viene sempre derivata da [CTreeView](../../mfc/reference/ctreeview-class.md).

- La classe C *ProjName* View definisce il riquadro destro dell'area client. Per impostazione predefinita, è derivato da [CListView](../../mfc/reference/clistview-class.md) , ma può essere un altro tipo di visualizzazione a seconda della classe specificata dall'elenco **classe di base** nella pagina [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) della procedura guidata.

L'applicazione generata può avere un'interfaccia a documento singolo (SDI), un'interfaccia a documenti multipli (MDI) o un'architettura di più documenti di primo livello. Ogni finestra cornice creata dall'applicazione viene suddivisa verticalmente usando [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md). Il codice di questo tipo di applicazione è simile alla codifica di una normale applicazione MFC che utilizza una barra di divisione, con la differenza che questo tipo di applicazione dispone di visualizzazioni di controllo separate all'interno di ogni riquadro separatore.

Se si usa la visualizzazione elenco predefinita nel riquadro di destra, la procedura guidata Crea opzioni di menu aggiuntive (solo in applicazioni MDI) e pulsanti della barra degli strumenti per cambiare lo stile della visualizzazione tra icone grandi, icone piccole, elenchi e modalità dettaglio.

### <a name="to-begin-creating-a-file-explorer-style-mfc-executable"></a>Per iniziare a creare un eseguibile MFC di tipo Esplora file

1. Seguire le istruzioni riportate in [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).

1. Nella pagina [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) della creazione guidata applicazione MFC selezionare lo stile progetto **Esplora file** .

1. Impostare le altre opzioni desiderate nelle altre pagine della procedura guidata.

1. Fare clic su **fine** per generare l'applicazione Skeleton.

Per altre informazioni, vedere:

- [Tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md)

- [Classi di viste derivate](../../mfc/derived-view-classes-available-in-mfc.md)

- [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)

## <a name="see-also"></a>Vedi anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)<br/>
[Creazione di un'applicazione MFC Browser-Style Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)<br/>
[Creazione di un Forms-Based applicazione MFC](../../mfc/reference/creating-a-forms-based-mfc-application.md)
