---
title: Dove trovare le mappe messaggi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- macros, message map
- locating message maps
- message classes [MFC], finding
- message-map macros
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 81958eda508a3e0b4b93ac0d169f3aa3bfece2a2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46434271"
---
# <a name="where-to-find-message-maps"></a>Dove trovare le mappe messaggi

Quando si crea una nuova struttura applicazione con la creazione guidata applicazione, la creazione guidata applicazione scrive una mappa messaggi per ogni classe di destinazione comando che viene creato automaticamente. Ciò include l'applicazione derivata, documenti, visualizzazione e classi frame-window. Alcune di queste mappe messaggi dispone già delle voci fornite dalla procedura guidata dell'applicazione per determinati messaggi e comandi predefiniti e alcune sono semplicemente segnaposto per i gestori che verranno aggiunti.

Mappa messaggi della classe si trova nel. File CPP per la classe. Si lavora con le mappe messaggi di base che crea la creazione guidata applicazione, utilizzare la finestra proprietà per aggiungere voci per i messaggi e comandi che consente di gestire ciascuna classe. Una mappa messaggi tipica potrebbe essere simile al seguente dopo l'aggiunta di alcune voci:

[!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/cpp/where-to-find-message-maps_1.cpp)]

La mappa dei messaggi è costituito da una raccolta di macro. Le due macro [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) e [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map), racchiudere tra parentesi quadre nella mappa messaggi. Altre macro, ad esempio `ON_COMMAND`, inserire il messaggio contenuto della mappa.

> [!NOTE]
>  Le macro della mappa messaggi non sono seguite da un punto e virgola.

Quando si usa la procedura guidata Aggiungi classe per creare una nuova classe, fornisce una mappa messaggi per la classe. In alternativa, è possibile creare una mappa messaggi manualmente usando l'editor del codice sorgente.

## <a name="see-also"></a>Vedere anche

[Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)

