---
title: "Errore irreversibile U1045 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1045"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1045"
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile U1045 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

generazione non riuscita: messaggio  
  
 Un programma o un comando chiamato da NMAKE non è riuscito per il motivo specificato.  Quando NMAKE chiama un altro programma, ad esempio il compilatore o il linker, la chiamata potrebbe non riuscire o può essere restituito un errore dal programma chiamato.  Questo messaggio viene usato per segnalare l'errore.  
  
 Per risolvere questo problema, determinare innanzitutto la causa dell'errore.  È possibile usare i comandi riportati dall'opzione NMAKE [\/N](../../build/nmake-options.md) per verificare le impostazioni di ambiente e per ripetere le azioni eseguite da NMAKE nella riga di comando.