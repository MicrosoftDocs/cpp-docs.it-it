---
title: Avviso del compilatore (livello 1) C4436
ms.date: 11/04/2016
f1_keywords:
- C4436
helpviewer_keywords:
- C4436
ms.assetid: 2b54a1fc-c9c6-4cc9-90be-faa44fc715d5
ms.openlocfilehash: 6a15220cb02a48fb11936b69e5830412f1221108
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230675"
---
# <a name="compiler-warning-level-1-c4436"></a>Avviso del compilatore (livello 1) C4436

dynamic_cast da base virtuale "classe1" a "classe2" nel costruttore o distruttore potrebbe non riuscire con oggetti parzialmente costruiti Compilare con /vd2 oppure definire "classe2" con il #pragma vtordisp(2) in effetto

Il compilatore ha rilevato un' **`dynamic_cast`** operazione con le seguenti caratteristiche.

- Il cast ha origine da un puntatore della classe base a un puntatore della classe derivata.

- La classe derivata eredita virtualmente la classe base.

- La classe derivata non include un campo `vtordisp` per la base virtuale.

- Il cast viene trovato in un costruttore o distruttore della classe derivata oppure in una classe che ulteriormente eredita dalla classe derivata.

L'avviso indica **`dynamic_cast`** che il potrebbe non funzionare correttamente, se opera su un oggetto parzialmente costruito.  Ciò si verifica se il costruttore/distruttore derivato utilizza un sottooggetto di un oggetto ulteriormente derivato.  Se la classe derivata denominata nell'avviso non è mai più derivata, l'avviso può essere ignorato.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato C4436 e viene illustrato il problema di generazione del codice che risulta dal campo mancante `vtordisp`.

```cpp
// C4436.cpp
// To see the warning and runtime assert, compile with: /W1
// To eliminate the warning and assert, compile with: /W1 /vd2
//       or compile with: /W1 /DFIX
#include <cassert>

struct A
{
public:
    virtual ~A() {}
};

#if defined(FIX)
#pragma vtordisp(push, 2)
#endif
struct B : virtual A
{
    B()
    {
        A* a = static_cast<A*>(this);
        B* b = dynamic_cast<B*>(a);     // C4436
        assert(this == b);              // assert unless compiled with /vd2
    }
};
#if defined(FIX)
#pragma vtordisp(pop)
#endif

struct C : B
{
    int i;
};

int main()
{
    C c;
}
```

## <a name="see-also"></a>Vedere anche

[Operatore dynamic_cast](../../cpp/dynamic-cast-operator.md)<br/>
[vtordisp](../../preprocessor/vtordisp.md)<br/>
[Avviso del compilatore (livello 4) C4437](../../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md)
