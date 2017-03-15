---
title: "Nozioni fondamentali sulla barra degli strumenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "RT_TOOLBAR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate applicazione [C++], installazione delle barre degli strumenti di applicazione predefinite"
  - "ID di comando, pulsanti della barra degli strumenti"
  - "CToolBar (classe), barre degli strumenti predefinite in Creazione guidata applicazione"
  - "incorporamento della barra degli strumenti nella classe finestra cornice"
  - "classi finestra cornice, barra degli strumenti in"
  - "LoadBitmap (metodo), barre degli strumenti"
  - "LoadToolBar (metodo)"
  - "risorse [MFC], barra degli strumenti"
  - "RT_TOOLBAR (risorsa)"
  - "SetButtons (metodo)"
  - "controlli della barra degli strumenti [MFC], ID di comando"
  - "controlli della barra degli strumenti [MFC], barre degli strumenti create in Creazione guidata applicazione"
  - "Editor barra degli strumenti, Creazione guidata applicazione"
  - "barre degli strumenti [C++], aggiunta di barre degli strumenti predefinite tramite Creazione guidata applicazione"
  - "barre degli strumenti [C++], creazione"
ms.assetid: cc00aaff-8a56-433b-b0c0-b857d76b4ffd
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Nozioni fondamentali sulla barra degli strumenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritta l'implementazione fondamentale di MFC che consente di aggiungere una barra degli strumenti predefinita all'applicazione selezionando un'opzione nella creazione guidata applicazione.  Vengono trattati i seguenti argomenti:  
  
