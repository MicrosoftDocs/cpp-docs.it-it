---
title: Classi Windows Sockets
ms.date: 11/04/2016
helpviewer_keywords:
- sockets classes [MFC]
- Windows Sockets [MFC], classes
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
ms.openlocfilehash: 3f1b7b2b6674b4a5f8c8f7bff6c5fa239715f459
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79445976"
---
# <a name="windows-sockets-classes"></a>Classi Windows Sockets

Windows Sockets fornisce una modalità indipendente dal protocollo di rete per la comunicazione tra due computer. Questi socket possono essere sincroni (il programma attende fino a quando non viene eseguita la comunicazione) o asincrono (il programma continuerà a essere eseguito mentre è in corso la comunicazione).

[CAsyncSocket](../mfc/reference/casyncsocket-class.md)<br/>
Incapsula l'API Windows Sockets in un thin wrapper.

[CSocket](../mfc/reference/csocket-class.md)<br/>
Astrazione di livello superiore derivata da `CAsyncSocket`. Funziona in modo sincrono.

[CSocketFile](../mfc/reference/csocketfile-class.md)<br/>
Fornisce un'interfaccia `CFile` a un socket di Windows.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
