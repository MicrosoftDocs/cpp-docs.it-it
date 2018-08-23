---
title: 'Metodo ftmbase:: DisconnectObject | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::DisconnectObject
dev_langs:
- C++
helpviewer_keywords:
- DisconnectObject method
ms.assetid: 33253eec-3a65-4e72-8525-0249245a4790
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b467162d2f5cc5b04bc43a6d31019eb08e17e750
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595406"
---
# <a name="ftmbasedisconnectobject-method"></a>Metodo FtmBase::DisconnectObject

Rilascia forzatamente tutte le connessioni esterne a un oggetto. Server dell'oggetto chiama l'implementazione dell'oggetto di questo metodo prima dell'arresto.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHODIMP DisconnectObject(
   __in DWORD dwReserved
) override;
```

### <a name="parameters"></a>Parametri

*dwReserved*  
Riservato per utilizzi futuri; deve essere zero.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** ftm.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe FtmBase](../windows/ftmbase-class.md)