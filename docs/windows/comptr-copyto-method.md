---
title: 'Metodo comptr:: CopyTo | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::CopyTo
dev_langs:
- C++
helpviewer_keywords:
- CopyTo method
ms.assetid: 8801bc49-6db4-4393-a55f-a701ae3b8718
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c9b84cbcc970183222ed06752dc61b5672615868
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405385"
---
# <a name="comptrcopyto-method"></a>Metodo ComPtr::CopyTo

Copia l'interfaccia corrente o specificata associato a questo **ComPtr** all'indicatore di misura specificata.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT CopyTo(
   _Deref_out_ InterfaceType** ptr
);

HRESULT CopyTo(
   REFIID riid,
   _Deref_out_ void** ptr
) const;

template<typename U>
HRESULT CopyTo(
   _Deref_out_ U** ptr
) const;
```

### <a name="parameters"></a>Parametri

*U*<br/>
Un nome di tipo.

*ptr*<br/>
Quando questa operazione viene completata, un puntatore all'interfaccia richiesta.

*riid*<br/>
ID di interfaccia.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che indica il motivo implicito `QueryInterface` operazione non riuscita.

## <a name="remarks"></a>Note

La prima funzione restituisce una copia di un puntatore all'interfaccia associato a questo **ComPtr**. Questa funzione restituisce sempre S_OK.

La seconda funzione viene eseguita una `QueryInterface` operazione sull'interfaccia associato a questo **ComPtr** per l'interfaccia specificata dal *riid* parametro.

La terza funzione esegue una `QueryInterface` operazione sull'interfaccia associato a questo **ComPtr** per l'interfaccia sottostante del *U* parametro.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)