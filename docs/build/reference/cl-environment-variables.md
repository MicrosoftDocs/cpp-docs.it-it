---
title: "Variabili di ambiente CL | Microsoft Docs"
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
  - "cl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe, variabili di ambiente"
  - "variabili di ambiente, compilatore CL"
  - "INCLUDE (variabile di ambiente)"
  - "LIBPATH (variabile di ambiente)"
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Variabili di ambiente CL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Lo strumento CL usa le seguenti variabili di ambiente:  
  
-   CL e \_CL\_, se definite.  Lo strumento CL antepone le opzioni e gli argomenti definiti nella variabile di ambiente CL agli argomenti della riga di comando e accoda le opzioni e gli argomenti definiti in \_CL\_, prima di elaborarli.  
  
-   INCLUDE, che deve puntare alla sottodirectory \\include dell'installazione di Visual C\+\+.  
  
-   LIBPATH, che specifica le directory in cui cercare i file di metadati a cui si fa riferimento con [\#using](../../preprocessor/hash-using-directive-cpp.md).  Per altre informazioni su LIBPATH, vedere `#using`.  
  
 È possibile impostare la variabile di ambiente CL o \_CL\_ usando la sintassi seguente:  
  
```  
SET CL=[ [option] ... [file] ...] [/link link-opt ...]  
SET _CL_=[ [option] ... [file] ...] [/link link-opt ...]  
```  
  
 Per informazioni dettagliate sugli argomenti per le variabili di ambiente CL e \_CL\_, vedere [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).  
  
 È possibile usare queste variabili di ambiente per definire i file e le opzioni usate più spesso e usare la riga di comando per definire specifici file e opzioni per scopi specifici.  Le variabili di ambiente CL e \_CL\_ sono limitate a 1024 caratteri \(il limite di input della riga di comando\).  
  
 Non è possibile usare l'opzione \/D per definire un simbolo che usa un segno di uguale \(\=\).  È possibile sostituire il cancelletto \(\#\) con un segno di uguale.  In questo modo, è possibile usare le variabili di ambiente CL o \_CL\_ per definire le costanti del preprocessore con valori espliciti, ad esempio `/DDEBUG#1` per definire `DEBUG=1`.  
  
 Per informazioni correlate, vedere [Impostare le variabili di ambiente](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
## Esempi  
 Di seguito è riportato un esempio di impostazione della variabile di ambiente CL:  
  
```  
SET CL=/Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ  
```  
  
 Quando questa variabile di ambiente è impostata, se si immette `CL INPUT.C` nella riga di comando, questo è il comando effettivo:  
  
```  
CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ INPUT.C  
```  
  
 Nell'esempio seguente un normale comando CL compila i file di origine FILE1.c e FILE2.c e quindi collega i file oggetto FILE1.obj, FILE2.obj e FILE3.obj:  
  
```  
SET CL=FILE1.C FILE2.C  
SET _CL_=FILE3.OBJ  
CL  
  
```  
  
 Ha lo stesso effetto della riga di comando seguente:  
  
```  
CL FILE1.C FILE2.C FILE3.OBJ  
```  
  
## Vedere anche  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)