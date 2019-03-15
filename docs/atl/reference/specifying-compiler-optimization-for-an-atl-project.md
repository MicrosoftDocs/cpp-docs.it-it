---
title: Impostazione dell'ottimizzazione del compilatore per un progetto ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.ATL.optimization
- vc.appwiz.ATL.vtable
helpviewer_keywords:
- ATL_DISABLE_NO_VTABLE macro
- ATL projects, compiler optimization
- ATL_NO_VTABLE macro
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
ms.openlocfilehash: 5b6620b73713886301e4efc29754cf407d9576f4
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812343"
---
# <a name="specifying-compiler-optimization-for-an-atl-project"></a>Impostazione dell'ottimizzazione del compilatore per un progetto ATL

Per impostazione predefinita, il [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md) genera nuove classi con la macro ATL_NO_VTABLE, come indicato di seguito:

```
class ATL_NO_VTABLE CProjName
{
...
};
```

Viene quindi definita la macro ATL_NO_VTABLE come indicato di seguito:

```
#ifdef _ATL_DISABLE_NO_VTABLE
#define ATL_NO_VTABLE
#else
#define ATL_NO_VTABLE __declspec(novtable)
#endif
```

Se non si definisce ATL_DISABLE_NO_VTABLE, si espande la macro ATL_NO_VTABLE in `declspec(novtable)`. Usando `declspec(novtable)`in una classe dichiarazione impedisce che il puntatore vtable inizializzato nel costruttore di classe e del distruttore. Quando si compila il progetto, il linker Elimina vtable e tutte le funzioni a cui fa riferimento.

È necessario usare ATL_NO_VTABLE e, di conseguenza `declspec(novtable)`, con solo le classi base che non sono direttamente generabile. Non è necessario usare `declspec(novtable)` con la classe più derivata nel progetto, poiché questa classe (in genere [CComObject](../../atl/reference/ccomobject-class.md), [CComAggObject](../../atl/reference/ccomaggobject-class.md), oppure [CComPolyObject](../../atl/reference/ccompolyobject-class.md)) Inizializza il puntatore di vtable per il progetto.

Non è necessario chiamare le funzioni virtuali dal costruttore di qualsiasi oggetto che usa `declspec(novtable)`. È necessario spostare tali chiamate per il [FinalConstruct](ccomobjectrootex-class.md#finalconstruct) (metodo).

Se si è certi se sia necessario utilizzare il `declspec(novtable)` modificatore, è possibile rimuovere la macro ATL_NO_VTABLE da qualsiasi definizione di classe, oppure è possibile disabilitare a livello globale, specificando

```
#define _ATL_DISABLE_NO_VTABLE
```

in stdafx. h, prima di tutte le altre ATL i file di intestazione sono inclusi.

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto Visual C++](../../build/reference/visual-cpp-project-types.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[novtable](../../cpp/novtable.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
