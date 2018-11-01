---
title: Gestione dei comandi nel documento
ms.date: 11/04/2016
helpviewer_keywords:
- message maps [MFC], in document class
- command handling [MFC]
- documents [MFC], message maps
- message handling [MFC], WM_COMMAND messages
- command handling [MFC], commands in documents
- documents [MFC], handling messages in
ms.assetid: c7375584-27af-4275-b2fd-afea476785d0
ms.openlocfilehash: d2f0a7271452ace9b9e06ff995af61881db4403c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50548954"
---
# <a name="handling-commands-in-the-document"></a>Gestione dei comandi nel documento

La classe del documento è inoltre possibile gestire alcuni comandi generati da voci di menu, pulsanti della barra degli strumenti o tasti di scelta rapida. Per impostazione predefinita, `CDocument` gestisce il salvataggio e Salva i comandi nel menu File, usando la serializzazione. Altri comandi che influiscono sui dati inoltre possono essere gestiti dalle funzioni membro di un documento. Ad esempio, il programma Scribble, classe `CScribDoc` fornisce un gestore per il comando Modifica Cancella tutto, che consente di eliminare tutti i dati attualmente archiviati nel documento. I documenti possono avere mappe messaggi, ma a differenza delle visualizzazioni, in grado di gestire i messaggi Windows standard, ovvero solo **WM_COMMAND** messaggi, o "commands".

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)

