---
title: Mapping dei messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- message maps [MFC], about message maps
- mappings [MFC], commands
- commands [MFC], mapping
- command mapping [MFC]
- message handling [MFC], connecting to handler functions
- commands [MFC], connecting to handler functions
- mappings [MFC], messages
- messages [MFC], mapping
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
ms.openlocfilehash: 1f31bc2e3c6af9c4b899167ba99c152a231a929d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665842"
---
# <a name="mapping-messages"></a>Mapping dei messaggi

Ogni classe di framework che può ricevere messaggi o i comandi ha il proprio "mapping di messaggi". Il framework utilizza le mappe messaggi a cui connettersi alle funzioni del gestore di messaggi e comandi. Tutte le classi derivate dalla classe `CCmdTarget` può avere una mappa messaggi. Altri articoli illustrano le mappe messaggi in modo dettagliato e descrivono come usarli.

Nonostante il nome "mappa messaggi," messaggio mappe gestiscono entrambi i messaggi e comandi, ovvero tutte le tre categorie di messaggi elencati nel [categorie di messaggi](../mfc/message-categories.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

