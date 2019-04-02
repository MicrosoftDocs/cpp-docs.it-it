---
title: Ancoraggio e barre degli strumenti mobili
ms.date: 11/04/2016
f1_keywords:
- CBRS_SIZE_DYNAMIC
- CBRS_SIZE_FIXED
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
ms.openlocfilehash: 01450dca56ad662c8db0a35f89749c4a288109b3
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58768134"
---
# <a name="docking-and-floating-toolbars"></a>Ancoraggio e barre degli strumenti mobili

La libreria Microsoft Foundation Class supporta le barre degli strumenti ancorabile. Una barra degli strumenti ancorata può essere collegato o ancorato, a qualsiasi lato della finestra padre, o può essere scollegato, o mobile, in una finestra con mini-cornice. Questo articolo illustra come usare le barre degli strumenti ancorabile nelle applicazioni.

Se si usa la creazione guidata applicazione per generare la struttura dell'applicazione, viene chiesto di scegliere se si desidera che le barre degli strumenti ancorabile. Per impostazione predefinita, la creazione guidata applicazione genera il codice che esegue le tre azioni necessarie per inserire una barra degli strumenti ancorata nell'applicazione:

- [Attivare l'ancoraggio in una finestra cornice](#_core_enabling_docking_in_a_frame_window).

- [Attivare l'ancoraggio di una barra degli strumenti](#_core_enabling_docking_for_a_toolbar).

- [Ancorare la barra degli strumenti (alla finestra cornice)](#_core_docking_the_toolbar).

Se uno di questi passaggi non sono presente, l'applicazione verrà visualizzata una barra degli strumenti standard. Gli ultimi due passaggi devono essere eseguiti per ogni barra degli strumenti ancorata nell'applicazione.

Altri argomenti illustrati in questo articolo includono:

- [La barra degli strumenti mobile](#_core_floating_the_toolbar)

- [Ridimensionamento in modo dinamico la barra degli strumenti](#_core_dynamically_resizing_the_toolbar)

- [Posizioni di incapsulamento di impostazione per una barra degli strumenti fissa](#_core_setting_wrap_positions_for_a_fixed_style_toolbar)

Vedere l'esempio MFC generale [DOCKTOOL](../overview/visual-cpp-samples.md) per alcuni esempi.

##  <a name="_core_enabling_docking_in_a_frame_window"></a> L'abilitazione di ancoraggio in una finestra cornice

Per ancorare le barre degli strumenti a una finestra cornice, la finestra cornice (o destinazione) deve essere abilitata per consentire di ancoraggio. Questa operazione viene eseguita usando il [CFrameWnd:: EnableDocking](../mfc/reference/cframewnd-class.md#enabledocking) funzione che accetta uno *DWORD* parametro che è un set dello stile di bit che indica il lato della finestra cornice è possibile eseguire l'ancoraggio. Se una barra degli strumenti sta per essere ancorato e i lati sono presenti più parti che può essere ancorata a, indicati nel parametro passato al `EnableDocking` vengono usati nell'ordine seguente: superiore, inferiore, sinistra, destro. Se si desidera essere in grado di ancorare controllo barre ovunque, viene passato **CBRS_ALIGN_ANY** a `EnableDocking`.

##  <a name="_core_enabling_docking_for_a_toolbar"></a> Abilitazione di aggancio per una barra degli strumenti

Dopo avere preparato la destinazione di ancoraggio, è necessario preparare la barra degli strumenti (o origine) in modo analogo. Chiamare [CControlBar:: EnableDocking](../mfc/reference/ccontrolbar-class.md#enabledocking) per ogni barra degli strumenti che si desidera ancorare, specificare la destinazione lati a cui deve essere ancorata. Se nessuno dei lati specificati nella chiamata a `CControlBar::EnableDocking` corrisponde ai lati abilitati per l'ancoraggio della finestra cornice, non è possibile ancorare la barra degli strumenti, ovvero e rimarrà mobile. Dopo che è stata resa, rimane barra mobile, non è possibile ancorare alla finestra cornice.

Se l'effetto desiderato non è una barra degli strumenti mobile in modo permanente, chiamare `EnableDocking` con il parametro 0. Quindi chiamare [CFrameWnd:: FloatControlBar](../mfc/reference/cframewnd-class.md#floatcontrolbar). Barra degli strumenti rimane a virgola mobile, in modo permanente non è possibile in qualsiasi punto di ancoraggio.

##  <a name="_core_docking_the_toolbar"></a> Ancorare la barra degli strumenti

Il framework chiama [CFrameWnd:: DockControlBar](../mfc/reference/cframewnd-class.md#dockcontrolbar) quando l'utente tenta di eliminare la barra degli strumenti su un lato della finestra cornice che consenta di ancoraggio.

Inoltre, è possibile chiamare questa funzione in qualsiasi momento per ancorare le barre di controllo alla finestra cornice. Questa operazione viene normalmente eseguita durante l'inizializzazione. Più di una barra degli strumenti può essere ancorato a un lato specifico della finestra cornice.

##  <a name="_core_floating_the_toolbar"></a> La barra degli strumenti mobile

Scollegamento di una barra degli strumenti ancorata dalla finestra cornice viene chiamato la barra degli strumenti mobile. Chiamare [CFrameWnd:: FloatControlBar](../mfc/reference/cframewnd-class.md#floatcontrolbar) per eseguire questa operazione. Specificare la barra degli strumenti è resa mobile, il punto in cui deve essere inserito e uno stile di allineamento che determina se la barra degli strumenti mobile è orizzontale o verticale.

Il framework chiama questa funzione quando un utente trascina una barra degli strumenti off posizione di ancoraggio e lo rilascia in una posizione in cui di ancoraggio non è abilitato. Può essere un punto qualsiasi all'interno o all'esterno della finestra cornice. Come con `DockControlBar`, è anche possibile chiamare questa funzione durante l'inizializzazione.

L'implementazione MFC di barre degli strumenti ancorabili non fornisce alcune delle funzionalità estese disponibili in alcune applicazioni che supportano le barre degli strumenti ancorabile. Funzionalità quali le barre degli strumenti personalizzabile non disponibili.

##  <a name="_core_dynamically_resizing_the_toolbar"></a> Ridimensionamento in modo dinamico la barra degli strumenti

A partire da Visual C++ versione 4.0, è possibile renderlo possibili per gli utenti dell'applicazione da ridimensionare in modo dinamico le barre degli strumenti mobile. In genere, una barra degli strumenti dispone di una forma e lineare, visualizzata in orizzontale. Ma è possibile modificare l'orientamento della barra degli strumenti e la relativa forma. Ad esempio, quando l'utente ancora una barra degli strumenti sulla base di uno dei lati verticali della finestra cornice, la forma modifica a un layout verticale. È anche possibile modificare la barra degli strumenti in un rettangolo con più righe di pulsanti.

È possibile:

- Specificare il ridimensionamento dinamico come caratteristica della barra degli strumenti.

- Specificare dimensioni fisse come caratteristica della barra degli strumenti.

Per fornire questo supporto, sono disponibili due nuovi stili di barra degli strumenti per l'utilizzo nelle chiamate per il [CToolBar:: Create](../mfc/reference/ctoolbar-class.md#create) funzione membro. Ad esempio:

- **CBRS_SIZE_DYNAMIC** barra di controllo è dinamica.

- **CBRS_SIZE_FIXED** barra di controllo è fisso.

Lo stile di dimensione dinamica consente all'utente ridimensiona la barra degli strumenti quando è mobile, ma non quando è ancorata. Barra degli strumenti "esegue il wrapping" in cui è necessario modificare forma quando l'utente trascina relativi bordi.

La dimensione fissato stile consente di mantenere gli stati di incapsulamento di una barra degli strumenti, correggere la posizione dei pulsanti in ogni colonna. Utente dell'applicazione non è possibile modificare la forma della barra degli strumenti. Barra degli strumenti esegue il wrapping in determinati punti, ad esempio le posizioni dei separatori tra i pulsanti. La forma viene mantenuta se la barra degli strumenti è ancorato o mobile. L'effetto è presente una tavolozza fissa con più colonne di pulsanti.

È anche possibile usare [CToolBar:: GetButtonStyle](../mfc/reference/ctoolbar-class.md#getbuttonstyle) per restituire uno stato e stile per i pulsanti nella barra degli strumenti. Stile del pulsante determina come viene visualizzato il pulsante e modo in cui risponde all'input dell'utente; lo stato indica se il pulsante è stato eseguito.

##  <a name="_core_setting_wrap_positions_for_a_fixed_style_toolbar"></a> Posizioni di incapsulamento di impostazione per una barra degli strumenti fissa

Per una barra degli strumenti con una dimensione fissato di stile, designare sulla barra degli strumenti in corrispondenza del quale la barra degli strumenti eseguirà il wrapping degli indici di pulsante. Il codice seguente illustra come eseguire questa operazione della finestra cornice principale `OnCreate` eseguire l'override:

[!code-cpp[NVC_MFCDocViewSDI#10](../mfc/codesnippet/cpp/docking-and-floating-toolbars_1.cpp)]

L'esempio MFC generale [DOCKTOOL](../overview/visual-cpp-samples.md) Mostra come usare le funzioni membro delle classi [CControlBar](../mfc/reference/ccontrolbar-class.md) e [CToolBar](../mfc/reference/ctoolbar-class.md) per gestire il layout dinamico di una barra degli strumenti. Vedere il file EDITBAR. CPP in DOCKTOOL.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)

- [Descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md)

- [Uso delle barre degli strumenti precedente](../mfc/using-your-old-toolbars.md)

## <a name="see-also"></a>Vedere anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)
