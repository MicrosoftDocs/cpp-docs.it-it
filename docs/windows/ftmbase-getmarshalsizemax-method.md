---
title: 'Metodo ftmbase:: GetMarshalSizeMax | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax
dev_langs:
- C++
helpviewer_keywords:
- GetMarshalSizeMax method
ms.assetid: b416b1bf-c73e-45d5-abb8-04921c1a0c94
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: baa1597a3ef0ba7014408e15cacc71bce618cd5d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42590585"
---
# <a name="ftmbasegetmarshalsizemax-method"></a>Metodo FtmBase::GetMarshalSizeMax

Ottenere il limite superiore al numero di byte necessari per effettuare il marshalling il puntatore di interfaccia specificata sull'oggetto specificato.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHODIMP GetMarshalSizeMax(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out DWORD *pSize
) override;
```

### <a name="parameters"></a>Parametri

*riid*  
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling.

*PV*  
Puntatore a interfaccia da sottoporre a marshalling; può essere NULL.

*dwDestContext*  
Contesto di destinazione in cui l'interfaccia specificata deve essere sottoposta a unmarshalling.

Specificare uno o più valori di enumerazione MSHCTX.

Attualmente, l'unmarshalling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer come processo corrente (MSHCTX_LOCAL).

*pvDestContext*  
Riservato per utilizzi futuri; deve essere NULL.

*mshlflags*  
Flag che indica se i dati da sottoporre a marshalling deve essere trasmesso al processo client, ovvero il caso tipico, o scritti in una tabella globale, in cui può essere recuperato da più client. Specificare uno o più valori di enumerazione MSHLFLAGS.

*pSize*  
Quando questa operazione viene completata, puntatore al limite massimo sulla quantità di dati da scrivere nel flusso di marshalling.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_FAIL o E_NOINTERFACE.

## <a name="requirements"></a>Requisiti

**Intestazione:** ftm.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe FtmBase](../windows/ftmbase-class.md)