---
title: "File di input LIB | Microsoft Docs"
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
  - "Lib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di input, LIB"
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File di input LIB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I file di input previsti da LIB dipendono dalla modalità di utilizzo di LIB, come illustrato nella tabella che segue.  
  
|Modalità|Input|  
|--------------|-----------|  
|Predefinita \(compilazione o modifica di una libreria\)|File oggetto COFF \(obj\), librerie COFF \(lib\), file oggetto \(obj\) OMF \(Object Model Format\) a 32 bit|  
|Estrazione di un membro con l'opzione \/EXTRACT|Libreria COFF \(lib\)|  
|Compilazione di un file di esportazione e di una libreria di importazione con l'opzione \/DEF|File di definizione moduli \(def\), file oggetto COFF \(obj\), librerie COFF \(lib\), file oggetto \(obj\) OMF a 32 bit|  
  
> [!NOTE]
>  Non è possibile utilizzare come input per la versione di LIB a 32 bit le librerie OMF create con la versione a 16 bit.  
  
## Vedere anche  
 [Cenni preliminari su LIB](../../build/reference/overview-of-lib.md)