---
title: class (C++)
ms.date: 11/04/2016
f1_keywords:
- class_cpp
helpviewer_keywords:
- class types [C++], class statements
- class keyword [C++]
ms.assetid: dd23c09f-6598-4069-8bff-69c7f2518b9f
ms.openlocfilehash: 6475bc3703ce1bd7cf6103f4be8c12edc36e98b9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226008"
---
# <a name="class-c"></a>class (C++)

La **`class`** parola chiave dichiara un tipo di classe o definisce un oggetto di un tipo di classe.

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

*Template-spec*<br/>
Specifiche facoltative del modello. Per ulteriori informazioni, vedere [modelli](templates-cpp.md).

*class*<br/>
**`class`** Parola chiave.

*MS-decl-spec*<br/>
Specifica della classe di archiviazione facoltativa. Per ulteriori informazioni, fare riferimento alla parola chiave [__declspec](../cpp/declspec.md) .

*Tag*<br/>
Nome del tipo assegnato alla classe. Il tag diventa una parola riservata nell'ambito della classe. Il tag è facoltativo. Se omesso, viene definita una classe anonima. Per ulteriori informazioni, vedere [tipi di classe anonimi](../cpp/anonymous-class-types.md).

*base-list*<br/>
Elenco facoltativo delle classi o delle strutture da cui questa classe deriva i relativi membri. Per ulteriori informazioni, vedere [classi di base](../cpp/base-classes.md) . Ogni classe base o nome di struttura può essere preceduto da un identificatore di accesso ([public](../cpp/public-cpp.md), [private](../cpp/private-cpp.md), [protected](../cpp/protected-cpp.md)) e dalla parola chiave [Virtual](../cpp/virtual-cpp.md) . Per ulteriori informazioni, vedere la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) .

*elenco membri*<br/>
Elenco dei membri della classe. Per ulteriori informazioni, vedere [Cenni preliminari sui membri della classe](../cpp/class-member-overview.md) .

*declarators*<br/>
Elenco dei dichiaratori che specificano i nomi di una o più istanze del tipo di classe. I dichiaratori possono includere elenchi di inizializzatori se tutti i membri dati della classe sono **`public`** . Questo è più comune nelle strutture, i cui membri dati sono **`public`** per impostazione predefinita, rispetto alle classi. Per ulteriori informazioni, vedere [Cenni preliminari sui dichiaratori](../cpp/overview-of-declarators.md) .

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle classi in generale, fare riferimento a uno dei seguenti argomenti:

- [struct](../cpp/struct-cpp.md)

- [union](../cpp/unions.md)

- [__multiple_inheritance](../cpp/inheritance-keywords.md)

- [__single_inheritance](../cpp/inheritance-keywords.md)

- [__virtual_inheritance](../cpp/inheritance-keywords.md)

Per informazioni sulle classi gestite e sugli struct in C++/CLI e C++/CX, vedere [classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

```cpp
// class.cpp
// compile with: /EHsc
// Example of the class keyword
// Exhibits polymorphism/virtual functions.

#include <iostream>
#include <string>
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
