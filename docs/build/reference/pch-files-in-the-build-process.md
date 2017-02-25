---
title: "File PCH nel processo di compilazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - ".pch (file), processo di compilazione"
  - "makefile, file PCH nel processo di compilazione"
  - "PCH (file), processo di compilazione"
ms.assetid: ebb4b368-8a11-4009-b347-01e79af02fbc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# File PCH nel processo di compilazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La codebase di un progetto software è in genere contenuta in più file di origine, file oggetto, librerie e file di intestazione in linguaggio C o C\+\+.  In genere i makefile coordinano la combinazione di questi elementi in un file eseguibile.  Nella figura che segue viene illustrata la struttura di un makefile che utilizza un file di intestazione precompilato.  I nomi delle macro NMAKE e i nomi di file indicati in questo diagramma corrispondono a quelli presenti nel codice di esempio riportato in [Makefile di esempio per PCH](../../build/reference/sample-makefile-for-pch.md) e [Codice di esempio per PCH](../../build/reference/example-code-for-pch.md).  
  
 Nella figura vengono utilizzati tre motivi grafici per mostrare il flusso del processo di compilazione.  I rettangoli con nome rappresentano file o macro; le tre macro rappresentano uno o più file.  Le aree ombreggiate rappresentano operazioni di compilazione o collegamento.  Le frecce indicano i file e le macro combinati durante il processo di compilazione o collegamento.  
  
 ![Makefile che usa un file di intestazione precompilato](../../build/reference/media/vc30ow1.png "vc30OW1")  
Struttura di un makefile che utilizza un file di intestazione precompilato  
  
 Iniziando dalla parte superiore del diagramma, sia STABLEHDRS che BOUNDRY sono macro NMAKE nelle quali sono elencati i file per cui la compilazione può non essere necessaria.  Questi file sono compilati mediante la stringa di comando  
  
```  
CL /c /W3 /Yc$(BOUNDRY) applib.cpp myapp.cpp  
```  
  
 solo se il file di intestazione precompilato \(STABLE.pch\) non esiste o se si apportano modifiche ai file elencati nelle due macro.  In entrambi i casi il file di intestazione precompilato conterrà codice derivato solo dai file elencati nella macro STABLEHDRS.  Elencare l'ultimo file da precompilare nella macro BOUNDRY.  
  
 I file elencati in queste macro possono essere file di intestazione o file di origine in linguaggio C o C\+\+ \(non è possibile utilizzare un unico file PCH con moduli C e C\+\+\). È possibile utilizzare la macro **hdrstop** per interrompere la precompilazione all'interno del file BOUNDRY.  Per ulteriori informazioni, vedere [hdrstop](../../preprocessor/hdrstop.md).  
  
 Procedendo verso il basso nell'esame del diagramma, APPLIB.obj rappresenta il codice di supporto utilizzato nell'applicazione finale.  Viene creato sulla base di APPLIB.cpp, dei file elencati nella macro UNSTABLEHDRS e del codice precompilato proveniente dall'intestazione precompilata.  
  
 MYAPP.obj rappresenta l'applicazione finale.  Viene creato sulla base di MYAPP.cpp, dei file elencati nella macro UNSTABLEHDRS e del codice precompilato proveniente dall'intestazione precompilata.  
  
 Infine, il file eseguibile \(MYAPP.EXE\) viene creato collegando i file elencati nella macro OBJS \(APPLIB.obj e MYAPP.obj\).  
  
 Per una spiegazione più dettagliata della figura, vedere:  
  
-   [Makefile di esempio per PCH](../../build/reference/sample-makefile-for-pch.md)  
  
-   [Codice di esempio per PCH](../../build/reference/example-code-for-pch.md)  
  
## Vedere anche  
 [Utilizzo di intestazioni precompilate in un progetto](../../build/reference/using-precompiled-headers-in-a-project.md)