---
title: Creazione di un'applicazione MFC di tipo Esplora File | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfcexplorer.project
dev_langs:
- C++
helpviewer_keywords:
- browsers [MFC], Explorer-style applications
- MFC applications [MFC], Windows Explorer-style
- Explorer-style applications [MFC], creating
ms.assetid: f843ab5d-2d5d-41ca-88a4-badc0d2f8052
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2a2c3e8e1c7956a5dff33cd8ff78612f5f844ad6
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37078421"
---
# <a name="creating-a-file-explorer-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo Esplora file
Molte applicazioni di sistema di Windows utilizzano l'interfaccia utente (UI) per Esplora File. Quando si avvia Esplora File, ad esempio, viene visualizzata un'applicazione con una barra di divisione verticale della barra di divisione dell'area client. Il lato sinistro dell'area client fornisce funzionalità di esplorazione ed e il lato destro dell'area client Mostra i dettagli relativi alla selezione effettuata nel riquadro sinistro. Quando un utente fa clic su un elemento nel riquadro sinistro, l'applicazione consiste nel ripopolare riquadro a destra. In un'applicazione MDI, è possibile utilizzare i comandi nel **vista** menu per modificare la quantità di dettaglio visualizzato nel riquadro di destra. (In un'applicazione SDI o multipli documento di primo livello, è possibile modificare il dettaglio utilizzando solo i pulsanti della barra degli strumenti.)  
  
 Il contenuto dei riquadri dipende dall'applicazione. In un browser di file system, il riquadro sinistro mostra una visualizzazione gerarchica delle directory o computer o gruppi di computer, mentre il riquadro destro mostra le cartelle, singoli file, o macchine e relativi dettagli. Il contenuto non essere necessariamente i file. Potrebbero essere messaggi di posta elettronica, i report di errore o altri elementi in un database.  
  
 La procedura guidata crea le classi seguenti per l'utente:  
  
-   Il `CLeftView` classe definisce il riquadro a sinistra dell'area client. È sempre derivato dalla [CTreeView](../../mfc/reference/ctreeview-class.md).  
  
-   C*ProjName*classe visualizzazione definisce il riquadro di destra dell'area client. Per impostazione predefinita, viene derivata da [CListView](../../mfc/reference/clistview-class.md) ma può essere un altro tipo di visualizzazione a seconda della classe è possibile specificare dal **classe di Base** nell'elenco il [classi generate mediante](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina del procedura guidata.  
  
 L'applicazione generata può avere un'interfaccia a documento singolo (SDI), un'interfaccia a documenti multipli (MDI) o un'architettura di livello superiore di documenti multipli. Ogni finestra cornice viene creata l'applicazione viene suddivisa verticalmente mediante [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md). Questo tipo di applicazione di codifica è simile al codice di una normale applicazione MFC che utilizza una barra di divisione, ad eccezione del fatto che questo tipo di applicazione include le viste di controllo separati in ogni riquadro barra di divisione.  
  
 Se si usa la visualizzazione elenco predefinita nel riquadro di destra, la procedura guidata crea le opzioni di menu aggiuntive (in solo le applicazioni MDI) e i pulsanti della barra degli strumenti per passare lo stile della visualizzazione tra icone grandi icone piccole, elenco e le modalità di dettaglio.  
  
### <a name="to-begin-creating-a-file-explorer-style-mfc-executable"></a>Per iniziare a creare un file eseguibile di tipo Esplora risorse di File MFC  
  
1.  Seguire le istruzioni [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, selezionare il **Esplora File** lo stile del progetto.  
  
3.  Impostare le opzioni che desiderate direttamente nelle altre pagine della procedura guidata.  
  
4.  Fare clic su **fine** per generare lo scheletro di applicazione.  
  
 Per altre informazioni, vedere:  
  
-   [Tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md)  
  
-   [Classi visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Creazione di un'applicazione MFC di tipo Browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)   
 [Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)

