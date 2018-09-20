---
title: 'Metodo comptr:: Asiid | Microsoft Docs'
ms.custom: ''
ms.date: 07/11/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::AsIID
dev_langs:
- C++
helpviewer_keywords:
- AsIID method
ms.assetid: d5a3cdb2-796d-4410-966a-847c0e8fb226
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d3dfa87d950a12f115fb157124765fa5fd06eced
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46396108"
---
# <a name="comptrasiid-method"></a>Metodo ComPtr::AsIID

Restituisce un **ComPtr** oggetto che rappresenta l'interfaccia identificata dall'ID dell'interfaccia specificata.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW HRESULT AsIID(
   REFIID riid,
   _Out_ ComPtr<IUnknown>* p
) const;
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*p*<br/>
Se l'oggetto presenta un'interfaccia il cui ID corrisponde *riid*, un puntatore indiretto doppio a un'interfaccia specificata per il *riid* parametro; in caso contrario, un puntatore a `IUnknown`.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe ComPtr](../windows/comptr-class.md)