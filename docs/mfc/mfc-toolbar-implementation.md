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
ms.openlocfilehash: 55c43c47b93cd21d86293706fc7c3eb5145c39fd
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58773177"
---
# <a name="mfc-toolbar-implementation"></a>Implementazione della barra degli strumenti MFC

Una barra degli strumenti è una [sulla barra di controllo](../mfc/control-bars.md) che contiene le immagini bitmap dei controlli. Queste immagini possono comportarsi come pulsanti, caselle di controllo o pulsanti di opzione. MFC fornisce la classe [CToolbar](../mfc/reference/ctoolbar-class.md) per gestire le barre degli strumenti.

Se viene attivata, gli utenti delle barre degli strumenti MFC possono ancorarli al bordo di una finestra o "" renderli mobili in un punto qualsiasi all'interno della finestra dell'applicazione. MFC non supporta le barre degli strumenti personalizzabile simili a quelli nell'ambiente di sviluppo.

MFC supporta anche le descrizioni comandi: piccole finestre popup che descrivono l'utilizzo generico di un pulsante barra degli strumenti quando si posiziona il puntatore del mouse su esso. Per impostazione predefinita, quando l'utente preme un pulsante della barra degli strumenti, una stringa di stato viene visualizzato nella barra di stato (se presente). È possibile attivare barra l'aggiornamento per visualizzare la stringa di stato quando il puntatore del mouse è posizionato sul pulsante senza premere lo stato "tempo reale da".

> [!NOTE]
>  A partire dalla versione 4.0 di MFC, le barre degli strumenti e le descrizioni comandi vengono implementate usando Windows 95 e versioni successive funzionalità anziché nell'implementazione precedente specifica di MFC.

Per garantire la compatibilità con le versioni precedenti, MFC consente di mantenere l'implementazione della barra degli strumenti precedenti nella classe `COldToolBar`. La documentazione per le versioni precedenti di MFC descrivono `COldToolBar` sotto `CToolBar`.

Creare la prima barra degli strumenti nel programma selezionando l'opzione della barra degli strumenti nella procedura guidata dell'applicazione. È anche possibile creare altre barre degli strumenti.

In questo articolo vengono introdotti i seguenti:

- [Pulsanti della barra degli strumenti](#_core_toolbar_buttons)

- [Ancoraggio e barre degli strumenti mobili](#_core_docking_and_floating_toolbars)

- [Le barre degli strumenti e le descrizioni comandi](#_core_toolbars_and_tool_tips)

- [Le classi CToolBar e CToolBarCtrl](#_core_the_ctoolbar_and_ctoolbarctrl_classes)

- [La bitmap della barra degli strumenti](#_core_the_toolbar_bitmap)

##  <a name="_core_toolbar_buttons"></a> Pulsanti della barra degli strumenti

I pulsanti in una barra degli strumenti sono analoghi agli elementi in un menu. Entrambi i tipi di oggetti dell'interfaccia utente generano comandi, che gestisce il programma fornendo funzioni di gestione. Spesso i pulsanti della barra degli strumenti duplicano la funzionalità dei comandi di menu, che fornisce un'interfaccia utente alternativa per la stessa funzionalità. Questo tipo la duplicazione viene disposto semplicemente specificando il pulsante e la voce di menu lo stesso ID.

È possibile rendere i pulsanti in una barra degli strumenti vengono visualizzati e si comportino come pulsanti, caselle di controllo o pulsanti di opzione. Per altre informazioni, vedere la classe [CToolBar](../mfc/reference/ctoolbar-class.md).

##  <a name="_core_docking_and_floating_toolbars"></a> Ancoraggio e barre degli strumenti mobili

Una barra degli strumenti MFC può:

- Soffermarsi un lato della finestra padre.

- Trascinare e "ancorata" o collegato, dall'utente a qualsiasi lato o lati della finestra padre specificati.

- Essere "mobile" o scollegato dalla finestra cornice, nella relativa finestra con mini-cornice in modo che l'utente può spostarlo in qualsiasi posizione comoda.

- Essere ridimensionata mentre è mobile.

Per altre informazioni, vedere l'articolo [ancoraggio e barre degli strumenti mobile](../mfc/docking-and-floating-toolbars.md).

##  <a name="_core_toolbars_and_tool_tips"></a> Le barre degli strumenti e le descrizioni comandi

Barre degli strumenti MFC può inoltre essere create per visualizzare "descrizioni comandi", ovvero piccole finestre popup contenente una breve descrizione dello scopo del pulsante di una barra degli strumenti. Quando l'utente sposta il puntatore del mouse su un pulsante della barra degli strumenti, la finestra di descrizione comando visualizzata per offrire un suggerimento. Per altre informazioni, vedere l'articolo [descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md).

##  <a name="_core_the_ctoolbar_and_ctoolbarctrl_classes"></a> Le classi di CToolBarCtrl e CToolBar

Si gestiscono le barre degli strumenti dell'applicazione tramite la classe [CToolBar](../mfc/reference/ctoolbar-class.md). A partire dalla versione 4.0, MFC `CToolBar` è stata reimplementata per usare il controllo comune barra degli strumenti disponibile in Windows 95 o versioni successive e Windows NT 3.51 o versione successiva.

Questo reimplementazione comporta meno codice MFC per barre degli strumenti, perché MFC la rende usare il supporto del sistema operativo. Sono state inoltre migliorate le funzionalità. È possibile usare `CToolBar` funzioni membro per modificare le barre degli strumenti, oppure è possono ottenere un riferimento sottostante [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) dell'oggetto e chiamare il relativo membro funzioni per la personalizzazione della barra degli strumenti e funzionalità aggiuntive.

> [!TIP]
>  Se hanno investito molto tempo nell'implementazione di MFC precedenti `CToolBar`, che è ancora disponibile il supporto. Vedere l'articolo [utilizzando il precedente le barre degli strumenti](../mfc/using-your-old-toolbars.md).

Vedere anche l'esempio MFC generale [DOCKTOOL](../overview/visual-cpp-samples.md).

##  <a name="_core_the_toolbar_bitmap"></a> La Bitmap della barra degli strumenti

Una volta create, un `CToolBar` oggetto crea l'immagine della barra degli strumenti mediante il caricamento di una singola bitmap che contiene un'immagine per ogni pulsante. La creazione guidata applicazione crea un'immagine bitmap della barra degli strumenti standard che è possibile personalizzare con Visual C++ [editor barra degli strumenti](../windows/toolbar-editor.md).

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Nozioni fondamentali sulla barra degli strumenti](../mfc/toolbar-fundamentals.md)

- [Ancoraggio e barre degli strumenti mobili](../mfc/docking-and-floating-toolbars.md)

- [Descrizioni comandi barra degli strumenti](../mfc/toolbar-tool-tips.md)

- [Uso del controllo Toolbar](../mfc/working-with-the-toolbar-control.md)

- [Uso delle barre degli strumenti precedenti](../mfc/using-your-old-toolbars.md)

- Il [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classi

## <a name="see-also"></a>Vedere anche

[Barre degli strumenti](../mfc/toolbars.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)
