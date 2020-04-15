---
title: Implementazione della barra degli strumenti MFC
ms.date: 11/04/2016
helpviewer_keywords:
- toolbars [MFC], creating
- buttons [MFC], MFC toolbars
- toolbars [MFC], docking
- CToolBar class [MFC], creating toolbars
- MFC toolbars
- floating toolbars [MFC]
- toolbars [MFC], floating
- docking toolbars [MFC]
- bitmaps [MFC], toolbar
- toolbar controls [MFC]
- CToolBarCtrl class [MFC], implementing toolbars
- tool tips [MFC], enabling
- toolbars [MFC]
- toolbars [MFC], implementing MFC toolbars
ms.assetid: af3319ad-c430-4f90-8361-e6a2c06fd084
ms.openlocfilehash: 38811be765d4427c4083b8f142b54fb67b9076a0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359314"
---
# <a name="mfc-toolbar-implementation"></a>Implementazione della barra degli strumenti MFC

Una barra degli strumenti è una [barra di controllo](../mfc/control-bars.md) che contiene le immagini bitmap dei controlli. Queste immagini possono comportarsi come pulsanti, caselle di controllo o pulsanti di opzione. MFC fornisce la classe [CToolbar](../mfc/reference/ctoolbar-class.md) per gestire le barre degli strumenti.

Se si abilita, gli utenti delle barre degli strumenti MFC possono ancorarli al bordo di una finestra o "galleggiare" in qualsiasi punto all'interno della finestra dell'applicazione. MFC non supporta barre degli strumenti personalizzabili come quelle nell'ambiente di sviluppo.

MFC supporta anche le descrizioni comandi: piccole finestre popup che descrivono lo scopo di un pulsante della barra degli strumenti quando si posiziona il mouse sul pulsante. Per impostazione predefinita, quando l'utente preme un pulsante della barra degli strumenti, viene visualizzata una stringa di stato nella barra di stato (se presente). È possibile attivare l'aggiornamento della barra di stato "fly by" per visualizzare la stringa di stato quando il mouse è posizionato sul pulsante senza premerlo.

> [!NOTE]
> A partire dalla versione 4.0 di MFC, le barre degli strumenti e le descrizioni comandi vengono implementate utilizzando le funzionalità di Windows 95 e versioni successive anziché l'implementazione precedente specifica di MFC.

Per garantire la compatibilità con le `COldToolBar`versioni precedenti, MFC mantiene l'implementazione precedente della barra degli strumenti nella classe . Nella documentazione relativa alle `COldToolBar` `CToolBar`versioni precedenti di MFC viene descritta in .

Creare la prima barra degli strumenti del programma selezionando l'opzione Barra degli strumenti nella Creazione guidata applicazione. È inoltre possibile creare barre degli strumenti aggiuntive.

In questo articolo vengono introdotti i seguenti elementi:

