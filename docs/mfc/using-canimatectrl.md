---
title: Utilizzo di CAnimateCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CAnimateCtrl
dev_langs:
- C++
helpviewer_keywords:
- animation controls [MFC], CAnimateCtrl class
- controls [MFC], animation
- CAnimateCtrl class [MFC], about CAnimateCtrl class [MFC]
ms.assetid: 696c0805-bef0-4e2e-a9e7-b37b9215b7f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b02a07b1f5a433ffa9525da8e8a7f942c9034d54
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398456"
---
# <a name="using-canimatectrl"></a>Utilizzo di CAnimateCtrl

Un controllo animation, rappresentato dalla classe [CAnimateCtrl](../mfc/reference/canimatectrl-class.md), è una finestra che visualizza una clip in formato Audio con interfoliazione AVI (Video), ovvero il formato audio/video Windows standard. Un clip AVI è una serie di fotogrammi bitmap, come un film.

Poiché il thread continua l'esecuzione durante la visualizzazione del clip AVI, un utilizzo comune per un controllo animation consiste nell'indicare l'attività del sistema durante un'operazione di lunga durata. Ad esempio, la finestra di dialogo Trova Windows visualizza una lente di ingrandimento mobile durante la ricerca di un file.

Controlli animazione possono riprodurre solo clip AVI semplici e non supportano file audio. (Per un elenco completo di limitazioni, vedere [CAnimateCtrl](../mfc/reference/canimatectrl-class.md).) Poiché le funzionalità di un controllo animation sono estremamente limitate e soggette a modifiche, è necessario utilizzare in alternativa, ad esempio il controllo MCIWnd se è necessario un controllo per fornire la riproduzione multimedia e/o le funzionalità di registrazione. Per altre informazioni sul controllo MCIWnd, vedere la documentazione multimediale.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Uso di un controllo Animation](../mfc/using-an-animation-control.md)

- [Notifiche inviate mediante controlli Animation](../mfc/notifications-sent-by-animation-controls.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)

