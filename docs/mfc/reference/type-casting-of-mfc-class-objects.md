---
description: 'Altre informazioni su: cast del tipo di oggetti classe MFC'
title: Cast di tipo degli oggetti classe MFC
ms.date: 11/04/2016
helpviewer_keywords:
- macros [MFC], type casting
- pointers [MFC], type casting
- type casts [MFC]
- casting types [MFC]
- macros [MFC], casting pointers
ms.assetid: e138465e-c35f-4e84-b788-bd200ccf2f0e
ms.openlocfilehash: bec49afc0050aa32c6e5436e5efca9b0dab30709
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97218670"
---
# <a name="type-casting-of-mfc-class-objects"></a>Cast di tipo degli oggetti classe MFC

Le macro di cast dei tipi consentono di eseguire il cast di un determinato puntatore a un puntatore che punta a un oggetto di una classe specifica, con o senza verificare se il cast è valido.

Nella tabella seguente sono elencate le macro di cast del tipo MFC.

### <a name="macros-that-cast-pointers-to-mfc-class-objects"></a>Macro che consentono di eseguire il cast di puntatori agli oggetti della classe MFC

|Nome|Description|
|-|-|
|[DYNAMIC_DOWNCAST](#dynamic_downcast)|Esegue il cast di un puntatore a un puntatore a un oggetto classe durante il controllo per verificare se il cast è valido.|
|[STATIC_DOWNCAST](#static_downcast)|Esegue il cast di un puntatore a un oggetto da una classe a un puntatore di un tipo correlato. In una build di debug, genera un'ASSERZIONe se l'oggetto non è un tipo di destinazione.|

## <a name="dynamic_downcast"></a><a name="dynamic_downcast"></a> DYNAMIC_DOWNCAST

Fornisce un modo pratico per eseguire il cast di un puntatore a un puntatore a un oggetto classe durante il controllo per verificare se il cast è valido.

```
DYNAMIC_DOWNCAST(class, pointer)
```

### <a name="parameters"></a>Parametri

*class*<br/>
Nome di una classe.

*puntatore*<br/>
Puntatore di cui eseguire il cast a un puntatore a un oggetto di tipo *classe*.

### <a name="remarks"></a>Commenti

La macro eseguirà il cast del parametro del *puntatore* a un puntatore a un oggetto del tipo del parametro della *classe* .

Se l'oggetto a cui fa riferimento il puntatore è un "tipo di" la classe identificata, la macro restituisce il puntatore appropriato. Se non si tratta di un cast valido, la macro restituisce NULL.

## <a name="static_downcast"></a><a name="static_downcast"></a> STATIC_DOWNCAST

Esegue il cast di *pObject* a un puntatore a un oggetto *class_name* .

```
STATIC_DOWNCAST(class_name, pobject)
```

### <a name="parameters"></a>Parametri

*class_name*<br/>
Nome della classe di cui eseguire il cast.

*pObject*<br/>
Puntatore di cui eseguire il cast su un puntatore a un oggetto *class_name* .

### <a name="remarks"></a>Commenti

*pObject* deve essere null o puntare a un oggetto di una classe derivata direttamente, o indirettamente, da *class_name*. Nelle compilazioni dell'applicazione con il simbolo del preprocessore _DEBUG definito, la macro asserirà se *pObject* non è null o se punta a un oggetto che non è un "tipo" della classe specificata nel parametro *Class_name* (vedere [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof)). Nelle compilazioni non **_DEBUG** la macro esegue il cast senza alcun controllo del tipo.

La classe specificata nel parametro *class_name* deve derivare da `CObject` e deve usare il DECLARE_DYNAMIC e IMPLEMENT_DYNAMIC, il DECLARE_DYNCREATE e il IMPLEMENT_DYNCREATE oppure le macro DECLARE_SERIAL e IMPLEMENT_SERIAL come illustrato nell'articolo [classe CObject: derivazione di una classe da CObject](../../mfc/deriving-a-class-from-cobject.md).

Ad esempio, è possibile eseguire il cast di un puntatore a `CMyDoc` , denominato `pMyDoc` , a un puntatore a `CDocument` utilizzando questa espressione:

[!code-cpp[NVC_MFCDocView#197](../../mfc/codesnippet/cpp/type-casting-of-mfc-class-objects_1.cpp)]

Se `pMyDoc` non punta a un oggetto derivato direttamente o indirettamente da `CDocument` , la macro asserterà.

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
