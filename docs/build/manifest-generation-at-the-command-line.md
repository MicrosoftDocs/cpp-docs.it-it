---
title: "Generazione di manifesti dalla riga di comando | Microsoft Docs"
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
  - "strumento di manifesto (mt.exe)"
  - "manifesti [C++]"
ms.assetid: fc2ff255-82b1-4c44-af76-8405c5850292
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Generazione di manifesti dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si compilano applicazioni C\/C\+\+ dalla riga di comando utilizzando nmake o strumenti simili, il manifesto verrà generato dopo che il linker avrà elaborato tutti i file oggetto e avrà compilato il file binario finale.  Il linker raccoglie le informazioni sull'assembly archiviate nei file oggetto e combina tali informazioni in un file manifesto finale.  Per impostazione predefinita il linker genererà un file denominato \<nome\_binario\>.\<estensione\>.manifest per descrivere il file binario finale.  Il linker non incorpora un file manifesto all'interno del file binario e può generare un manifesto esclusivamente come file esterno.  Esistono diverse modalità per incorporare un manifesto all'interno del file binario finale, ad esempio l'utilizzo dello [strumento Manifesto \(mt.exe\)](http://msdn.microsoft.com/library/aa375649) o la compilazione del manifesto in un file di risorse.  È importante ricordare che è necessario seguire regole specifiche quando si incorpora un manifesto all'interno del file binario finale per attivare funzionalità quali collegamento incrementale, firma e Modifica e continuazione.  Queste e altre opzioni vengono illustrate in [Procedura: incorporare un manifesto in un'applicazione C\/C\+\+](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md) durante la compilazione sulla riga di comando.  
  
## Vedere anche  
 [Manifesti](http://msdn.microsoft.com/library/aa375365)   
 [\/INCREMENTAL \(collegamento incrementale\)](../build/reference/incremental-link-incrementally.md)   
 [Assembly con nome sicuro \(firma degli assembly\)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md)   
 [Modifica e continuazione](../Topic/Edit%20and%20Continue.md)   
 [Informazioni sulla generazione di manifesti per programmi C\/C\+\+](../build/understanding-manifest-generation-for-c-cpp-programs.md)