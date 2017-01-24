---
title: "Identificatore override | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Identificatore override"
ms.assetid: b286fb46-9374-4ad8-b2e7-4607119b6133
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Identificatore override
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare la parola chiave `override` per definire le funzioni membro che eseguono l'override di una funzione virtuale in una classe di base.  
  
## Sintassi  
  
```  
  
function-declaration override;  
```  
  
## Note  
 `override` è sensibile al contesto e ha un significato speciale solo quando utilizzato dopo una dichiarazione di funzione membro; in caso contrario, non è una parola chiave riservata.  
  
## Esempio  
 Utilizzare `override` per evitare comportamenti di ereditarietà accidentali nel codice.  Nell'esempio seguente viene illustrato dove, senza utilizzare `override`, il comportamento della funzione membro della classe derivata potrebbe non essere stato previsto.  Il compilatore non genera alcun errore per questo codice.  
  
```cpp  
class BaseClass  
{  
    virtual void funcA();  
    virtual void funcB() const;  
    virtual void funcC(int = 0);  
    void funcD();  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void funcA(); // ok, works as intended  
  
    virtual void funcB(); // DerivedClass::funcB() is non-const, so it does not  
                          // override BaseClass::funcB() const and it is a new member function  
  
    virtual void funcC(double = 0.0); // DerivedClass::funcC(double) has a different  
                                      // parameter type than BaseClass::funcC(int), so  
                                      // DerivedClass::funcC(double) is a new member function  
  
};  
  
```  
  
 Quando si utilizza `override`, il compilatore genera errori invece di creare nuove funzioni membro automaticamente.  
  
```cpp  
class BaseClass  
{  
    virtual void funcA();  
    virtual void funcB() const;  
    virtual void funcC(int = 0);  
    void funcD();  
};  
  
class DerivedClass: public BaseClass  
{  
    virtual void funcA() override; // ok  
  
    virtual void funcB() override; // compiler error: DerivedClass::funcB() does not   
                                   // override BaseClass::funcB() const  
  
    virtual void funcC( double = 0.0 ) override; // compiler error:   
                                                 // DerivedClass::funcC(double) does not   
                                                 // override BaseClass::funcC(int)  
  
    void funcD() override; // compiler error: DerivedClass::funcD() does not   
                           // override the non-virtual BaseClass::funcD()  
};  
  
```  
  
 Per specificare che le funzioni non possono essere sottoposte a override e che le classi non possono essere ereditate, utilizzare la parola chiave [final](../cpp/final-specifier.md).  
  
## Vedere anche  
 [Identificatore final](../cpp/final-specifier.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [\(NOTINBUILD\) C\+\+ Type Names](http://msdn.microsoft.com/it-it/b53ba470-e583-4e5c-b634-6018f6110674)