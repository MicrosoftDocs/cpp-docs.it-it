---
title: Avviso del compilatore (livello 4) C4437
ms.date: 11/04/2016
ms.assetid: dc07e350-20eb-474c-a7ad-f841ae7ec339
ms.openlocfilehash: 9ff52ae6d10f7d4ba429bbf3457a2a6b969998d4
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59037819"
---
# <a name="compiler-warning-level-4-c4437"></a>Avviso del compilatore (livello 4) C4437

dynamic_cast dalla base virtuale "classe1" a "classe2" potrebbe non riuscire in alcuni contesti compilazione con/vd2 o definire "classe2" con #pragma vtordisp(2) attivo

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Il compilatore ha rilevato un'operazione `dynamic_cast` con le seguenti caratteristiche.

- Il cast ha origine da un puntatore della classe base a un puntatore della classe derivata.

- La classe derivata eredita virtualmente la classe base.

- La classe derivata non include un campo `vtordisp` per la base virtuale.

- Il cast non viene trovato in un costruttore o distruttore della classe derivata o una classe che ulteriormente eredita dalla classe derivata (avviso del compilatore in caso contrario, verrà generato C4436).

L'avviso indica che il `dynamic_cast` potrebbe non funzionare correttamente se è in esecuzione su un oggetto parzialmente costruito.  Questa situazione si verifica quando viene chiamata la funzione contenitore da un costruttore o distruttore di una classe che eredita la classe derivata denominata nell'avviso.  Se la classe derivata denominata nell'avviso non è mai più derivata, o la funzione contenitore non viene chiamata durante la costruzione o distruzione di $, l'avviso può essere ignorato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4437 e dimostra il problema di generazione di codice che deriva dal parametro mancante `vtordisp` campo.

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