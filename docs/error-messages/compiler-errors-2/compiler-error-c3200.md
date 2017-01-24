---
title: "Errore del compilatore C3200 | Microsoft Docs"
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
  - "C3200"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3200"
ms.assetid: 44bb5e77-f0ec-421c-a732-b9ee7c0a3529
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3200
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'modello': argomento di template non valido per il parametro di template 'parametro'. Previsto un template di classe  
  
 È stato passato un argomento non valido a un template di classe.  Il parametro previsto è template.  Nell'esempio riportato di seguito la chiamata a `Y<int, int> aY` genera l'errore C3200.  Il primo parametro deve essere un modello, ad esempio `Y<X, int> aY`.  
  
```  
// C3200.cpp  
template<typename T>  
class X  
{  
};  
  
template<template<typename U> class T1, typename T2>  
class Y  
{  
};  
  
int main()  
{  
   Y<int, int> y;   // C3200  
}  
```