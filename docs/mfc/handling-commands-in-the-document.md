---
title: "Gestione dei comandi nel documento | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "WM_COMMAND"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi (gestione)"
  - "comandi (gestione), comandi nei documenti"
  - "documenti, gestione di messaggi in"
  - "documenti, mappe messaggi"
  - "gestione dei messaggi, WM_COMMAND (messaggi)"
  - "mappe messaggi, in classe documento"
  - "WM_COMMAND"
ms.assetid: c7375584-27af-4275-b2fd-afea476785d0
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione dei comandi nel documento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe document può inoltre possibile gestire i controlli sicuri generati dalle voci di menu, i pulsanti della barra degli strumenti, o dai tasti di scelta rapida.  Per impostazione predefinita, **CDocument** gestisce salva e salva con nome in comandi del menu File, tramite serializzazione.  Altri controlli che influiscono sui dati possono essere gestiti da funzioni membro del documento.  Ad esempio, nel programma scribble, la classe `CScribDoc` fornisce un gestore per deselezionare la casella di modifica qualsiasi comando, che elimina tutti i dati attualmente archiviati nel documento.  I documenti possono avere mappe messaggi, a differenza delle visualizzazioni, i documenti non possono gestire i messaggi standard di windows \- solo messaggi di **WM\_COMMAND**, o "controlli."  
  
## Vedere anche  
 [Utilizzo di documenti](../mfc/using-documents.md)