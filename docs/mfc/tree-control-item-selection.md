---
title: Selezione elementi controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item selection
- controls [MFC], selecting items in
- CTreeCtrl class [MFC], item selection
- item selection in tree controls
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
ms.openlocfilehash: bd3ade31ce1e41481943659ba9a8ef8dd77117fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50592717"
---
# <a name="tree-control-item-selection"></a>Selezione elementi controllo Tree

Quando cambia la selezione da un elemento a un altro, un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia [TVN_SELCHANGING](/windows/desktop/Controls/tvn-selchanging) e [TVN_SELCHANGED](/windows/desktop/Controls/tvn-selchanged) i messaggi di notifica. Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o una sequenza di tasti. Le notifiche includono anche informazioni relative all'elemento che sta per essere la selezione e l'elemento che sta per perdere la selezione. È possibile usare queste informazioni per impostare gli attributi dell'elemento che dipendono dallo stato di selezione dell'elemento. Restituzione **TRUE** in risposta alle `TVN_SELCHANGING` impedisce la modifica; la selezione di restituzione **FALSE** consente la modifica.

Un'applicazione può modificare la selezione chiamando il [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

