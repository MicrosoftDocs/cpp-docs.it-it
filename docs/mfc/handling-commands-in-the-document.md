---
title: Gestione dei comandi nel documento | Documenti Microsoft
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
- message maps [MFC], in document class
- command handling [MFC]
- documents [MFC], message maps
- message handling [MFC], WM_COMMAND messages
- command handling [MFC], commands in documents
- documents [MFC], handling messages in
ms.assetid: c7375584-27af-4275-b2fd-afea476785d0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a8d27698d573e1dee539f93ab88015285648fa77
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handling-commands-in-the-document"></a>Gestione dei comandi nel documento
La classe del documento è inoltre possibile gestire alcuni comandi generati da voci di menu, pulsanti della barra degli strumenti o i tasti di scelta rapida. Per impostazione predefinita, **CDocument** gestisce il salvataggio e Salva i comandi nel menu File, mediante la serializzazione. Altri comandi che influiscono sui dati inoltre possono essere gestiti dalle funzioni membro di un documento. Ad esempio, il programma Scribble, classe `CScribDoc` fornisce un gestore per il comando Modifica Cancella tutto, che elimina tutti i dati attualmente archiviati nel documento. Documenti è possibile specificare le mappe messaggi, ma a differenza delle visualizzazioni, in grado di gestire i messaggi di Windows standard, ovvero solo **WM_COMMAND** messaggi, o "comandi".  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)

