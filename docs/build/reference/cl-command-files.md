---
title: "File di comando di CL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "compilatore cl.exe, file di comando"
  - "file di comando"
  - "file di comando, compilatore CL"
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# File di comando di CL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un file di comando è un file di testo contenente opzioni e nomi di file che altrimenti andrebbero digitati nella [riga di comando](../../build/reference/compiler-command-line-syntax.md) o specificati utilizzando la [variabile di ambiente CL](../../build/reference/cl-environment-variables.md).  CL accetta un file di comando del compilatore come un argomento nella variabile di ambiente CL o nella riga di comando.  A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi di file.  
  
 Le opzioni e i nomi di file in un file di comando vengono elaborati in base alla posizione di un nome file di comando all'interno della variabile di ambiente CL o nella riga di comando.  Se tuttavia l'opzione \/link appare nella riga di comando, tutte le opzioni sul resto della riga vengono passate al linker.  Le opzioni nelle righe successive nel file di comando e le opzioni nella riga di comando dopo il richiamo del file di comando sono comunque accettate come opzioni del compilatore.  Per ulteriori informazioni su come l'ordine delle opzioni influisce sulla loro interpretazione, vedere [Ordine delle opzioni CL](../../build/reference/order-of-cl-options.md).  
  
 Un file di comando non può contenere il comando CL.  Ogni opzione deve iniziare e finire sulla stessa riga. Non è possibile utilizzare la barra rovesciata \(\\\) per combinare un'opzione su due righe.  
  
 Un file di comando viene specificato da un simbolo di chiocciola \(@\) seguito da un nome di file. Quest'ultimo può specificare un percorso assoluto o relativo.  
  
 Ad esempio, se il comando che segue si trova in un file denominato RESP:  
  
```  
/Og /link LIBC.LIB  
```  
  
 e si specifica il seguente comando CL:  
  
```  
CL /Ob2 @RESP MYAPP.C  
```  
  
 il comando per CL sarà il seguente:  
  
```  
CL /Ob2 /Og MYAPP.C /link LIBC.LIB  
```  
  
 La riga di comando e i comandi del file di comando sono efficacemente combinati.  
  
## Vedere anche  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)