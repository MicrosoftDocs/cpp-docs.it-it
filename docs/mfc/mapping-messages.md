---
title: Mapping dei messaggi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7324da5eaff15d240cabbaede2c2982021361257
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410981"
---
# <a name="mapping-messages"></a>Mapping dei messaggi

Ogni classe di framework che può ricevere messaggi o i comandi ha il proprio "mapping di messaggi". Il framework utilizza le mappe messaggi a cui connettersi alle funzioni del gestore di messaggi e comandi. Tutte le classi derivate dalla classe `CCmdTarget` può avere una mappa messaggi. Altri articoli illustrano le mappe messaggi in modo dettagliato e descrivono come usarli.

Nonostante il nome "mappa messaggi," messaggio mappe gestiscono entrambi i messaggi e comandi, ovvero tutte le tre categorie di messaggi elencati nel [categorie di messaggi](../mfc/message-categories.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

