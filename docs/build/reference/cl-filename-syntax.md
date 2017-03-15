---
title: "Sintassi nome file di CL | Microsoft Docs"
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
  - "compilatore cl.exe, sintassi nome file"
  - "estensioni, specifica per il compilatore"
  - "nomi file [C++]"
  - "nomi file [C++], compilatore CL"
  - "percorsi, sintassi nome file del compilatore CL"
  - "sintassi, nome file del compilatore"
ms.assetid: 3ca72586-75be-4477-b323-a1be232e80d4
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Sintassi nome file di CL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

CL accetta file con nomi che seguono le convenzioni di denominazione FAT, HPFS o NTFS.  Tutti i nomi file possono includere un percorso completo o parziale.  Un percorso completo include un nome di unità e uno o più nomi di directory.  CL accetta nomi di file separati da barre rovesciate \(\\\) o da barre \(\/\).  I nomi file che contengono spazi devono essere racchiusi tra virgolette doppie.  Un percorso parziale omette il nome dell'unità, che CL considera essere l'unità corrente.  Se non si specifica un percorso, il file verrà considerato come presente nella directory attuale.  
  
 L'estensione del nome file determina il modo in cui i file vengono elaborati.  I file C e C\+\+, che hanno l'estensione c, cxx o cpp, vengono compilati.  Altri file, inclusi i file obj, di libreria \(lib\) e di definizione moduli \(def\) vengono passati al linker senza essere elaborati.  
  
## Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)