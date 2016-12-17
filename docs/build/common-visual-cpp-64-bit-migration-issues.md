---
title: "Problemi comuni relativi alla migrazione di Visual C++ a 64 bit | Microsoft Docs"
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
  - "porting di codice a 32 bit [C++]"
  - "applicazioni a 64 bit [C++]"
  - "compilatore a 64 bit [C++], migrazione"
  - "compilatore a 64 bit [C++], porting di codice a 32 bit"
  - "programmazione a 64 bit [C++], migrazione"
  - "migrazione [C++], problemi di codice a 64 bit"
  - "porting di codice a 32 bit a codice a 64 bit"
  - "Visual C++ (aggiornamento di applicazioni), codice a 32 bit"
  - "Win64 [C++]"
ms.assetid: d17fb838-7513-4e2d-8b27-a1666f17ad76
caps.latest.revision: 19
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Problemi comuni relativi alla migrazione di Visual C++ a 64 bit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si usa Visual C\+\+ per creare applicazioni da eseguire su un sistema operativo Windows a 64 bit, è opportuno tenere presente quanto segue:  
  
-   Nei sistemi operativi Windows a 64 bit gli oggetti `int` e `long` sono valori a 32 bit.   Per i programmi che si prevede di compilare per le piattaforme a 64 bit, assicurarsi di non assegnare puntatori alle variabili a 32 bit.  Nelle piattaforme a 64 bit i puntatori sono valori a 64 bit e, se vengono assegnati a una variabile a 32 bit, il valore del puntatore verrà troncato.  
  
-   Nei sistemi operativi Windows a 64 bit gli oggetti `size_t`, `time_t` e  `ptrdiff_t` sono valori a 64 bit.  
  
-   Nei sistemi operativi Windows a 32 bit, `time_t` è un valore a 32 bit nelle versioni di Visual C\+\+ antecedenti a Visual C\+\+ 2005.  `time_t` è ora un valore Integer a 64 bit per impostazione predefinita.  Per altre informazioni, vedere [Gestione della durata](../c-runtime-library/time-management.md).  
  
     È consigliabile controllare attentamente le parti di codice in cui un valore `int` viene elaborato come valore `size_t` o `time_t`.  È possibile che il numero diventi maggiore di un numero a 32 bit e che i dati vengano troncati quando il numero viene riassegnato alla variabile `int`.  
  
 Il modificatore `int` \(formato esadecimale di `printf`\) non funzionerà nel modo previsto nei sistemi operativi Windows a 64 bit.  Infatti, avrà effetto solo sui primi 32 bit del valore passato.  
  
-   Usare %I32x per visualizzare un tipo integrale a 32 bit in formato esadecimale.  
  
-   Usare %I64x per visualizzare un tipo integrale a 64 bit in formato esadecimale.  
  
-   Il modificatore %p \(formato esadecimale di un puntatore\) funziona nel modo previsto nei sistemi operativi Windows a 64 bit.  
  
 Per altre informazioni, vedere:  
  
-   [Opzioni del compilatore](../build/reference/compiler-options.md)  
  
-   [\<caps:sentence id\="tgt18" sentenceid\="8228b16e9fef41dbba1af1d78bf0cc87" class\="tgtSentence"\>Suggerimenti sulla migrazione\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/aa384214)  
  
## Vedere anche  
 [Configurazione di programmi per processori a 64 bit](../build/configuring-programs-for-64-bit-visual-cpp.md)   
 [Porting di programmi](http://msdn.microsoft.com/it-it/c36c44b3-5a9b-4bb4-9b7a-469aa770ed00)