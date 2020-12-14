---
description: 'Altre informazioni su: Nozioni fondamentali sulla barra degli strumenti'
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
ms.openlocfilehash: ed52c5878482f2ff0fa1c31a133fd2948d21a76e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264388"
---
# <a name="toolbar-fundamentals"></a>Nozioni fondamentali sulla barra degli strumenti

In questo articolo viene descritta l'implementazione MFC fondamentale che consente di aggiungere una barra degli strumenti predefinita all'applicazione selezionando un'opzione nella creazione guidata applicazione. Gli argomenti trattati includono:

- [Opzione della barra degli strumenti della creazione guidata applicazione](#_core_the_appwizard_toolbar_option)

- [Barra degli strumenti nel codice](#_core_the_toolbar_in_code)

- [Modifica della risorsa della barra degli strumenti](#_core_editing_the_toolbar_resource)

- [Più barre degli strumenti](#_core_multiple_toolbars)

## <a name="the-application-wizard-toolbar-option"></a><a name="_core_the_appwizard_toolbar_option"></a> Opzione della barra degli strumenti della creazione guidata applicazione

Per ottenere una singola barra degli strumenti con i pulsanti predefiniti, selezionare l'opzione barra degli strumenti standard di ancoraggio nella pagina funzionalità interfaccia utente. Il codice verrà aggiunto all'applicazione:

- Crea l'oggetto barra degli strumenti.

- Gestisce la barra degli strumenti, inclusa la possibilità di ancoraggio o di float.

## <a name="the-toolbar-in-code"></a><a name="_core_the_toolbar_in_code"></a> Barra degli strumenti nel codice

La barra degli strumenti è un oggetto [CToolBar](../mfc/reference/ctoolbar-class.md) dichiarato come membro dati della classe dell'applicazione `CMainFrame` . In altre parole, l'oggetto Toolbar è incorporato nell'oggetto finestra cornice principale. Questo significa che MFC crea la barra degli strumenti quando crea la finestra cornice ed elimina la barra degli strumenti quando elimina la finestra cornice. La seguente dichiarazione di classe parziale, per un'applicazione con interfaccia a documenti multipli (MDI), Mostra i membri dati per una barra degli strumenti incorporata e una barra di stato incorporata. Viene inoltre illustrato l'override della `OnCreate` funzione membro.

[!code-cpp[NVC_MFCListView#6](../atl/reference/codesnippet/cpp/toolbar-fundamentals_1.h)]

La creazione della barra degli strumenti si verifica in `CMainFrame::OnCreate` . MFC chiama [OnCreate](../mfc/reference/cwnd-class.md#oncreate) dopo la creazione della finestra per il frame ma prima che diventi visibile. Per impostazione predefinita `OnCreate` , la creazione guidata applicazione genera le seguenti attività della barra degli strumenti:

1. Chiama la `CToolBar` funzione membro [create](../mfc/reference/ctoolbar-class.md#create) dell'oggetto per creare l'oggetto [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) sottostante.

1. Chiama [LoadToolBar](../mfc/reference/ctoolbar-class.md#loadtoolbar) per caricare le informazioni sulle risorse della barra degli strumenti.

1. Chiama funzioni per abilitare l'ancoraggio, la virgola mobile e le descrizioni comandi. Per informazioni dettagliate su queste chiamate, vedere l'articolo [ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md).

> [!NOTE]
> Il [DOCKTOOL](../overview/visual-cpp-samples.md) di esempio generale MFC include illustrazioni di barre degli strumenti MFC nuove e obsolete. Le barre degli strumenti che usano `COldToolbar` richiedono chiamate nel passaggio 2 a `LoadBitmap` (anziché `LoadToolBar` ) e a `SetButtons` . Le nuove barre degli strumenti richiedono chiamate a `LoadToolBar` .

Le chiamate di ancoraggio, mobile e suggerimenti per gli strumenti sono facoltative. È possibile rimuovere tali righe da `OnCreate` se si preferisce. Il risultato è una barra degli strumenti che rimane fissa, non è possibile eseguire il Floating o il riaggancio e non è possibile visualizzare le descrizioni comandi.

## <a name="editing-the-toolbar-resource"></a><a name="_core_editing_the_toolbar_resource"></a> Modifica della risorsa della barra degli strumenti

La barra degli strumenti predefinita che si ottiene con la creazione guidata applicazione si basa su una risorsa **RT_TOOLBAR** personalizzata, introdotta nella versione MFC 4,0. È possibile modificare questa risorsa con l' [Editor barra degli strumenti](../windows/toolbar-editor.md). L'editor consente di aggiungere, eliminare e ridisporre facilmente i pulsanti. Contiene un editor grafico per i pulsanti molto simili all'editor di grafica generale in Visual C++. Se sono state modificate le barre degli strumenti nelle versioni precedenti di Visual C++, l'attività sarà molto più semplice adesso.

Per connettere un pulsante della barra degli strumenti a un comando, è necessario assegnare un ID comando al pulsante, ad esempio `ID_MYCOMMAND` . Specificare l'ID di comando nella pagina delle proprietà del pulsante nell'editor della barra degli strumenti. Creare quindi una funzione di gestione per il comando. per altre informazioni, vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) .

Le nuove funzioni membro [CToolBar](../mfc/reference/ctoolbar-class.md) funzionano con la risorsa **RT_TOOLBAR** . [LoadToolBar](../mfc/reference/ctoolbar-class.md#loadtoolbar) ora esegue il [LoadBitmap](../mfc/reference/ctoolbar-class.md#loadbitmap) per caricare la bitmap delle immagini dei pulsanti della barra degli strumenti e i pulsanti per impostare gli stili e i [pulsanti di connessione](../mfc/reference/ctoolbar-class.md#setbuttons) con le immagini bitmap.

Per informazioni dettagliate sull'uso dell'editor della barra degli strumenti, vedere [Editor della barra degli strumenti](../windows/toolbar-editor.md).

## <a name="multiple-toolbars"></a><a name="_core_multiple_toolbars"></a> Più barre degli strumenti

La creazione guidata applicazione fornisce una barra degli strumenti predefinita. Se è necessaria più di una barra degli strumenti dell'applicazione, è possibile modellare il codice per altre barre degli strumenti in base al codice generato dalla procedura guidata per la barra degli strumenti predefinita.

Se si vuole visualizzare una barra degli strumenti come risultato di un comando, è necessario:

- Creare una nuova risorsa della barra degli strumenti con l'editor della barra degli strumenti e caricarla `OnCreate` con la funzione membro [LoadToolBar](../mfc/reference/ctoolbar-class.md#loadtoolbar) .

- Incorpora un nuovo oggetto [CToolBar](../mfc/reference/ctoolbar-class.md) nella classe della finestra cornice principale.

- Eseguire le chiamate di funzione appropriate in `OnCreate` per ancorare o rendere mobile la barra degli strumenti, impostarne gli stili e così via.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Implementazione della barra degli strumenti MFC (informazioni generali sulle barre degli strumenti)](../mfc/mfc-toolbar-implementation.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comando delle barre degli strumenti](../mfc/toolbar-tool-tips.md)

- Classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

- [Uso del controllo barra degli strumenti](../mfc/working-with-the-toolbar-control.md)

- [Uso di barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

## <a name="see-also"></a>Vedi anche

[Implementazione della barra degli strumenti MFC](../mfc/mfc-toolbar-implementation.md)
