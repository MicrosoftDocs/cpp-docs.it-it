---
title: "Errori di FxCopCmd | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "errori di FxCopCmd"
ms.assetid: bb614ed0-1b7c-4b56-99ae-da50ef6cfef9
caps.latest.revision: 12
caps.handback.revision: 12
ms.author: "susanno"
manager: "douge"
---
# Errori di FxCopCmd
FxCopCmd non considera tutti gli errori irreversibili.  Se FxCopCmd dispone di informazioni sufficienti per eseguire un'analisi parziale, esegue l'analisi e segnala gli errori che si sono verificati.  Il codice di errore, che è un numero intero a 32 bit, contiene una combinazione bit per bit di valori numerici che corrispondono agli errori.  
  
 Nella tabella seguente sono descritti i codici di errore restituiti da FxCopCmd:  
  
|delle modifiche a..."|Valore numerico|  
|---------------------------|---------------------|  
|Nessun errore|0x0|  
|Errore di analisi|0x1|  
|Eccezioni di regole|0x2|  
|Errore di caricamento del progetto|0x4|  
|Errore di caricamento dell'assembly|0x8|  
|Errore di caricamento della libreria delle regole|0x10|  
|Errore di caricamento dei report di importazione|0x20|  
|Errore di output|0x40|  
|Errore di opzione della riga di comando|0x80|  
|Errore di inizializzazione|0x100|  
|Errore di riferimento ad assembly|0x200|  
|Messaggio di interruzione compilazione|0x400|  
|Errore sconosciuto|0x1000000|  
  
 L'errore di analisi viene restituito per gli errori irreversibili.  Indica che non è stato possibile completare l'analisi.  Quando applicabile, il codice di errore contiene anche la causa sottostante dell'errore irreversibile.  Gli errori irreversibili vengono generati nelle seguenti condizioni:  
  
-   Non è stato possibile eseguire l'analisi a causa di input insufficiente.  
  
-   L'analisi ha generato un'eccezione che non è gestita da FxCopCmd.  
  
-   Non è stato possibile trovare il file di progetto specificato o il file è danneggiato.  
  
-   L'opzione di output non è stata specificata o non è stato possibile scrivere il file.  
  
    > [!NOTE]
    >  Il codice restituito di FxCopCmd "Errore di riferimento ad assembly" 0x200 è di per sé un avviso anziché un errore.  Questo codice restituito indica che sono stati individuati riferimenti indiretti mancanti, ma che FxCopCmd è stato in grado di gestirli.  Si tratta di un avviso della possibilità che alcuni risultati di analisi siano stati compromessi.  Si consideri il codice restituito "Errore di riferimento ad assembly" come errore se combinato a qualsiasi altro codice restituito.  
  
## Vedere anche  
 [Errori nell'applicazione dell'analisi del codice](../Topic/Code%20Analysis%20Application%20Errors.md)