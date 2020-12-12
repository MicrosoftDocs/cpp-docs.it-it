---
description: 'Altre informazioni su: Windows Sockets: conversione di stringhe'
title: 'Windows Sockets: conversione di stringhe'
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], multibyte character string conversion
- sockets [MFC], multibyte character string conversion issues
- string conversion, multibyte character strings
ms.assetid: 9df522b5-6b23-41e0-bb96-e4e623baf141
ms.openlocfilehash: fe8607647192fadc7f0d5d32d7716c222ff9206f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118628"
---
# <a name="windows-sockets-converting-strings"></a>Windows Sockets: conversione di stringhe

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo illustra la conversione delle stringhe. Gli altri problemi sono trattati in [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md) e [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md).

Se si utilizza o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi manualmente. Se si utilizza o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.

## <a name="converting-strings"></a>Conversione di stringhe

Se si comunica tra le applicazioni che utilizzano stringhe archiviate in formati a caratteri wide diversi, ad esempio i set di caratteri Unicode o multibyte (MBCS) o tra uno di questi e un'applicazione che utilizza stringhe di caratteri ANSI, è necessario gestire le conversioni in `CAsyncSocket` . L' `CArchive` oggetto utilizzato con un `CSocket` oggetto gestisce questa conversione automaticamente attraverso le funzionalità della classe [CString](../atl-mfc-shared/reference/cstringt-class.md). Per ulteriori informazioni, vedere la specifica di Windows Sockets, che si trova nel Windows SDK.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
