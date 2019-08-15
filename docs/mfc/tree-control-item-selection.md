---
title: Selezione elementi controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item selection
- controls [MFC], selecting items in
- CTreeCtrl class [MFC], item selection
- item selection in tree controls
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
ms.openlocfilehash: 07c7b673e0f9029f8ece928b0ab17760b3863cc7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513334"
---
# <a name="tree-control-item-selection"></a>Selezione elementi controllo Tree

Quando la selezione passa da un elemento a un altro, un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia messaggi di notifica [TVN_SELCHANGING](/windows/win32/Controls/tvn-selchanging) e [TVN_SELCHANGED](/windows/win32/Controls/tvn-selchanged) . Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o di una sequenza di tasti. Le notifiche includono inoltre informazioni sull'elemento che sta ottenendo la selezione e sull'elemento che sta perdendo la selezione. È possibile usare queste informazioni per impostare gli attributi degli elementi che dipendono dallo stato di selezione dell'elemento. Restituisce **true** in risposta a `TVN_SELCHANGING` impedisce la modifica della selezione; la restituzione di **false** consente la modifica.

Un'applicazione può modificare la selezione chiamando la funzione membro [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) .

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
