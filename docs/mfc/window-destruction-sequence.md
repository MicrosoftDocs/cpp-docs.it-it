---
description: 'Altre informazioni su: sequenza di distruzione della finestra'
title: Sequenza di distruzione di finestre
ms.date: 11/04/2016
helpviewer_keywords:
- destruction, windows
- destroying windows
- sequence [MFC], window destruction
- CWnd objects [MFC], destruction sequence
- sequence [MFC]
- windows [MFC], destroying
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
ms.openlocfilehash: 2ba60f1dcd3668a754bbe4384a6c8cf6b4d541d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207683"
---
# <a name="window-destruction-sequence"></a>Sequenza di distruzione di finestre

Nel framework MFC, quando l'utente chiude la finestra cornice, il gestore [OnClose](../mfc/reference/cwnd-class.md#onclose) predefinito della finestra chiama [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). L'ultima funzione membro chiamata quando la finestra di Windows viene distrutta è [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), che esegue una pulizia, chiama la funzione membro [predefinita](../mfc/reference/cwnd-class.md#default) per eseguire la pulizia di Windows e infine chiama la funzione membro virtuale [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). L'implementazione di [CFrameWnd](../mfc/reference/cframewnd-class.md) di `PostNcDestroy` Elimina l'oggetto finestra di C++.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)

- [Scollegamento di un oggetto CWnd dall'handle HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)

## <a name="see-also"></a>Vedi anche

[Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)
