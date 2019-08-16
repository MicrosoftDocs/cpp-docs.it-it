---
title: Funzionalità avanzate, Creazione guidata applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.exe.advanced
helpviewer_keywords:
- MFC Application Wizard, advanced features
ms.assetid: 8a6681c5-6576-4b12-841a-6862beee76fa
ms.openlocfilehash: dc2b745bf97dff65a3612c29745c9d0e455a347d
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507800"
---
# <a name="advanced-features-mfc-application-wizard"></a>Funzionalità avanzate, Creazione guidata applicazione MFC

In questo argomento sono elencate opzioni per funzionalità aggiuntive dell'applicazione, ad esempio la Guida, il supporto di stampa e così via. In ogni sezione specificare supporto aggiuntivo per queste funzionalità avanzate.

- **Guida sensibile al contesto (HTML)**

   Genera un set di file della Guida per la Guida sensibile al contesto, disponibile tramite F1 e un menu? oppure facendo clic su un pulsante? in una finestra di dialogo. Il supporto della Guida richiede il compilatore della Guida. Se non è disponibile, è possibile installarlo eseguendo nuovamente il programma di installazione.

   Vedere [la Guida HTML: Guida sensibile al contesto per i programmi](../../mfc/html-help-context-sensitive-help-for-your-programs.md) e [i file della guida (Guida HTML)](../../build/reference/help-files-html-help.md) per ulteriori informazioni.

- **Stampa e anteprima di stampa**

   Genera il codice per gestire i comandi di stampa, di stampa e di anteprima chiamando le funzioni membro nella [classe CView](../../mfc/reference/cview-class.md) dalla libreria MFC. Tramite la procedura guidata vengono aggiunti i comandi di queste funzioni al menu dell'applicazione. Il supporto di stampa è disponibile solo per le applicazioni che specificano il supporto per l' **architettura documento/visualizzazione** nella pagina [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) della procedura guidata. Per impostazione predefinita, le applicazioni con architettura documento/visualizzazione dispongono del supporto di stampa.

- **Automazione**

   Specifica che l'applicazione è in grado di gestire oggetti implementati in un'altra applicazione oppure espone l'applicazione ai client di automazione.

- **Controlli ActiveX**

   Supporta i controlli ActiveX (impostazione predefinita). Se non si seleziona questa opzione e successivamente si vuole inserire i controlli ActiveX nel progetto, è necessario aggiungere una chiamata a [AfxEnableControlContainer](ole-initialization.md#afxenablecontrolcontainer) nella funzione membro [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) dell'applicazione.

- **MAPI (API di messaggistica)**

   Specifica che l'applicazione è in grado di creare, modificare, trasferire e archiviare i messaggi di posta.

- **Windows Sockets**

   Supporta i socket Windows, che è possibile utilizzare per scrivere applicazioni in grado di comunicare su reti TCP/IP.

- **Active Accessibility**

   Aggiunge il supporto per [IAccessible](/windows/win32/api/oleacc/nn-oleacc-iaccessible) alle classi derivate da [CWnd](../../mfc/reference/cwnd-class.md), che è possibile usare per personalizzare l'interfaccia utente per un'interazione migliore con i client di accessibilità.

- **Manifesto del controllo comune**

   Abilitato per impostazione predefinita. Genera un manifesto dell'applicazione per abilitare la DLL dei controlli comuni fornita con Microsoft Windows XP e i sistemi operativi più recenti.

   La versione 6 della DLL dei controlli comuni non consente l'aggiornamento automatico della versione precedente dei controlli comuni utilizzata dalle applicazioni esistenti. Per utilizzare la versione 6 della DLL dei controlli comuni, è necessario creare un manifesto dell'applicazione che induca l'applicazione a caricare la DLL. La DLL dei controlli comuni supporta anche i temi di Windows XP.

   Un manifesto dell'applicazione può anche specificare altre DLL e versioni necessarie all'applicazione. Per ulteriori informazioni sui manifesti dell'applicazione, vedere [applicazioni isolate e assembly affiancati](/windows/win32/SbsCs/isolated-applications-and-side-by-side-assemblies-portal) nella Windows SDK.

- **Supporto gestione riavvio**

   Aggiunge il supporto per [Gestione riavvio di Windows](/windows/win32/RstMgr/using-restart-manager). In questo video viene illustrato come utilizzare Gestione riavvio di MFC: [Procedura: Utilizzare la nuova gestione](/previous-versions/visualstudio/visual-studio-2010/dd831853(v%3dvs.100))riavvio.

- **Riquadri frame avanzati**

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Riquadro di ancoraggio di Esplora risorse**|Crea un riquadro ancorato simile a quello di Visual Studio **Esplora soluzioni** a sinistra della finestra cornice principale.|
   |**Frame di ancoraggio output**|Crea un riquadro ancorato simile al riquadro di **output** di Visual Studio che si trova nella finestra cornice principale.|
   |**Riquadro di ancoraggio delle proprietà**|Crea un riquadro ancorato simile al riquadro **Proprietà** di Visual Studio a destra della finestra cornice principale.|
   |**Riquadro di spostamento**|Crea un riquadro ancorato simile alla barra di navigazione di Outlook a sinistra della finestra cornice principale.|
   |**Barra del titolo**|Crea una barra del titolo di tipo Office sopra la finestra cornice principale.|

- **Numero di file nell'elenco dei file recenti**

   Specifica il numero di file da inserire nell'elenco dei file recenti. Il numero predefinito è 4.

## <a name="see-also"></a>Vedere anche

[Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
