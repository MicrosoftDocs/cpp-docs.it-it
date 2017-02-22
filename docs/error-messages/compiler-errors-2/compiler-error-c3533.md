---
title: "Errore del compilatore C3533 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3533"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3533"
ms.assetid: a68b1ba5-466e-4190-a1a4-505ccfe548b7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3533
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': un parametro non può disporre di un tipo che contiene 'auto'  
  
 Un parametro di metodo o di modello non può essere dichiarato con la parola chiave `auto` se l'opzione del compilatore predefinita [\/Zc:auto](../../build/reference/zc-auto-deduce-variable-type.md) è attiva.  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave `auto` dalla dichiarazione del parametro.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché viene dichiarato un parametro di funzione con la parola chiave `auto` e ne viene eseguita la compilazione con **\/Zc:auto**.  
  
```  
// C3533a.cpp  
// Compile with /Zc:auto  
void f(auto j){} // C3533  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché viene dichiarato un parametro di modello con la parola chiave `auto` e ne viene eseguita la compilazione con **\/Zc:auto**.  
  
```  
// C3533b.cpp  
// Compile with /Zc:auto  
template<auto T> class C{}; // C3533  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)   
 [\/Zc:auto \(deduzione del tipo di variabile\)](../../build/reference/zc-auto-deduce-variable-type.md)