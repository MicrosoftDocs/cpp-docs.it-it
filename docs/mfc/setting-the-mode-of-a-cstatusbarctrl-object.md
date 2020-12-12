---
description: 'Altre informazioni su: impostazione della modalità di un oggetto CStatusBarCtrl'
title: Impostazione della modalità di un oggetto CStatusBarCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- simple mode and status bar controls
- IsSimple method, using
- SetSimple method [MFC]
- status bar controls [MFC], simple and nonsimple modes
- non-simple mode and status bar controls
- CStatusBarCtrl class [MFC], simple and nonsimple modes
ms.assetid: ca6076e5-1501-4e33-8d35-9308941e46c0
ms.openlocfilehash: 46a87c17c68059e1d12476f4963f159cd2915824
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217107"
---
# <a name="setting-the-mode-of-a-cstatusbarctrl-object"></a>Impostazione della modalità di un oggetto CStatusBarCtrl

Sono disponibili due modalità per un `CStatusBarCtrl` oggetto: semplice e non semplice. Nella maggior parte dei casi, il controllo barra di stato avrà una o più parti, oltre a testo ed eventualmente un'icona o icone. Questa operazione viene definita modalità non semplice. Per ulteriori informazioni su questa modalità, vedere [inizializzazione delle parti di un oggetto CStatusBarCtrl](../mfc/initializing-the-parts-of-a-cstatusbarctrl-object.md).

Tuttavia, in alcuni casi è necessario visualizzare solo una singola riga di testo. In questo caso, la modalità semplice è sufficiente per le proprie esigenze. Per modificare la modalità dell' `CStatusBarCtrl` oggetto in Simple, effettuare una chiamata alla funzione membro [sesimple](../mfc/reference/cstatusbarctrl-class.md#setsimple) . Quando il controllo barra di stato è in modalità semplice, impostare il testo chiamando la `SetText` funzione membro, passando 255 come valore per il parametro *nPane* .

È possibile utilizzare la funzione [nosimple](../mfc/reference/cstatusbarctrl-class.md#issimple) per determinare la modalità `CStatusBarCtrl` in cui si trova l'oggetto.

> [!NOTE]
> Se l'oggetto barra di stato viene modificato da non semplice a semplice o viceversa, la finestra viene immediatamente ridisegnato e, se applicabile, le parti definite vengono ripristinate automaticamente.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
