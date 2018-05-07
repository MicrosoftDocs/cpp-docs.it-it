---
title: Creazione di un'applicazione MFC di tipo Esplora risorse di File | Documenti Microsoft
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
ms.openlocfilehash: a5b0f5d4bdabc987d4f4177f616ce756c351b8b5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-a-file-explorer-style-mfc-application"></a>Creazione di un'applicazione MFC di tipo Esplora file
Molte applicazioni di sistema di Windows utilizzano l'interfaccia utente (UI) per Esplora File. Quando si avvia Esplora File, ad esempio, viene visualizzata un'applicazione con una barra di divisione verticale della barra di divisione dell'area client. La parte sinistra dell'area client offre funzionalità di esplorazione ed e il lato destro dell'area client Mostra i dettagli relativi alla selezione effettuata nel riquadro a sinistra. Quando un utente fa clic su un elemento nel riquadro a sinistra, l'applicazione ripopola il riquadro di destra. In un'applicazione MDI, è possibile utilizzare i comandi nel **vista** menu per modificare la quantità di dettagli visualizzati nel riquadro a destra. (In un'applicazione SDI o multipli documento di primo livello, è possibile modificare i dettagli utilizzando solo i pulsanti della barra degli strumenti.)  
  
 Il contenuto dei riquadri dipende dall'applicazione. In un browser di file system, il riquadro sinistro mostra una visualizzazione gerarchica delle directory o computer o gruppi di computer, mentre il riquadro di destra Visualizza cartelle, singoli file, o macchine e i relativi dettagli. Il contenuto non è necessario essere file. Potrebbero essere messaggi di posta elettronica, i report di errore o altri elementi in un database.  
  
 La procedura guidata crea le classi seguenti per l'utente:  
  
-   Il **CLeftView** classe definisce il riquadro a sinistra dell'area client. Viene sempre derivata da [CTreeView](../../mfc/reference/ctreeview-class.md).  
  
-   C*ProjName*classe visualizzazione definisce il riquadro di destra dell'area client. Per impostazione predefinita, viene derivata da [CListView](../../mfc/reference/clistview-class.md) ma può essere un altro tipo di visualizzazione a seconda della classe è possibile specificare dal **classe di Base** nell'elenco di [classi generate](../../mfc/reference/generated-classes-mfc-application-wizard.md) pagina del procedura guidata.  
  
 L'applicazione generata può avere un'architettura di livello superiore di documenti multipli, un'interfaccia a documenti multipli (MDI) o un'interfaccia a documento singolo (SDI). Ogni finestra cornice viene creata l'applicazione viene suddivisa verticalmente mediante [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md). La codifica di questo tipo di applicazione è simile al codice di una normale applicazione MFC che utilizza una barra di divisione, ad eccezione del fatto che questo tipo di applicazione include viste di controllo separati in ogni riquadro barra di divisione.  
  
 Se si utilizza la visualizzazione elenco predefinita nel riquadro di destra, la procedura guidata crea le opzioni di menu aggiuntive (in solo le applicazioni MDI) e i pulsanti della barra degli strumenti per passare lo stile della visualizzazione tra icone grandi icone piccole, elenco e le modalità di dettaglio.  
  
### <a name="to-begin-creating-a-file-explorer-style-mfc-executable"></a>Per iniziare a creare un file eseguibile di tipo Esplora risorse di File MFC  
  
1.  Seguire le istruzioni [creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  Nella creazione guidata applicazione MFC [tipo di applicazione](../../mfc/reference/application-type-mfc-application-wizard.md) pagina, selezionare il **Esplora File** lo stile del progetto.  
  
3.  Impostare le opzioni desiderate nelle altre pagine della procedura guidata.  
  
4.  Fare clic su **fine** per generare lo scheletro di applicazione.  
  
 Per altre informazioni, vedere:  
  
-   [Tipi di documenti multipli, visualizzazioni e finestre cornice](../../mfc/multiple-document-types-views-and-frame-windows.md)  
  
-   [Classi visualizzazione derivate](../../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Scelte di progettazione delle applicazioni](../../mfc/application-design-choices.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)   
 [Creazione di un'applicazione MFC di tipo Browser Web](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)   
 [Creazione di un'applicazione MFC basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md)

