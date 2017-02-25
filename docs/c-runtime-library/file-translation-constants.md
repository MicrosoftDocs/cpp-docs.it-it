---
title: "Costanti di conversione di file | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.constants.file"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "costanti [C++], modalità di conversione di file"
  - "conversione di file [C++]"
  - "conversione di file [C++], costanti"
  - "costanti di conversione"
  - "conversione, costanti"
  - "conversione, costanti di conversione di file"
ms.assetid: 49b13bf3-442e-4d19-878b-bd1029fa666a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Costanti di conversione di file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <stdio.h>  
```  
  
## Note  
 Queste costanti specificano la modalità di conversione \(**"b"** o **"t"**\).  La modalità è inclusa nella stringa che specifica il tipo di accesso \(**"r"**, **"w"**, **"a"**, **"r\+"**, **"w\+"**, **"a\+"**\).  
  
 Le modalità di conversione sono le seguenti:  
  
 **t**  
 Apre in modalità testo \(convertita\).  In questa modalità, le combinazioni ritorno a capo\/avanzamento di riga \(CR\-LF\) vengono convertite in singoli avanzamenti riga \(LF\) al momento dell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo\-avanzamento di riga \(CR\-LF\) al momento dell'output.  Inoltre, CTRL\+Z viene interpretato nell'input come carattere di fine file.  Nei file aperti per la lettura o lettura\/scrittura, `fopen` verifica la presenza della combinazione CTRL\+Z alla fine del file e la rimuove, se possibile.  Questa operazione viene eseguita perché l'utilizzo delle funzioni `fseek` e `ftell` per spostarsi all'interno di un file che termina con CTRL\+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.  
  
> [!NOTE]
>  L'opzione **t** non fa parte dello standard ANSI per `fopen` e `freopen`.  È un'estensione Microsoft e non deve essere utilizzato dove si desidera la portabilità ANSI.  
  
 **b**  
 Apre in modalità binaria \(non tradotta\).  Le conversioni in precedenza vengono eliminate.  
  
 Se **t** o **b** non è specificato in *modalità*, la modalità di traduzione predefinita è definita dalla variabile globale [\_fmode](../c-runtime-library/fmode.md), .  Per ulteriori informazioni sull'utilizzo delle modalità di testo e binaria, vedere [I\/O dei File in modalità di Testo o Binaria](../c-runtime-library/text-and-binary-mode-file-i-o.md).  
  
## Vedere anche  
 [\_fdopen, \_wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fopen, \_wfopen](../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, \_wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)   
 [\_fsopen, \_wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)