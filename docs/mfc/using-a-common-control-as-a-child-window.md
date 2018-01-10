---
title: Utilizzo di un controllo comune come finestra figlio | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [MFC], using as child windows
- windows [MFC], common controls as
- child windows [MFC], common controls as
- common controls [MFC], child windows
- Windows common controls [MFC], child windows
ms.assetid: 608f7d47-7854-4fce-bde9-856c51e76753
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 475c769bf09c0693c04780712b85884ae7c48862
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-a-common-control-as-a-child-window"></a>Utilizzo di un controllo comune come finestra figlio
Uno qualsiasi dei controlli comuni di Windows può essere utilizzato come finestra figlio di un'altra finestra. La procedura seguente viene descritto come creare un controllo comune in modo dinamico e quindi utilizzarlo.  
  
### <a name="to-use-a-common-control-as-a-child-window"></a>Per utilizzare un controllo comune come finestra figlio  
  
1.  Definire il controllo nella classe correlata o gestore.  
  
2.  Utilizzare l'override del metodo di [CWnd:: Create](../mfc/reference/cwnd-class.md#create) metodo per creare il controllo di Windows.  
  
3.  Dopo aver creato il controllo (fin il `OnCreate` gestore se si crea una sottoclasse del controllo), è possibile modificare il controllo utilizzando le funzioni membro. Vedere le descrizioni dei singoli controlli in [controlli](../mfc/controls-mfc.md) per informazioni dettagliate sui metodi.  
  
4.  Quando si è finito di lavorare con il controllo, utilizzare [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare definitivamente il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)

