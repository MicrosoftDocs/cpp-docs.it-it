---
title: 'Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows'
ms.date: 09/12/2018
f1_keywords:
- precreatewindow
- IsSubclassed
helpviewer_keywords:
- OnDraw method, MFC ActiveX controls
- subclassing
- DoSuperclassPaint method [MFC]
- subclassing Windows controls
- subclassing, Windows controls
- reflected messages, in ActiveX controls
- PreCreateWindow method, overriding
- MFC ActiveX controls [MFC], subclassed controls
- MFC ActiveX controls [MFC], creating
- IsSubclassed method [MFC]
ms.assetid: 3236d4de-401f-49b7-918d-c84559ecc426
ms.openlocfilehash: c68a7c9764e7f52131a90d38db22d2645eed9a4f
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625416"
---
# <a name="mfc-activex-controls-subclassing-a-windows-control"></a>Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows

In questo articolo viene descritto il processo per la creazione di una sottoclasse di un controllo Windows comune per creare un controllo ActiveX. La creazione di una sottoclasse di un controllo Windows esistente è un modo rapido per sviluppare un controllo ActiveX. Il nuovo controllo disporrà delle funzionalità dei controlli Windows sottoclassati, come il disegno e la risposta ai clic del mouse. Il [pulsante](../overview/visual-cpp-samples.md) di esempio MFC ActiveX Controls è un esempio di sottoclasse di un controllo Windows.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

Per creare una sottoclasse di un controllo Windows, completare le seguenti attività:

