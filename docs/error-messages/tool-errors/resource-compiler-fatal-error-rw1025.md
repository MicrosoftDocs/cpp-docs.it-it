---
title: "Errore irreversibile del compilatore di risorse RW1025 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW1025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW1025"
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile del compilatore di risorse RW1025
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Memoria insufficiente nello heap far.  
  
 Accertarsi che il software residente in memoria non occupi uno spazio eccessivo.  Utilizzare il programma CHKDSK per verificare la quantità di memoria disponibile.  
  
 Nel caso si stia creando un file di risorsa molto grande, suddividere lo script di risorsa in due file.  Una volta creati i due file RES, riunirli utilizzando la riga di comando MS\-DOS:  
  
```  
copy first.res /b + second.res /b full.res  
```