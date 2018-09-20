---
title: Selezione elementi controllo albero | Microsoft Docs
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
ms.openlocfilehash: 9aa9c82a57ff8504c8e3eba7becff1e1cdccaae2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431567"
---
# <a name="tree-control-item-selection"></a>Selezione elementi controllo Tree

Quando cambia la selezione da un elemento a un altro, un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) Invia [TVN_SELCHANGING](/windows/desktop/Controls/tvn-selchanging) e [TVN_SELCHANGED](/windows/desktop/Controls/tvn-selchanged) i messaggi di notifica. Entrambe le notifiche includono un valore che specifica se la modifica è il risultato di un clic del mouse o una sequenza di tasti. Le notifiche includono anche informazioni relative all'elemento che sta per essere la selezione e l'elemento che sta per perdere la selezione. È possibile usare queste informazioni per impostare gli attributi dell'elemento che dipendono dallo stato di selezione dell'elemento. Restituzione **TRUE** in risposta alle `TVN_SELCHANGING` impedisce la modifica; la selezione di restituzione **FALSE** consente la modifica.

Un'applicazione può modificare la selezione chiamando il [SelectItem](../mfc/reference/ctreectrl-class.md#selectitem) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

