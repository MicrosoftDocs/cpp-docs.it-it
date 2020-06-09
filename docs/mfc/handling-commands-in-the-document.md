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
ms.openlocfilehash: ed2ef635437408cacfd600d6cdba4b3731d575b4
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625747"
---
# <a name="handling-commands-in-the-document"></a>Gestione dei comandi nel documento

La classe Document può inoltre gestire alcuni comandi generati da voci di menu, pulsanti della barra degli strumenti o tasti di scelta rapida. Per impostazione predefinita, `CDocument` gestisce i comandi Salva e Salva con nome nel menu file utilizzando la serializzazione. Altri comandi che interessano i dati possono anche essere gestiti dalle funzioni membro del documento. Nel programma Scribble, ad esempio, la classe `CScribDoc` fornisce un gestore per il comando Edit Clear All, che elimina tutti i dati attualmente archiviati nel documento. I documenti possono avere mappe messaggi, ma, a differenza delle viste, i documenti non possono gestire i messaggi di Windows standard, solo **WM_COMMAND** messaggi o "comandi".

## <a name="see-also"></a>Vedere anche

[Utilizzo di documenti](using-documents.md)
