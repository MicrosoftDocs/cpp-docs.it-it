---
title: Creazione di selezione data e ora controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DateTimePicker control [MFC], creating
- CDateTimeCtrl class [MFC], creating
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6ce7c987bf1284d0287cd0206572209d7ae2d0b7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-the-date-and-time-picker-control"></a>Creazione del controllo selezione data e ora
Come il controllo selezione data e ora varia a seconda che si utilizza un controllo in una finestra di dialogo o crearlo in una finestra non di dialogo.  
  
### <a name="to-use-cdatetimectrl-directly-in-a-dialog-box"></a>Per utilizzare CDateTimeCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere una data e un controllo selezione ora alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.  
  
2.  Specificare eventuali stili richiesti utilizzando la finestra di dialogo delle proprietà del controllo selezione data e ora.  
  
3.  Utilizzare il [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CDateTimeCtrl`.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per qualsiasi controllo selezione data e ora [notifica](../mfc/processing-notification-messages-in-date-and-time-picker-controls.md) messaggi è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
5.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare tutti gli stili aggiuntivi per il `CDateTimeCtrl` oggetto.  
  
### <a name="to-use-cdatetimectrl-in-a-nondialog-window"></a>Per utilizzare CDateTimeCtrl in una finestra non di dialogo  
  
1.  Dichiarare il controllo nella classe visualizzazione o della finestra.  
  
2.  Chiamare il controllo [crea](../mfc/reference/ctabctrl-class.md#create) funzione membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate)e possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) (se la funzione del gestore creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

