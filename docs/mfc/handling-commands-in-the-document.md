---
title: Gestione dei comandi nel documento | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- message maps [MFC], in document class
- command handling [MFC]
- documents [MFC], message maps
- message handling [MFC], WM_COMMAND messages
- command handling [MFC], commands in documents
- documents [MFC], handling messages in
ms.assetid: c7375584-27af-4275-b2fd-afea476785d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8845ea7c44fd5a34774db0508302f5959987cdc9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46441265"
---
# <a name="handling-commands-in-the-document"></a>Gestione dei comandi nel documento

La classe del documento è inoltre possibile gestire alcuni comandi generati da voci di menu, pulsanti della barra degli strumenti o tasti di scelta rapida. Per impostazione predefinita, `CDocument` gestisce il salvataggio e Salva i comandi nel menu File, usando la serializzazione. Altri comandi che influiscono sui dati inoltre possono essere gestiti dalle funzioni membro di un documento. Ad esempio, il programma Scribble, classe `CScribDoc` fornisce un gestore per il comando Modifica Cancella tutto, che consente di eliminare tutti i dati attualmente archiviati nel documento. I documenti possono avere mappe messaggi, ma a differenza delle visualizzazioni, in grado di gestire i messaggi Windows standard, ovvero solo **WM_COMMAND** messaggi, o "commands".

## <a name="see-also"></a>Vedere anche

[Uso di documenti](../mfc/using-documents.md)

