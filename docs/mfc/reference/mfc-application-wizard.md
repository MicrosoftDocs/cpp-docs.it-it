---
description: 'Ulteriori informazioni su: creazione guidata applicazione MFC'
title: Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.overview
helpviewer_keywords:
- MFC Application Wizard
- executable files, creating
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
ms.openlocfilehash: 645f0e1ed3f1f35c109d524a8c63fa36231bc61a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219213"
---
# <a name="mfc-application-wizard"></a>Creazione guidata applicazione MFC

La creazione guidata applicazione MFC genera un'applicazione che, quando compilata, implementa le funzionalità di base di un'applicazione eseguibile di Windows (exe). L'applicazione di avvio MFC include i file di origine (con estensione cpp) C++, i file di risorse (RC), i file di intestazione (h) e un file di progetto (con estensione vcxproj). Il codice generato in questi file di avvio è basato su MFC.

> [!NOTE]
> A seconda delle opzioni selezionate, la procedura guidata crea file aggiuntivi nel progetto. Se, ad esempio, si seleziona la **Guida sensibile al contesto** nella pagina [funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) , verranno creati i file necessari per compilare i file della guida del progetto. Per ulteriori informazioni sui file creati dalla procedura guidata, vedere [tipi di file creati per i progetti C++ di Visual Studio](../../build/reference/file-types-created-for-visual-cpp-projects.md)e vedere il file Readme.txt nel progetto.

## <a name="overview"></a>Panoramica

Questa pagina della procedura guidata descrive le impostazioni dell'applicazione corrente per l'applicazione MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come indicato di seguito:

- [Tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md)

  - Il progetto viene creato con supporto di interfaccia a documenti multipli (MDI) a schede. Per ulteriori informazioni, vedere [SDI e MDI](../../mfc/sdi-and-mdi.md).

  - Il progetto utilizza l' [architettura documento/visualizzazione](../../mfc/document-view-architecture.md).

  - Il progetto utilizza le librerie Unicode.

  - Il progetto viene creato usando lo stile del progetto di Visual Studio e Abilita il cambio dello stile di visualizzazione.

  - Il progetto Usa MFC in una DLL condivisa. Per altre informazioni, vedere [creare DLL C/C++ in Visual Studio](../../build/dlls-in-visual-cpp.md).

- [Supporto documenti compositi, creazione guidata applicazione MFC](../../mfc/reference/compound-document-support-mfc-application-wizard.md)

  - Il progetto non fornisce alcun supporto per i documenti composti.

- [Stringhe modello documento, Creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md)

  - Il progetto usa il nome del progetto per le stringhe di modello di documento predefinite.

- [Supporto database, creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)

  - Il progetto non fornisce alcun supporto per i database.

- [Funzionalità dell'interfaccia utente, creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md)

  - Il progetto implementa le funzionalità standard dell'interfaccia utente di Windows, ad esempio un menu di sistema, una barra di stato, le caselle Ingrandisci e Riduci a icona, una finestra **informazioni su** , una barra dei menu standard e una barra degli strumenti di ancoraggio e frame figlio.

- [Funzionalità avanzate, creazione guidata applicazione MFC](../../mfc/reference/advanced-features-mfc-application-wizard.md)

  - Il progetto supporta la stampa e l'anteprima di stampa.

  - Il progetto supporta i controlli ActiveX. Per ulteriori informazioni, vedere [sequenza di operazioni per la creazione di controlli ActiveX](../../mfc/sequence-of-operations-for-creating-activex-controls.md).

  - Il progetto non fornisce alcun supporto per l' [automazione](../../mfc/automation.md), [MAPI](../../mfc/mapi-support-in-mfc.md), [Windows Sockets](../../mfc/windows-sockets-in-mfc.md)o Active Accessibility.

  - Il progetto supporta un riquadro docking di **Esplora risorse** , un riquadro di ancoraggio di **output** e un riquadro di ancoraggio delle **proprietà** .

- [Classi generate, creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md)

  - La classe di visualizzazione del progetto è derivata dalla [classe CView](../../mfc/reference/cview-class.md).

  - La classe dell'applicazione del progetto è derivata dalla [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

  - La classe del documento del progetto è derivata dalla [classe CDocument](../../mfc/reference/cdocument-class.md).

  - La classe frame principale del progetto è derivata dalla [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).

  - La classe del frame figlio del progetto è derivata dalla [classe CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md).

Per modificare queste impostazioni predefinite, fare clic sul titolo della scheda appropriata nella colonna sinistra della procedura guidata e apportare le modifiche nella pagina visualizzata.

Dopo aver creato un progetto di applicazione MFC, è possibile aggiungere oggetti o controlli al progetto utilizzando Visual C++ [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md).

## <a name="see-also"></a>Vedi anche

[Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md)<br/>
[Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)<br/>
[Utilizzo delle classi per scrivere applicazioni per Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)
