---
title: "Identificatore final | Microsoft Docs"
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
  - "final"
  - "final_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Identificatore final"
ms.assetid: 649866d0-79d4-449f-ab74-f84b911b79a3
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identificatore final
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la parola chiave `final` per designare le funzioni virtuali che non possono essere sottoposte a override in una classe derivata.  È inoltre possibile utilizzare tale parola chiave per definire classi che non possono essere ereditate.  
  
## Sintassi  
  
```  
  
function-declaration final;  
```  
  
```  
  
class class-name final base-classes  
```  
  
## Note  
 La parola chiave `final` è sensibile al contesto e ha un significato speciale solo quando viene utilizzata dopo una dichiarazione di funzione o un nome di classe; in caso contrario, non è una parola chiave riservata.  
  
 Quando si utilizza `final` nelle dichiarazioni di classe, `base-classes` è una parte della dichiarazione facoltativa.  
  
## Esempio  
 Nell'esempio seguente viene utilizzata la parola chiave `final` per specificare che una funzione virtuale non può essere sottoposta a override.  
  
```cpp  
class BaseClass  
{  
    virtual void func() final;  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void func(); // compiler error: attempting to   
                         // override a final function  
};  
```  
  
 Per informazioni su come specificare che le funzioni membro non possono essere sottoposte a override, vedere [Identificatore override](../cpp/override-specifier.md).  
  
 Nell'esempio successivo viene utilizzata la parola chiave `final` per specificare che una classe non può essere ereditata.  
  
```cpp  
class BaseClass final   
{  
};  
  
class DerivedClass: public BaseClass // compiler error: BaseClass is   
                                     // marked as non-inheritable  
{  
};  
```  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [\(NOTINBUILD\) C\+\+ Type Names](http://msdn.microsoft.com/it-it/b53ba470-e583-4e5c-b634-6018f6110674)   
 [Identificatore override](../cpp/override-specifier.md)