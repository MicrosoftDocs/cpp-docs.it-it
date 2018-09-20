---
title: ID messaggi finestra riflessi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- OCM_CTLCOLORBTN
- OCM_PARENTNOTIFY
- OCM_VKEYTOITEM
- OCM_CTLCOLORSTATIC
- OCM_HSCROLL
- OCM_CHARTOITEM
- OCM_DRAWITEM
- OCM_MEASUREITEM
- OCM_COMPAREITEM
- OCM_COMMAND
- OCM_NOTIFY
- OCM_CTLCOLORMSGBOX
- OCM_DELETEITEM
- OCM_CTLCOLORLISTBOX
- OCM_CTLCOLORDLG
- OCM_CTLCOLOREDIT
- OCM_CTLCOLORSCROLLBAR
- OCM_VSCROLL
- OCM_CTLCOLOR
dev_langs:
- C++
helpviewer_keywords:
- OCM_HSCROLL message [MFC]
- OCM_PARENTNOTIFY message [MFC]
- messages, reflected
- reflected messages, window message Ids
- OCM_CTLCOLORDLG message [MFC]
- OCM_COMMAND message [MFC]
- OCM_CTLCOLORMSGBOX message [MFC]
- OCM_COMPAREITEM message [MFC]
- OCM_DRAWITEM message [MFC]
- OCM_VSCROLL message [MFC]
- OCM_CTLCOLOREDIT message [MFC]
- OCM_VKEYTOITEM message [MFC]
- OCM_CHARTOITEM message [MFC]
- OCM_CTLCOLORBTN message [MFC]
- OCM_CTLCOLORSTATIC message [MFC]
- OCM_MEASUREITEM message [MFC]
- OCM_CTLCOLOR message [MFC]
- OCM_CTLCOLORSCROLLBAR message [MFC]
- OCM_ messages
- OCM_DELETEITEM message [MFC]
- OCM_CTLCOLORLISTBOX message [MFC]
- OCM_NOTIFY message [MFC]
- reflected messages
ms.assetid: 3417ff51-ff9f-458c-bff4-17c200f00d96
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ac529c3084917bd43fbb0a9fd51f1f0e3942447b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416025"
---
# <a name="reflected-window-message-ids"></a>ID messaggi finestra riflessi

Un modo rapido per creare un controllo ActiveX o un altro controllo specializzato consiste nel creare una sottoclasse di una finestra. Per altre informazioni, vedere [controlli ActiveX MFC: creazione di un controllo Windows una sottoclasse](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).

Per impedire che la ricezione dei messaggi finestra inviati da un controllo Windows sottoclassato, il contenitore del controllo [COleControl](../mfc/reference/colecontrol-class.md) crea una finestra "riflettore" per intercettare determinati messaggi finestra e inviarli al controllo. Il controllo, nella relativa routine della finestra, può quindi elaborare questi messaggi riflessi intraprendendo azioni appropriate per un controllo ActiveX.

Nella tabella seguente vengono mostrati i messaggi che vengono intercettati e i messaggi corrispondenti che invia la finestra riflettore.

|Messaggio inviato dal controllo|Messaggio riflesso al controllo|
|---------------------------------|--------------------------------------|
|[WM_COMMAND](/windows/desktop/menurc/wm-command)|OCM_COMMAND|
|[WM_CTLCOLORBTN](/windows/desktop/Controls/wm-ctlcolorbtn)|OCM_CTLCOLORBTN|
|[WM_CTLCOLOREDIT](/windows/desktop/Controls/wm-ctlcoloredit)|OCM_CTLCOLOREDIT|
|[WM_CTLCOLORDLG](/windows/desktop/dlgbox/wm-ctlcolordlg)|OCM_CTLCOLORDLG|
|[WM_CTLCOLORLISTBOX](/windows/desktop/Controls/wm-ctlcolorlistbox)|OCM_CTLCOLORLISTBOX|
|[WM_CTLCOLORSCROLLBAR](/windows/desktop/Controls/wm-ctlcolorscrollbar)|OCM_CTLCOLORSCROLLBAR|
|[WM_CTLCOLORSTATIC](/windows/desktop/Controls/wm-ctlcolorstatic)|OCM_CTLCOLORSTATIC|
|[WM_DRAWITEM](/windows/desktop/Controls/wm-drawitem)|OCM_DRAWITEM|
|[WM_MEASUREITEM](/windows/desktop/Controls/wm-measureitem)|OCM_MEASUREITEM|
|[WM_DELETEITEM](/windows/desktop/Controls/wm-deleteitem)|OCM_DELETEITEM|
|[WM_VKEYTOITEM](/windows/desktop/Controls/wm-vkeytoitem)|OCM_VKEYTOITEM|
|[WM_CHARTOITEM](/windows/desktop/Controls/wm-chartoitem)|OCM_CHARTOITEM|
|[WM_COMPAREITEM](/windows/desktop/Controls/wm-compareitem)|OCM_COMPAREITEM|
|[WM_HSCROLL](/windows/desktop/Controls/wm-hscroll)|OCM_HSCROLL|
|[WM_VSCROLL](/windows/desktop/Controls/wm-vscroll)|OCM_VSCROLL|
|[WM_PARENTNOTIFY](/previous-versions/windows/desktop/inputmsg/wm-parentnotify)|OCM_PARENTNOTIFY|
|[WM_NOTIFY](https://msdn.microsoft.com/library/windows/desktop/bb775583)|OCM_NOTIFY|

> [!NOTE]
>  Se il controllo viene eseguito in un sistema Win32, esistono diversi tipi di WM_CTLCOLOR\* può ricevere messaggi. Per altre informazioni, vedere WM_CTLCOLORBTN, WM_CTLCOLORDLG, WM_CTLCOLOREDIT, WM_CTLCOLORLISTBOX, WM_CTLCOLORMSGBOX, WM_CTLCOLORSCROLLBAR, WM_CTLCOLORSTATIC.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: creazione di una sottoclasse per un controllo Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)<br/>
[TN062: reflection messaggi per controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md)

