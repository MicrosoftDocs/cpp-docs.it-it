---
title: 'Windows Sockets: Conversione di stringhe'
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], multibyte character string conversion
- sockets [MFC], multibyte character string conversion issues
- string conversion, multibyte character strings
ms.assetid: 9df522b5-6b23-41e0-bb96-e4e623baf141
ms.openlocfilehash: eaf278fc2689f0afa9ab6ff30f1294c36de5d7ac
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298360"
---
# <a name="windows-sockets-converting-strings"></a>Windows Sockets: Conversione di stringhe

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo illustra la conversione di stringhe. Gli altri argomenti sono trattati [Windows Sockets: Bloccando](../mfc/windows-sockets-blocking.md) e [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md).

Se si usano o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi autonomamente. Se si usano o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.

## <a name="converting-strings"></a>Conversione di stringhe

Se è comunicare tra le applicazioni che utilizzano stringhe archiviate in diversi formati di caratteri "wide", ad esempio Unicode o caratteri multibyte (MBCS) nei set o compreso tra uno di questi elementi e un'applicazione che usa le stringhe di caratteri ANSI, è necessario gestire le conversioni familiarità con `CAsyncSocket`. Il `CArchive` oggetto utilizzato con un `CSocket` oggetto gestisce questa conversione automaticamente tramite le funzionalità della classe [CString](../atl-mfc-shared/reference/cstringt-class.md). Per altre informazioni, vedere la specifica di Windows Sockets, che si trova in Windows SDK.

Per altre informazioni, vedere:

- [Windows Sockets: Uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: Background](../mfc/windows-sockets-background.md)

- [Windows Sockets: Socket di Stream](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
