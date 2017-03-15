---
title: "Avviso degli strumenti del linker LNK4210 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4210"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4210"
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Avviso degli strumenti del linker LNK4210
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la sezione sezione esiste; è possibile che esistano inizializzatori o terminatori statici non gestiti  
  
 Nel codice sono presenti inizializzatori o terminatori statici, ma CRT o l'equivalente che deve eseguirli non era in esecuzione all'avvio dell'applicazione.  Questo errore può verificarsi nei seguenti casi:  
  
-   Il codice contiene una variabile di classe globale con un costruttore, un distruttore o una tabella di funzioni virtuali.  
  
-   Il codice contiene una variabile globale inizializzata con una costante non presente nella fase di compilazione.  
  
 Per correggere l'errore, effettuare una delle seguenti operazioni:  
  
-   Rimuovere tutto il codice con inizializzatori statici.  
  
-   Non utilizzare [\/NOENTRY](../../build/reference/noentry-no-entry-point.md).  Dopo aver rimosso \/NOENTRY, è possibile che sia necessario aggiungere msvcrt.lib, libcmt.lib o libcmtd.lib alla riga di comando del linker.  
  
-   Aggiungere msvcrt.lib, libcmt.lib o libcmtd.lib alla riga di comando del linker.  
  
-   Quando si passa dalla compilazione \/clr:pure a \/clr, rimuovere l'opzione [\/ENTRY](../../build/reference/entry-entry-point-symbol.md) dalla riga di comando del linker.  Ciò attiverà l'inizializzazione CRT, che consente l'esecuzione di inizializzatori statici all'avvio dell'applicazione.  
  
-   Se il progetto viene compilato con [\/ENTRY](../../build/reference/entry-entry-point-symbol.md) e se a \/ENTRY viene passata una funzione diversa da `_DllMainCRTStartup`, è necessario che la funzione chiami CRT\_INIT.  Vedere [Funzionamento della libreria di runtime](../../build/run-time-library-behavior.md) e l'articolo della Knowledge Base Q94248,  per ulteriori informazioni.  
  
 L'opzione del compilatore [\/GS](../../build/reference/gs-buffer-security-check.md) richiede il codice di avvio CRT.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)