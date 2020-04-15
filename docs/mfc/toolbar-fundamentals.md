---
title: Nozioni fondamentali sulla barra degli strumenti
ms.date: 11/04/2016
f1_keywords:
- RT_TOOLBAR
helpviewer_keywords:
- embedding toolbar in frame window class [MFC]
- application wizards [MFC], installing default application toolbars
- toolbars [MFC], creating
- resources [MFC], toolbar
- toolbar controls [MFC], toolbars created using Application Wizard
- toolbar controls [MFC], command ID
- RT_TOOLBAR resource [MFC]
- toolbars [MFC], adding default using Application Wizard
- LoadBitmap method [MFC], toolbars
- Toolbar editor [MFC], Application Wizard
- command IDs [MFC], toolbar buttons
- SetButtons method [MFC]
- CToolBar class [MFC], default toolbars in Application Wizard
- frame window classes [MFC], toolbar embedded in
- LoadToolBar method [MFC]
ms.assetid: cc00aaff-8a56-433b-b0c0-b857d76b4ffd
ms.openlocfilehash: d4e8793337beb2eed533fe04daf549ec21efc61d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373470"
---
# <a name="toolbar-fundamentals"></a>Nozioni fondamentali sulla barra degli strumenti

In questo articolo viene descritta l'implementazione MFC fondamentale che consente di aggiungere una barra degli strumenti predefinita all'applicazione selezionando un'opzione nella creazione guidata applicazione. Gli argomenti trattati includono:

