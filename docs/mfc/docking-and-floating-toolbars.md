---
title: "Ancoraggio e barre degli strumenti mobili | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CBRS_SIZE_DYNAMIC"
  - "CBRS_SIZE_FIXED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBRS_ALIGN_ANY (costante)"
  - "CBRS_SIZE_DYNAMIC (costante)"
  - "CBRS_SIZE_FIXED (costante)"
  - "barre degli strumenti a dimensione fissa"
  - "tavolozze mobili"
  - "barre degli strumenti mobili"
  - "finestre cornice, ancoraggio della barra degli strumenti"
  - "tavolozze, mobili"
  - "dimensione"
  - "dimensione, barre degli strumenti"
  - "controlli della barra degli strumenti [MFC], wrapping"
  - "barre degli strumenti [C++], ancoraggio"
  - "barre degli strumenti [C++], mobili"
  - "barre degli strumenti [C++], dimensione"
  - "barre degli strumenti [C++], wrapping"
ms.assetid: b7f9f9d4-f629-47d2-a3c4-2b33fa6b51e4
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ancoraggio e barre degli strumenti mobili
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le barre degli strumenti ancorabili di supportare della libreria MFC.  Una barra degli strumenti ancorabile può essere collegata, o ancorata, a qualsiasi lato della finestra padre, oppure può essere rimosso, o essere eseguita mobile, in una finestra cornice piccola.  In questo articolo viene illustrato come utilizzare le barre degli strumenti ancorabili nelle applicazioni.  
  
 Se si utilizza la creazione guidata applicazione per generare lo scheletro dell'applicazione, viene chiesto di scegliere se si desidera che le barre degli strumenti ancorabili.  Per impostazione predefinita, la creazione guidata applicazione genera codice che esegue le tre operazioni necessarie per inserire una barra degli strumenti ancorabile dell'applicazione:  
  
