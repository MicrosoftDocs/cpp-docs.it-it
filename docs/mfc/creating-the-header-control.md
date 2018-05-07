---
title: Creazione del controllo intestazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CHeaderCtrl class [MFC], creating
- header controls [MFC], creating
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 465c880c480f9ccd3a52f6319ee97ed203c3bd74
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-the-header-control"></a>Creazione del controllo Header
Il controllo intestazione non è disponibile direttamente nell'editor finestre (sebbene sia possibile aggiungere un controllo elenco, che include un controllo header).  
  
### <a name="to-put-a-header-control-in-a-dialog-box"></a>Per inserire un controllo di intestazione in una finestra di dialogo  
  
1.  Incorporare manualmente una variabile membro di tipo [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) nella classe della finestra.  
  
2.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), creare e impostare gli stili per il `CHeaderCtrl`, posizionarlo e visualizzarlo.  
  
3.  Aggiungere elementi al controllo header.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore della classe di finestra di dialogo per le notifiche di controllo di intestazione dei messaggi è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
### <a name="to-put-a-header-control-in-a-view-not-a-clistview"></a>Per inserire un controllo di intestazione in una vista (non CListView)  
  
1.  Incorporare un [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) oggetto nella classe di visualizzazione.  
  
2.  Lo stile, posizione, quindi visualizzare la finestra di controllo di intestazione della visualizzazione [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) funzione membro.  
  
3.  Aggiungere elementi al controllo header.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di visualizzazione per qualsiasi notifica di controllo di intestazione dei messaggi è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
 In entrambi i casi, l'oggetto controllo incorporato viene creato quando viene creato l'oggetto finestra di dialogo o una vista. È necessario chiamare [CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create) per creare la finestra di controllo. Per posizionare il controllo, chiamare [CHeaderCtrl:: layout](../mfc/reference/cheaderctrl-class.md#layout) per determinare le dimensioni iniziali del controllo e la posizione e [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos) per impostare la posizione desiderata. Aggiungere quindi gli elementi come descritto in [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).  
  
 Per ulteriori informazioni, vedere [creazione di un controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775238) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

