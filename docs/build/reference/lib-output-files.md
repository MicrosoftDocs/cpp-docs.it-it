---
title: "File di output di LIB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Lib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di output, LIB"
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# File di output di LIB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I file di output generati da LIB dipendono dalla relativa modalità di utilizzo, come illustrato nella tabella che segue.  
  
|Modalità|Output|  
|--------------|------------|  
|Predefinita \(compilazione o modifica di una libreria\)|Libreria COFF \(lib\)|  
|Estrazione di un membro con l'opzione \/EXTRACT|File oggetto \(obj\)|  
|Compilazione di un file di esportazione e di una libreria di importazione con l'opzione \/DEF|Libreria di importazione \(lib\) e file di esportazione \(exp\)|  
  
## Vedere anche  
 [Cenni preliminari su LIB](../../build/reference/overview-of-lib.md)