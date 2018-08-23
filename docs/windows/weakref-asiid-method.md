---
title: 'Metodo weakref:: Asiid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::AsIID
dev_langs:
- C++
helpviewer_keywords:
- AsIID method
ms.assetid: 94e87309-32da-4dbb-8233-e77313a1f448
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8844828028e174bd216bddb7e7c82cc9e5971a90
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594883"
---
# <a name="weakrefasiid-method"></a>Metodo WeakRef::AsIID

Imposta l'oggetto specificato `ComPtr` parametro del puntatore per rappresentare l'ID di interfaccia specificato.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IInspectable>* ptr
);
```

### <a name="parameters"></a>Parametri

*riid*  
ID di interfaccia.

*ptr*  
Al termine di questa operazione, un oggetto che rappresenta i parametri *riid*.

## <a name="return-value"></a>Valore restituito

- S_OK se l'operazione riesce; in caso contrario, HRESULT che indica il motivo dell'errore dell'operazione e *ptr* è impostata su **nullptr**.

- S_OK se l'operazione riesce, ma l'oggetto corrente **WeakRef** oggetto è già stato rilasciato. Parametro *ptr* è impostata su **nullptr**.

- S_OK se l'operazione riesce, ma l'oggetto corrente **WeakRef** oggetto non è derivato dal parametro *riid*. Parametro *ptr* è impostata su **nullptr**. Per altre informazioni, vedere Note.

## <a name="remarks"></a>Note

Viene generato un errore se parametro *riid* non è derivato da `IInspectable`. Questo errore sostituisce il valore restituito.

Il primo modello è il form da usare nel codice. Il secondo modello (non illustrato di seguito, ma dichiarato nel file di intestazione) è una specializzazione helper interna che supporta le funzionalità del linguaggio C++, ad esempio la parola chiave di deduzione del tipo [auto](../cpp/auto-cpp.md) .

A partire da Windows 10 SDK, questo metodo non imposta il **WeakRef** istanza **nullptr** se non è stato possibile ottenere il riferimento debole, pertanto, evitare codice controllo degli errori che verifica il **WeakRef** per **nullptr**. Controllare invece *ptr* per **nullptr**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe WeakRef](../windows/weakref-class.md)