- [Pulsanti della barra degli strumenti](#_core_toolbar_buttons)

- [Barre degli strumenti ancorate e mobili](#_core_docking_and_floating_toolbars)

- [Barre degli strumenti e descrizioni comandi](#_core_toolbars_and_tool_tips)

- [Le classi CToolBar e CToolBarCtrl](#_core_the_ctoolbar_and_ctoolbarctrl_classes)

- [La bitmap della barra degli strumenti](#_core_the_toolbar_bitmap)

## <a name="toolbar-buttons"></a><a name="_core_toolbar_buttons"></a>Pulsanti della barra degli strumenti

I pulsanti in una barra degli strumenti sono analoghi alle voci di un menu. Entrambi i tipi di oggetti dell'interfaccia utente generano comandi, che il programma gestisce fornendo funzioni di gestione. Spesso i pulsanti della barra degli strumenti duplicano la funzionalità dei comandi di menu, fornendo un'interfaccia utente alternativa alla stessa funzionalità. Tale duplicazione è organizzato semplicemente dando il pulsante e la voce di menu lo stesso ID.

È possibile fare in modo che i pulsanti di una barra degli strumenti vengano visualizzati e si comportino come pulsanti di comando, caselle di controllo o pulsanti di opzione. Per ulteriori informazioni, vedere la classe [CToolBar](../mfc/reference/ctoolbar-class.md).

## <a name="docking-and-floating-toolbars"></a><a name="_core_docking_and_floating_toolbars"></a>Barre degli strumenti ancorate e mobili

Una barra degli strumenti MFC può:

- Rimanere fermi lungo un lato della finestra padre.

- Essere trascinati e "ancorati" o associati dall'utente a qualsiasi lato o lato della finestra padre specificata.

- Essere "floated", o staccato dalla finestra cornice, nella propria finestra cornice mini in modo che l'utente può spostarlo in qualsiasi posizione conveniente.

- Essere ridimensionato mentre è fluttuante.

Per ulteriori informazioni, consultate l'articolo [Docking and Floating Toolbars](../mfc/docking-and-floating-toolbars.md).

## <a name="toolbars-and-tool-tips"></a><a name="_core_toolbars_and_tool_tips"></a>Barre degli strumenti e descrizioni comandi

Le barre degli strumenti MFC possono anche essere effettuate per visualizzare "descrizioni comandi", ovvero piccole finestre popup contenenti una breve descrizione di testo dello scopo di un pulsante della barra degli strumenti. Quando l'utente sposta il mouse su un pulsante della barra degli strumenti, viene visualizzata la finestra della descrizione comandi per offrire un suggerimento. Per ulteriori informazioni, consultate l'articolo Suggerimenti per gli strumenti [della barra degli strumenti](../mfc/toolbar-tool-tips.md).

## <a name="the-ctoolbar-and-ctoolbarctrl-classes"></a><a name="_core_the_ctoolbar_and_ctoolbarctrl_classes"></a>Le classi CToolBar e CToolBarCtrl

È possibile gestire le barre degli strumenti dell'applicazione tramite la classe [CToolBar](../mfc/reference/ctoolbar-class.md). A partire da MFC `CToolBar` versione 4.0, è stato reimplementato per utilizzare il controllo comune della barra degli strumenti disponibile in Windows 95 o versione successiva e Windows NT versione 3.51 o successiva.

Questa reimplementazione comporta meno codice MFC per le barre degli strumenti, perché MFC utilizza il supporto del sistema operativo. La reimplementazione migliora anche la capacità. È possibile `CToolBar` utilizzare le funzioni membro per modificare le barre degli strumenti oppure è possibile ottenere un riferimento all'oggetto [sottostante CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) oggetto e chiamare le relative funzioni membro per la personalizzazione della barra degli strumenti e funzionalità aggiuntive.

> [!TIP]
> Se si è investito molto `CToolBar`nella precedente implementazione MFC di , tale supporto è ancora disponibile. Vedere l'articolo [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md).

Vedere anche l'esempio generale MFC [DOCKTOOL](../overview/visual-cpp-samples.md).

## <a name="the-toolbar-bitmap"></a><a name="_core_the_toolbar_bitmap"></a>La bitmap della barra degli strumenti

Una volta `CToolBar` costruito, un oggetto crea l'immagine della barra degli strumenti caricando una singola bitmap che contiene un'immagine per ogni pulsante. La creazione guidata applicazione consente di creare una bitmap standard della barra degli strumenti che è possibile personalizzare con [l'editor della barra degli strumenti](../windows/toolbar-editor.md)di Visual C.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)

- [Barre degli strumenti ancorate e mobili](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comandi della barra degli strumenti](../mfc/toolbar-tool-tips.md)

- [Utilizzo del controllo Toolbar](../mfc/working-with-the-toolbar-control.md)

- [Utilizzo delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

- Le classi [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)

## <a name="see-also"></a>Vedere anche

[Barre degli strumenti](../mfc/toolbars.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)
