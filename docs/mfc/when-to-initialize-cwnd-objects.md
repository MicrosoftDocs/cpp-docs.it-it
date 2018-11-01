---
title: Quando inizializzare gli oggetti CWnd
ms.date: 11/04/2016
helpviewer_keywords:
- window objects [MFC], when to initialize CWnd
- initializing CWnd objects [MFC]
- initializing objects [MFC], CWnd
- CWnd objects [MFC], when HWND is attached
- HWND, when attached to CWnd object
- CWnd objects [MFC], when to initialize
ms.assetid: 4d31bcb1-73db-4f2f-b71c-89b087569a10
ms.openlocfilehash: c75745547846fbf6c7e01ecf473d4d6f366bd264
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548551"
---
# <a name="when-to-initialize-cwnd-objects"></a>Quando inizializzare gli oggetti CWnd

Non è possibile creare finestre figlio proprie o chiamare le funzioni API Windows nel costruttore di una `CWnd`-oggetto derivato. Infatti, il `HWND` per il `CWnd` oggetto non è ancora stato creato. Inizializzazione di più Windows specifiche, ad esempio l'aggiunta di finestre figlio, deve essere eseguita in un [OnCreate](../mfc/reference/cwnd-class.md#oncreate) gestore di messaggi.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)

- [Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)

## <a name="see-also"></a>Vedere anche

[Uso di finestre cornice](../mfc/using-frame-windows.md)

