---
title: Classi Windows Sockets
ms.date: 11/04/2016
f1_keywords:
- vc.classes.net
helpviewer_keywords:
- sockets classes [MFC]
- Windows Sockets [MFC], classes
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
ms.openlocfilehash: 18537c0de09185c8cd219e3d17ef8bb297e1d711
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50433605"
---
# <a name="windows-sockets-classes"></a>Classi Windows Sockets

Windows Sockets forniscono un modo indipendente dal protocollo di rete per la comunicazione tra due computer. I socket possono essere sincroni (il programma attende fino a quando avviene la comunicazione) o asincrona (il programma continua l'esecuzione durante la comunicazione).

[CAsyncSocket](../mfc/reference/casyncsocket-class.md)<br/>
Incapsula l'API di socket di Windows in un wrapper sottile.

[CSocket](../mfc/reference/csocket-class.md)<br/>
Astrazione di livello superiore è derivato da `CAsyncSocket`. Funziona in modo sincrono.

[CSocketFile](../mfc/reference/csocketfile-class.md)<br/>
Fornisce un `CFile` interfaccia a un Socket di Windows.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

