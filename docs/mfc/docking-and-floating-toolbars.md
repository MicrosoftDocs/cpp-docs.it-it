---
description: 'Altre informazioni su: ancoraggio e barre degli strumenti mobili'
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
ms.openlocfilehash: 0cd4595dcc9353255408ce0bd1d3bb23e9b005f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330299"
---
# <a name="docking-and-floating-toolbars"></a>Ancoraggio e barre degli strumenti mobili

Il libreria Microsoft Foundation Class supporta le barre degli strumenti ancorabili. Una barra degli strumenti ancorabile può essere collegata o ancorata a qualsiasi lato della finestra padre oppure può essere scollegata o spostata in una finestra con mini-cornice. Questo articolo illustra come usare le barre degli strumenti ancorabili nelle applicazioni.

Se si utilizza la creazione guidata applicazione per generare la struttura dell'applicazione, viene richiesto di scegliere se si desidera che le barre degli strumenti siano ancorabili. Per impostazione predefinita, la creazione guidata applicazione genera il codice che esegue le tre azioni necessarie per inserire una barra degli strumenti ancorabile nell'applicazione:

- [Abilitare l'ancoraggio in una finestra cornice](#_core_enabling_docking_in_a_frame_window).

- [Abilitare l'ancoraggio per una barra degli strumenti](#_core_enabling_docking_for_a_toolbar).

- [Ancorare la barra degli strumenti (alla finestra cornice)](#_core_docking_the_toolbar).

Se uno di questi passaggi risulta mancante, l'applicazione visualizzerà una barra degli strumenti standard. È necessario eseguire gli ultimi due passaggi per ogni barra degli strumenti ancorabile dell'applicazione.

Altri argomenti trattati in questo articolo includono:

- [Mobile della barra degli strumenti](#_core_floating_the_toolbar)

- [Ridimensionamento dinamico della barra degli strumenti](#_core_dynamically_resizing_the_toolbar)

- [Impostazione delle posizioni di ritorno a capo per una barra degli strumenti di tipo fisso](#_core_setting_wrap_positions_for_a_fixed_style_toolbar)

Per esempi, vedere l'esempio generale MFC [DOCKTOOL](../overview/visual-cpp-samples.md) .

## <a name="enabling-docking-in-a-frame-window"></a><a name="_core_enabling_docking_in_a_frame_window"></a> Abilitazione dell'ancoraggio in una finestra cornice

Per ancorare le barre degli strumenti a una finestra cornice, è necessario abilitare la finestra cornice (o destinazione) per consentire l'ancoraggio. Questa operazione viene eseguita usando la funzione [CFrameWnd:: EnableDocking](reference/cframewnd-class.md#enabledocking) , che accetta un parametro *DWORD* che è un set di bit di stile che indica il lato della finestra cornice che accetta l'ancoraggio. Se una barra degli strumenti sta per essere ancorata e sono presenti più lati a cui potrebbe essere ancorato, i lati indicati nel parametro passato a `EnableDocking` vengono usati nell'ordine seguente: in alto, in basso, a sinistra, a destra. Se si vuole poter ancorare le barre di controllo, passare **CBRS_ALIGN_ANY** a `EnableDocking` .

## <a name="enabling-docking-for-a-toolbar"></a><a name="_core_enabling_docking_for_a_toolbar"></a> Abilitazione dell'ancoraggio per una barra degli strumenti

Dopo aver preparato la destinazione per l'ancoraggio, è necessario preparare la barra degli strumenti (o l'origine) in modo analogo. Chiamare [CControlBar:: EnableDocking](reference/ccontrolbar-class.md#enabledocking) per ogni barra degli strumenti che si desidera ancorare, specificando i lati di destinazione a cui deve essere ancorata la barra degli strumenti. Se nessuno dei lati specificati nella chiamata a `CControlBar::EnableDocking` corrisponde ai lati abilitati per l'ancoraggio nella finestra cornice, la barra degli strumenti non può essere ancorata, ma sarà mobile. Una volta che è stato eseguito il float, rimane una barra degli strumenti mobile e non è possibile ancorare la finestra cornice.

Se l'effetto desiderato è una barra degli strumenti a virgola mobile in modo permanente, chiamare `EnableDocking` con il parametro 0. Chiamare quindi [CFrameWnd:: FloatControlBar](reference/cframewnd-class.md#floatcontrolbar). La barra degli strumenti rimane mobile e non è in grado di ancorare in modo permanente.

## <a name="docking-the-toolbar"></a><a name="_core_docking_the_toolbar"></a> Ancoraggio della barra degli strumenti

Il Framework chiama [CFrameWnd::D ockcontrolbar](reference/cframewnd-class.md#dockcontrolbar) quando l'utente tenta di eliminare la barra degli strumenti su un lato della finestra cornice che consente l'ancoraggio.

Inoltre, è possibile chiamare questa funzione in qualsiasi momento per ancorare le barre di controllo alla finestra cornice. Questa operazione viene in genere eseguita durante l'inizializzazione. È possibile ancorare più di una barra degli strumenti a un lato specifico della finestra cornice.

## <a name="floating-the-toolbar"></a><a name="_core_floating_the_toolbar"></a> Mobile della barra degli strumenti

Lo scollegamento di una barra degli strumenti ancorabile dalla finestra cornice viene chiamato mobile della barra degli strumenti. Per eseguire questa operazione, chiamare [CFrameWnd:: FloatControlBar](reference/cframewnd-class.md#floatcontrolbar) . Specificare la barra degli strumenti da rendere mobile, il punto in cui deve essere posizionata e uno stile di allineamento che determina se la barra degli strumenti mobile è orizzontale o verticale.

Il Framework chiama questa funzione quando un utente trascina una barra degli strumenti dalla posizione ancorata e la rilascia in una posizione in cui l'ancoraggio non è abilitato. Può trovarsi in qualsiasi punto all'interno o all'esterno della finestra cornice. Come per `DockControlBar` , è anche possibile chiamare questa funzione durante l'inizializzazione.

L'implementazione MFC di barre degli strumenti ancorabili non fornisce alcune delle funzionalità estese disponibili in alcune applicazioni che supportano le barre degli strumenti ancorabili. Non sono disponibili funzionalità come le barre degli strumenti personalizzabili.

## <a name="dynamically-resizing-the-toolbar"></a><a name="_core_dynamically_resizing_the_toolbar"></a> Ridimensionamento dinamico della barra degli strumenti

A partire da Visual C++ versione 4,0, è possibile consentire agli utenti dell'applicazione di ridimensionare in modo dinamico le barre degli strumenti mobili. In genere, una barra degli strumenti ha una forma lungo e lineare, visualizzata orizzontalmente. È tuttavia possibile modificare l'orientamento della barra degli strumenti e la relativa forma. Ad esempio, quando l'utente ancora una barra degli strumenti su uno dei lati verticali della finestra cornice, la forma diventa un layout verticale. È anche possibile modificare la forma della barra degli strumenti in un rettangolo con più righe di pulsanti.

È possibile scegliere:

- Specificare il ridimensionamento dinamico come caratteristica della barra degli strumenti.

- Specificare il ridimensionamento fisso come caratteristica della barra degli strumenti.

Per fornire questo supporto, esistono due nuovi stili della barra degli strumenti da usare nelle chiamate alla funzione membro [CToolBar:: create](reference/ctoolbar-class.md#create) . Ad esempio:

- **CBRS_SIZE_DYNAMIC** La barra di controllo è dinamica.

- **CBRS_SIZE_FIXED** La barra di controllo è fissa.

Lo stile dinamico delle dimensioni consente all'utente di ridimensionare la barra degli strumenti mentre è mobile, ma non mentre è ancorata. La barra degli strumenti "wrapping" dove necessario per modificare la forma quando l'utente trascina i bordi.

Lo stile fisso delle dimensioni conserva gli Stati di ritorno a capo di una barra degli strumenti, correggendo la posizione dei pulsanti in ogni colonna. L'utente dell'applicazione non può modificare la forma della barra degli strumenti. La barra degli strumenti esegue il wrapping in posizioni designate, ad esempio le posizioni dei separatori tra i pulsanti. Mantiene questa forma se la barra degli strumenti è ancorata o mobile. L'effetto è una tavolozza fissa con più colonne di pulsanti.

Per restituire uno stato e uno stile per i pulsanti sulle barre degli strumenti, è inoltre possibile utilizzare [CToolBar:: GetButtonStyle](reference/ctoolbar-class.md#getbuttonstyle) . Lo stile di un pulsante determina come viene visualizzato il pulsante e come risponde all'input dell'utente; lo stato indica se il pulsante è in uno stato di incapsulamento.

## <a name="setting-wrap-positions-for-a-fixed-style-toolbar"></a><a name="_core_setting_wrap_positions_for_a_fixed_style_toolbar"></a> Impostazione delle posizioni a capo per una barra degli strumenti Fixed-Style

Per una barra degli strumenti con lo stile fisso dimensioni, designare gli indici dei pulsanti della barra degli strumenti in corrispondenza del quale viene eseguito il wrapping Il codice seguente illustra come eseguire questa operazione nell'override della finestra cornice principale `OnCreate` :

[!code-cpp[NVC_MFCDocViewSDI#10](codesnippet/cpp/docking-and-floating-toolbars_1.cpp)]

Il [DOCKTOOL](../overview/visual-cpp-samples.md) di esempio generale MFC Mostra come usare le funzioni membro delle classi [CControlBar](reference/ccontrolbar-class.md) e [CToolBar](reference/ctoolbar-class.md) per gestire il layout dinamico di una barra degli strumenti. Vedere il file EDITBAR. CPP in DOCKTOOL.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Nozioni fondamentali sulle barre degli strumenti](toolbar-fundamentals.md)

- [Descrizioni comando delle barre degli strumenti](toolbar-tool-tips.md)

- [Uso di barre degli strumenti precedenti](using-your-old-toolbars.md)

## <a name="see-also"></a>Vedi anche

[Implementazione della barra degli strumenti MFC](mfc-toolbar-implementation.md)
