---
description: 'Altre informazioni su: comunicazione con un controllo albero'
title: Comunicazione con un controllo albero
ms.date: 11/04/2016
helpviewer_keywords:
- tree controls [MFC], communicating with
- CTreeCtrl class [MFC], calling member functions
- communications, tree controls
- tree controls
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
ms.openlocfilehash: 82ee4fe0beb65e44166b4d68ffd44923b7fe0c76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310564"
---
# <a name="communicating-with-a-tree-control"></a>Comunicazione con un controllo albero

Si usano metodi diversi per chiamare le funzioni membro in un oggetto [CTreeCtrl](reference/ctreectrl-class.md) a seconda della modalità di creazione dell'oggetto:

- Se il controllo struttura ad albero si trova in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` creata nella classe della finestra di dialogo.

- Se il controllo struttura ad albero è una finestra figlio, usare l' `CTreeCtrl` oggetto (o il puntatore) usato per costruire l'oggetto.

- Se si usa un `CTreeView` oggetto, usare la funzione [CTreeView:: GetTreeCtrl](reference/ctreeview-class.md#gettreectrl) per ottenere un riferimento al controllo albero. È possibile inizializzare un altro riferimento con questo valore o assegnare l'indirizzo del riferimento a un `CTreeCtrl` puntatore.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](using-ctreectrl.md)<br/>
[Controlli](controls-mfc.md)
