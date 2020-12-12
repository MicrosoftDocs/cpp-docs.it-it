---
description: 'Altre informazioni su: dove trovare le mappe messaggi'
title: Dove trovare le mappe messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- macros, message map
- locating message maps
- message classes [MFC], finding
- message-map macros
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
ms.openlocfilehash: 4796d358dd3be5455b22e348fbcc9236d1404ce8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97284967"
---
# <a name="where-to-find-message-maps"></a>Dove trovare le mappe messaggi

Quando si crea una nuova applicazione Skeleton con la creazione guidata applicazione, la creazione guidata applicazione scrive una mappa messaggi per ogni classe di destinazione comando creata automaticamente. Sono incluse le classi di applicazione, documento, visualizzazione e finestra cornice derivate. Alcune di queste mappe messaggi contengono già le voci fornite dalla creazione guidata applicazione per determinati messaggi e comandi predefiniti e alcuni sono solo segnaposto per i gestori che verranno aggiunti.

La mappa messaggi di una classe si trova in. File CPP per la classe. Utilizzando le mappe dei messaggi di base create dalla creazione guidata applicazione, utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere voci per i messaggi e i comandi che verranno gestiti da ogni classe. Una tipica mappa messaggi potrebbe essere simile alla seguente dopo l'aggiunta di alcune voci:

[!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/cpp/where-to-find-message-maps_1.cpp)]

La mappa messaggi è costituita da una raccolta di macro. Due macro, [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) e [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map), tra parentesi quadre la mappa messaggi. Altre macro, ad esempio `ON_COMMAND` , compilano il contenuto della mappa messaggi.

> [!NOTE]
> Le macro della mappa messaggi non sono seguite da punti e virgola.

Quando si utilizza la procedura guidata Aggiungi classe per creare una nuova classe, viene fornita una mappa messaggi per la classe. In alternativa, è possibile creare manualmente una mappa messaggi usando l'editor del codice sorgente.

## <a name="see-also"></a>Vedi anche

[Modalità di ricerca delle mappe messaggi nel Framework](../mfc/how-the-framework-searches-message-maps.md)
