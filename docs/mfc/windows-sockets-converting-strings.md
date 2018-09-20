---
title: 'Windows Sockets: Conversione di stringhe | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], multibyte character string conversion
- sockets [MFC], multibyte character string conversion issues
- string conversion, multibyte character strings
ms.assetid: 9df522b5-6b23-41e0-bb96-e4e623baf141
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b23d2149659cdad320a58bdff0f42ba113b5696
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378937"
---
# <a name="windows-sockets-converting-strings"></a>Windows Sockets: conversione di stringhe

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo illustra la conversione di stringhe. Gli altri argomenti sono trattati [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md).

Se si usano o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi autonomamente. Se si usano o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.

## <a name="converting-strings"></a>Conversione di stringhe

Se è comunicare tra le applicazioni che utilizzano stringhe archiviate in diversi formati di caratteri "wide", ad esempio Unicode o caratteri multibyte (MBCS) nei set o compreso tra uno di questi elementi e un'applicazione che usa le stringhe di caratteri ANSI, è necessario gestire le conversioni familiarità con `CAsyncSocket`. Il `CArchive` oggetto utilizzato con un `CSocket` oggetto gestisce questa conversione automaticamente tramite le funzionalità della classe [CString](../atl-mfc-shared/reference/cstringt-class.md). Per altre informazioni, vedere la specifica di Windows Sockets, che si trova in Windows SDK.

Per altre informazioni, vedere:

- [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

