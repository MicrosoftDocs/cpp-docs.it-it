---
title: Creazione di un controllo intestazione | Microsoft Docs
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
ms.openlocfilehash: 18517f969dc64b0c1d9a51bcdc67a1655ec82d7c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43214009"
---
# <a name="creating-the-header-control"></a>Creazione del controllo Header
Il controllo intestazione non è disponibile direttamente nell'editor finestre (sebbene sia possibile aggiungere un controllo elenco, che include un controllo header).  
  
### <a name="to-put-a-header-control-in-a-dialog-box"></a>Per inserire un controllo di intestazione in una finestra di dialogo  
  
1.  Incorporare manualmente una variabile membro di tipo [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) nella classe della finestra.  
  
2.  Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), creare e impostare gli stili per il `CHeaderCtrl`posizionarla e visualizzarlo.  
  
3.  Aggiungere elementi al controllo header.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per i messaggi di qualsiasi notifica del controllo header è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
### <a name="to-put-a-header-control-in-a-view-not-a-clistview"></a>Per inserire un controllo di intestazione in una vista (non una classe CListView)  
  
1.  Incorpora un [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) oggetto nella classe di visualizzazione.  
  
2.  Applicare uno stile, posizione e visualizzare la finestra di controllo di intestazione della visualizzazione [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) funzione membro.  
  
3.  Aggiungere elementi al controllo header.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di visualizzazione per i messaggi di qualsiasi notifica del controllo header è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
 In entrambi i casi, l'oggetto controllo incorporato viene creato quando viene creato l'oggetto finestra di dialogo o visualizzazione. Sarà necessario chiamare [CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create) per creare la finestra di controllo. Per posizionare il controllo, chiamare [CHeaderCtrl:: layout](../mfc/reference/cheaderctrl-class.md#layout) per determinare le dimensioni iniziali e la posizione del controllo e [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos) per impostare la posizione desiderata. Aggiungere quindi gli elementi come descritto in [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).  
  
 Per altre informazioni, vedere [creazione di un controllo intestazione](/windows/desktop/Controls/header-controls) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

