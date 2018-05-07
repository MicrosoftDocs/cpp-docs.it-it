---
title: Override di una funzione virtuale (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.virtualfunc.override
dev_langs:
- C++
helpviewer_keywords:
- virtual functions, overriding
- base classes, overriding virtual functions defined in
- Properties window, overriding virtual functions in
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d8580d27442b0cae7e343a568beaa9aeae500461
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="overriding-a-virtual-function-visual-c"></a>Override di una funzione virtual (Visual C++)
È possibile eseguire l'override di funzioni virtual definite in una classe base da Visual Studio [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
### <a name="to-override-a-virtual-function-in-the-properties-window"></a>Per eseguire l'override di una funzione virtuale nella finestra proprietà  
  
1.  In visualizzazione classi, fare clic sulla classe.  
  
2.  Nella finestra Proprietà fare clic su di **esegue l'override** pulsante.  
  
    > [!NOTE]
    >  Il **esegue l'override** pulsante è disponibile quando si seleziona il nome della classe in visualizzazione classi o quando fa clic su all'interno della finestra di origine.  
  
     Nella colonna sinistra Elenca le funzioni virtuali. Se il nome di una funzione virtuale viene visualizzato anche nella colonna destra, un override è già stato implementato.  
  
3.  Se la funzione non dispone di alcun override, quindi fare clic sulla cella nella colonna a destra nella finestra proprietà per visualizzare il nome suggerito per la funzione viene eseguito l'override \<aggiungere >*FuncName*.  
  
4.  Fare clic sul nome suggerito per aggiungere il codice stub per la funzione.  
  
5.  Per modificare una funzione di override, fare doppio clic sul nome della funzione in visualizzazione classi e modificare il codice nella finestra di origine.  
  
 Per rimuovere un override, fare clic sul nome della funzione di sostituzione nella colonna destra e selezionare \<eliminare >*FuncName*. Il codice della funzione è commentato.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura di classe](../ide/navigating-the-class-structure-visual-cpp.md)