---
title: "Creazione del testo di un file inline | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inline (file), creazione di testo"
  - "NMAKE (programma), inline (file)"
  - "testo, file inline"
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Creazione del testo di un file inline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I file inline possono essere temporanei o permanenti.  
  
## Sintassi  
  
```  
  
      inlinetext  
.  
.  
.  
<<[KEEP | NOKEEP]  
```  
  
## Note  
 Specificare *inlinetext* nella prima riga dopo il comando.  Contrassegnare la fine con doppie parentesi angolari \(\<\<\) all'inizio di una riga separata.  Nel file il contenuto di *inlinetext* precede le parentesi di delimitazione.  In *inlinetext* possono essere contenute sostituzioni ed espansioni delle macro, ma non direttive o commenti di makefile.  Gli spazi, le tabulazioni e i caratteri di nuova riga vengono interpretati letteralmente.  
  
 I file temporanei permangono solo per la durata della sessione e possono essere riutilizzati mediante altri comandi.  Specificare **KEEP** dopo le parentesi angolari di chiusura per conservare il file al termine della sessione di NMAKE. I file senza nome vengono conservati sul disco con il nome file generato.  Specificare **NOKEEP** o non specificare nulla per un file temporaneo.  Per **KEEP** e **NOKEEP** non viene rilevata la distinzione tra maiuscole e minuscole.  
  
## Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)