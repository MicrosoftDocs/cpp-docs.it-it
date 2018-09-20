---
title: Classi di Windows Sockets | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.net
dev_langs:
- C++
helpviewer_keywords:
- sockets classes [MFC]
- Windows Sockets [MFC], classes
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 893fa525b04376cde0e96f280c95e6bfd1243946
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439978"
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

