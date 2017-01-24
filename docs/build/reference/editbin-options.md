---
title: "Opzioni di EDITBIN | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "editbin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EDITBIN (programma), opzioni"
ms.assetid: 2da9f88e-cbab-4d64-bb66-ef700535230f
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Opzioni di EDITBIN
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nonché i file oggetto, i file eseguibili e le DLLs \(Librerie a collegamento dinamico, Dynamic Link Library\).  Le opzioni specificano le modifiche che EDITBIN apporta.  
  
 Un'opzione è formata da un identificatore di opzione, che può essere un trattino \(–\) o una barra \(\/\), seguito dal nome dell'opzione.  I nomi delle opzioni non possono essere abbreviati.  Per alcune opzioni è possibile specificare argomenti, preceduti da due punti \( : \).  Non sono consentiti spazi o tabulazioni nella specifica di un'opzione.  Utilizzare uno o più spazi o tabulazioni per separare le specifiche delle opzioni nella riga di comando.  Per i nomi delle opzioni e i corrispondenti argomenti parola chiave o nome file, non viene rilevata la distinzione tra maiuscole e minuscole.  Ad esempio, \-bind e \/BIND hanno lo stesso significato.  
  
 Le opzioni di EDITBIN sono:  
  
|Opzione|Scopo|  
|-------------|-----------|  
|[\/ALLOWBIND](../../build/reference/allowbind.md)|Specifica se un DLL può essere associato.|  
|[\/ALLOWISOLATION](../../build/reference/allowisolation.md)|Specifica il comportamento di ricerca nel manifest di file eseguibile o DLL.|  
|[\/APPCONTAINER](../../build/reference/appcontainer.md)|Specifica se l'app deve essere eseguita in un AppContainer —ad esempio, un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].|  
|[\/BIND](../../build/reference/bind.md)|Imposta gli indirizzi per i punti di ingresso negli oggetti specificati per ridurre il tempo di caricamento.|  
|[\/DYNAMICBASE](../../build/reference/dynamicbase.md)|Specifica se il DLL o un'immagine eseguibile può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR \(Address Space Layout Randomization\).|  
|[\/ERRORREPORT](../../build/reference/errorreport-editbin-exe.md)|Segnala a Microsoft gli errori interni.|  
|[\/HEAP](../../build/reference/heap.md)|Imposta la dimensione dell'heap dell'immagine eseguibile in byte.|  
|[\/HIGHENTROPYVA](../../build/reference/highentropyva.md)|Specifica se il DLL o l'immagine eseguibile supporta un'entropia elevata \(64 bit\) per ASLR \(Address Space Layout Randomization\).|  
|[\/INTEGRITYCHECK](../../build/reference/integritycheck.md)|Specifica se verificare la firma digitale al momento del caricamento.|  
|[\/LARGEADDRESSAWARE](../../build/reference/largeaddressaware.md)|Specifica se l'oggetto supporta gli indirizzi maggiori di 2 gigabyte.|  
|[\/NOLOGO](../../build/reference/nologo-editbin.md)|Non visualizza il messaggio di avvio di EDITBIN.|  
|[\/NXCOMPAT](../../build/reference/nxcompat.md)|Specifica se l'immagine eseguibile è compatibile con la Protezione dell'Esecuzione di Dati di Windows.|  
|[\/REBASE](../../build/reference/rebase.md)|Imposta gli indirizzi di base per gli oggetti specificati.|  
|[\/RELEASE](../../build/reference/release.md)|Imposta il checksum nell'intestazione.|  
|[\/SECTION](../../build/reference/section-editbin.md)|Consente di eseguire l'override degli attributi di una sezione.|  
|[\/STACK](../../build/reference/stack.md)|Imposta la dimensione dello stack dell'immagine eseguibile in byte.|  
|[\/SUBSYSTEM](../../build/reference/subsystem.md)|Specifica l'ambiente di esecuzione.|  
|[\/SWAPRUN](../../build/reference/swaprun.md)|Specifica che l'immagine eseguibile deve essere copiata nel file di scambio e quindi eseguita da li.|  
|[\/TSAWARE](../../build/reference/tsaware.md)|Specifica che l'applicazione è progettata per funzionare in un ambiente multiutente.|  
|[\/VERSION](../../build/reference/version.md)|Imposta il numero di versione nell'intestazione.|  
  
## Vedere anche  
 [Strumenti per la compilazione in C\/C\+\+](../../build/reference/c-cpp-build-tools.md)   
 [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md)