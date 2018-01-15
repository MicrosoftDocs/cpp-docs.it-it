---
title: ID messaggi finestra riflessi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
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
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 54b8f0fc8c58ea70a1499104e28a0e0a09bd4fee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="reflected-window-message-ids"></a>ID messaggi finestra riflessi
Un modo rapido per creare un controllo ActiveX o un altro controllo specializzato consiste nel creare una sottoclasse di una finestra. Per ulteriori informazioni, vedere [controlli ActiveX MFC: creazione di sottoclassi di un controllo Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md).  
  
 Per impedire il contenitore del controllo di ricevere i messaggi finestra inviati da un controllo Windows sottoclassato, [COleControl](../mfc/reference/colecontrol-class.md) crea una finestra "riflettore" per intercettare determinati messaggi finestra e inviarli al controllo. Il controllo, nella relativa routine della finestra, può quindi elaborare questi messaggi riflessi intraprendendo azioni appropriate per un controllo ActiveX.  
  
 Nella tabella seguente vengono mostrati i messaggi che vengono intercettati e i messaggi corrispondenti che invia la finestra riflettore.  
  
|Messaggio inviato dal controllo|Messaggio riflesso al controllo|  
|---------------------------------|--------------------------------------|  
|[WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591)|**OCM_COMMAND**|  
|[WM_CTLCOLORBTN](http://msdn.microsoft.com/library/windows/desktop/bb761849)|**OCM_CTLCOLORBTN**|  
|[WM_CTLCOLOREDIT](http://msdn.microsoft.com/library/windows/desktop/bb761691)|**OCM_CTLCOLOREDIT**|  
|[WM_CTLCOLORDLG](http://msdn.microsoft.com/library/windows/desktop/ms645417)|**OCM_CTLCOLORDLG**|  
|[WM_CTLCOLORLISTBOX](http://msdn.microsoft.com/library/windows/desktop/bb761360)|**OCM_CTLCOLORLISTBOX**|  
|[WM_CTLCOLORSCROLLBAR](http://msdn.microsoft.com/library/windows/desktop/bb787573)|**OCM_CTLCOLORSCROLLBAR**|  
|[WM_CTLCOLORSTATIC](http://msdn.microsoft.com/library/windows/desktop/bb787524)|**OCM_CTLCOLORSTATIC**|  
|[WM_DRAWITEM](http://msdn.microsoft.com/library/windows/desktop/bb775923)|**OCM_DRAWITEM**|  
|[WM_MEASUREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775925)|**OCM_MEASUREITEM**|  
|[WM_DELETEITEM](http://msdn.microsoft.com/library/windows/desktop/bb761362)|**OCM_DELETEITEM**|  
|[WM_VKEYTOITEM](http://msdn.microsoft.com/library/windows/desktop/bb761364)|**OCM_VKEYTOITEM**|  
|[WM_CHARTOITEM](http://msdn.microsoft.com/library/windows/desktop/bb761358)|**OCM_CHARTOITEM**|  
|[WM_COMPAREITEM](http://msdn.microsoft.com/library/windows/desktop/bb775921)|**OCM_COMPAREITEM**|  
|[WM_HSCROLL](http://msdn.microsoft.com/library/windows/desktop/bb787575)|**OCM_HSCROLL**|  
|[WM_VSCROLL](http://msdn.microsoft.com/library/windows/desktop/bb787577)|**OCM_VSCROLL**|  
|[WM_PARENTNOTIFY](https://msdn.microsoft.com/library/ms632638.aspx)|**OCM_PARENTNOTIFY**|  
|[WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)|**OCM_NOTIFY**|  
  
> [!NOTE]
>  Se il controllo viene eseguito in un sistema Win32, esistono diversi tipi di **WM_CTLCOLOR\***  è possibile ricevere messaggi. Per ulteriori informazioni, vedere **WM_CTLCOLORBTN**, **WM_CTLCOLORDLG**, **WM_CTLCOLOREDIT**, **WM_CTLCOLORLISTBOX**,  **WM_CTLCOLORMSGBOX**, **WM_CTLCOLORSCROLLBAR**, **WM_CTLCOLORSTATIC**.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: Creazione di sottoclassi di un controllo di Windows](../mfc/mfc-activex-controls-subclassing-a-windows-control.md)   
 [TN062: reflection messaggi per controlli Windows](../mfc/tn062-message-reflection-for-windows-controls.md)