- [Opzione della barra degli strumenti Creazione guidata applicazione](#_core_the_appwizard_toolbar_option)

- [La barra degli strumenti nel codice](#_core_the_toolbar_in_code)

- [Modifica della risorsa barra degli strumenti](#_core_editing_the_toolbar_resource)

- [Barre degli strumenti multiple](#_core_multiple_toolbars)

## <a name="the-application-wizard-toolbar-option"></a><a name="_core_the_appwizard_toolbar_option"></a>Opzione della barra degli strumenti Creazione guidata applicazione

Per ottenere una singola barra degli strumenti con pulsanti predefiniti, selezionare l'opzione Barra degli strumenti Ancoraggio standard nella pagina con l'etichetta Funzionalità interfaccia utente. Verrà aggiunto codice all'applicazione che:This adds code to your application that:

- Crea l'oggetto barra degli strumenti.

- Gestisce la barra degli strumenti, inclusa la possibilità di ancorare o rendere mobile.

## <a name="the-toolbar-in-code"></a><a name="_core_the_toolbar_in_code"></a>La barra degli strumenti nel codiceThe Toolbar in Code

La barra degli strumenti è un [oggetto CToolBar](../mfc/reference/ctoolbar-class.md) `CMainFrame` dichiarato come membro dati della classe dell'applicazione. In altre parole, l'oggetto barra degli strumenti è incorporato nell'oggetto finestra cornice principale. Ciò significa che MFC crea la barra degli strumenti quando crea la finestra cornice ed elimina la barra degli strumenti quando elimina la finestra cornice. La dichiarazione di classe parziale seguente, per un'applicazione di interfaccia a documenti multipli (MDI), mostra i membri dati per una barra degli strumenti incorporata e una barra di stato incorporata. Viene inoltre illustrato l'override della `OnCreate` funzione membro.

[!code-cpp[NVC_MFCListView#6](../atl/reference/codesnippet/cpp/toolbar-fundamentals_1.h)]

La creazione `CMainFrame::OnCreate`della barra degli strumenti avviene in . MFC chiama [OnCreate](../mfc/reference/cwnd-class.md#oncreate) dopo aver creato la finestra per il frame, ma prima che diventi visibile. L'impostazione predefinita generata dalla Creazione guidata applicazione esegue le attività della barra degli strumenti seguenti:The default `OnCreate` that the Application Wizard generates does the following toolbar tasks:

1. Chiama `CToolBar` la funzione membro [Create](../mfc/reference/ctoolbar-class.md#create) dell'oggetto per creare l'oggetto [sottostante CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto.

1. Chiama [LoadToolBar](../mfc/reference/ctoolbar-class.md#loadtoolbar) per caricare le informazioni sulle risorse della barra degli strumenti.

1. Chiama le funzioni per abilitare l'ancoraggio, il mobile e le descrizioni comandi. Per informazioni dettagliate su queste chiamate, vedere l'articolo [Docking and Floating Toolbars](../mfc/docking-and-floating-toolbars.md).

> [!NOTE]
> L'esempio di dati E seguito da MFC General [DOCKTOOL](../overview/visual-cpp-samples.md) include illustrazioni delle barre degli strumenti MFC precedenti e nuove. Le barre degli `COldToolbar` strumenti che utilizzano richiedono `LoadToolBar`chiamate `SetButtons`nel passaggio 2 a `LoadBitmap` (anziché ) e a . Le nuove barre degli `LoadToolBar`strumenti richiedono chiamate a .

Le chiamate di ancoraggio, flottanti e descrizioni comandi sono facoltative. È possibile rimuovere `OnCreate` tali righe da se si preferisce. Il risultato è una barra degli strumenti che rimane fissa, in grado di fluttuare o riancorare e in grado di visualizzare le descrizioni comandi.

## <a name="editing-the-toolbar-resource"></a><a name="_core_editing_the_toolbar_resource"></a>Modifica della risorsa barra degli strumenti

La barra degli strumenti predefinita che si ottiene con la creazione guidata applicazione è basata su **un RT_TOOLBAR** risorsa personalizzata, introdotto in MFC versione 4.0. È possibile modificare questa risorsa con [l'editor della barra degli strumenti.](../windows/toolbar-editor.md) L'editor consente di aggiungere, eliminare e ridisporre facilmente i pulsanti. Esso contiene un editor grafico per i pulsanti che è molto simile all'editor di grafica generale in Visual C. Se le barre degli strumenti sono state modificate nelle versioni precedenti di Visual C, l'attività è molto più semplice ora.

Per connettere un pulsante della barra degli strumenti a `ID_MYCOMMAND`un comando, assegnare al pulsante un ID di comando, ad esempio . Specificare l'ID di comando nella pagina delle proprietà del pulsante nell'editor della barra degli strumenti. Creare quindi una funzione del gestore per il comando (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per ulteriori informazioni).

Le nuove funzioni membro [di CToolBar](../mfc/reference/ctoolbar-class.md) funzionano con la risorsa **RT_TOOLBAR.** [LoadToolBar](../mfc/reference/ctoolbar-class.md#loadtoolbar) ora prende il posto di [LoadBitmap](../mfc/reference/ctoolbar-class.md#loadbitmap) per caricare la bitmap delle immagini dei pulsanti della barra degli strumenti e [SetButtons](../mfc/reference/ctoolbar-class.md#setbuttons) per impostare gli stili dei pulsanti e collegare i pulsanti con le immagini bitmap.

Per informazioni dettagliate sull'utilizzo dell'editor della barra degli strumenti, vedere [Editor barra degli strumenti](../windows/toolbar-editor.md).

## <a name="multiple-toolbars"></a><a name="_core_multiple_toolbars"></a>Barre degli strumenti multiple

La Creazione guidata applicazione fornisce una barra degli strumenti predefinita. Se sono necessarie più barre degli strumenti nell'applicazione, è possibile modellare il codice per barre degli strumenti aggiuntive in base al codice generato dalla procedura guidata per la barra degli strumenti predefinita.

Se si desidera visualizzare una barra degli strumenti come risultato di un comando, è necessario:

- Creare una nuova risorsa barra degli strumenti `OnCreate` con l'editor della barra degli strumenti e caricarla con la funzione membro [LoadToolbar.Create](../mfc/reference/ctoolbar-class.md#loadtoolbar) a new toolbar resource with the toolbar editor and load it in with the LoadToolbar member function.

- Incorporare un nuovo [oggetto CToolBar](../mfc/reference/ctoolbar-class.md) nella classe della finestra cornice principale.

- Effettuare le chiamate `OnCreate` di funzione appropriate per ancorare o rendere mobile la barra degli strumenti, impostarne gli stili e così via.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Implementazione della barra degli strumenti MFC (informazioni generali sulle barre degli strumenti)](../mfc/mfc-toolbar-implementation.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)

- Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

- [Utilizzo del controllo barra degli strumenti](../mfc/working-with-the-toolbar-control.md)

- [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

## <a name="see-also"></a>Vedere anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)
