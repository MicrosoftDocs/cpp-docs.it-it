---
description: 'Altre informazioni su: classi Windows Sockets'
title: Classi Windows Sockets
ms.date: 11/04/2016
helpviewer_keywords:
- sockets classes [MFC]
- Windows Sockets [MFC], classes
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
ms.openlocfilehash: 03d8ddae0bb511e52b0ea7ed2b3754184ed6ebc8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118641"
---
# <a name="windows-sockets-classes"></a>Classi Windows Sockets

Windows Sockets fornisce una modalità indipendente dal protocollo di rete per la comunicazione tra due computer. Questi socket possono essere sincroni (il programma attende fino a quando non viene eseguita la comunicazione) o asincrono (il programma continuerà a essere eseguito mentre è in corso la comunicazione).

[CAsyncSocket](../mfc/reference/casyncsocket-class.md)<br/>
Incapsula l'API Windows Sockets in un thin wrapper.

[CSocket](../mfc/reference/csocket-class.md)<br/>
Astrazione di livello superiore derivata da `CAsyncSocket` . Funziona in modo sincrono.

[CSocketFile](../mfc/reference/csocketfile-class.md)<br/>
Fornisce un' `CFile` interfaccia a un socket di Windows.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
