---
title: Selezione elementi controllo Tree | Documenti Microsoft
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
ms.openlocfilehash: fc533046695db409067ff603e30cedbe11ad5ca4
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953557"
---
# <a name="tree-control-item-selection"></a>Selezione elementi controllo Tree
Quando cambia la selezione da un elemento a un altro, un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia [TVN_SELCHANGING](http://msdn.microsoft.com/library/windows/desktop/bb773547) e [TVN_SELCHANGED](http://msdn.microsoft.com/library/windows/desktop/bb773544) i messaggi di notifica. Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o una sequenza di tasti. Le notifiche includono anche informazioni relative all'elemento che sta per essere la selezione e l'elemento che sta per perdere la selezione. È possibile utilizzare queste informazioni per impostare gli attributi dell'elemento che dipendono dallo stato di selezione dell'elemento. Restituzione **TRUE** in risposta a `TVN_SELCHANGING` impedisce la selezione modifica; restituendo **FALSE** consente la modifica.  
  
 Un'applicazione può modificare la selezione chiamando il [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

