---
title: "File obj come input del linker | Microsoft Docs"
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
  - "file OBJ come input del linker"
  - "COFF (file)"
  - "LINK (strumento) [C++], OBJ (file)"
  - "linker [C++], file OBJ come input"
  - "OBJ (file come input del linker)"
  - "file oggetto, output del linker"
  - "OMF (file di oggetti)"
ms.assetid: 3028e423-8b10-4972-8eb4-6e9ae58f0a26
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File obj come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Lo strumento Linker \(LINK.EXE\) accetta file con estensione obj in formato Common Object File Format \(COFF\).  
  
## Note  
 Microsoft offre un documento scaricabile in cui viene definito il formato COFF.  Per ulteriori informazioni, scaricare la revisione 8.1 o successiva di [Microsoft Portable Executable and Common Object File Format Specification](http://go.microsoft.com/fwlink/?LinkId=93292).  
  
## Supporto per Unicode  
 A partire da Visual Studio 2005, il compilatore Microsoft Visual C\+\+ supporta caratteri Unicode negli identificatori in base a quanto definito dagli standard ISO\/IEC C e C\+\+.  Le versioni precedenti del compilatore supportano solo caratteri ASCII negli identificatori.  Per supportare Unicode nei nomi di funzioni, classi e oggetti statici, il compilatore e il linker utilizzano la codifica UTF\-8 Unicode per i simboli COFF nei file con estensione obj.  La codifica UTF\-8 è compatibile anche con le versioni successive della codifica ASCII utilizzata nelle versioni precedenti di Visual Studio.  
  
 Per ulteriori informazioni sul compilatore e il linker, vedere [Supporto Unicode nel compilatore e nel linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md).  Per ulteriori informazioni sullo standard Unicode, vedere l'organizzazione [Unicode](http://go.microsoft.com/fwlink/?LinkId=37123).  
  
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Supporto per Unicode](../../text/support-for-unicode.md)   
 [Supporto Unicode nel compilatore e nel linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md)   
 [Standard Unicode](http://go.microsoft.com/fwlink/?LinkId=37123)   
 [Specifica Common Object File Format](http://go.microsoft.com/fwlink/?LinkId=93292)