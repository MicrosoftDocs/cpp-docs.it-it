---
title: "Creazione di file di intestazione precompilati | Microsoft Docs"
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
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file), creazione"
  - "compilatore cl.exe, precompilazione di codice"
  - "PCH (file), creazione"
  - "file di intestazione precompilata, creazione"
ms.assetid: e2cdb404-a517-4189-9771-c869c660cb1b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Creazione di file di intestazione precompilati
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I compilatori di Microsoft C e C\+\+ offrono opzioni per la precompilazione del codice C o C\+\+, incluso il codice inline.  Grazie a questa caratteristica, estremamente vantaggiosa in termini di prestazioni, è possibile compilare un corpo di codice stabile, memorizzare lo stato compilato del codice in un file e, durante le successive compilazioni, unire il codice precompilato al codice in corso di sviluppo.  Ciascuna successiva compilazione sarà più rapida perché il codice stabile non dovrà essere ricompilato.  
  
 In questa sezione vengono illustrati i seguenti argomenti relativi alle intestazioni precompilate:  
  
-   [Condizioni per la precompilazione del codice sorgente](../../build/reference/when-to-precompile-source-code.md)  
  
-   [Precompilazione del codice automatica e manuale](../../build/reference/two-choices-for-precompiling-code.md)  
  
-   [Regole di uniformità per le intestazioni precompilate](../../build/reference/precompiled-header-consistency-rules.md)  
  
-   [Utilizzo di intestazioni precompilate in un progetto](../../build/reference/using-precompiled-headers-in-a-project.md)  
  
 Per informazioni sulle opzioni di compilazione correlate alle intestazioni precompilate, vedere [\/Y \(Intestazioni precompilate\)](../../build/reference/y-precompiled-headers.md).  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)