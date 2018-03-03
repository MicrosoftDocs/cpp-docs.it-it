---
title: Mapping di messaggi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c415b12b22c19a5e1f2d19fd9c808a98485eb7ae
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mapping-messages"></a>Mapping dei messaggi
Ogni classe di framework che può ricevere messaggi o comandi ha una proprio "mappa del messaggio". Il framework utilizza le mappe messaggi per connettere le relative funzioni gestore messaggi e comandi. Qualsiasi classe derivata dalla classe `CCmdTarget` può avere una mappa messaggi. Altri articoli illustrano mappe messaggi in modo dettagliato e viene descritto come utilizzarli.  
  
 Nonostante il nome "mappa messaggi," messaggio mappe gestiscono entrambi i messaggi e comandi, ovvero tutte le tre categorie di messaggi nel [categorie di messaggi](../mfc/message-categories.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

