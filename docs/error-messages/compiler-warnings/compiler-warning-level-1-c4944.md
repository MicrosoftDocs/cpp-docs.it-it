---
title: "Avviso del compilatore (livello 1) C4944 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4944"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4944"
ms.assetid: e2905eb1-2e3b-4fab-a48b-c0cae0fd997f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4944
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'symbol': non è possibile importare il simbolo da 'assembly1' perché 'symbol' esiste già nell'ambito corrente  
  
 In un file di codice sorgente è definito un simbolo, che è definito anche in un assembly a cui fa riferimento un'istruzione \#using. Il simbolo nell'assembly viene ignorato.  
  
## Esempio  
 L'esempio seguente crea un componente con un tipo denominato ClassA.  
  
```  
// C4944.cs // compile with: /target:library // C# source code to create a dll public class ClassA { public int i; }  
```  
  
## Esempio  
 Gli esempi seguenti generano l'errore C4944.  
  
```  
// C4944b.cpp // compile with: /clr /W1 class ClassA { public: int u; }; #using "C4944.dll"   // C4944 ClassA also defined C4944.dll int main() { ClassA * x = new ClassA(); x->u = 9; System::Console::WriteLine(x->u); }  
```