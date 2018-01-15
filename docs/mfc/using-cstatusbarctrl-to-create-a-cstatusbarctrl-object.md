---
title: Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CStatusBarCtrl
dev_langs: C++
helpviewer_keywords:
- status bar controls [MFC], creating
- CStatusBarCtrl class [MFC], creating
ms.assetid: 365c2b65-12de-49e6-9a2e-416c6ee10d60
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 94043fa3ff8dbbc68c91b8d621303ab4afe29877
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-cstatusbarctrl-to-create-a-cstatusbarctrl-object"></a>Utilizzo di CStatusBarCtrl per creare un oggetto CStatusBarCtrl
Di seguito è riportato un esempio di un tipico utilizzo di [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md):  
  
### <a name="to-use-a-status-bar-control-with-parts"></a>Per utilizzare un controllo barra di stato con parti  
  
1.  Costruire l'oggetto `CStatusBarCtrl`.  
  
2.  Chiamare [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight) se si desidera impostare l'altezza minima del controllo barra di stato area di disegno del.  
  
3.  Chiamare [SetBkColor](../mfc/reference/cstatusbarctrl-class.md#setbkcolor) per impostare il colore di sfondo della barra di stato.  
  
4.  Chiamare [SetParts](../mfc/reference/cstatusbarctrl-class.md#setparts) per impostare il numero di parti in un controllo e la coordinata del bordo destro di ogni parte della barra di stato.  
  
5.  Chiamare [SetText](../mfc/reference/cstatusbarctrl-class.md#settext) per impostare il testo in una determinata parte del controllo barra di stato. Il messaggio invalida la parte del controllo che è stata modificata. Ciò comporta la visualizzazione del nuovo testo quando il controllo riceverà il messaggio `WM_PAINT`.  
  
 In alcuni casi, la barra di stato deve essere visualizzata solo una riga di testo. In questo caso, effettuare una chiamata a [SetSimple](../mfc/reference/cstatusbarctrl-class.md#setsimple). Il controllo barra di stato inserite in modalità "semplice", che consente di visualizzare una singola riga di testo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