-   [L'opzione della barra degli strumenti della creazione guidata applicazione](#_core_the_appwizard_toolbar_option)  
  
-   [La barra degli strumenti nel codice](#_core_the_toolbar_in_code)  
  
-   [Modificare la risorsa barra degli strumenti](#_core_editing_the_toolbar_resource)  
  
-   [Barre degli strumenti più](#_core_multiple_toolbars)  
  
##  <a name="_core_the_appwizard_toolbar_option"></a> L'opzione della barra degli strumenti della creazione guidata applicazione  
 Per ottenere una singola barra degli strumenti con i pulsanti predefiniti, selezionare l'opzione standard della barra degli strumenti ancorabile nella pagina denominata funzionalità dell'interfaccia utente.  In questo modo verrà aggiunto il codice all'applicazione che:  
  
-   Crea l'oggetto della barra degli strumenti.  
  
-   Gestisce la barra degli strumenti, tra cui la possibilità di ancoraggio o mobile.  
  
##  <a name="_core_the_toolbar_in_code"></a> La barra degli strumenti nel codice  
 La barra degli strumenti è un oggetto di [CToolBar](../mfc/reference/ctoolbar-class.md) dichiarata come membro dati di una classe di **CMainFrame** dell'applicazione.  Ovvero l'oggetto della barra degli strumenti è incorporato nell'oggetto finestra cornice principale.  Ciò significa che MFC crea la barra degli strumenti quando crea la finestra cornice e elimina la barra degli strumenti quando si elimina la finestra cornice.  La seguente dichiarazione di classe parziale, per un'applicazione MDI \(multiple\-document interface \(MDI\), i membri dati per la barra degli strumenti incorporata e una barra di stato incorporata.  Mostra inoltre l'override della funzione membro di `OnCreate`.  
  
 [!code-cpp[NVC_MFCListView#6](../mfc/codesnippet/CPP/toolbar-fundamentals_1.h)]  
  
 La creazione della barra degli strumenti si verifica in **CMainFrame::OnCreate**.  MFC chiama [OnCreate](../Topic/CWnd::OnCreate.md) dopo aver creato la finestra per il frame ma prima che diventa visibile.  `OnCreate` predefinito della creazione guidata applicazione genera vengono eseguite le attività seguenti della barra degli strumenti:  
  
1.  Chiama la funzione membro `CToolBar` dell'oggetto [Create](../Topic/CToolBar::Create.md) per creare l'oggetto sottostante [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md).  
  
2.  Chiama [LoadToolBar](../Topic/CToolBar::LoadToolBar.md) per caricare le informazioni sulle risorse della barra degli strumenti.  
  
3.  Le chiamate funziona per attivare l'ancoraggio, il mobile e le descrizioni comandi.  Per informazioni dettagliate sulle chiamate, vedere l'articolo [L'aggancio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md).  
  
> [!NOTE]
>  L'esempio generale [DOCKTOOL](../top/visual-cpp-samples.md) MFC include le illustrazioni delle barre degli strumenti recenti che nuove MFC.  Le barre degli strumenti che utilizzano **COldToolbar** richiedono le chiamate al passaggio 2 a `LoadBitmap` \(anziché `LoadToolBar`\) e a `SetButtons`.  Le nuove barre degli strumenti richiedono le chiamate a `LoadToolBar`.  
  
 Dock, il mobile e le chiamate delle descrizioni comandi sono facoltativi.  È possibile rimuovere le righe da `OnCreate` se si preferisce.  Il risultato è una barra degli strumenti che rimane fissa, unable to mobile o redock e non di visualizzare le descrizioni comandi.  
  
##  <a name="_core_editing_the_toolbar_resource"></a> Modificare la risorsa barra degli strumenti  
 La barra degli strumenti predefinita che si ottiene mediante la creazione guidata applicazione è basata su una risorsa personalizzata di **RT\_TOOLBAR**, introdotta nella versione 4,0 di MFC.  È possibile modificare questa risorsa con [editor barra degli strumenti](../mfc/toolbar-editor.md).  L'editor consente di facile aggiungere, rimuovere e riordinare i pulsanti.  Contiene un editor grafico per i pulsanti che è molto simile all'editor grafico generale in Visual C\+\+.  Se sono state modificate le barre degli strumenti nelle versioni precedenti di Visual C\+\+, sono ora l'attività molto più semplice.  
  
 Per connettere un pulsante della barra degli strumenti a un comando, assegnarvi pulsante un ID di comando, ad esempio `ID_MYCOMMAND`.  Specificare l'id di comando nella pagina proprietà del pulsante nell'editor barra degli strumenti.  Creare quindi una funzione di gestione per il comando \(vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md) per ulteriori informazioni.  
  
 Nuovo lavoro di funzioni membro di [CToolBar](../mfc/reference/ctoolbar-class.md) alla risorsa di **RT\_TOOLBAR**.  [LoadToolBar](../Topic/CToolBar::LoadToolBar.md) ora sostituisce [LoadBitmap](../Topic/CToolBar::LoadBitmap.md) per caricare la bitmap delle icone dei pulsanti della barra degli strumenti e [SetButtons](../Topic/CToolBar::SetButtons.md) per impostare gli stili del pulsante e connettere i pulsanti con immagini bitmap.  
  
 Per informazioni dettagliate su come utilizzare l'editor della barra degli strumenti, vedere [Editor barra degli strumenti](../mfc/toolbar-editor.md).  
  
##  <a name="_core_multiple_toolbars"></a> Barre degli strumenti più  
 La creazione guidata applicazione fornisce una barra degli strumenti predefinita.  Se sono necessari più barre degli strumenti dell'applicazione, è possibile modellare il codice per le barre degli strumenti aggiuntive in base al codice generato dalla creazione guidata nella barra degli strumenti predefinita.  
  
 Se si desidera visualizzare una barra degli strumenti come risultato di un comando, è necessario disporre di:  
  
-   Creare una nuova risorsa barra degli strumenti con l'editor barra degli strumenti e carichila in `OnCreate` con la funzione membro di [LoadToolbar](../Topic/CToolBar::LoadToolBar.md).  
  
-   Importare un nuovo oggetto di [CToolBar](../mfc/reference/ctoolbar-class.md) nella classe della finestra cornice principale.  
  
-   Fare chiamate a funzioni appropriate in `OnCreate` per ancorare o rendere mobile la barra degli strumenti, impostare gli stili, e così via.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Implementazione della barra degli strumenti MFC \(informazioni generali sulle barre degli strumenti\)](../mfc/mfc-toolbar-implementation.md)  
  
-   [Barre degli strumenti mobili e ancorate](../mfc/docking-and-floating-toolbars.md)  
  
-   [Descrizioni dei comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)  
  
-   [Utilizzo del controllo toolbar](../mfc/working-with-the-toolbar-control.md)  
  
-   [Utilizzando le barre degli strumenti obsolete](../mfc/using-your-old-toolbars.md)  
  
## Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)