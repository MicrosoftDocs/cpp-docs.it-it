---
description: "Altre informazioni su: selezione dell'elemento del controllo Tree"
title: Selezione elementi controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], item selection
- controls [MFC], selecting items in
- CTreeCtrl class [MFC], item selection
- item selection in tree controls
ms.assetid: 7bcb3b16-b9c8-4c06-9350-7bc3c1c5009b
ms.openlocfilehash: 46e1256eea3e8175b996a1b6bdfdd7c1de2739d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264037"
---
# <a name="tree-control-item-selection"></a>Selezione elementi controllo Tree

Quando la selezione passa da un elemento a un altro, un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia [TVN_SELCHANGING](/windows/win32/Controls/tvn-selchanging) e [TVN_SELCHANGED](/windows/win32/Controls/tvn-selchanged) i messaggi di notifica. Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o di una sequenza di tasti. Le notifiche includono inoltre informazioni sull'elemento che sta ottenendo la selezione e sull'elemento che sta perdendo la selezione. È possibile usare queste informazioni per impostare gli attributi degli elementi che dipendono dallo stato di selezione dell'elemento. Restituisce **true** in risposta a `TVN_SELCHANGING` impedisce la modifica della selezione; la restituzione di **false** consente la modifica.

Un'applicazione può modificare la selezione chiamando la funzione membro [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
