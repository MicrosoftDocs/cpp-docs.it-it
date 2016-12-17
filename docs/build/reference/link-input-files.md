---
title: "File di input LINK | Microsoft Docs"
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
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "input ai file del linker [C++]"
  - "file [C++], LINK"
  - "librerie di importazione [C++], file del linker"
  - "file di input [C++], LINK"
  - "LINK (strumento) [C++], file di input"
  - "linker [C++], file di input"
  - "file di definizione moduli"
  - "file di definizione moduli, file del linker"
  - "risorse [C++], file del linker"
ms.assetid: bb26fcc5-509a-4620-bc3e-b6c6e603a412
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File di input LINK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Al linker vengono forniti file che contengono oggetti, librerie di importazione e standard, risorse, definizioni di moduli e input dei comandi.  In LINK il contenuto dei file non viene ipotizzato sulla base dell'estensione del nome file.  Al contrario, il tipo di un file di input viene determinato tramite un esame del file stesso.  
  
 I file oggetto nella riga di comando vengono elaborati nell'ordine in cui sono visualizzati nella riga di comando.  Anche le ricerche nelle librerie vengono eseguite nell'ordine in cui le librerie sono riportate nella riga di comando, in base al seguente criterio: i simboli che risultano non risolti quando un file oggetto viene estratto da una libreria vengono cercati prima in tale libreria, quindi nelle librerie successive nella riga di comando e nelle direttive [\/DEFAULTLIB \(Specifica la libreria predefinita\)](../../build/reference/defaultlib-specify-default-library.md), infine in tutte le librerie all'inizio della riga di comando.  
  
> [!NOTE]
>  LINK non accetta più il punto e virgola né altri caratteri come inizio di un commento in file di risposta e file di ordinamento.  I punti e virgola sono riconosciuti solo come inizio dei commenti nei file di definizione moduli \(def\).  
  
 In LINK vengono utilizzati i seguenti tipi di file di input:  
  
-   [file obj](../../build/reference/dot-obj-files-as-linker-input.md)  
  
-   [file con estensione netmodule](../../build/reference/netmodule-files-as-linker-input.md)  
  
-   [file lib](../../build/reference/dot-lib-files-as-linker-input.md)  
  
-   [file exp](../../build/reference/dot-exp-files-as-linker-input.md)  
  
-   [File def](../../build/reference/dot-def-files-as-linker-input.md)  
  
-   [file pdb](../../build/reference/dot-pdb-files-as-linker-input.md)  
  
-   [file res](../../build/reference/dot-res-files-as-linker-input.md)  
  
-   [file exe](../../build/reference/dot-exe-files-as-linker-input.md)  
  
-   [file txt](../../build/reference/dot-txt-files-as-linker-input.md)  
  
-   [file ilk](../../build/reference/dot-ilk-files-as-linker-input.md)  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)