-   [Attivare l'ancoraggio in una finestra cornice](#_core_enabling_docking_in_a_frame_window).  
  
-   [Attivare l'ancoraggio per una barra degli strumenti](#_core_enabling_docking_for_a_toolbar).  
  
-   [Ancorare la barra degli strumenti \(alla finestra cornice\)](#_core_docking_the_toolbar).  
  
 Se uno di questi passaggi mancanti, l'applicazione verrà visualizzata una barra degli strumenti standard.  Le ultime due operazioni devono essere eseguite per ciascuna barra degli strumenti ancorabile dell'applicazione.  
  
 Altri argomenti trattati in questo articolo sono:  
  
-   [Rendere mobile la barra degli strumenti](#_core_floating_the_toolbar)  
  
-   [Ridimensionamento dinamico della barra degli strumenti](#_core_dynamically_resizing_the_toolbar)  
  
-   [Impostare le posizioni del wrapping di una barra degli strumenti stile](#_core_setting_wrap_positions_for_a_fixed.2d.style_toolbar)  
  
 Vedere a MFC l'esempio generale [DOCKTOOL](../top/visual-cpp-samples.md) per esempi.  
  
##  <a name="_core_enabling_docking_in_a_frame_window"></a> Attivare l'ancoraggio in una finestra cornice  
 Per ancorare le barre degli strumenti a una finestra cornice, la finestra cornice \(o destinazione\) deve essere abilitata per consentire all'ancoraggio.  Questa operazione viene eseguita utilizzando la funzione di [CFrameWnd::EnableDocking](../Topic/CFrameWnd::EnableDocking.md), che accetta un parametro di `DWORD` ovvero un insieme di selezione di bit di stile quale lato della finestra cornice ancoraggio.  Se una barra degli strumenti sta per essere ancorato e esistono più lati che potrebbero essere ancorata a, i lati visualizzati nel parametro passato a `EnableDocking` vengono utilizzati nell'ordine seguente: top, bottom, left, right.  Se si desidera poter ancorare le barre di controllo in qualsiasi punto, passare `CBRS_ALIGN_ANY` a `EnableDocking`.  
  
##  <a name="_core_enabling_docking_for_a_toolbar"></a> Abilitare ancoraggio di una barra degli strumenti  
 Dopo aver preparato la destinazione per ancorare, è necessario preparare la barra degli strumenti \(o origine\) in modo simile.  Chiamata [CControlBar::EnableDocking](../Topic/CControlBar::EnableDocking.md) per ciascuna barra degli strumenti che si desidera ancorare, specificando i lati di destinazione in cui la barra degli strumenti deve essere ancorata.  Se nessuno dei lati specificati nella chiamata alla corrispondenza di `CControlBar::EnableDocking` i lati abilitati per ancorare la finestra cornice, la barra degli strumenti non possono essere \- galleggieranno.  Le barre degli strumenti mobili rimangono tali e non possono essere ancorate alla finestra cornice.  
  
 Se l'effetto desiderato è una barra degli strumenti in modo permanente di mobile, chiama `EnableDocking` con il parametro 0.  Chiamare quindi [CFrameWnd::FloatControlBar](../Topic/CFrameWnd::FloatControlBar.md).  La barra degli strumenti mobile, rimane in modo permanente impossibile di ancoraggio in qualsiasi posizione.  
  
##  <a name="_core_docking_the_toolbar"></a> Ancorare la barra degli strumenti  
 Il framework chiama [CFrameWnd::DockControlBar](../Topic/CFrameWnd::DockControlBar.md) quando l'utente tenta di eliminare la barra degli strumenti da un lato della finestra cornice che consente l'ancoraggio.  
  
 Inoltre, è possibile chiamare la funzione in qualsiasi momento per ancorare le barre di controllo alla finestra cornice.  In genere viene eseguita durante l'inizializzazione.  Più barre degli strumenti può essere ancorata a un particolare lato della finestra cornice.  
  
##  <a name="_core_floating_the_toolbar"></a> Rendere mobile la barra degli strumenti  
 Rimozione di una barra degli strumenti ancorabile dalla finestra cornice viene chiamato rendere mobile la barra degli strumenti.  Chiamata [CFrameWnd::FloatControlBar](../Topic/CFrameWnd::FloatControlBar.md) a tale scopo.  Specificare la barra degli strumenti da rendere mobile, il punto in cui deve essere inserita e uno stile di allineamento che determina se la barra degli strumenti mobile è orizzontale o verticale.  
  
 Il framework questa funzione viene chiamata quando un utente trascina una barra degli strumenti alla posizione ancorata e rilasciarlo nella posizione di ancoraggio non è abilitato.  Può trattarsi di qualsiasi punto all'interno della finestra cornice.  Come con `DockControlBar`, è anche possibile chiamare questa funzione durante l'inizializzazione.  
  
 L'implementazione di MFC barre degli strumenti ancorabili non vengono illustrate alcune delle funzionalità estese disponibili in alcune applicazioni che supportano le barre degli strumenti ancorabili.  Funzionalità quali barre degli strumenti personalizzabile non vengono concesse.  
  
##  <a name="_core_dynamically_resizing_the_toolbar"></a> Ridimensionamento dinamico della barra degli strumenti  
 A partire da Visual C\+\+ versione 4,0, è possibile permetterlo agli utenti dell'applicazione ridimensionare dinamicamente le barre degli strumenti mobili.  In genere, una barra degli strumenti dispone di una forma lunga e lineare, viene visualizzato orizzontalmente.  È tuttavia possibile modificare la forma della barra degli strumenti e l'orientamento.  Ad esempio, quando l'utente comunque una barra degli strumenti su uno dei lati verticali della finestra cornice, le modifiche forma in un layout verticale.  È inoltre possibile rimodellare la barra degli strumenti in un rettangolo con più righe di pulsanti.  
  
 È possibile:  
  
-   Specificare il ridimensionamento dinamico come caratteristica della barra degli strumenti.  
  
-   Specificare ha corretto il ridimensionamento come caratteristica della barra degli strumenti.  
  
 Per fornire questo supporto, esistono due nuovi stili della barra degli strumenti per l'utilizzo nelle chiamate alla funzione membro di [CToolBar::Create](../Topic/CToolBar::Create.md).  seguenti:  
  
-   La barra di controllo**CBRS\_SIZE\_DYNAMIC** è dinamica.  
  
-   La barra di controllo**CBRS\_SIZE\_FIXED** è fissa.  
  
 Lo stile dinamico di dimensione dell'utente ridimensionare la barra degli strumenti mentre è mobile, ma non mentre è ancorato.  La barra degli strumenti "esegue il wrapping di" dove necessario deformare quali l'utente trascina i suoi limiti.  
  
 Lo stile corretto dimensione conserva gli stati di una barra degli strumenti, correggere la posizione dei pulsanti in ogni colonna.  L'utente dell'applicazione non può modificare la forma della barra degli strumenti.  I wrapping della barra degli strumenti i punti definiti, quali le posizioni dei separatori tra i pulsanti.  Gestisce questa forma se la barra degli strumenti è ancorata o mobile.  L'effetto è una tavolozza fissa con più colonne di pulsanti.  
  
 È inoltre possibile utilizzare [CToolBar::GetButtonStyle](../Topic/CToolBar::GetButtonStyle.md) per restituire uno stato e uno stile per i pulsanti sulle barre degli strumenti.  Lo stile di un pulsante determina come il pulsante viene visualizzato e come rispondere all'utente; lo stato indica se il pulsante è in uno stato di cui è stato eseguito il wrapping.  
  
##  <a name="_core_setting_wrap_positions_for_a_fixed.2d.style_toolbar"></a> Impostare le posizioni del wrapping di una barra degli strumenti stile  
 Per una barra degli strumenti con lo stile corretto dimensioni, gli indici designare il pulsante della barra degli strumenti a cui la barra degli strumenti verrà eseguito il wrapping.  Nel codice seguente viene illustrato come procedere in override di `OnCreate` della finestra cornice principale:  
  
 [!code-cpp[NVC_MFCDocViewSDI#10](../mfc/codesnippet/CPP/docking-and-floating-toolbars_1.cpp)]  
  
 Mostra generali di [DOCKTOOL](../top/visual-cpp-samples.md) l'esempio MFC come utilizzare le funzioni membro delle classi [CControlBar](../mfc/reference/ccontrolbar-class.md) e [CToolBar](../mfc/reference/ctoolbar-class.md) per gestire layout dinamico di una barra degli strumenti.  Vedere il file EDITBAR.CPP in DOCKTOOL.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Descrizioni dei comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   [Utilizzando le barre degli strumenti obsolete](../mfc/using-your-old-toolbars.md)  
  
## Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)