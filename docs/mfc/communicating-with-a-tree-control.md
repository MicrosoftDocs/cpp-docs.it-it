---
title: Comunicazione con un controllo struttura ad albero | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tree controls [MFC], communicating with
- CTreeCtrl class [MFC], calling member functions
- communications, tree controls
- tree controls
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 78bb6a6d6421a5336f8efbffc7d24a6121e208e6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46432154"
---
# <a name="communicating-with-a-tree-control"></a>Comunicazione con un controllo albero

Si usano metodi diversi per chiamare le funzioni membro una [CTreeCtrl](../mfc/reference/ctreectrl-class.md) oggetti a seconda del modo in cui è stato creato l'oggetto:

- Se il controllo struttura ad albero è in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` creati nella classe della finestra di dialogo.

- Se il controllo struttura ad albero è una finestra figlio, utilizzare il `CTreeCtrl` oggetto (o puntatore) usato per costruire l'oggetto.

- Se si usa un' `CTreeView` dell'oggetto, utilizzare la funzione [CTreeView:: GetTreeCtrl](../mfc/reference/ctreeview-class.md#gettreectrl) per ottenere un riferimento al controllo albero. È possibile inizializzare un altro riferimento con questo valore o assegnare l'indirizzo del riferimento da un `CTreeCtrl` puntatore.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

