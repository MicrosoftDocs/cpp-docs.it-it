---
title: Dove trovare le mappe messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- macros, message map
- locating message maps
- message classes [MFC], finding
- message-map macros
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
ms.openlocfilehash: c50c6fc1134f579859530972dc864103c4e0ebcf
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907368"
---
# <a name="where-to-find-message-maps"></a>Dove trovare le mappe messaggi

Quando si crea una nuova applicazione Skeleton con la creazione guidata applicazione, la creazione guidata applicazione scrive una mappa messaggi per ogni classe di destinazione comando creata automaticamente. Sono incluse le classi di applicazione, documento, visualizzazione e finestra cornice derivate. Alcune di queste mappe messaggi contengono già le voci fornite dalla creazione guidata applicazione per determinati messaggi e comandi predefiniti e alcuni sono solo segnaposto per i gestori che verranno aggiunti.

La mappa messaggi di una classe si trova in. File CPP per la classe. Utilizzando le mappe dei messaggi di base create dalla creazione guidata applicazione, utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere voci per i messaggi e i comandi che verranno gestiti da ogni classe. Una tipica mappa messaggi potrebbe essere simile alla seguente dopo l'aggiunta di alcune voci:

[!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/cpp/where-to-find-message-maps_1.cpp)]

La mappa messaggi è costituita da una raccolta di macro. Due macro, [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) e [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map), racchiudono la mappa messaggi. Altre macro, ad esempio `ON_COMMAND`, compilano il contenuto della mappa messaggi.

> [!NOTE]
>  Le macro della mappa messaggi non sono seguite da punti e virgola.

Quando si utilizza la procedura guidata Aggiungi classe per creare una nuova classe, viene fornita una mappa messaggi per la classe. In alternativa, è possibile creare manualmente una mappa messaggi usando l'editor del codice sorgente.

## <a name="see-also"></a>Vedere anche

[Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)
