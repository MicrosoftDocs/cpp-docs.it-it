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
ms.openlocfilehash: 30113565167b96b0df84a65768a1dfabe92ceffe
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369764"
---
# <a name="docking-and-floating-toolbars"></a>Ancoraggio e barre degli strumenti mobili

La libreria Microsoft Foundation Class supporta le barre degli strumenti ancorabili. Una barra degli strumenti ancorabile può essere collegata, o ancorata, a qualsiasi lato della finestra padre oppure può essere scollegata o mobile nella propria finestra cornice. In questo articolo viene illustrato come utilizzare le barre degli strumenti ancorabili nelle applicazioni.

Se si utilizza la creazione guidata applicazione per generare lo scheletro dell'applicazione, viene chiesto di scegliere se si desidera che le barre degli strumenti ancorabili. Per impostazione predefinita, la creazione guidata applicazione genera il codice che esegue le tre azioni necessarie per inserire una barra degli strumenti ancorabile nell'applicazione:By default, the Application Wizard generates the code that performs the three actions necessary to place a dockable toolbar in your application:

- [Abilitare l'ancoraggio in una finestra cornice](#_core_enabling_docking_in_a_frame_window).

- [Abilitare l'ancoraggio per una barra degli strumenti](#_core_enabling_docking_for_a_toolbar).

- [Ancorare la barra degli strumenti (alla finestra cornice)](#_core_docking_the_toolbar).

Se uno di questi passaggi non è presente, l'applicazione visualizzerà una barra degli strumenti standard. Gli ultimi due passaggi devono essere eseguiti per ogni barra degli strumenti ancorabile nell'applicazione.

Altri argomenti trattati in questo articolo includono:Other topics covered in this article include:

- [Mobile della barra degli strumenti](#_core_floating_the_toolbar)

- [Ridimensionamento dinamico della barra degli strumenti](#_core_dynamically_resizing_the_toolbar)

- [Impostazione delle posizioni di ritorno a capo per una barra degli strumenti a stile fisso](#_core_setting_wrap_positions_for_a_fixed_style_toolbar)

Per alcuni esempi, vedere l'esempio DI esempio DI generale MFC [DOCKTOOL.](../overview/visual-cpp-samples.md)

## <a name="enabling-docking-in-a-frame-window"></a><a name="_core_enabling_docking_in_a_frame_window"></a>Abilitazione dell'ancoraggio in una finestra corniceEnabling Docking in a Frame Window

Per ancorare le barre degli strumenti a una finestra cornice, è necessario attivare la finestra cornice (o la destinazione) per consentire l'ancoraggio. Questa operazione viene eseguita utilizzando la funzione [CFrameWnd::EnableDocking,](../mfc/reference/cframewnd-class.md#enabledocking) che accetta un parametro *DWORD* che è un set di bit di stile che indica quale lato della finestra cornice accetta l'ancoraggio. Se una barra degli strumenti sta per essere ancorata e ci sono più lati a `EnableDocking` cui potrebbe essere ancorata, i lati indicati nel parametro passato vengono utilizzati nel seguente ordine: superiore, inferiore, sinistro, destro. Se si desidera essere in grado di ancorare le barre di controllo ovunque, passare **CBRS_ALIGN_ANY** a `EnableDocking`.

## <a name="enabling-docking-for-a-toolbar"></a><a name="_core_enabling_docking_for_a_toolbar"></a>Abilitazione dell'ancoraggio per una barra degli strumentiEnabling Docking for a Toolbar

Dopo aver preparato la destinazione per l'ancoraggio, è necessario preparare la barra degli strumenti (o l'origine) in modo simile. Chiamare [CControlBar::EnableDocking](../mfc/reference/ccontrolbar-class.md#enabledocking) per ogni barra degli strumenti che si desidera ancorare, specificando i lati di destinazione a cui la barra degli strumenti deve ancorare. Se nessuno dei lati specificati nella `CControlBar::EnableDocking` chiamata deve corrispondere ai lati abilitati per l'ancoraggio nella finestra cornice, la barra degli strumenti non può ancorare, ovvero sarà mobile. Una volta che è stato mobile, rimane una barra degli strumenti mobile, in grado di ancorare alla finestra cornice.

Se l'effetto desiderato è una barra `EnableDocking` degli strumenti mobile in modo permanente, chiamare con un parametro pari a 0. Chiamare quindi [CFrameWnd::FloatControlBar](../mfc/reference/cframewnd-class.md#floatcontrolbar). La barra degli strumenti rimane mobile, in modo permanente impossibile ancorare da nessuna parte.

## <a name="docking-the-toolbar"></a><a name="_core_docking_the_toolbar"></a>Ancoraggio della barra degli strumenti

Il framework chiama [CFrameWnd::DockControlBar](../mfc/reference/cframewnd-class.md#dockcontrolbar) quando l'utente tenta di rilasciare la barra degli strumenti su un lato della finestra cornice che consente l'ancoraggio.

Inoltre, è possibile chiamare questa funzione in qualsiasi momento per ancorare le barre di controllo alla finestra cornice. Questa operazione viene in genere eseguita durante l'inizializzazione. È possibile ancorare più barre degli strumenti a un determinato lato della finestra cornice.

## <a name="floating-the-toolbar"></a><a name="_core_floating_the_toolbar"></a>Mobile della barra degli strumenti

Lo scollegamento di una barra degli strumenti ancorabile dalla finestra cornice è denominato barra degli strumenti mobile. Chiamare [CFrameWnd::FloatControlBar](../mfc/reference/cframewnd-class.md#floatcontrolbar) per eseguire questa operazione. Specificare la barra degli strumenti da rendere mobile, il punto in cui deve essere posizionata e uno stile di allineamento che determina se la barra degli strumenti mobile è orizzontale o verticale.

Il framework chiama questa funzione quando un utente trascina una barra degli strumenti dalla posizione ancorata e la rilascia in una posizione in cui l'ancoraggio non è abilitato. Può essere ovunque all'interno o all'esterno della finestra cornice. Come `DockControlBar`per , è anche possibile chiamare questa funzione durante l'inizializzazione.

L'implementazione MFC delle barre degli strumenti ancorabili non fornisce alcune delle funzionalità estese presenti in alcune applicazioni che supportano le barre degli strumenti ancorabili. Caratteristiche come le barre degli strumenti personalizzabili non sono forniti.

## <a name="dynamically-resizing-the-toolbar"></a><a name="_core_dynamically_resizing_the_toolbar"></a>Ridimensionamento dinamico della barra degli strumenti

A partire dalla versione 4.0, è possibile consentire agli utenti dell'applicazione di ridimensionare le barre degli strumenti mobili in modo dinamico. In genere, una barra degli strumenti ha una forma lunga e lineare, visualizzata orizzontalmente. Ma è possibile modificare l'orientamento della barra degli strumenti e la sua forma. Ad esempio, quando l'utente ancora una barra degli strumenti su uno dei lati verticali della finestra cornice, la forma assume un layout verticale. È anche possibile rimodellare la barra degli strumenti in un rettangolo con più righe di pulsanti.

È possibile:

- Specificare il ridimensionamento dinamico come caratteristica della barra degli strumenti.

- Specificare il ridimensionamento fisso come caratteristica della barra degli strumenti.

Per fornire questo supporto, sono disponibili due nuovi stili della barra degli strumenti da utilizzare nelle chiamate alla funzione membro [CToolBar::Create](../mfc/reference/ctoolbar-class.md#create) . ovvero:

- **CBRS_SIZE_DYNAMIC** La barra di controllo è dinamica.

- **CBRS_SIZE_FIXED** La barra di controllo è fissa.

Lo stile dinamico delle dimensioni consente all'utente di ridimensionare la barra degli strumenti mentre è mobile, ma non mentre è ancorata. La barra degli strumenti "avvolge" dove necessario per cambiare forma mentre l'utente trascina i bordi.

Lo stile fisso dimensione mantiene gli stati di ritorno a capo di una barra degli strumenti, fissando la posizione dei pulsanti in ogni colonna. L'utente dell'applicazione non può modificare la forma della barra degli strumenti. La barra degli strumenti va a capo nelle posizioni designate, ad esempio le posizioni dei separatori tra i pulsanti. Mantiene questa forma se la barra degli strumenti è ancorata o mobile. L'effetto è una tavolozza fissa con più colonne di pulsanti.

È anche possibile usare [CToolBar::GetButtonStyle](../mfc/reference/ctoolbar-class.md#getbuttonstyle) per restituire uno stato e uno stile per i pulsanti delle barre degli strumenti. Lo stile di un pulsante determina la modalità di visualizzazione del pulsante e la modalità di risposta all'input dell'utente; lo stato indica se il pulsante è in uno stato di cui è stato eseguito il wrapping.

## <a name="setting-wrap-positions-for-a-fixed-style-toolbar"></a><a name="_core_setting_wrap_positions_for_a_fixed_style_toolbar"></a>Impostazione delle posizioni di ritorno a capo per una barra degli strumenti a stile fisso

Per una barra degli strumenti con lo stile fisso delle dimensioni, designare gli indici dei pulsanti della barra degli strumenti in corrispondenza dei quali la barra degli strumenti andrà a capo. Il codice seguente mostra come eseguire questa operazione `OnCreate` nell'override della finestra cornice principale:The following code shows how to do this in your main frame window's override:

[!code-cpp[NVC_MFCDocViewSDI#10](../mfc/codesnippet/cpp/docking-and-floating-toolbars_1.cpp)]

Nell'esempio DI ambiente GEN MFC [DOCKTOOL](../overview/visual-cpp-samples.md) viene illustrato come utilizzare le funzioni membro delle classi [CControlBar](../mfc/reference/ccontrolbar-class.md) e [CToolBar](../mfc/reference/ctoolbar-class.md) per gestire il layout dinamico di una barra degli strumenti. Vedere il file EDITBAR. CPP in DOCKTOOL.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)

- [Descrizioni comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)

- [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

## <a name="see-also"></a>Vedere anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)
