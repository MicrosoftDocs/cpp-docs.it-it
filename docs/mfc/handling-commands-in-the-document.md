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
ms.openlocfilehash: f3cce539d52bd04e97a6b5f84cbd833b05afb5bb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62240574"
---
# <a name="handling-commands-in-the-document"></a>Gestione dei comandi nel documento

La classe del documento è inoltre possibile gestire alcuni comandi generati da voci di menu, pulsanti della barra degli strumenti o tasti di scelta rapida. Per impostazione predefinita, `CDocument` gestisce il salvataggio e Salva i comandi nel menu File, usando la serializzazione. Altri comandi che influiscono sui dati inoltre possono essere gestiti dalle funzioni membro di un documento. Ad esempio, il programma Scribble, classe `CScribDoc` fornisce un gestore per il comando Modifica Cancella tutto, che consente di eliminare tutti i dati attualmente archiviati nel documento. I documenti possono avere mappe messaggi, ma a differenza delle visualizzazioni, in grado di gestire i messaggi Windows standard, ovvero solo **WM_COMMAND** messaggi, o "commands".

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)
