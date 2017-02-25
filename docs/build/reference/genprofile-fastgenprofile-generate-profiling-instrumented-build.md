---
title: "/GENPROFILE, /FASTGENPROFILE (Generare la build instrumentata di profilatura) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GENPROFILE"
  - "FASTGENPROFILE"
  - "/GENPROFILE"
  - "/FASTGENPROFILE"
helpviewer_keywords: 
  - "GENPROFILE"
  - "FASTGENPROFILE"
ms.assetid: deff5ce7-46f5-448a-b9cd-a7a83a6864c6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /GENPROFILE, /FASTGENPROFILE (Generare la build instrumentata di profilatura)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica la generazione di un file PDG dal linker per supportare l'ottimizzazione PGO.  \/ GENPROFILE e \/FASTGENPROFILE usano parametri predefiniti diversi. Usare \/GENPROFILE per dare priorità alla precisione rispetto alla velocità e all'utilizzo memoria durante la profilatura. Usare \/FASTGENPROFILE per preferire un minore utilizzo della memoria e una velocità inferiore rispetto alla precisione.  
  
## Sintassi  
  
```  
/{GENPROFILE|FASTGENPROFILE}[:{COUNTER32|COUNTER64|EXACT|MEMMAX=#|MEMMIN=#|NOEXACT|NOPATH|NOTRACKEH|PATH|PGD=filename|TRACKEH}]   
```  
  
## Note  
 COUNTER32 &#124; COUNTER64  
 Usare COUNTER32 per specificare l'uso dei contatori di probe a 32 bit e COUNTER64 per specificare i contatori di probe a 64 bit. Quando si specifica \/GENPROFILE, il valore predefinito è COUNTER64. Quando si specifica \/FASTGENPROFILE, il valore predefinito è COUNTER32.  
  
 EXACT &#124; NOEXACT  
 Usare EXACT per specificare incrementi interlocked thread\-safe per le ricerche. NOEXACT specifica le operazioni di incremento non protette per le ricerche. Il valore predefinito è NOEXACT.  
  
 MEMMAX\=value, MEMMIN\=value  
 Usare MEMMAX e MEMMIN per specificare le dimensioni di prenotazione minime e massime per dati di training in memoria. Il valore è la quantità di memoria da riservare in byte.  Per impostazione predefinita, questi valori vengono determinati da un approccio euristico interno.  
  
 PATH &#124; NOPATH  
 Usare PATH per specificare un set separato di contatori PGO per ogni percorso univoco a una funzione. Usare NOPATH per specificare un solo set di contatori per ogni funzione.   Quando si specifica \/GENPROFILE, il valore predefinito è PATH. Quando si specifica \/FASTGENPROFILE, il valore predefinito è NOPATH.  
  
 TRACKEH &#124; NOTRACKEH  
 Specifica se usare i contatori aggiuntivi per mantenere un conteggio accurato quando vengono generate eccezioni durante il training. Usare TRACKEH per specificare i contatori aggiuntivi per un conteggio esatto. Usare NOTRACKEH per specificare i contatori singoli per il codice che non usa la gestione delle eccezioni o che non riscontra eccezioni negli scenari di formazione.  Quando si specifica \/GENPROFILE, il valore predefinito è TRACKEH. Quando si specifica \/FASTGENPROFILE, il valore predefinito è NOTRACKEH.  
  
 PGD\=filename  
 Specifica un nome del file di base per il file PGD. Per impostazione predefinita, il linker usa il nome del file immagine eseguibile di base con estensione PGD.  
  
 Le opzioni \/GENPROFILE e \/FASTGENPROFILE indicano al linker di generare il file di strumentazione di profilatura necessario per supportare il training relativo alle applicazioni per l'ottimizzazione PGO. Le informazioni di profilatura generate dal training relativo alle applicazioni vengono usate come input per eseguire le ottimizzazioni mirate dell'intero programma durante la compilazione.   È possibile impostare opzioni aggiuntive per controllare varie funzionalità di profilatura per le prestazioni durante il training relativo alle app e le compilazioni. Le opzioni predefinite specificate da \/GENPROFILE forniscono risultati più accurati, soprattutto per le grandi e complesse applicazioni multithread. L'opzione \/FASTGENPROFILE usa valori predefiniti diversi per un footprint di memoria inferiore e prestazioni più veloci durante il training, a scapito della precisione.  
  
 Le informazioni di profilatura vengono acquisite quando si esegue l'applicazione instrumentata dopo avere compilato usando \/GENPROFILE di \/FASTGENPROFILE. Queste informazioni vengono usate dal linker quando si specifica l'opzione \/USEPROFILE. Per altre informazioni su come eseguire il training dell'app e informazioni dettagliate sui dati raccolti, vedere Ottimizzazione PGO.  
  
 È anche necessario specificare \/LTCG quando si specifica \/GENPROFILE o \/FASTGENPROFILE.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [\/LTCG \(Generazione di codice in fase di collegamento\)](../../build/reference/ltcg-link-time-code-generation.md)