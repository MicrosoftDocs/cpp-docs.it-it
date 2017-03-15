---
title: "Parola chiave auto | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "auto"
  - "auto_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto (parola chiave)"
  - "classe di archiviazione automatica, auto (parola chiave)"
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Parola chiave auto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `auto` è un identificatore di dichiarazione.  Tuttavia, lo standard C\+\+ definisce per tale parola chiave un significato originale e uno rivisto.  Prima di [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)], la parola chiave `auto` dichiara una variabile nella classe di archiviazione *automatica*, ovvero una variabile di durata locale.  A partire da [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)], la parola chiave `auto` dichiara una variabile il cui tipo viene dedotto dall'espressione di inizializzazione nella relativa dichiarazione.  L'opzione del compilatore [\/Zc:auto&#91;\-&#93;](../build/reference/zc-auto-deduce-variable-type.md) controlla il significato della parola chiave `auto`.  
  
## Sintassi  
  
```cpp  
auto declarator ;  
auto declarator initializer;  
```  
  
## Note  
 Definizione delle modifiche apportate alle parole chiave `auto` nel linguaggio di programmazione C\+\+, ma non nel linguaggio di programmazione C.  
  
 Negli argomenti seguenti viene descritta la parola chiave `auto` e l'opzione del compilatore corrispondente:  
  
-   In [auto](../cpp/auto-cpp.md) viene descritta la nuova definizione della parola chiave `auto`.  
  
-   In [\(NOTINBUILD\)auto Keyword \(Storage\-Class Specifier\)](http://msdn.microsoft.com/it-it/c7d0cecf-393d-4058-a6e6-b39e31d9edb0) viene descritta la definizione della parola chiave `auto`.  
  
-   In[\/Zc:auto \(deduzione del tipo di variabile\)](../build/reference/zc-auto-deduce-variable-type.md) viene descritta l'opzione del compilatore che indica al compilatore la definizione della parola chiave `auto` da utilizzare.  
  
## Vedere anche  
 [\(NOTINBUILD\)Storage\-Class Specifiers](http://msdn.microsoft.com/it-it/10b3d22d-cb40-450b-994b-08cf9a211b6c)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)