---
title: "Compiler Error C2920 | Microsoft Docs"
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
  - "C2920"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2920"
ms.assetid: 0a4cb2de-00a0-4209-8160-c7ce6ed7d9ab
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2920
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ridefinizione: 'class': modello di classe o generico già dichiarato come 'type'  
  
 Un generico o un modello di classe dispone di più dichiarazioni, che non sono equivalenti.  Per correggere l'errore, usare un nome diverso per ogni tipo o rimuovere la ridefinizione del nome del tipo.  
  
 L'esempio seguente genera l'errore C2920 e mostra come risolverlo:  
  
```  
// C2920.cpp  
// compile with: /c  
typedef int TC1;  
template <class T>   
struct TC1 {};   // C2920  
struct TC2 {};   // OK - fix by using a different name  
```  
  
 C2920 può verificarsi anche quando si usano i generics:  
  
```  
// C2920b.cpp  
// compile with: /clr /c  
typedef int GC1;  
generic <class T>   
ref struct GC1 {};   // C2920  
ref struct GC2 {};   // OK - fix by using a different name  
  
```