---
title: Classi Windows Sockets
ms.date: 11/04/2016
f1_keywords:
- vc.classes.net
helpviewer_keywords:
- sockets classes [MFC]
- Windows Sockets [MFC], classes
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
ms.openlocfilehash: 4abdd8f8fbfc115b5014ffd0b3a37df357852b16
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57303820"
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
