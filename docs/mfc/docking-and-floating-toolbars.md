---
title: Ancoraggio e barre degli strumenti mobili | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CBRS_SIZE_DYNAMIC
- CBRS_SIZE_FIXED
dev_langs:
- C++
helpviewer_keywords:
- size [MFC], toolbars
- size
- frame windows [MFC], toolbar docking
- CBRS_ALIGN_ANY constant [MFC]
- palettes, floating
- toolbars [MFC], docking
- CBRS_SIZE_DYNAMIC constant [MFC]
- floating toolbars
- toolbars [MFC], size
- toolbars [MFC], floating
- fixed-size toolbars
- CBRS_SIZE_FIXED constant [MFC]
- toolbar controls [MFC], wrapping
- toolbars [MFC], wrapping
- floating palettes
ms.assetid: b7f9f9d4-f629-47d2-a3c4-2b33fa6b51e4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 317527d87c12a0c140c4a618ec4500dbe12bb003
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931889"
---
# <a name="docking-and-floating-toolbars"></a>Ancoraggio e barre degli strumenti mobili
La libreria Microsoft Foundation Class supporta le barre degli strumenti ancorabile. Una barra degli strumenti ancorata possa essere collegato o ancorata a qualsiasi lato della finestra padre, oppure può essere scollegato, o spostata, nella propria finestra con mini-cornice. In questo articolo viene illustrato come utilizzare le barre degli strumenti ancorabile nelle applicazioni.  
  
 Se si utilizza la creazione guidata applicazione per generare lo scheletro dell'applicazione, viene chiesto di scegliere se si desidera che le barre degli strumenti ancorabile. Per impostazione predefinita, la creazione guidata applicazione genera il codice che esegue le tre azioni necessarie per inserire una barra degli strumenti ancorata nell'applicazione in uso:  
  
