---
title: classe (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- class_cpp
dev_langs:
- CPP
helpviewer_keywords:
- class types [C++], class statements
- class keyword [C++]
ms.assetid: dd23c09f-6598-4069-8bff-69c7f2518b9f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ed344d5c15e709b09b760dee74a986dde6383d22
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="class-c"></a>class (C++)
La parola chiave `class` dichiara un tipo di classe o definisce un oggetto del tipo di classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [template-spec]  
       class [ms-decl-spec] [tag [: base-list ]]  
{  
   member-list  
} [declarators];  
[ class ] tag declarators;  
```  
  
#### <a name="parameters"></a>Parametri  
 `template-spec`  
 Specifiche facoltative del modello. Per ulteriori informazioni, vedere [modelli](templates-cpp.md).  
  
 `class`  
 Parola chiave `class`.  
  
 `ms-decl-spec`  
 Specifica della classe di archiviazione facoltativa. Per ulteriori informazioni, vedere il [declspec](../cpp/declspec.md) (parola chiave).  
  
 `tag`  
 Nome del tipo assegnato alla classe. Il tag diventa una parola riservata nell'ambito della classe. Il tag è facoltativo. Se omesso, viene definita una classe anonima. Per ulteriori informazioni, vedere [tipi di classe anonima](../cpp/anonymous-class-types.md).  
  
 `base-list`  
 Elenco facoltativo delle classi o delle strutture da cui questa classe deriva i relativi membri. Vedere [le classi di Base](../cpp/base-classes.md) per ulteriori informazioni. Ogni nome di classe o struttura di base può essere preceduto da un identificatore di accesso ([pubblica](../cpp/public-cpp.md), [privata](../cpp/private-cpp.md), [protetti](../cpp/protected-cpp.md)) e [virtuale](../cpp/virtual-cpp.md) parola chiave. Vedere la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) per ulteriori informazioni.  
  
 `member-list`  
 Elenco dei membri della classe. Fare riferimento a [Panoramica membro della classe](../cpp/class-member-overview.md) per ulteriori informazioni.  
  
 `declarators`  
 Elenco dei dichiaratori che specificano i nomi di una o più istanze del tipo di classe. I dichiaratori possono includere gli elenchi degli inizializzatori se tutti i membri dati della classe sono `public`. Questa situazione è più comune nelle strutture, i cui membri di dati sono `public` per impostazione predefinita, rispetto alle classi. Vedere [Panoramica di dichiaratori](../cpp/overview-of-declarators.md) per ulteriori informazioni.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle classi in generale, fare riferimento a uno dei seguenti argomenti:  
  
-   [struct](../cpp/struct-cpp.md)  
  
-   [union](../cpp/unions.md)  
  
-   [multiple_inheritance](../cpp/inheritance-keywords.md)  
  
-   [Single_Inheritance](../cpp/inheritance-keywords.md)  
  
-   [virtual_inheritance](../cpp/inheritance-keywords.md)  
  
 Per informazioni sulle classi gestite e gli struct, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Classi e struct](../cpp/classes-and-structs-cpp.md)