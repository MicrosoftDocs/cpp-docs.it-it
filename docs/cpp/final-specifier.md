---
title: Identificatore final
ms.date: 11/04/2016
f1_keywords:
- final_CPP
helpviewer_keywords:
- final Identifier
ms.assetid: 649866d0-79d4-449f-ab74-f84b911b79a3
ms.openlocfilehash: 93e8d9b0b445d1120ec15911eb763ae1d7d2d359
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188657"
---
# <a name="final-specifier"></a>Identificatore final

È possibile usare la parola chiave **Final** per definire funzioni virtuali che non possono essere sottoposte a override in una classe derivata. È inoltre possibile utilizzare tale parola chiave per definire classi che non possono essere ereditate.

## <a name="syntax"></a>Sintassi

```
function-declaration final;
class class-name final base-classes
```

## <a name="remarks"></a>Osservazioni

**Final** è sensibile al contesto e ha un significato speciale solo quando viene usato dopo una dichiarazione di funzione o un nome di classe; in caso contrario, non si tratta di una parola chiave riservata.

Quando **Final** viene usato nelle dichiarazioni di classe, `base-classes` è una parte facoltativa della dichiarazione.

## <a name="example"></a>Esempio

Nell'esempio seguente viene utilizzata la parola chiave **Final** per specificare che non è possibile eseguire l'override di una funzione virtuale.

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

Per informazioni su come specificare che le funzioni membro possono essere sottoposte a override, vedere [identificatore di override](../cpp/override-specifier.md).

Nell'esempio seguente viene usata la parola chiave **Final** per specificare che una classe non può essere ereditata.

```cpp
class BaseClass final
{
};

class DerivedClass: public BaseClass // compiler error: BaseClass is
                                     // marked as non-inheritable
{
};
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Identificatore override](../cpp/override-specifier.md)
