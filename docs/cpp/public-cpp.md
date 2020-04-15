---
title: public (C++)
ms.date: 11/04/2016
f1_keywords:
- public_cpp
helpviewer_keywords:
- public keyword [C++]
ms.assetid: f3e10a59-39f6-4bcd-827e-3e99f8f89497
ms.openlocfilehash: bf8293c6a6cf12154b02979de08035807991052c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376043"
---
# <a name="public-c"></a>public (C++)

## <a name="syntax"></a>Sintassi

```
public:
   [member-list]
public base-class
```

## <a name="remarks"></a>Osservazioni

Quando precede un elenco di membri di classe, la parola chiave **public** specifica che tali membri sono accessibili da qualsiasi funzione. Quanto detto si applica a tutti i membri dichiarati fino al successivo identificatore di accesso o fino alla fine della classe.

Quando precede il nome di una classe base, la parola chiave **public** specifica che i membri pubblici e protetti della classe base sono rispettivamente membri pubblici e protetti della classe derivata.

L'accesso predefinito dei membri in una classe è privato. L'accesso predefinito dei membri in una struttura o in un'unione è pubblico.

L'accesso predefinito di una classe base è privato per le classi e pubblico per le strutture. Le unioni non possono avere classi base.

Per ulteriori informazioni, vedere [private](../cpp/private-cpp.md), [protected](../cpp/protected-cpp.md), [friend](../cpp/friend-cpp.md)e la tabella di accesso ai membri in [Controllo dell'accesso ai membri della classe](member-access-control-cpp.md).

## <a name="clr-specific"></a>Specifico di /clr

Nei tipi CLR, le parole chiave dell'identificatore di accesso di C ,**public**, **private**e **protected**, possono influire sulla visibilità di tipi e metodi relativi agli assembly. Per ulteriori informazioni, vedere [Controllo di accesso ai membri](member-access-control-cpp.md).

> [!NOTE]
> I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.

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
