---
description: 'Altre informazioni su: implementazione della barra degli strumenti MFC'
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
ms.openlocfilehash: 0e6ecf0536c55163dd63d5f05e4c5c9f24f2c4cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251154"
---
# <a name="mfc-toolbar-implementation"></a>Implementazione della barra degli strumenti MFC

Una barra degli strumenti è una [barra di controllo](control-bars.md) che contiene le immagini bitmap dei controlli. Queste immagini possono comportarsi come pulsanti, caselle di controllo o pulsanti di opzione. MFC fornisce la classe [CToolBar](reference/ctoolbar-class.md) per gestire le barre degli strumenti.

Se viene abilitata, gli utenti delle barre degli strumenti MFC possono ancorarli al bordo di una finestra o "float" in qualsiasi punto all'interno della finestra dell'applicazione. MFC non supporta le barre degli strumenti personalizzabili come quelle nell'ambiente di sviluppo.

MFC supporta inoltre descrizioni comandi: piccole finestre popup che descrivono lo scopo di un pulsante della barra degli strumenti quando si posiziona il puntatore del mouse sul pulsante. Per impostazione predefinita, quando l'utente preme un pulsante della barra degli strumenti, viene visualizzata una stringa di stato nella barra di stato (se presente). È possibile attivare l'aggiornamento della barra di stato "Fly by" per visualizzare la stringa di stato quando il mouse viene posizionato sul pulsante senza premerlo.

> [!NOTE]
> A partire dalla versione 4,0 di MFC, le barre degli strumenti e le descrizioni comandi vengono implementate utilizzando le funzionalità di Windows 95 e versioni successive anziché l'implementazione precedente specifica di MFC.

Per compatibilità con le versioni precedenti, MFC mantiene l'implementazione della barra degli strumenti precedente nella classe `COldToolBar` . Nella documentazione per le versioni precedenti di MFC viene descritto `COldToolBar` in `CToolBar` .

Creare la prima barra degli strumenti nel programma selezionando l'opzione barra degli strumenti nella creazione guidata applicazione. È anche possibile creare altre barre degli strumenti.

In questo articolo sono stati introdotti gli elementi seguenti:

- [Pulsanti della barra degli strumenti](#_core_toolbar_buttons)

- [Barre degli strumenti ancorate e mobili](#_core_docking_and_floating_toolbars)

- [Barre degli strumenti e descrizioni comandi](#_core_toolbars_and_tool_tips)

- [Classi CToolBar e CToolBarCtrl](#_core_the_ctoolbar_and_ctoolbarctrl_classes)

- [Bitmap della barra degli strumenti](#_core_the_toolbar_bitmap)

## <a name="toolbar-buttons"></a><a name="_core_toolbar_buttons"></a> Pulsanti della barra degli strumenti

I pulsanti in una barra degli strumenti sono analoghi agli elementi in un menu. Entrambi i tipi di oggetti dell'interfaccia utente generano comandi, gestiti dal programma fornendo funzioni di gestione. Spesso i pulsanti della barra degli strumenti duplicano la funzionalità dei comandi di menu, offrendo un'interfaccia utente alternativa alla stessa funzionalità. Tale duplicazione viene disposta semplicemente assegnando al pulsante e alla voce di menu lo stesso ID.

È possibile rendere visibili i pulsanti di una barra degli strumenti e comportarsi come pulsanti, caselle di controllo o pulsanti di opzione. Per ulteriori informazioni, vedere classe [CToolBar](reference/ctoolbar-class.md).

## <a name="docking-and-floating-toolbars"></a><a name="_core_docking_and_floating_toolbars"></a> Ancoraggio e barre degli strumenti mobili

Una barra degli strumenti MFC può:

- Rimanere stazionari lungo un lato della finestra padre.

- Essere trascinati e "ancorati" o collegati dall'utente a qualsiasi lato o lato della finestra padre specificata.

- Essere "Floated" o scollegato dalla finestra cornice, nella finestra con mini-cornice, in modo che l'utente possa spostarlo in una posizione comoda.

- Essere ridimensionato durante la virgola mobile.

Per ulteriori informazioni, vedere l'articolo [ancoraggio e barre degli strumenti mobili](docking-and-floating-toolbars.md).

## <a name="toolbars-and-tool-tips"></a><a name="_core_toolbars_and_tool_tips"></a> Barre degli strumenti e descrizioni comandi

È inoltre possibile visualizzare le barre degli strumenti MFC per visualizzare le "descrizioni comandi", finestre popup minuscole contenenti una breve descrizione di un pulsante della barra degli strumenti. Quando l'utente sposta il puntatore del mouse su un pulsante della barra degli strumenti, viene visualizzata la finestra descrizione comando per offrire un suggerimento. Per ulteriori informazioni, vedere l'articolo relativo alle [descrizioni comandi della barra degli strumenti](toolbar-tool-tips.md).

## <a name="the-ctoolbar-and-ctoolbarctrl-classes"></a><a name="_core_the_ctoolbar_and_ctoolbarctrl_classes"></a> Classi CToolBar e CToolBarCtrl

Le barre degli strumenti dell'applicazione vengono gestite tramite la classe [CToolBar](reference/ctoolbar-class.md). A partire dalla versione 4,0 di MFC, `CToolBar` è stata reimplementata per usare il controllo comune della barra degli strumenti disponibile in windows 95 o versioni successive e Windows NT versione 3,51 o successiva.

Questa riimplementazione comporta un minor numero di codice MFC per le barre degli strumenti, poiché MFC utilizza il supporto del sistema operativo. La riimplementazione migliora anche la capacità. È possibile utilizzare `CToolBar` le funzioni membro per modificare le barre degli strumenti oppure è possibile ottenere un riferimento all'oggetto [CToolBarCtrl](reference/ctoolbarctrl-class.md) sottostante e chiamare le relative funzioni membro per la personalizzazione della barra degli strumenti e la funzionalità aggiuntiva.

> [!TIP]
> Se è stato investito molto nell'implementazione MFC precedente di `CToolBar` , il supporto è ancora disponibile. Vedere l'articolo [uso delle barre degli strumenti precedenti](using-your-old-toolbars.md).

Vedere anche l'esempio generale MFC [DOCKTOOL](../overview/visual-cpp-samples.md).

## <a name="the-toolbar-bitmap"></a><a name="_core_the_toolbar_bitmap"></a> Bitmap della barra degli strumenti

Una volta creato, un `CToolBar` oggetto crea l'immagine della barra degli strumenti caricando una singola bitmap contenente un'immagine per ogni pulsante. La creazione guidata applicazione crea una bitmap della barra degli strumenti standard che è possibile personalizzare con l' [Editor della barra degli strumenti](../windows/toolbar-editor.md)Visual C++.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Nozioni fondamentali sulle barre degli strumenti](toolbar-fundamentals.md)

- [Barre degli strumenti ancorate e mobili](docking-and-floating-toolbars.md)

- [Descrizioni comando delle barre degli strumenti](toolbar-tool-tips.md)

- [Utilizzo del controllo Toolbar](working-with-the-toolbar-control.md)

- [Uso delle barre degli strumenti precedenti](using-your-old-toolbars.md)

- Classi [CToolBar](reference/ctoolbar-class.md) e [CToolBarCtrl](reference/ctoolbarctrl-class.md)

## <a name="see-also"></a>Vedi anche

[Barre degli strumenti](toolbars.md)<br/>
[Editor barra degli strumenti](../windows/toolbar-editor.md)
