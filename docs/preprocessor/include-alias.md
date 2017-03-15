---
title: "include_alias | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.include_alias"
  - "include_alias_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "include_alias (pragma)"
  - "pragma, include_alias"
ms.assetid: 3256d589-12b3-4af0-a586-199e96eabacc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# include_alias
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica che è necessario utilizzare *short\_filename* come alias per *short\_filename*.  
  
## Sintassi  
  
```  
  
      #pragma include_alias( "  
      long_filename  
      ", "  
      short_filename  
      " )  
#pragma include_alias( <long_filename>, <short_filename> )  
```  
  
## Note  
 Alcuni file system consentono nomi file di intestazione più lunghi rispetto al limite del file system FAT di 8,3.  Il compilatore non può semplicemente troncare i nomi più lunghi a 8,3, perché i primi otto caratteri dei nomi file di intestazione più lunghi non possono essere univoci.  Ogni volta che il compilatore rileva la stringa *long\_filename*, sostituisce *short\_filename* e cerca invece il file di intestazione *short\_filename*.  Questo pragma deve essere visualizzato prima delle direttive `#include` corrispondenti.  Ad esempio:  
  
```  
// First eight characters of these two files not unique.  
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )  
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )  
  
#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )  
  
#include "AppleSystemHeaderQuickdraw.h"  
#include "AppleSystemHeaderFruit.h"  
#include "GraphicsMenu.h"  
```  
  
 L'alias cercato deve corrispondere esattamente alla specifica, sia per quanto riguarda le maiuscole\/minuscole sia per l'ortografia, sia per l'utilizzo delle virgolette che per le parentesi quadre.  Il pragma **include\_alias** esegue una semplice corrispondenza di stringhe nei nomi dei file; non viene eseguita nessun'altra convalida del nome del file.  Se si considerando, ad esempio, le seguenti direttive,  
  
```  
#pragma include_alias("mymath.h", "math.h")  
#include "./mymath.h"  
#include "sys/mymath.h"  
```  
  
 non viene eseguito nessun alias \(sostituzione\), poiché le stringhe del file di intestazione non corrispondono esattamente.  Inoltre, i nomi del file di intestazione utilizzati come argomenti nelle opzioni del compilatore \/Yu e \/Yc, oppure il pragma **hdrstop**, non vengono sostituiti.  Ad esempio, se il file di origine contiene la seguente direttiva,  
  
```  
#include <AppleSystemHeaderStop.h>  
```  
  
 l'opzione del compilatore corrispondente deve essere  
  
```  
/YcAppleSystemHeaderStop.h  
```  
  
 È possibile utilizzare il pragma **include\_alias** per associare qualsiasi nome del file di intestazione a un altro.  Ad esempio:  
  
```  
#pragma include_alias( "api.h", "c:\version1.0\api.h" )  
#pragma include_alias( <stdio.h>, <newstdio.h> )  
#include "api.h"  
#include <stdio.h>  
```  
  
 Non combinare i nomi file racchiusi tra virgolette doppie con i nomi file racchiusi tra parentesi quadre.  Ad esempio, in base alle due direttive superiori **\#pragma include\_alias**, il compilatore non esegue alcuna sostituzione alle seguenti direttive `#include`:  
  
```  
#include <api.h>  
#include "stdio.h"  
```  
  
 Inoltre, la seguente diretta genera un errore:  
  
```  
#pragma include_alias(<header.h>, "header.h")  // Error  
```  
  
 Si noti che il nome del file indicato nei messaggi di errore o come valore della macro **\_\_FILE\_\_** predefinita, è il nome del file in seguito alla sostituzione.  Ad esempio, in seguito alle seguenti direttive,  
  
```  
#pragma include_alias( "VeryLongFileName.H", "myfile.h" )  
#include "VeryLongFileName.H"  
```  
  
 un errore in VERYLONGFILENAME.H genera il seguente messaggio di errore:  
  
```  
myfile.h(15) : error C2059 : syntax error  
```  
  
 Si noti inoltre che la transitività non è supportata.  Date le seguenti direttive,  
  
```  
#pragma include_alias( "one.h", "two.h" )  
#pragma include_alias( "two.h", "three.h" )  
#include "one.h"  
```  
  
 il compilatore cerca il file TWO.H piuttosto che THREE.H.  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)