---
title: "Errore del compilatore C2393 | Microsoft Docs"
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
  - "C2393"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2393"
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2393
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': impossibile allocare il simbolo per dominio di applicazione nel segmento 'segmento'  
  
 L'utilizzo di variabili [appdomain](../../cpp/appdomain.md) presuppone che la compilazione venga eseguita con **\/clr:pure** o **\/clr:safe**, ma in un'immagine di tipo pure o safe non possono essere inclusi segmenti di dati.  
  
 Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2393:  
  
```  
// C2393.cpp  
// compile with: /clr:pure /c  
#pragma data_seg("myseg")  
int n = 0;   // C2393  
```