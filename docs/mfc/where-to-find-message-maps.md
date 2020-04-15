---
title: Dove trovare le mappe messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- macros, message map
- locating message maps
- message classes [MFC], finding
- message-map macros
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
ms.openlocfilehash: eec0ae43546e3cc0c08e3178c4808e21fa48686a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360157"
---
# <a name="where-to-find-message-maps"></a>Dove trovare le mappe messaggi

Quando si crea una nuova struttura di applicazione con la creazione guidata applicazione, la creazione guidata applicazione scrive una mappa messaggi per ogni classe di destinazione del comando che crea automaticamente. Sono incluse le classi derivate dell'applicazione, del documento, della visualizzazione e della finestra cornice. Alcune di queste mappe messaggi hanno già le voci fornite dalla creazione guidata applicazione per determinati messaggi e comandi predefiniti e alcuni sono solo segnaposto per i gestori che verranno aggiunti.

La mappa messaggi di una classe si trova nella classe . CPP per la classe. Lavorando con le mappe messaggi di base create dalla Creazione guidata applicazione, si utilizza la [Creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere voci per i messaggi e i comandi che verranno gestiti da ogni classe. Una tipica mappa messaggi potrebbe essere simile alla seguente dopo aver aggiunto alcune voci:A typical message map might look like the following after you add some entries:

[!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/cpp/where-to-find-message-maps_1.cpp)]

La mappa messaggi è costituita da una raccolta di macro. Due macro, [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) e [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map), tra parentesi la mappa messaggi. Altre macro, ad `ON_COMMAND`esempio , compilano il contenuto della mappa messaggi.

> [!NOTE]
> Le macro della mappa messaggi non sono seguite da punti e virgola.

Quando si utilizza la procedura guidata Aggiungi classe per creare una nuova classe, fornisce una mappa messaggi per la classe. In alternativa, è possibile creare manualmente una mappa messaggi utilizzando l'editor del codice sorgente.

## <a name="see-also"></a>Vedere anche

[Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)
