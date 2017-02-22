---
title: "Errore irreversibile C1905 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1905"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1905"
ms.assetid: fefc6769-477f-45a2-9878-6f0a5f42472c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore irreversibile C1905
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Front end e back end non compatibili \(il processore di destinazione deve essere lo stesso\)  
  
 Questo errore si verifica quando un file con estensione obj viene generato in un front end del compilatore \(C1.dll\) destinato a un processore, ad esempio x86, ARM o [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], ma viene letto da un back end \(C2.dll\) destinato a un altro processore.  
  
 Per risolvere il problema, assicurarsi di usare un front end e un back end corrispondenti.  Questa è la condizione predefinita per progetti creati in Visual Studio.  Questo errore può verificarsi se è stato modificato il file di progetto e si sono usati percorsi diversi per gli strumenti del compilatore.  Se il percorso per gli strumenti del compilatore non è stato impostato in modo specifico, questo errore può verificarsi se l'installazione di Visual Studio è danneggiata.  Ad esempio, è possibile che i file DLL del compilatore siano stati copiati da un percorso a un altro.  Usare **Programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.