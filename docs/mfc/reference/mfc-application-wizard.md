---
title: Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.overview
helpviewer_keywords:
- MFC Application Wizard
- executable files, creating
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
ms.openlocfilehash: 6949f136890e8274f225a49496b2eb1b8f78b6fc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81351827"
---
# <a name="mfc-application-wizard"></a>Creazione guidata applicazione MFC

La Creazione guidata applicazione MFC genera un'applicazione che, una volta compilata, implementa le funzionalità di base di un'applicazione eseguibile di Windows (.exe). L'applicazione di avvio MFC include i file di origine (cpp), i file di risorse (RC), i file di intestazione (h) e un file di progetto (con estensione vcxproj). Il codice generato in questi file di avvio è basato su MFC.

> [!NOTE]
> A seconda delle opzioni selezionate, la procedura guidata crea file aggiuntivi nel progetto. Ad esempio, se si seleziona **Guida sensibile al** contesto nella pagina Funzionalità [avanzate,](../../mfc/reference/advanced-features-mfc-application-wizard.md) la procedura guidata crea i file necessari per compilare i file della Guida del progetto. Per ulteriori informazioni sui file creati dalla procedura guidata, vedere [Tipi di file creati per](../../build/reference/file-types-created-for-visual-cpp-projects.md)i progetti di Visual Studio in linguaggio C, e vedere il file Readme.txt nel progetto.

## <a name="overview"></a>Panoramica

In questa pagina della procedura guidata vengono descritte le impostazioni correnti dell'applicazione MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come segue:

- [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md)

  - Il progetto viene creato con il supporto dell'interfaccia a documenti multipli (MDI) a schede. Per ulteriori informazioni, vedere [SDI e MDI](../../mfc/sdi-and-mdi.md).

  - Il progetto utilizza l'architettura [documento/visualizzazione](../../mfc/document-view-architecture.md).

  - Il progetto utilizza librerie Unicode.

  - Il progetto viene creato utilizzando lo stile di progetto di Visual Studio e consente la commutazione dello stile di visualizzazione.

  - Il progetto utilizza MFC in una DLL condivisa. Per ulteriori informazioni, vedere Creazione di [DLL C/C](../../build/dlls-in-visual-cpp.md)

- [Supporto documenti compositi, Creazione guidata applicazione MFC](../../mfc/reference/compound-document-support-mfc-application-wizard.md)

  - Il progetto non fornisce alcun supporto per i documenti composti.

- [Stringhe modello documento, Creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md)

  - Il progetto utilizza il nome del progetto per le stringhe del modello di documento predefinito.

- [Supporto database, Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)

  - Il progetto non fornisce alcun supporto per i database.

- [Funzionalità interfaccia utente, Creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md)

  - Il progetto implementa funzionalità standard dell'interfaccia utente di Windows, ad esempio un menu di sistema, una barra di stato, le caselle di ingrandimento e riduzione a icona, una casella **Informazioni su,** una barra dei menu standard e una barra degli strumenti ancorata e frame figlio.

- [Funzionalità avanzate, Creazione guidata applicazione MFC](../../mfc/reference/advanced-features-mfc-application-wizard.md)

  - Il progetto supporta la stampa e l'anteprima di stampa.

  - Il progetto supporta i controlli ActiveX. Per ulteriori informazioni, vedere [Sequenza di operazioni per la creazione di controlli ActiveX](../../mfc/sequence-of-operations-for-creating-activex-controls.md).

  - Il progetto non fornisce alcun supporto per [l'automazione](../../mfc/automation.md), [MAPI](../../mfc/mapi-support-in-mfc.md), [Windows Sockets](../../mfc/windows-sockets-in-mfc.md)o Active Accessibility.

  - Il progetto supporta un riquadro di ancoraggio **di Esplora risorse,** **un** riquadro di ancoraggio di output e un riquadro di ancoraggio **Delle** proprietà.

- [Classi generate, Creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md)

  - La classe di visualizzazione del progetto è derivata dalla [classe CView](../../mfc/reference/cview-class.md).

  - La classe di applicazione del progetto è derivata dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

  - La classe documento del progetto è derivata dalla [classe CDocument](../../mfc/reference/cdocument-class.md).

  - La classe frame principale del progetto è derivata dalla [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).

  - La classe frame figlio del progetto è derivata dalla [classe CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md).

Per modificare queste impostazioni predefinite, fare clic sul titolo della scheda appropriata nella colonna sinistra della procedura guidata e apportare le modifiche nella pagina visualizzata.

Dopo aver creato un progetto di applicazione MFC, è possibile aggiungere oggetti o controlli al progetto utilizzando le [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)di Visual C.

## <a name="see-also"></a>Vedere anche

[Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md)<br/>
[Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)<br/>
[Uso delle classi per la creazione di applicazioni per Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)
