---
title: Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.overview
helpviewer_keywords:
- MFC Application Wizard
- executable files, creating
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
ms.openlocfilehash: 808e8364764dd826ee82e445627ba21b06946ed6
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57822665"
---
# <a name="mfc-application-wizard"></a>Creazione guidata applicazione MFC

La creazione guidata applicazione MFC genera un'applicazione che, quando viene compilato, implementa la funzionalità di base di un'applicazione eseguibile (.exe) di Windows. L'applicazione di starter MFC include i file di origine (. cpp) di C++, i file di risorse (RC), i file di intestazione (h) e un file di progetto (vcxproj). Il codice che viene generato in questi file di avvio è basato su MFC.

> [!NOTE]
>  A seconda delle opzioni selezionato, la procedura guidata crea i file aggiuntivi nel progetto. Ad esempio, se si seleziona **della Guida sensibile al contesto** nel [funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) pagina, la procedura guidata crea i file che sono necessari per compilare i file della Guida del progetto. Per altre informazioni sui file creati nella procedura guidata, vedere [tipi di File creati per i progetti Visual C++](../../build/reference/file-types-created-for-visual-cpp-projects.md)e vedere il file Readme. txt nel progetto.

## <a name="overview"></a>Panoramica

Questa pagina della procedura guidata descrive le impostazioni dell'applicazione corrente per l'applicazione MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come indicato di seguito:

- [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md)

   - Il progetto viene creato con il supporto a schede interfaccia a documenti multipli (MDI). Per altre informazioni, vedere [SDI e MDI](../../mfc/sdi-and-mdi.md).

   - Il progetto usa la [architettura documento/visualizzazione](../../mfc/document-view-architecture.md).

   - Il progetto Usa librerie di Unicode.

   - Il progetto viene creato usando lo stile del progetto di Visual Studio e attiva cambio stile di visualizzazione.

   - Il progetto Usa MFC in una DLL condivisa. Per altre informazioni, vedere [DLL in Visual C++](../../build/dlls-in-visual-cpp.md).

- [Supporto documenti compositi, Creazione guidata applicazione MFC](../../mfc/reference/compound-document-support-mfc-application-wizard.md)

   - Il progetto non fornisce supporto per i documenti compositi.

- [Stringhe modello documento, Creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md)

   - Il progetto usa il nome del progetto per le stringhe di modello di documento predefinito.

- [Supporto database, Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)

   - Il progetto non fornisce supporto per i database.

- [Funzionalità interfaccia utente, Creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md)

   - Il progetto implementa standard Windows dotato di interfaccia utente, ad esempio un menu di sistema, una barra di stato, ottimizzare e ridurre al minimo le caselle, un' **sulle** casella, una barra dei menu standard e ancoraggio della barra degli strumenti e i frame figlio.

- [Funzionalità avanzate, Creazione guidata applicazione MFC](../../mfc/reference/advanced-features-mfc-application-wizard.md)

   - Il progetto supporta la stampa e anteprima di stampa.

   - Il progetto supporta i controlli ActiveX. Per altre informazioni, vedere [sequenza di operazioni per la creazione di controlli ActiveX](../../mfc/sequence-of-operations-for-creating-activex-controls.md).

   - Il progetto non offre alcun supporto per [Automation](../../mfc/automation.md), [MAPI](../../mfc/mapi-support-in-mfc.md), [Windows Sockets](../../mfc/windows-sockets-in-mfc.md), oppure Active Accessibility.

   - Il progetto supporta un **Explorer** riquadro ancorato, un **Output** riquadro ancorato e un **proprietà** riquadro ancorato.

- [Classi generate, Creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md)

   - Deriva dalla classe di visualizzazione del progetto di [classe CView](../../mfc/reference/cview-class.md).

   - Deriva dalla classe dell'applicazione del progetto di [classe CWinAppEx](../../mfc/reference/cwinappex-class.md).

   - Deriva dalla classe del documento del progetto di [CDocument (classe)](../../mfc/reference/cdocument-class.md).

   - Classe frame principale del progetto viene derivata dal [CMDIFrameWndEx (classe)](../../mfc/reference/cmdiframewndex-class.md).

   - Deriva dalla classe cornice figlio del progetto di [CMDIChildWndEx (classe)](../../mfc/reference/cmdichildwndex-class.md).

Per modificare queste impostazioni predefinite, fare clic sul titolo scheda appropriata nella colonna sinistra della procedura guidata e apportare le modifiche nella pagina visualizzata.

Dopo aver creato un progetto di applicazione MFC, è possibile aggiungere controlli o gli oggetti al progetto usando Visual C++ [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md)<br/>
[Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)<br/>
[Uso delle classi per la creazione di applicazioni per Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)
