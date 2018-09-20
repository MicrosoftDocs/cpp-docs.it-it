---
title: Utilizzo di un controllo intestazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- header controls [MFC], working with
- header controls
ms.assetid: af3afb5c-bf97-451b-8fee-3adcb8257210
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6da3ffd669ebd3d9cc02fc56a13acfa1fe804e7b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381738"
---
# <a name="working-with-a-header-control"></a>Utilizzo di un controllo Header

Il modo più semplice usare un controllo header ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) è in combinazione con un controllo elenco, vedere [utilizzo di CListCtrl](../mfc/using-clistctrl.md) più avanti in questo gruppo di argomenti. È anche possibile usare un controllo di intestazione da solo. MFC chiama `InitCommonControls` automaticamente. Come indicato di seguito sono riportate le attività principali:

- [Creazione del controllo header](../mfc/creating-the-header-control.md)

- [Aggiunta di elementi al controllo header](../mfc/adding-items-to-the-header-control.md)

- [Ordinamento degli elementi nel controllo header](../mfc/ordering-items-in-the-header-control.md)

- [L'elaborazione delle notifice header-control](../mfc/processing-header-control-notifications.md)

Se l'oggetto di controllo di intestazione è incorporato in una classe di finestra di dialogo o visualizzazione padre, il controllo viene eliminato definitivamente quando viene eliminato definitivamente l'elemento padre.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

