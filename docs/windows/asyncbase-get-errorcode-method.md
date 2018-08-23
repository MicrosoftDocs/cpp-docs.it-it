---
title: 'Metodo asyncbase:: Get_errorcode | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::get_ErrorCode
dev_langs:
- C++
helpviewer_keywords:
- get_ErrorCode method
ms.assetid: 50b4f8a2-9a21-4ea0-bb5d-7ff524d62aea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8e1e9355b6063ae67a40373828f394e3e6334f7d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42613422"
---
# <a name="asyncbasegeterrorcode-method"></a>Metodo AsyncBase::get_ErrorCode

Recupera il codice di errore per l'operazione asincrona corrente.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   get_ErrorCode
)(HRESULT* errorCode) override;
```

### <a name="parameters"></a>Parametri

*codice di errore*  
Il percorso in cui è archiviato il codice di errore corrente.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL se l'operazione asincrona corrente è chiuso.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)