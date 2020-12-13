---
description: "Altre informazioni su: specifica dell'ottimizzazione del compilatore per un progetto ATL"
title: Impostazione dell'ottimizzazione del compilatore per un progetto ATL
ms.date: 08/19/2019
f1_keywords:
- vc.appwiz.ATL.optimization
- vc.appwiz.ATL.vtable
helpviewer_keywords:
- ATL_DISABLE_NO_VTABLE macro
- ATL projects, compiler optimization
- ATL_NO_VTABLE macro
ms.assetid: 7f379318-66d5-43dd-a53d-530758d3a228
ms.openlocfilehash: d0650cfebdeb74caeb78a0ab4f138f4896865fc8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138801"
---
# <a name="specifying-compiler-optimization-for-an-atl-project"></a>Impostazione dell'ottimizzazione del compilatore per un progetto ATL

Per impostazione predefinita, la [creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md) genera nuove classi con la macro ATL_NO_VTABLE, come indicato di seguito:

```
class ATL_NO_VTABLE CProjName
{
...
};
```

ATL definisce quindi _ATL_NO_VTABLE come indicato di seguito:

```
#ifdef _ATL_DISABLE_NO_VTABLE
#define ATL_NO_VTABLE
#else
#define ATL_NO_VTABLE __declspec(novtable)
#endif
```

Se non si definisce _ATL_DISABLE_NO_VTABLE, la macro ATL_NO_VTABLE si espande a `declspec(novtable)` . `declspec(novtable)`L'utilizzo di in una dichiarazione di classe impedisce l'inizializzazione del puntatore vtable nel costruttore della classe e nel distruttore. Quando si compila il progetto, il linker Elimina il vtable e tutte le funzioni a cui punta vtable.

È necessario utilizzare ATL_NO_VTABLE e, `declspec(novtable)` di conseguenza, solo le classi di base che non sono direttamente creabili. Non è necessario usare `declspec(novtable)` con la classe più derivata nel progetto, perché questa classe (in genere [CComObject](../../atl/reference/ccomobject-class.md), [ccomaggobjec](../../atl/reference/ccomaggobject-class.md)o [CComPolyObject](../../atl/reference/ccompolyobject-class.md)) Inizializza il puntatore vtable per il progetto.

Non è necessario chiamare funzioni virtuali dal costruttore di alcun oggetto utilizzato da `declspec(novtable)` . È necessario spostare tali chiamate al metodo [FinalConstruct](ccomobjectrootex-class.md#finalconstruct) .

Se non si è certi che sia necessario usare il `declspec(novtable)` modificatore, è possibile rimuovere la macro ATL_NO_VTABLE da qualsiasi definizione di classe oppure è possibile disabilitarla a livello globale specificando

```
#define _ATL_DISABLE_NO_VTABLE
```

in *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti), prima dell'inclusione di tutti gli altri file di intestazione ATL.

## <a name="see-also"></a>Vedi anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Tipi di progetto C++ in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Programmazione con ATL e codice C Run-Time](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[novtable](../../cpp/novtable.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
