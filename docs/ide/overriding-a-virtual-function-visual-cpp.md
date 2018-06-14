---
title: Override di una funzione virtual (Visual C++) | Microsoft Docs
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
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33337743"
---
# <a name="overriding-a-virtual-function-visual-c"></a>Override di una funzione virtual (Visual C++)
È possibile eseguire l'override delle funzioni virtuali definite in una classe di base dalla [finestra Proprietà](/visualstudio/ide/reference/properties-window) di Visual Studio.  
  
### <a name="to-override-a-virtual-function-in-the-properties-window"></a>Per eseguire l'override di una funzione virtuale nella finestra Proprietà  
  
1.  In Visualizzazione classi fare clic sulla classe.  
  
2.  Nella finestra Proprietà fare clic sul pulsante **Override**.  
  
    > [!NOTE]
    >  Il pulsante **Override** è disponibile quando si seleziona il nome della classe in Visualizzazione classi o quando si fa clic all'interno della finestra di origine.  
  
     Nella colonna di sinistra sono elencate le funzioni virtuali. La presenza del nome di una funzione virtuale anche nella colonna di destra indica che è già stato implementato un override.  
  
3.  Se la funzione non ha alcun override, fare clic sulla cella nella colonna di destra della finestra Proprietà per visualizzare il nome suggerito dell'override della funzione come \<aggiungi>*FuncName*.  
  
4.  Fare clic sul nome suggerito per aggiungere il codice stub per la funzione.  
  
5.  Per modificare una funzione in override, fare doppio clic sul nome della funzione in Visualizzazione classi e modificare il codice nella finestra di origine.  
  
 Per rimuovere un override, fare clic sul nome della funzione di override nella colonna di destra e selezionare \<elimina >*FuncName*. Il codice della funzione viene impostato come commento.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)   
 [Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../ide/navigating-the-class-structure-visual-cpp.md)