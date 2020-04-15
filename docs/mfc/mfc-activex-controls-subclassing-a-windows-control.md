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
ms.openlocfilehash: ccebbad22be92b84fa2fd84434f788484d332cce
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376003"
---
# <a name="mfc-activex-controls-subclassing-a-windows-control"></a>Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows

In questo articolo viene descritto il processo per la creazione di una sottoclasse di un controllo Windows comune per creare un controllo ActiveX. La creazione di una sottoclasse di un controllo Windows esistente è un modo rapido per sviluppare un controllo ActiveX. Il nuovo controllo disporrà delle funzionalità dei controlli Windows sottoclassati, come il disegno e la risposta ai clic del mouse. L'esempio di controlli ActiveX MFC BUTTON è un esempio di creazione di una sottoclasse di un controllo Windows.The MFC ActiveX controls sample [BUTTON](../overview/visual-cpp-samples.md) is an example of subclassing a Windows control.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Per creare una sottoclasse di un controllo Windows, completare le seguenti attività:

- [Eseguire l'override delle funzioni membro PreCreateWindow e IsSubclassedControl di COleControl](#_core_overriding_issubclassedcontrol_and_precreatewindow)

- [Modificare la funzione membro OnDraw](#_core_modifying_the_ondraw_member_function)

- [Gestire tutti i messaggi del controllo ActiveX (OCM) applicati al controllo](#_core_handling_reflected_window_messages)

   > [!NOTE]
   > Gran parte di questo lavoro viene eseguito per l'utente dalla Creazione guidata controllo ActiveX se si seleziona il controllo da sottoclassare utilizzando l'elenco a discesa **Seleziona classe finestra padre** nella pagina Impostazioni **controllo.**

## <a name="overriding-issubclassedcontrol-and-precreatewindow"></a><a name="_core_overriding_issubclassedcontrol_and_precreatewindow"></a>Override di IsSubclassedControl e PreCreateWindow

Per `PreCreateWindow` eseguire `IsSubclassedControl`l'override e aggiungere le seguenti righe di codice alla sezione **protected** della dichiarazione della classe del controllo:

[!code-cpp[NVC_MFC_AxSub#1](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_1.h)]

Nel file di implementazione del controllo (.CPP), aggiungere le seguenti righe di codice per implementare le due funzioni sottoposte a override:

[!code-cpp[NVC_MFC_AxSub#2](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_2.cpp)]

Notare che, in questo esempio, il controllo pulsante Windows viene specificato in `PreCreateWindow`. Tuttavia, tutti i controlli Windows standard possono essere sottoclassati. Per ulteriori informazioni sui controlli Windows standard, vedere [Controlli](../mfc/controls-mfc.md).

Quando si crea una sottoclasse di un controllo Windows, è possibile specificare i flag di uno stile particolare per la finestra (WS_) o di uno stile esteso della finestra (WS_EX_) da utilizzare nella creazione della finestra del controllo. È possibile impostare i `PreCreateWindow` valori per questi `cs.style` parametri `cs.dwExStyle` nella funzione membro modificando i campi di struttura e . Le modifiche a questi campi devono essere apportate utilizzando un'operazione `COleControl` **OR,** per mantenere i flag predefiniti impostati dalla classe . Ad esempio, se il controllo crea una sottoclasse del controllo BUTTON e si desidera che il controllo venga visualizzato come casella di controllo, inserire la seguente riga di codice nell'implementazione di `CSampleCtrl::PreCreateWindow`, prima dell'istruzione return:

[!code-cpp[NVC_MFC_AxSub#3](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_3.cpp)]

Questa operazione aggiunge il flag di stile BS_CHECKBOX, lasciando `COleControl` intatto il flag di stile predefinito (WS_CHILD) della classe.

## <a name="modifying-the-ondraw-member-function"></a><a name="_core_modifying_the_ondraw_member_function"></a>Modifica della funzione membro OnDraw

Se si desidera che il controllo sottoclassato mantenga lo stesso aspetto del controllo Windows corrispondente, la funzione membro `OnDraw` per il controllo deve contenere solo una chiamata alla funzione membro `DoSuperclassPaint`, come mostrato nel seguente esempio:

[!code-cpp[NVC_MFC_AxSub#4](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_4.cpp)]

La funzione membro `DoSuperclassPaint`, implementata da `COleControl`, utilizza la procedura della finestra del controllo Windows per disegnare il controllo nel contesto di dispositivo specificato, all'interno del rettangolo di delimitazione. In questo modo il controllo è visibile anche quando non è attivo.

> [!NOTE]
> La `DoSuperclassPaint` funzione membro funzionerà solo con i tipi di controllo che consentono di passare un contesto di periferica come *wParam* di un messaggio di WM_PAINT. Ciò include alcuni dei controlli Windows standard, ad esempio SCROLLBAR e BUTTON e tutti i controlli comuni. Per i controlli che non supportano questo comportamento, è necessario fornire il proprio codice per visualizzare correttamente un controllo inattivo.

## <a name="handling-reflected-window-messages"></a><a name="_core_handling_reflected_window_messages"></a>Gestione dei messaggi di finestra riflessiHandling Reflected Window Messages

I controlli Windows in genere inviano determinati messaggi finestra alla rispettiva finestra padre. Alcuni di questi messaggi, ad esempio WM_COMMAND, forniscono le notifiche di un'azione eseguita dall'utente. Altri, ad esempio WM_CTLCOLOR, vengono utilizzati per ottenere informazioni dalla finestra padre. Un controllo ActiveX in genere comunica con la finestra padre in altri modi. Le notifiche vengono passate generando eventi (inviando notifiche di eventi) e le informazioni sul contenitore del controllo vengono ottenute accedendo alle proprietà di ambiente del contenitore. Grazie a queste tecniche di comunicazione, i contenitori di controlli ActiveX non prevedono l'elaborazione dei messaggi finestra inviati dal controllo.

Per impedire al contenitore di ricevere dei messaggi finestra inviati da un controllo Windows sottoclassato, `COleControl` crea una finestra aggiuntiva che serve da padre del controllo. Questa finestra aggiuntiva, denominata "riflettore", viene creata solo per un controllo ActiveX che crea la sottoclasse di un controllo Windows e dispone delle stesse dimensioni e posizione della finestra del controllo. La finestra riflettore intercetta determinati messaggi della finestra e li invia al controllo. Il controllo, nella routine della finestra, può quindi elaborare questi messaggi riflessi intraprendendo le opportune azioni per un controllo ActiveX (ad esempio, generando un evento). Vedere ID dei messaggi della finestra riflesso per un elenco dei messaggi di Windows intercettati e dei messaggi riflessi [corrispondenti.](../mfc/reflected-window-message-ids.md)

Un contenitore di controlli ActiveX può essere progettato per eseguire la reflection dei messaggi, evitando a `COleControl` la necessità di creare la finestra riflettore e riducendo il sovraccarico di runtime per un controllo Windows sottoclassato. `COleControl`rileva se il contenitore supporta questa funzionalità controllando la presenza di una proprietà di ambiente MessageReflect con valore **TRUE**.

Per gestire un messaggio della finestra riflesso, aggiungere una voce alla mappa messaggi del controllo e implementare una funzione del gestore. Poiché i messaggi riflessi non fanno parte del set di messaggi standard definiti da Windows, Visualizzazione classi non supporta l'aggiunta di tali gestori di messaggi. Tuttavia, non è difficile aggiungere un gestore manualmente.

Per aggiungere manualmente un gestore messaggi per un messaggio della finestra riflesso, effettuare le operazioni seguenti:

- Nel file .H della classe del controllo, dichiarare una funzione del gestore. La funzione deve avere un tipo restituito di **LRESULT** e due parametri, rispettivamente con i tipi **WPARAM** e **LPARAM**. Ad esempio:

   [!code-cpp[NVC_MFC_AxSub#5](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_5.h)]
    [!code-cpp[NVC_MFC_AxSub#6](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_6.h)]

- Nella classe di controllo . CPP, aggiungere una voce ON_MESSAGE alla mappa messaggi. I parametri di questa voce devono essere l'identificatore del messaggio e il nome della funzione del gestore. Ad esempio:

   [!code-cpp[NVC_MFC_AxSub#7](../mfc/codesnippet/cpp/mfc-activex-controls-subclassing-a-windows-control_7.cpp)]

- Anche nel file . CPP, implementare `OnOcmCommand` la funzione membro per elaborare il messaggio riflesso. I parametri *wParam* e *lParam* sono gli stessi del messaggio della finestra originale.

Per un esempio di come vengono elaborati i messaggi riflessi, fare riferimento all'esempio [BUTTON](../overview/visual-cpp-samples.md)dei controlli ActiveX MFC . Viene illustrato `OnOcmCommand` un gestore che rileva il BN_CLICKED codice di `Click` notifica e risponde generando (inviando) un evento.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
