---
title: "Errore degli strumenti del linker LNK1309 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1309"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1309"
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore degli strumenti del linker LNK1309
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

rilevato modulo tipo1; non valido con l'opzione \/CLRIMAGETYPE:tipo2  
  
 È stato richiesto un tipo di immagine CLR con **\/CLRIMAGETYPE**, ma non è stato possibile produrre un'immagine di tale tipo perché incompatibile con uno o più moduli.  
  
 L'errore LNK1309 viene ad esempio visualizzato se si specifica **\/CLRIMAGETYPE:safe** e si passa un modulo compilato con **\/clr:pure**.  
  
 L'errore LNK1309 viene inoltre visualizzato quando si tenta di compilare un'applicazione CLR pure parzialmente attendibile mediante ptrustu\[d\].lib.  Per informazioni su come creare un'applicazione parzialmente attendibile, vedere [Procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT](../../dotnet/create-a-partially-trusted-application.md).  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) e [\/CLRIMAGETYPE \(Specifica il tipo di immagine CLR\)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).