-   [Attivare l'ancoraggio in una finestra cornice](#_core_enabling_docking_in_a_frame_window).  
  
-   [Attivare l'ancoraggio per una barra degli strumenti](#_core_enabling_docking_for_a_toolbar).  
  
-   [Ancorare la barra degli strumenti (alla finestra cornice)](#_core_docking_the_toolbar).  
  
 Se uno di questi passaggi sono mancante, l'applicazione verrà visualizzata una barra degli strumenti standard. Per ogni barra degli strumenti ancorata nell'applicazione, è necessario effettuare le ultime due fasi.  
  
 Altri argomenti trattati in questo articolo includono:  
  
-   [La barra degli strumenti mobile](#_core_floating_the_toolbar)  
  
-   [Ridimensionamento dinamico barra degli strumenti](#_core_dynamically_resizing_the_toolbar)  
  
-   [Posizioni incapsulamento di impostazione di una barra degli strumenti lo stile predefinito](#_core_setting_wrap_positions_for_a_fixed_style_toolbar)  
  
 Vedere l'esempio MFC generale [DOCKTOOL](../visual-cpp-samples.md) per alcuni esempi.  
  
##  <a name="_core_enabling_docking_in_a_frame_window"></a> Attivazione dell'ancoraggio in una finestra cornice  
 Per ancorare le barre degli strumenti in una finestra cornice, la finestra cornice (o destinazione) deve essere abilitata per consentire di ancoraggio. Questa operazione viene eseguita utilizzando il [CFrameWnd:: EnableDocking](../mfc/reference/cframewnd-class.md#enabledocking) funzione che accetta uno *DWORD* parametro che è un set di stile bit che indica quale lato della finestra cornice accetta di ancoraggio. Se una barra degli strumenti sta per essere ancorato e i lati sono presenti più lati che può essere ancorata a, indicati nel parametro passato a `EnableDocking` vengono utilizzati nell'ordine seguente: superiore, inferiore, sinistra, destro. Se si desidera essere in grado di ancorare controllo barre remoto via Internet, passare **CBRS_ALIGN_ANY** a `EnableDocking`.  
  
##  <a name="_core_enabling_docking_for_a_toolbar"></a> L'abilitazione di ancoraggio per una barra degli strumenti  
 Dopo avere preparato la posizione di ancoraggio, è necessario preparare la barra degli strumenti (o origine) in modo simile. Chiamare [CControlBar:: EnableDocking](../mfc/reference/ccontrolbar-class.md#enabledocking) per ogni barra degli strumenti che si desidera ancorare, specificare la destinazione lati a cui deve essere ancorata. Se nessuno dei lati specificati nella chiamata a `CControlBar::EnableDocking` corrisponde ai lati attivati per l'ancoraggio della finestra cornice, non è possibile ancorare la barra degli strumenti, ovvero e rimarrà mobile. Una volta è stata resa, esso rimane barra mobile, non è possibile ancorare la finestra cornice.  
  
 Se l'effetto desiderato è una barra degli strumenti mobile in modo permanente, chiamare `EnableDocking` con un parametro di 0. Quindi chiamare [CFrameWnd:: FloatControlBar](../mfc/reference/cframewnd-class.md#floatcontrolbar). La barra degli strumenti rimane mobile, in modo permanente non è possibile ancorare in qualsiasi punto.  
  
##  <a name="_core_docking_the_toolbar"></a> La barra degli strumenti di ancoraggio  
 Il framework chiama [CFrameWnd:: DockControlBar](../mfc/reference/cframewnd-class.md#dockcontrolbar) quando l'utente tenta di eliminare la barra degli strumenti su un lato della finestra cornice che consente di ancoraggio.  
  
 Inoltre, è possibile chiamare questa funzione in qualsiasi momento per ancorare le barre di controllo alla finestra cornice. Questa operazione viene in genere eseguita durante l'inizializzazione. Più di una barra degli strumenti può essere ancorato a un lato della finestra cornice.  
  
##  <a name="_core_floating_the_toolbar"></a> La barra degli strumenti mobile  
 Scollegamento di una barra degli strumenti ancorata dalla finestra cornice viene chiamato la barra degli strumenti mobile. Chiamare [CFrameWnd:: FloatControlBar](../mfc/reference/cframewnd-class.md#floatcontrolbar) per eseguire questa operazione. Specificare la barra degli strumenti per è resa mobile, il punto in cui deve essere inserito e uno stile di allineamento che determina se la barra degli strumenti mobile è orizzontale o verticale.  
  
 Il framework chiama questa funzione quando un utente trascina una barra degli strumenti Disattiva posizione di ancoraggio e lo rilascia in una posizione in cui ancoraggio non è abilitato. Può trattarsi in un punto qualsiasi all'interno o all'esterno della finestra cornice. Come con `DockControlBar`, è inoltre possibile chiamare questa funzione durante l'inizializzazione.  
  
 L'implementazione MFC di barre degli strumenti ancorabili non fornisce alcune delle funzioni estese disponibile in alcune applicazioni che supportano le barre degli strumenti ancorabile. Non sono fornite le funzionalità, ad esempio le barre degli strumenti personalizzabile.  
  
##  <a name="_core_dynamically_resizing_the_toolbar"></a> Ridimensionamento dinamico barra degli strumenti  
 A partire da Visual C++ versione 4.0, è possibile renderlo possibili per gli utenti dell'applicazione per ridimensionare in modo dinamico le barre degli strumenti mobile. In genere, una barra degli strumenti dispone di una forma, long, lineare visualizzata orizzontalmente. Ma è possibile modificare l'orientamento della barra degli strumenti e la relativa forma. Quando l'utente ancora una barra degli strumenti rispetto a uno dei lati verticali della finestra cornice, la forma modificato, ad esempio, un layout verticale. È inoltre possibile modificare la forma delle barra degli strumenti in un rettangolo con più righe di pulsanti.  
  
 È possibile:  
  
-   Specificare ridimensionamento dinamico come una caratteristica della barra degli strumenti.  
  
-   Specificare dimensioni fisse come una caratteristica della barra degli strumenti.  
  
 Per fornire questo supporto, sono disponibili due nuovi stili della barra degli strumenti per l'utilizzo nelle chiamate ai [CToolBar:: Create](../mfc/reference/ctoolbar-class.md#create) funzione membro. Ad esempio:  
  
-   **CBRS_SIZE_DYNAMIC** barra di controllo è dinamica.  
  
-   **CBRS_SIZE_FIXED** barra di controllo è fissa.  
  
 Lo stile di dimensioni dinamica consente l'utente ridimensiona la barra degli strumenti quando è mobile, ma non quando è ancorata. La barra degli strumenti "esegue il wrapping" dove necessario per modificare forma mentre l'utente trascina relativi bordi.  
  
 Le dimensioni stile fissato consente di mantenere gli stati di incapsulamento di una barra degli strumenti, fissando la posizione dei pulsanti in ogni colonna. Utente dell'applicazione non è possibile modificare la forma della barra degli strumenti. La barra degli strumenti esegue il wrapping in determinati punti, ad esempio le posizioni dei separatori tra i pulsanti. Questa forma viene mantenuta se la barra degli strumenti è ancorato o mobile. L'effetto è una tavolozza fissa con più colonne di pulsanti.  
  
 È anche possibile usare [CToolBar:: GetButtonStyle](../mfc/reference/ctoolbar-class.md#getbuttonstyle) per restituire un stato e lo stile per i pulsanti nella barra degli strumenti. Stile del pulsante determina come viene visualizzato il pulsante e la modalità di risposta all'input dell'utente; lo stato indica se il pulsante è stato eseguito.  
  
##  <a name="_core_setting_wrap_positions_for_a_fixed_style_toolbar"></a> Impostazione delle posizioni di incapsulamento per una barra degli strumenti lo stile predefinito  
 Per una barra degli strumenti con la dimensione stile fissato, designare sulla barra degli strumenti indici pulsante in corrispondenza del quale la barra degli strumenti eseguirà il wrapping. Nel codice seguente viene illustrato come eseguire questa operazione nella finestra cornice principale `OnCreate` eseguire l'override:  
  
 [!code-cpp[NVC_MFCDocViewSDI#10](../mfc/codesnippet/cpp/docking-and-floating-toolbars_1.cpp)]  
  
 L'esempio MFC generale [DOCKTOOL](../visual-cpp-samples.md) viene illustrato come utilizzare le funzioni membro delle classi [CControlBar](../mfc/reference/ccontrolbar-class.md) e [CToolBar](../mfc/reference/ctoolbar-class.md) per gestire il layout dinamico di una barra degli strumenti. Vedere il file EDITBAR. CPP DOCKTOOL.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)  
  
-   [Descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md)  
  
-   [Utilizzo delle barre degli strumenti precedente](../mfc/using-your-old-toolbars.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)

