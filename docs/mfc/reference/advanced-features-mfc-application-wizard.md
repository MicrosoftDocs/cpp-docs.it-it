---
title: Funzionalità avanzate, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.advanced
helpviewer_keywords:
- MFC Application Wizard, advanced features
ms.assetid: 8a6681c5-6576-4b12-841a-6862beee76fa
ms.openlocfilehash: 44d85e7614f6a82af2e58f03a6d65d5d7740ab9b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62338428"
---
# <a name="advanced-features-mfc-application-wizard"></a>Funzionalità avanzate, Creazione guidata applicazione MFC

In questo argomento sono elencate opzioni per funzionalità aggiuntive dell'applicazione, ad esempio la Guida, il supporto di stampa e così via. In ogni sezione specificare supporto aggiuntivo per queste funzionalità avanzate.

- **Guida sensibile al contesto (HTML)**

   Genera un set di file della Guida per la Guida sensibile al contesto, accessibile premendo F1 e un menu oppure facendo clic su un **aiutare** pulsante in una finestra di dialogo. Il supporto della Guida richiede il compilatore della Guida. Se non è disponibile, è possibile installarlo eseguendo nuovamente il programma di installazione.

   Vedere [della Guida HTML: Guida sensibile al contesto per i programmi](../../mfc/html-help-context-sensitive-help-for-your-programs.md) e [file della Guida (HTML)](../../build/reference/help-files-html-help.md) per altre informazioni.

- **Stampa e anteprima di stampa**

   Genera il codice per la gestione di stampa, stampa il programma di installazione e i comandi di anteprima di stampa chiamando funzioni membro di [classe CView](../../mfc/reference/cview-class.md) dalla libreria MFC. Tramite la procedura guidata vengono aggiunti i comandi di queste funzioni al menu dell'applicazione. Supporto di stampa è disponibile solo per le applicazioni che specificano **supporto per l'architettura documento/visualizzazione** nel [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della procedura guidata. Per impostazione predefinita, le applicazioni con architettura documento/visualizzazione dispongono del supporto di stampa.

- **Automazione**

   Specifica che l'applicazione è in grado di gestire oggetti implementati in un'altra applicazione oppure espone l'applicazione ai client di automazione.

- **Controlli ActiveX**

   Supporta i controlli ActiveX (impostazione predefinita). Se non si seleziona questa opzione e successivamente si vuole inserire controlli ActiveX nel progetto, è necessario aggiungere una chiamata a [AfxEnableControlContainer](ole-initialization.md#afxenablecontrolcontainer) all'interno dell'applicazione [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) membro funzione.

- **MAPI (API di messaggistica)**

   Specifica che l'applicazione è in grado di creare, modificare, trasferire e archiviare i messaggi di posta.

- **Socket di Windows**

   Supporta i socket Windows, che è possibile utilizzare per scrivere applicazioni in grado di comunicare su reti TCP/IP.

- **Active Accessibility**

   Aggiunge il supporto per [IAccessible](/windows/desktop/api/oleacc/nn-oleacc-iaccessible) al [CWnd](../../mfc/reference/cwnd-class.md)-classi derivate, che è possibile usare per personalizzare l'interfaccia utente per una migliore interazione con i client di accessibilità.

- **Manifesto controlli comuni**

   Abilitato per impostazione predefinita. Genera un manifesto dell'applicazione per abilitare la DLL dei controlli comuni fornita con Microsoft Windows XP e i sistemi operativi più recenti.

   La versione 6 della DLL dei controlli comuni non consente l'aggiornamento automatico della versione precedente dei controlli comuni utilizzata dalle applicazioni esistenti. Per utilizzare la versione 6 della DLL dei controlli comuni, è necessario creare un manifesto dell'applicazione che induca l'applicazione a caricare la DLL. La DLL dei controlli comuni supporta anche i temi di Windows XP.

   Un manifesto dell'applicazione può anche specificare altre DLL e versioni necessarie all'applicazione. Per altre informazioni sui manifesti dell'applicazione, vedere [applicazioni isolate e assembly Side-by-Side](/windows/desktop/SbsCs/isolated-applications-and-side-by-side-assemblies-portal) nel SDK di Windows.

- **Supporto Gestione riavvio**

   Aggiunge il supporto per la [Gestione riavvio di Windows](/windows/desktop/RstMgr/using-restart-manager). In questo video viene illustrato come utilizzare Gestione riavvio da MFC: [Procedura: Usare il nuovo Gestione riavvio](/previous-versions/visualstudio/visual-studio-2010/dd831853(v%3dvs.100)).

- **Riquadri frame avanzati**

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Riquadro ancorato di Explorer**|Crea un riquadro ancorato simile a Visual Studio **Esplora soluzioni** a sinistra della finestra cornice principale.|
   |**Riquadro ancorato di tipo di output**|Crea un riquadro ancorato simile a Visual Studio **Output** riquadro che si trova sotto la finestra cornice principale.|
   |**Riquadro ancorato di tipo proprietà**|Crea un riquadro ancorato simile a Visual Studio **proprietà** riquadro a destra della finestra cornice principale.|
   |**Riquadro di spostamento**|Crea un riquadro ancorato simile alla barra di navigazione di Outlook a sinistra della finestra cornice principale.|
   |**Barra del titolo**|Crea una barra del titolo di tipo Office sopra la finestra cornice principale.|

- **Numero di file nell'elenco dei file recenti**

   Specifica il numero di file da inserire nell'elenco dei file recenti. Il numero predefinito è 4.

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
