---
title: "Avviso del compilatore (livello 3) C4357 | Microsoft Docs"
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
  - "C4357"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4357"
ms.assetid: 9259c633-3c02-4900-b94a-2d8d366d61cd
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4357
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'argomento della matrice di parametri trovato nell'elenco di argomenti formali per il delegato 'del' è stato ignorato durante la generazione di 'funzione'  
  
 L'attributo `ParamArray` è stato ignorato e `function`non può essere chiamato con argomenti di variabile.  
  
 Il seguente codice di esempio genera l'errore C4357:  
  
```  
// C4357.cpp  
// compile with: /clr /W3 /c  
using namespace System;  
public delegate void f(int i, ... array<Object^>^ varargs);   // C4357  
  
public delegate void g(int i, array<Object^>^ varargs);   // OK  
```