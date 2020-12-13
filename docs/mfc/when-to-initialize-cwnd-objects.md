---
description: 'Altre informazioni su: quando inizializzare gli oggetti CWnd'
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
ms.openlocfilehash: 89d40b826507574fddd41364ac6cecc526663519
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142766"
---
# <a name="when-to-initialize-cwnd-objects"></a>Quando inizializzare gli oggetti CWnd

Non è possibile creare finestre figlio personalizzate o chiamare funzioni API Windows nel costruttore di un `CWnd` oggetto derivato da. Questo è dovuto al fatto che `HWND` per l' `CWnd` oggetto non è stato ancora creato. La maggior parte delle inizializzazioni specifiche di Windows, ad esempio l'aggiunta di finestre figlio, deve essere eseguita in un gestore di messaggi [OnCreate](../mfc/reference/cwnd-class.md#oncreate) .

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre cornice di documenti](../mfc/creating-document-frame-windows.md)

- [Creazione documento/visualizzazione](../mfc/document-view-creation.md)

## <a name="see-also"></a>Vedi anche

[Uso di finestre cornice](../mfc/using-frame-windows.md)
