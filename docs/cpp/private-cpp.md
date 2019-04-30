---
title: private (C++)
ms.date: 11/04/2016
f1_keywords:
- private_cpp
helpviewer_keywords:
- private keyword [C++]
ms.assetid: 94e99983-46a5-4e21-800c-28f8a7c6a8ff
ms.openlocfilehash: 19ea551f625cac02e639753a976eddb7a5fa164b
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64345834"
---
# <a name="private-c"></a>private (C++)

## <a name="syntax"></a>Sintassi

```
private:
   [member-list]
private base-class
```

## <a name="remarks"></a>Note

Quando precede un elenco dei membri della classe, il **privato** parola chiave indica che tali membri sono accessibili solo da funzioni membro e dagli elementi Friend della classe. Quanto detto si applica a tutti i membri dichiarati fino al successivo identificatore di accesso o fino alla fine della classe.

Quando precede il nome di una classe di base, il **privato** parola chiave specifica che i membri pubblici e protetti della classe di base sono membri privati della classe derivata.

L'accesso predefinito dei membri in una classe è privato. L'accesso predefinito dei membri in una struttura o in un'unione è pubblico.

L'accesso predefinito di una classe base è privato per le classi e pubblico per le strutture. Le unioni non possono avere classi base.

Per informazioni correlate, vedere [friend](../cpp/friend-cpp.md), [pubblici](../cpp/public-cpp.md), [protette](../cpp/protected-cpp.md)e la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md).

## <a name="clr-specific"></a>Specifico di /clr

Nei tipi CLR, parole chiave dell'identificatore di accesso di C++ (**pubbliche**, **privato**, e **protetti**) può influire sulla visibilità dei tipi e metodi relativamente agli assembly. Per altre informazioni, vedere [controllo di accesso membri](member-access-control-cpp.md).

> [!NOTE]
>  I file compilati con [/LN](../build/reference/ln-create-msil-module.md) non sono interessati da questo comportamento. In questo caso, tutte le classi gestite (sia pubbliche che private) saranno visibili.

## <a name="end-clr-specific"></a>Specifico di END /clr

## <a name="example"></a>Esempio

```cpp
// keyword_private.cpp
class BaseClass {
public:
   // privMem accessible from member function
   int pubFunc() { return privMem; }
private:
   void privMem;
};

class DerivedClass : public BaseClass {
public:
   void usePrivate( int i )
      { privMem = i; }   // C2248: privMem not accessible
                         // from derived class
};

class DerivedClass2 : private BaseClass {
public:
   // pubFunc() accessible from derived class
   int usePublic() { return pubFunc(); }
};

int main() {
   BaseClass aBase;
   DerivedClass aDerived;
   DerivedClass2 aDerived2;
   aBase.privMem = 1;     // C2248: privMem not accessible
   aDerived.privMem = 1;  // C2248: privMem not accessible
                          //    in derived class
   aDerived2.pubFunc();   // C2247: pubFunc() is private in
                          //    derived class
}
```

## <a name="see-also"></a>Vedere anche

[Controllo dell'accesso ai membri di classi](member-access-control-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)