---
title: Impostazioni per CStatusBarCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CStatusBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- status bar controls [MFC], settings
- CStatusBarCtrl class [MFC], settings
ms.assetid: adeba0c3-17f3-435c-b140-a57845e9ce49
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2411659e6ae33fe9ce81d508d3e7c206b1e5b113
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46440030"
---
# <a name="settings-for-the-cstatusbarctrl"></a>Impostazioni per CStatusBarCtrl

La posizione predefinita di un [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) finestra stato è lungo il bordo inferiore della finestra padre, ma è possibile specificare lo stile CCS_TOP affinché venga visualizzato nella parte superiore dell'area client della finestra padre.

È possibile specificare lo stile SBARS_SIZEGRIP per includere un riquadro di ridimensionamento all'estremità destra del `CStatusBarCtrl` finestra stato. Un riquadro di ridimensionamento è simile a un bordo di ridimensionamento. è un'area rettangolare che l'utente può fare clic e trascinare per ridimensionare la finestra padre.

> [!NOTE]
>  Se si combinano stili CCS_TOP e SBARS_SIZEGRIP, il riquadro di ridimensionamento non funziona anche se il sistema lo disegna nella finestra di stato.

La procedura della finestra per la finestra di stato imposta automaticamente le dimensioni iniziali e la posizione della finestra del controllo. La larghezza è uguale a quello dell'area client della finestra padre. L'altezza è basata sulle metriche del tipo di carattere correntemente selezionato nel contesto di dispositivo della finestra di stato e sulla larghezza dei bordi della finestra.

La procedura della finestra adegua le dimensioni della finestra di stato automaticamente ogni volta che viene ricevuto un messaggio WM_SIZE. In genere, quando cambiano le dimensioni della finestra padre, l'elemento padre invia un messaggio WM_SIZE nella finestra di stato.

È possibile impostare l'altezza minima dell'area di disegno della finestra stato chiamando [SetMinHeight](../mfc/reference/cstatusbarctrl-class.md#setminheight), che specifica l'altezza minima in pixel. Nell'area di disegno non include i bordi della finestra.

Per recuperare la larghezza dei bordi di una finestra di stato chiamando [GetBorders](../mfc/reference/cstatusbarctrl-class.md#getborders). Questa funzione membro include il puntatore a una matrice di tre elementi che riceve la larghezza del bordo orizzontale del bordo verticale e il bordo tra i rettangoli.

## <a name="see-also"></a>Vedere anche

[Uso di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

