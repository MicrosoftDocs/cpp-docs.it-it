---
title: Ruolo della visualizzazione nella stampa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- views [MFC], printing
- OnDraw method [MFC], and printing
- printing [MFC], OnDraw method [MFC]
- printing [MFC], views
- CView class [MFC], role in printing
- printing views [MFC]
ms.assetid: 8d4a3c8e-1fce-4edc-b608-94cb5f3e487e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4c78756ea84df66b77f71d8f8ad8d0b9dfa1a6c9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46377526"
---
# <a name="role-of-the-view-in-printing"></a>Ruolo della visualizzazione nella stampa

La visualizzazione anche svolge due funzioni importanti nella stampa il documento associato.

La visualizzazione:

- Usa lo stesso [OnDraw](../mfc/reference/cview-class.md#ondraw) codice su cui disegnare la stampante e disegnare sullo schermo.

- Consente di gestire la divisione del documento in pagine per la stampa.

Per altre informazioni sulla stampa e sul ruolo della visualizzazione nella stampa, vedere [stampa e anteprima di stampa](../mfc/printing-and-print-preview.md).

## <a name="see-also"></a>Vedere anche

[Uso delle visualizzazioni](../mfc/using-views.md)

