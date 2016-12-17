---
title: "Segni di punteggiatura C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - ";"
  - ","
  - "{"
  - "}"
  - "("
  - ")"
  - "["
  - "]"
  - "!"
  - "%"
  - "^"
  - "*"
  - """
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "segni di punteggiatura"
ms.assetid: 1521564c-a977-488a-9490-068079897592
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Segni di punteggiatura C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In C\+\+ i segni di punteggiatura hanno un significato semantico e sintattico per il compilatore, ma non specificano alcuna operazione che restituisce un valore.  Alcuni segni di punteggiatura, singolarmente o in combinazione, possono anche essere operatori C\+\+ o essere significativi per il preprocessore.  
  
 Ciascuno dei caratteri seguenti viene considerato un segno di punteggiatura:  
  
```  
! % ^ & * ( ) – + = { } | ~  
[ ] \ ; ' : " < > ? , . / #  
```  
  
 I segni di punteggiatura **\[ \]**, **\( \)** e **{ }** devono essere presenti in coppia dopo la [fase di conversione](../preprocessor/phases-of-translation.md) 4.  
  
## Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)