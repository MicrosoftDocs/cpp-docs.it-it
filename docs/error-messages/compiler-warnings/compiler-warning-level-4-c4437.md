---
title: Avviso del compilatore (livello 4) C4437
ms.date: 11/04/2016
f1_keywords:
- C4437
helpviewer_keywords:
- C4437
ms.assetid: dc07e350-20eb-474c-a7ad-f841ae7ec339
ms.openlocfilehash: 84c6e8d09495d871b8c490a92558aaba14b0574c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185334"
---
# <a name="compiler-warning-level-4-c4437"></a>Avviso del compilatore (livello 4) C4437

dynamic_cast dalla base virtuale ' Class1' a' Class2' potrebbe non riuscire in alcuni contesti compilare con/VD2 o definire ' Class2' con #pragma vtordisp (2) attivo

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Il compilatore ha rilevato un'operazione `dynamic_cast` con le seguenti caratteristiche.

- Il cast ha origine da un puntatore della classe base a un puntatore della classe derivata.

- La classe derivata eredita virtualmente la classe base.

- La classe derivata non include un campo `vtordisp` per la base virtuale.

- Il cast non viene trovato in un costruttore o in un distruttore della classe derivata o in una classe che eredita ulteriormente dalla classe derivata; in caso contrario, verrà emesso un avviso del compilatore C4436.

L'avviso indica che il `dynamic_cast` potrebbe non funzionare correttamente se opera su un oggetto parzialmente costruito.  Questa situazione si verifica quando la funzione contenitore viene chiamata da un costruttore o distruttore di una classe che eredita la classe derivata denominata nell'avviso.  Se la classe derivata denominata nell'avviso non è mai derivata ulteriormente oppure la funzione contenitore non viene chiamata durante la costruzione o l'eliminazione di un oggetto, l'avviso può essere ignorato.

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato C4437 e viene illustrato il problema di generazione del codice che deriva dal campo `vtordisp` mancante.

```cpp
// C4437.cpp
// To see the warning and runtime assert, compile with: /W4
// To eliminate the warning and assert, compile with: /W4 /vd2
//       or compile with: /W4 /DFIX
#pragma warning(default : 4437)
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
        func();
    }

    void func()
    {
        A* a = static_cast<A*>(this);
        B* b = dynamic_cast<B*>(a);     // C4437
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
[Avviso del compilatore (livello 1) C4436](../../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md)
