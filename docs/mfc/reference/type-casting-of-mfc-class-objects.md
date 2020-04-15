---
title: Cast di tipo degli oggetti classe MFC
ms.date: 11/04/2016
helpviewer_keywords:
- macros [MFC], type casting
- pointers [MFC], type casting
- type casts [MFC]
- casting types [MFC]
- macros [MFC], casting pointers
ms.assetid: e138465e-c35f-4e84-b788-bd200ccf2f0e
ms.openlocfilehash: 953acc32c3510b31c265f2d64d0a013f6dee06cc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372884"
---
# <a name="type-casting-of-mfc-class-objects"></a>Cast di tipo degli oggetti classe MFC

Le macro di cast dei tipi consentono di eseguire il cast di un determinato puntatore a un puntatore che punta a un oggetto di una classe specifica, con o senza verificare che il cast sia valido.

Nella tabella seguente sono elencate le macro di cast dei tipi MFC.

### <a name="macros-that-cast-pointers-to-mfc-class-objects"></a>Macro che traspuntano puntatori a oggetti classe MFC

|||
|-|-|
|[DYNAMIC_DOWNCAST](#dynamic_downcast)|Esegue il cast di un puntatore a un puntatore a un oggetto di classe durante il controllo per verificare se il cast è valido.|
|[STATIC_DOWNCAST](#static_downcast)|Esegue il cast di un puntatore a un oggetto da una classe a un puntatore di un tipo correlato. In una build di debug, fa un ASSERT se l'oggetto non è un "tipo di" il tipo di destinazione.|

## <a name="dynamic_downcast"></a><a name="dynamic_downcast"></a>DYNAMIC_DOWNCAST

Fornisce un modo pratico per eseguire il cast di un puntatore a un puntatore a un oggetto di classe durante il controllo per verificare se il cast è valido.

```
DYNAMIC_DOWNCAST(class, pointer)
```

### <a name="parameters"></a>Parametri

*classe*<br/>
Nome di una classe.

*indicatore di misura*<br/>
Puntatore di cui eseguire il cast a un puntatore a un oggetto di tipo *classe*.

### <a name="remarks"></a>Osservazioni

La macro eseguirà il cast del *parametro del puntatore* a un puntatore a un oggetto del tipo del parametro di *classe.*

Se l'oggetto a cui fa riferimento il puntatore è un "tipo di" classe identificata, la macro restituisce il puntatore appropriato. Se non si tratta di un cast valido, la macro restituisce NULL.

## <a name="static_downcast"></a><a name="static_downcast"></a>STATIC_DOWNCAST

Esegue il cast *pobject* a un puntatore a un *oggetto class_name.*

```
STATIC_DOWNCAST(class_name, pobject)
```

### <a name="parameters"></a>Parametri

*Class_name*<br/>
Nome della classe a cui viene eseguito il cast.

*pobject*<br/>
Puntatore di cui eseguire il cast a un puntatore a un *oggetto class_name.*

### <a name="remarks"></a>Osservazioni

*pobject* deve essere NULL o puntare a un oggetto di una classe derivata direttamente o indirettamente da *class_name*. Nelle compilazioni dell'applicazione con il simbolo del preprocessore _DEBUG definito, la macro ASSERT se *pobject* non è NULL o se punta a un oggetto che non è un "tipo di" la classe specificata nel parametro *class_name* (vedere [CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof)). Nelle compilazioni **non _DEBUG,** la macro esegue il cast senza alcun controllo del tipo.

La classe specificata *class_name* nel parametro `CObject` class_name deve essere derivata da e deve utilizzare il DECLARE_DYNAMIC e IMPLEMENT_DYNAMIC, il DECLARE_DYNCREATE e IMPLEMENT_DYNCREATE oppure le macro DECLARE_SERIAL e IMPLEMENT_SERIAL, come illustrato nell'articolo [CObject Class: Derivazione](../../mfc/deriving-a-class-from-cobject.md)di una classe da CObject .

Ad esempio, è possibile `CMyDoc`eseguire `pMyDoc`il cast di `CDocument` un puntatore a , chiamato , a un puntatore all'utilizzo di questa espressione:

[!code-cpp[NVC_MFCDocView#197](../../mfc/codesnippet/cpp/type-casting-of-mfc-class-objects_1.cpp)]

Se `pMyDoc` non punta a un oggetto derivato direttamente o indirettamente da `CDocument`, la macro sarà ASSERT.

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
