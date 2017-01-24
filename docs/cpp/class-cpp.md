---
title: "class (C++) | Microsoft Docs"
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
  - "class_cpp"
  - "class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "class (parola chiave) [C++]"
  - "tipi di classi, istruzioni class"
ms.assetid: dd23c09f-6598-4069-8bff-69c7f2518b9f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# class (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `class` dichiara un tipo di classe o definisce un oggetto del tipo di un classe.  
  
## Sintassi  
  
```  
  
      [template-spec]  
       class [ms-decl-spec] [tag [: base-list ]]  
{  
   member-list  
} [declarators];  
[ class ] tag declarators;  
```  
  
#### Parametri  
 `template-spec`  
 Specifiche facoltative del modello.  Per ulteriori informazioni, vedere [Specifiche dei modelli](../Topic/Template%20Specifications.md).  
  
 `class`  
 Parola chiave `class`.  
  
 `ms-decl-spec`  
 Specifica di classe di archiviazione facoltativa.  Per ulteriori informazioni, fare riferimento alla parola chiave [\_\_declspec](../cpp/declspec.md).  
  
 `tag`  
 Il nome del tipo assegnato alla classe.  Il tag diventa una parola riservata nello scope della classe.  Il tag è facoltativo.  Se omesso, viene definita una classe anonima.  Per ulteriori informazioni, vedere [Tipi di classe anonima](../cpp/anonymous-class-types.md).  
  
 `base-list`  
 Elenco facoltativo di classi o strutture da cui questa classe deriverà i relativi membri.  Per ulteriori informazioni, vedere [Classi base](../cpp/base-classes.md).  Ogni classe base o nome di struttura può essere preceduto da un indicatore di accesso \([Public](../cpp/public-cpp.md), [Private](../cpp/private-cpp.md), [Protected](../cpp/protected-cpp.md)\) e dalla parola chiave [virtuale](../cpp/virtual-cpp.md).  Per ulteriori informazioni, vedere la tabella di accesso ai membri in [Controllo accessi ai membri della classe](../misc/controlling-access-to-class-members.md).  
  
 `member-list`  
 Elenco dei membri della classe.  Per ulteriori informazioni, fare riferimento a [Panoramica dei membri di classe](../cpp/class-member-overview.md).  
  
 `declarators`  
 Elenco dei dichiaratori che specifica i nomi di una o più istanze del tipo della classe.  I dichiaratori possono includere gli elenchi degli inizializzatori se tutti i membri dati della classe sono `public`.  È più comune nelle strutture, i cui membri dati sono `public` per impostazione predefinita, nelle classi.  Per ulteriori informazioni, vedere [Cenni preliminari sui dichiaratori](../cpp/overview-of-declarators.md).  
  
## Note  
 Per ulteriori informazioni sulle classi in generale, fare riferimento ad uno dei seguenti argomenti:  
  
-   [struct](../cpp/struct-cpp.md)  
  
-   [union](../cpp/unions.md)  
  
-   [\_\_multiple\_inheritance](../cpp/inheritance-keywords.md)  
  
-   [\_\_single\_inheritance](../cpp/inheritance-keywords.md)  
  
-   [\_\_virtual\_inheritance](../cpp/inheritance-keywords.md)  
  
 Per informazioni sulle classi gestite e le struct, vedere [Classi e Struct](../windows/classes-and-structs-cpp-component-extensions.md).\<  
  
## Esempio  
  
```  
// class.cpp  
// compile with: /EHsc  
// Example of the class keyword  
// Exhibits polymorphism/virtual functions.  
  
#include <iostream>  
#include <string>  
#define TRUE = 1  
using namespace std;  
  
class dog  
{  
public:  
   dog()  
   {  
      _legs = 4;  
      _bark = true;  
   }  
  
   void setDogSize(string dogSize)  
   {  
      _dogSize = dogSize;  
   }  
   virtual void setEars(string type)      // virtual function  
   {  
      _earType = type;  
   }  
  
private:  
   string _dogSize, _earType;  
   int _legs;  
   bool _bark;  
  
};  
  
class breed : public dog  
{  
public:  
   breed( string color, string size)  
   {  
      _color = color;  
      setDogSize(size);  
   }  
  
   string getColor()  
   {  
      return _color;  
   }  
  
   // virtual function redefined  
   void setEars(string length, string type)  
   {  
      _earLength = length;  
      _earType = type;  
   }  
  
protected:  
   string _color, _earLength, _earType;  
};  
  
int main()  
{  
   dog mongrel;  
   breed labrador("yellow", "large");  
   mongrel.setEars("pointy");  
   labrador.setEars("long", "floppy");  
   cout << "Cody is a " << labrador.getColor() << " labrador" << endl;  
}  
```  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Classi e struct](../cpp/classes-and-structs-cpp.md)