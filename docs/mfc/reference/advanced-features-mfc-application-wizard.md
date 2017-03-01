---
title: "Funzionalità avanzate, creazione guidata applicazione MFC | Documenti di Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.advanced
dev_langs:
- C++
helpviewer_keywords:
- MFC Application Wizard, advanced features
ms.assetid: 8a6681c5-6576-4b12-841a-6862beee76fa
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: ab9e67efc6fad90f2f9eb140411d063320f09feb
ms.lasthandoff: 02/24/2017

---
# <a name="advanced-features-mfc-application-wizard"></a>Funzionalità avanzate, Creazione guidata applicazione MFC
In questo argomento sono elencate opzioni per funzionalità aggiuntive dell'applicazione, ad esempio la Guida, il supporto di stampa e così via. In ogni sezione specificare supporto aggiuntivo per queste funzionalità avanzate.  
  
 **Guida sensibile al contesto (HTML)**  
 Genera un set di file della Guida per la Guida sensibile al contesto, accessibile premendo F1 e un menu oppure facendo una **Guida** pulsante nella finestra di dialogo. Il supporto della Guida richiede il compilatore della Guida. Se non è disponibile, è possibile installarlo eseguendo nuovamente il programma di installazione.  
  
 Vedere [della Guida HTML: Guida sensibile al contesto per i programmi](../../mfc/html-help-context-sensitive-help-for-your-programs.md) e [file della Guida (HTML)](../../ide/help-files-html-help.md) per ulteriori informazioni.  
  
 **Stampa e anteprima di stampa**  
 Genera il codice per gestire la stampa, stampa il programma di installazione e i comandi di anteprima di stampa chiamando le funzioni membro di [CView (classe)](../../mfc/reference/cview-class.md) dalla libreria MFC. Tramite la procedura guidata vengono aggiunti i comandi di queste funzioni al menu dell'applicazione. Il supporto di stampa è disponibile solo per le applicazioni che specificano **Supporto architettura documento/visualizzazione** nel [tipo di applicazione, creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) pagina della procedura guidata. Per impostazione predefinita, le applicazioni con architettura documento/visualizzazione dispongono del supporto di stampa.  
  
 **Automazione**  
 Specifica che l'applicazione è in grado di gestire oggetti implementati in un'altra applicazione oppure espone l'applicazione ai client di automazione.  
  
 **Controlli ActiveX**  
 Supporta i controlli ActiveX (impostazione predefinita). Se si seleziona questa opzione e successivamente si desidera inserire i controlli ActiveX nel progetto, è necessario aggiungere una chiamata a [AfxEnableControlContainer](http://msdn.microsoft.com/library/7aa0b9d2-5329-4bc3-9d41-856e30fe2c2b) dell'applicazione [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) funzione membro.  
  
 **MAPI (API di messaggistica)**  
 Specifica che l'applicazione è in grado di creare, modificare, trasferire e archiviare i messaggi di posta.  
  
 **Socket di Windows**  
 Supporta i socket Windows, che è possibile utilizzare per scrivere applicazioni in grado di comunicare su reti TCP/IP.  
  
 **Active Accessibility**  
 Aggiunge il supporto per [IAccessible](http://msdn.microsoft.com/library/windows/desktop/dd318466) a [CWnd](../../mfc/reference/cwnd-class.md)-classi derivate, che è possibile utilizzare per personalizzare l'interfaccia utente per una migliore interazione con i client di accessibilità.  
  
 **Manifesto controlli comuni**  
 Abilitato per impostazione predefinita. Genera un manifesto dell'applicazione per abilitare la DLL dei controlli comuni fornita con Microsoft Windows XP e i sistemi operativi più recenti.  
  
 La versione 6 della DLL dei controlli comuni non consente l'aggiornamento automatico della versione precedente dei controlli comuni utilizzata dalle applicazioni esistenti. Per utilizzare la versione 6 della DLL dei controlli comuni, è necessario creare un manifesto dell'applicazione che induca l'applicazione a caricare la DLL. La DLL dei controlli comuni supporta anche i temi di Windows XP.  
  
 Un manifesto dell'applicazione può anche specificare altre DLL e versioni necessarie all'applicazione. Per ulteriori informazioni sui manifesti dell'applicazione, vedere [applicazioni isolate e assembly Side-by-Side](http://msdn.microsoft.com/library/dd408052) nel [!INCLUDE[winsdkshort](../../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 **Supporto Gestione riavvio**  
 Aggiunge il supporto per il [Gestione riavvio di Windows](http://msdn.microsoft.com/library/windows/desktop/aa373680\(v=vs.85\).aspx). In questo video viene illustrato come utilizzare Gestione riavvio da MFC: [procedura: utilizzo del nuovo Restart Manager](http://msdn.microsoft.com/vstudio/ee886407).  
  
 **Riquadri frame avanzati**  
 |Opzione|Descrizione|  
|------------|-----------------|  
|**Riquadro ancorato di Explorer**|Crea un riquadro ancorato simile a Visual Studio **Esplora** a sinistra della finestra cornice principale.|  
|**Riquadro ancorato di tipo output**|Crea un riquadro ancorato simile a Visual Studio **Output** riquadro che si trova sotto la finestra cornice principale.|  
|**Riquadro ancorato di tipo proprietà**|Crea un riquadro ancorato simile a Visual Studio **proprietà** riquadro a destra della finestra cornice principale.|  
|**Riquadro di spostamento**|Crea un riquadro ancorato simile alla barra di navigazione di Outlook a sinistra della finestra cornice principale.|  
|**Barra del titolo**|Crea una barra del titolo di tipo Office sopra la finestra cornice principale.|  
  
 **Numero di file nell'elenco dei file recenti**  
 Specifica il numero di file da inserire nell'elenco dei file recenti. Il numero predefinito è 4.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)


