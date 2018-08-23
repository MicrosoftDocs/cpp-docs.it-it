---
title: 'Metodo weakref:: CopyTo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::CopyTo
dev_langs:
- C++
helpviewer_keywords:
- CopyTo method
ms.assetid: f83de6da-b3d4-41a6-9845-cd725ecf3b75
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 791e9040d9e35c7dfb657cca38e26c01e86c86c4
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594421"
---
# <a name="weakrefcopyto-method"></a>Metodo WeakRef::CopyTo

Assegna un puntatore a un'interfaccia, se disponibile, per la variabile del puntatore specificato.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT CopyTo(
   REFIID riid,
   _Deref_out_ IInspectable** ptr
);

template<typename U>
HRESULT CopyTo(
   _Deref_out_ U** ptr
);

HRESULT CopyTo(
   _Deref_out_ IWeakReference** ptr
);
```

### <a name="parameters"></a>Parametri

*U*  
Puntatore a un `IInspectable` interfaccia. Viene generato un errore se *U* non è derivato da `IInspectable`.

*riid*  
ID di interfaccia. Viene generato un errore se *riid* non è derivato da `IWeakReference`.

*ptr*  
Un puntatore indiretto doppio `IInspectable` o `IWeakReference`.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. Per altre informazioni, vedere **Note**.

## <a name="remarks"></a>Note

Il valore restituito S_OK indica che l'operazione è riuscita, ma non se il riferimento debole è stato risolto in un riferimento forte. Se viene restituito S_OK, verificare che il parametro *p* è un forte riferimento, vale a dire parametro *p* non è uguale a **nullptr**.

A partire da Windows 10 SDK, questo metodo non imposta il **WeakRef** istanza **nullptr** se non è stato possibile ottenere il riferimento debole, pertanto, evitare errori di controllo del codice che verifica WeakRef per **nullptr**. Controllare invece *ptr* per **nullptr**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe WeakRef](../windows/weakref-class.md)