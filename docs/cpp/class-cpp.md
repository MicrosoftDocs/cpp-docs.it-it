---
title: class (C++)
ms.date: 11/04/2016
f1_keywords:
- class_cpp
helpviewer_keywords:
- class types [C++], class statements
- class keyword [C++]
ms.assetid: dd23c09f-6598-4069-8bff-69c7f2518b9f
ms.openlocfilehash: c4ef9690a41737147354ee0976f6912c4711ff67
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58774815"
---
# <a name="class-c"></a>class (C++)

Il **classe** parola chiave dichiara un tipo di classe o definisce un oggetto di un tipo di classe.

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

*template-spec*<br/>
Specifiche facoltative del modello. Per altre informazioni, consultare [modelli](templates-cpp.md).

*class*<br/>
Il **classe** (parola chiave).

*ms-decl-spec*<br/>
Specifica della classe di archiviazione facoltativa. Per altre informazioni, vedere la [declspec](../cpp/declspec.md) (parola chiave).

*tag*<br/>
Nome del tipo assegnato alla classe. Il tag diventa una parola riservata nell'ambito della classe. Il tag è facoltativo. Se omesso, viene definita una classe anonima. Per altre informazioni, vedere [tipi di classe anonimi](../cpp/anonymous-class-types.md).

*base-list*<br/>
Elenco facoltativo delle classi o delle strutture da cui questa classe deriva i relativi membri. Visualizzare [le classi di Base](../cpp/base-classes.md) per altre informazioni. Ogni nome di classe o struttura di base può essere preceduto da un identificatore di accesso ([pubbliche](../cpp/public-cpp.md), [privato](../cpp/private-cpp.md), [protette](../cpp/protected-cpp.md)) e il [virtuale](../cpp/virtual-cpp.md) parola chiave. Vedere la tabella di accesso ai membri nella [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) per altre informazioni.

*member-list*<br/>
Elenco dei membri della classe. Fare riferimento a [Panoramica della classe membro](../cpp/class-member-overview.md) per altre informazioni.

*declarators*<br/>
Elenco dei dichiaratori che specificano i nomi di una o più istanze del tipo di classe. I dichiaratori possono includere gli elenchi di inizializzatori se tutti i membri dati della classe vengono **pubblica**. Questa situazione è più comune nelle strutture, i cui membri dati sono **pubblica** per impostazione predefinita, rispetto a classi. Visualizzare [panoramica dei dichiaratori](../cpp/overview-of-declarators.md) per altre informazioni.

## <a name="remarks"></a>Note

Per ulteriori informazioni sulle classi in generale, fare riferimento a uno dei seguenti argomenti:

- [struct](../cpp/struct-cpp.md)

- [union](../cpp/unions.md)

- [__multiple_inheritance](../cpp/inheritance-keywords.md)

- [__single_inheritance](../cpp/inheritance-keywords.md)

- [__virtual_inheritance](../cpp/inheritance-keywords.md)

Per informazioni sulle classi gestite e nelle strutture in C++/CLI e C++/CX, vedere [classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md)

## <a name="example"></a>Esempio

```cpp
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

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Classi e struct](../cpp/classes-and-structs-cpp.md)