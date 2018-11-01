---
title: public (C++)
ms.date: 11/04/2016
f1_keywords:
- public_cpp
helpviewer_keywords:
- public keyword [C++]
ms.assetid: f3e10a59-39f6-4bcd-827e-3e99f8f89497
ms.openlocfilehash: 24cc4dd3cd7e0c893664339e7ad83383839b0b11
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50600370"
---
# <a name="public-c"></a>public (C++)

## <a name="syntax"></a>Sintassi

```
public:
   [member-list]
public base-class
```

## <a name="remarks"></a>Note

Quando precede un elenco dei membri della classe, il **pubblica** parola chiave indica che tali membri sono accessibili da qualsiasi funzione. Quanto detto si applica a tutti i membri dichiarati fino al successivo identificatore di accesso o fino alla fine della classe.

Quando precede il nome di una classe di base, il **pubblica** parola chiave specifica che i membri pubblici e protetti della classe di base sono pubblici e protetti, rispettivamente, i membri della classe derivata.

L'accesso predefinito dei membri in una classe è privato. L'accesso predefinito dei membri in una struttura o in un'unione è pubblico.

L'accesso predefinito di una classe base è privato per le classi e pubblico per le strutture. Le unioni non possono avere classi base.

Per altre informazioni, vedere [privati](../cpp/private-cpp.md), [protetti](../cpp/protected-cpp.md), [friend](../cpp/friend-cpp.md)e la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) .

## <a name="clr-specific"></a>Specifico di /clr

Nei tipi CLR, parole chiave dell'identificatore di accesso di C++ (**pubbliche**, **privato**, e **protetti**) può influire sulla visibilità dei tipi e metodi relativamente agli assembly. Per altre informazioni, vedere [controllo di accesso membri](member-access-control-cpp.md).

> [!NOTE]
>  I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.

## <a name="end-clr-specific"></a>Specifico di END /clr

## <a name="example"></a>Esempio

```cpp
// keyword_public.cpp
class BaseClass {
public:
   int pubFunc() { return 0; }
};

class DerivedClass : public BaseClass {};

int main() {
   BaseClass aBase;
   DerivedClass aDerived;
   aBase.pubFunc();       // pubFunc() is accessible
                          //    from any function
   aDerived.pubFunc();    // pubFunc() is still public in
                          //    derived class
}
```

## <a name="see-also"></a>Vedere anche

[Controllo dell'accesso ai membri di classi](member-access-control-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)