- [Eseguire l'override delle funzioni membro PreCreateWindow e IsSubclassedControl di COleControl](#_core_overriding_issubclassedcontrol_and_precreatewindow)

- [Modificare la funzione membro OnDraw](#_core_modifying_the_ondraw_member_function)

- [Gestire tutti i messaggi del controllo ActiveX (OCM) applicati al controllo](#_core_handling_reflected_window_messages)

   > [!NOTE]
   > La maggior parte di queste operazioni viene eseguita per l'utente tramite la creazione guidata controllo ActiveX se si seleziona il controllo da sottoclassare utilizzando l'elenco a discesa **Seleziona classe finestra padre** nella pagina **Impostazioni controllo** .

## <a name="overriding-issubclassedcontrol-and-precreatewindow"></a><a name="_core_overriding_issubclassedcontrol_and_precreatewindow"></a>Override di IsSubclassedControl e PreCreateWindow

Per eseguire l'override di `PreCreateWindow` e `IsSubclassedControl` , aggiungere le righe di codice seguenti alla sezione **protetta** della dichiarazione della classe del controllo:

[!code-cpp[NVC_MFC_AxSub#1](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_1.h)]

Nel file di implementazione del controllo (.CPP), aggiungere le seguenti righe di codice per implementare le due funzioni sottoposte a override:

[!code-cpp[NVC_MFC_AxSub#2](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_2.cpp)]

Notare che, in questo esempio, il controllo pulsante Windows viene specificato in `PreCreateWindow`. Tuttavia, tutti i controlli Windows standard possono essere sottoclassati. Per ulteriori informazioni sui controlli Windows standard, vedere [controlli](controls-mfc.md).

Quando si crea una sottoclasse di un controllo Windows, è possibile specificare i flag di uno stile particolare per la finestra (WS_) o di uno stile esteso della finestra (WS_EX_) da utilizzare nella creazione della finestra del controllo. È possibile impostare i valori per questi parametri nella `PreCreateWindow` funzione membro modificando i `cs.style` campi e della `cs.dwExStyle` struttura. Per mantenere i flag predefiniti impostati dalla classe, è necessario apportare modifiche a questi campi usando un'operazione **o** `COleControl` . Ad esempio, se il controllo crea una sottoclasse del controllo BUTTON e si desidera che il controllo venga visualizzato come casella di controllo, inserire la seguente riga di codice nell'implementazione di `CSampleCtrl::PreCreateWindow`, prima dell'istruzione return:

[!code-cpp[NVC_MFC_AxSub#3](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_3.cpp)]

Questa operazione aggiunge il flag di stile BS_CHECKBOX, lasciando inalterato il flag di stile predefinito (WS_CHILD) della classe `COleControl` .

## <a name="modifying-the-ondraw-member-function"></a><a name="_core_modifying_the_ondraw_member_function"></a>Modifica della funzione membro onpare

Se si desidera che il controllo sottoclassato mantenga lo stesso aspetto del controllo Windows corrispondente, la funzione membro `OnDraw` per il controllo deve contenere solo una chiamata alla funzione membro `DoSuperclassPaint`, come mostrato nel seguente esempio:

[!code-cpp[NVC_MFC_AxSub#4](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_4.cpp)]

La funzione membro `DoSuperclassPaint`, implementata da `COleControl`, utilizza la procedura della finestra del controllo Windows per disegnare il controllo nel contesto di dispositivo specificato, all'interno del rettangolo di delimitazione. In questo modo il controllo è visibile anche quando non è attivo.

> [!NOTE]
> La `DoSuperclassPaint` funzione membro funziona solo con i tipi di controllo che consentono il passaggio di un contesto di dispositivo come *wParam* di un messaggio di WM_PAINT. Ciò include alcuni dei controlli Windows standard, ad esempio SCROLLBAR e BUTTON e tutti i controlli comuni. Per i controlli che non supportano questo comportamento, è necessario fornire il proprio codice per visualizzare correttamente un controllo inattivo.

## <a name="handling-reflected-window-messages"></a><a name="_core_handling_reflected_window_messages"></a>Gestione dei messaggi della finestra riflessi

I controlli Windows in genere inviano determinati messaggi finestra alla rispettiva finestra padre. Alcuni di questi messaggi, ad esempio WM_COMMAND, forniscono le notifiche di un'azione eseguita dall'utente. Altri, ad esempio WM_CTLCOLOR, vengono utilizzati per ottenere informazioni dalla finestra padre. Un controllo ActiveX in genere comunica con la finestra padre in altri modi. Le notifiche vengono passate generando eventi (inviando notifiche di eventi) e le informazioni sul contenitore del controllo vengono ottenute accedendo alle proprietà di ambiente del contenitore. Grazie a queste tecniche di comunicazione, i contenitori di controlli ActiveX non prevedono l'elaborazione dei messaggi finestra inviati dal controllo.

Per impedire al contenitore di ricevere dei messaggi finestra inviati da un controllo Windows sottoclassato, `COleControl` crea una finestra aggiuntiva che serve da padre del controllo. Questa finestra aggiuntiva, denominata "riflettore", viene creata solo per un controllo ActiveX che crea la sottoclasse di un controllo Windows e dispone delle stesse dimensioni e posizione della finestra del controllo. La finestra riflettore intercetta determinati messaggi della finestra e li invia al controllo. Il controllo, nella routine della finestra, può quindi elaborare questi messaggi riflessi intraprendendo le opportune azioni per un controllo ActiveX (ad esempio, generando un evento). Vedere gli [ID messaggio della finestra riflessi](reflected-window-message-ids.md) per un elenco di messaggi di Windows intercettati e i messaggi riflessi corrispondenti.

Un contenitore di controlli ActiveX può essere progettato per eseguire la reflection dei messaggi, evitando a `COleControl` la necessità di creare la finestra riflettore e riducendo il sovraccarico di runtime per un controllo Windows sottoclassato. `COleControl`rileva se il contenitore supporta questa funzionalità verificando la presenza di una proprietà di ambiente MessageReflect con il valore **true**.

Per gestire un messaggio della finestra riflesso, aggiungere una voce alla mappa messaggi del controllo e implementare una funzione del gestore. Poiché i messaggi riflessi non fanno parte del set di messaggi standard definiti da Windows, Visualizzazione classi non supporta l'aggiunta di tali gestori di messaggi. Tuttavia, non è difficile aggiungere un gestore manualmente.

Per aggiungere manualmente un gestore messaggi per un messaggio della finestra riflesso, effettuare le operazioni seguenti:

- Nel file .H della classe del controllo, dichiarare una funzione del gestore. La funzione deve avere un tipo restituito **LRESULT** e due parametri, rispettivamente con i tipi **wParam** e **lParam**. Ad esempio:

   [!code-cpp[NVC_MFC_AxSub#5](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_5.h)]
    [!code-cpp[NVC_MFC_AxSub#6](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_6.h)]

- Nella classe del controllo. File CPP, aggiungere una voce ON_MESSAGE alla mappa messaggi. I parametri di questa voce devono essere l'identificatore del messaggio e il nome della funzione del gestore. Ad esempio:

   [!code-cpp[NVC_MFC_AxSub#7](codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_7.cpp)]

- Anche in. File CPP, implementare la `OnOcmCommand` funzione membro per elaborare il messaggio riflesso. I parametri *wParam* e *lParam* corrispondono a quelli del messaggio della finestra originale.

Per un esempio della modalità di elaborazione dei messaggi riflessi, fare riferimento al [pulsante](../overview/visual-cpp-samples.md)di esempio MFC dei controlli ActiveX. Viene illustrato un `OnOcmCommand` gestore che rileva il codice di notifica BN_CLICKED e risponde generando (inviando) un `Click` evento.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
