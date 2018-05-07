---
title: Selezione elementi controllo albero | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], item selection
- controls [MFC], selecting items in
- CTreeCtrl class [MFC], item selection
- item selection in tree controls
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6fb08fcbb1bd77cc80fdbe014d8c9e8a0851254d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tree-control-item-selection"></a>Selezione elementi controllo Tree
Quando cambia la selezione da un elemento a un altro, un controllo struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia [TVN_SELCHANGING](http://msdn.microsoft.com/library/windows/desktop/bb773547) e [TVN_SELCHANGED](http://msdn.microsoft.com/library/windows/desktop/bb773544) messaggi di notifica. Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o una sequenza di tasti. Le notifiche includono anche informazioni relative all'elemento che sta per essere la selezione e l'elemento che sta per perdere la selezione. È possibile utilizzare queste informazioni per impostare gli attributi dell'elemento che dipendono dallo stato di selezione dell'elemento. Restituzione di **TRUE** in risposta a **TVN_SELCHANGING** impedisce la modifica; la selezione di restituzione **FALSE** consente la modifica.  
  
 Un'applicazione può modificare la selezione chiamando il [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

