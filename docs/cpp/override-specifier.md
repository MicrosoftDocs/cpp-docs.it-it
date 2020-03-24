---
title: Identificatore override
ms.date: 11/04/2016
helpviewer_keywords:
- override Identifier
ms.assetid: b286fb46-9374-4ad8-b2e7-4607119b6133
ms.openlocfilehash: 82837ae34ab786e607df54038493b14350574a15
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188480"
---
# <a name="override-specifier"></a>Identificatore override

È possibile usare la parola chiave **override** per definire le funzioni membro che eseguono l'override di una funzione virtuale in una classe base.

## <a name="syntax"></a>Sintassi

```
function-declaration override;
```

## <a name="remarks"></a>Osservazioni

**l'override** è sensibile al contesto e ha un significato speciale solo quando viene usato dopo una dichiarazione di funzione membro. in caso contrario, non si tratta di una parola chiave riservata.

## <a name="example"></a>Esempio

Utilizzare **override** per impedire il comportamento di ereditarietà accidentale nel codice. Nell'esempio seguente viene illustrato dove, senza utilizzare l' **override**, il comportamento della funzione membro della classe derivata potrebbe non essere stato previsto. Il compilatore non genera alcun errore per questo codice.

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

Quando si usa **override**, il compilatore genera errori anziché creare automaticamente nuove funzioni membro.

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

Per specificare che non è possibile eseguire l'override delle funzioni e che le classi non possono essere ereditate, utilizzare la parola chiave [Final](../cpp/final-specifier.md) .

## <a name="see-also"></a>Vedere anche

[Identificatore final](../cpp/final-specifier.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
