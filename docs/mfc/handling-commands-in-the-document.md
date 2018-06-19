---
title: Gestione dei comandi nel documento | Documenti Microsoft
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
ms.openlocfilehash: c20ff02b2d72f1dfa6afab5a0d547b46aa55b18c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33343554"
---
# <a name="handling-commands-in-the-document"></a>Gestione dei comandi nel documento
La classe del documento è inoltre possibile gestire alcuni comandi generati da voci di menu, pulsanti della barra degli strumenti o i tasti di scelta rapida. Per impostazione predefinita, **CDocument** gestisce il salvataggio e Salva i comandi nel menu File, mediante la serializzazione. Altri comandi che influiscono sui dati inoltre possono essere gestiti dalle funzioni membro di un documento. Ad esempio, il programma Scribble, classe `CScribDoc` fornisce un gestore per il comando Modifica Cancella tutto, che elimina tutti i dati attualmente archiviati nel documento. Documenti è possibile specificare le mappe messaggi, ma a differenza delle visualizzazioni, in grado di gestire i messaggi di Windows standard, ovvero solo **WM_COMMAND** messaggi, o "comandi".  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)

