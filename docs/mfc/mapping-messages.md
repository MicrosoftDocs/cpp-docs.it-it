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
ms.openlocfilehash: 16d6d7725d82bed6c9bfc02e408b68dcf7ffe5e4
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625497"
---
# <a name="mapping-messages"></a>Mapping dei messaggi

Ogni classe Framework che può ricevere messaggi o comandi ha una propria "mappa messaggi". Il Framework usa le mappe messaggi per connettere messaggi e comandi alle relative funzioni di gestione. Qualsiasi classe derivata dalla classe `CCmdTarget` può disporre di una mappa messaggi. Altri articoli illustrano in dettaglio le mappe messaggi e descrivono come usarle.

Nonostante il nome "mappa messaggi", le mappe messaggi gestiscono sia i messaggi che i comandi, tutte e tre le categorie di messaggi elencate nelle [categorie](message-categories.md)dei messaggi.

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](messages-and-commands-in-the-framework.md)
