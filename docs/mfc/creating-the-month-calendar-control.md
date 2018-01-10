---
title: Creazione del calendario mensile controllo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CMonthCalCtrl class [MFC], creating
- month calendar controls [MFC], creating
- month calendar controls [MFC]
ms.assetid: 185cc642-85e9-4365-8a4c-d90b75b010f7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f55960177fa8bc9a31ebfd16b4dbc6aeaba3ee38
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-the-month-calendar-control"></a>Creazione del controllo calendario mensile
La modalità di creazione del controllo calendario mensile varia a seconda che il controllo venga utilizzato in una finestra di dialogo o che venga creato in una finestra non di dialogo.  
  
### <a name="to-use-cmonthcalctrl-directly-in-a-dialog-box"></a>Per utilizzare CMonthCalCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre aggiungere un controllo calendario mensile alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.  
  
2.  Specificare tutti gli stili necessari, utilizzando la finestra di dialogo Proprietà del controllo calendario mensile.  
  
3.  Utilizzare il [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CMonthCalCtrl`.  
  
4.  Utilizzare la finestra proprietà per eseguire il mapping delle funzioni del gestore della classe di finestra di dialogo per i messaggi qualsiasi notifica del controllo calendario mensile per gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
5.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare tutti gli stili aggiuntivi per il `CMonthCalCtrl` oggetto.  
  
### <a name="to-use-cmonthcalctrl-in-a-nondialog-window"></a>Per utilizzare CMonthCalCtrl in una finestra non di dialogo  
  
1.  Definire il controllo nella classe di visualizzazione o della finestra.  
  
2.  Chiamare il controllo [crea](../mfc/reference/cmonthcalctrl-class.md#create) funzione membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate)e possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) (se la funzione del gestore creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

