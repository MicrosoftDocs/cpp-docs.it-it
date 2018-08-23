---
title: 'Metodo ftmbase:: MarshalInterface | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ftm/Microsoft::WRL::FtmBase::MarshalInterface
dev_langs:
- C++
helpviewer_keywords:
- MarshalInterface method
ms.assetid: fc8421b4-06e4-4925-b908-c285fe4790d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a95521123a87a6ae68ce9f923779c1a6ceda4ccf
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599711"
---
# <a name="ftmbasemarshalinterface-method"></a>Metodo FtmBase::MarshalInterface

Scrive in un flusso di dati necessari per inizializzare un oggetto proxy in un processo client.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHODIMP MarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags
) override;
```

### <a name="parameters"></a>Parametri

*pStm*  
Puntatore al flusso da utilizzare durante il marshalling.

*riid*  
Riferimento all'identificatore dell'interfaccia da sottoporre a marshalling. Questa interfaccia deve derivare dal `IUnknown` interfaccia.

*PV*  
Puntatore al puntatore all'interfaccia da sottoporre a marshalling; può essere NULL se il chiamante non ha un puntatore all'interfaccia desiderata.

*dwDestContext*  
Contesto di destinazione in cui l'interfaccia specificata deve essere sottoposta a unmarshalling.

Specificare uno o più valori di enumerazione MSHCTX.

L'unmarshaling può verificarsi in un altro apartment del processo corrente (MSHCTX_INPROC) o in un altro processo nello stesso computer come processo corrente (MSHCTX_LOCAL).

*pvDestContext*  
Riservato per utilizzi futuri; deve essere zero.

*mshlflags*  
Specifica se i dati da sottoporre a marshalling deve essere trasmesso al processo client, ovvero il caso tipico, o scritti in una tabella globale, in cui può essere recuperato da più client.

## <a name="return-value"></a>Valore restituito

S_OK il puntatore di interfaccia è stato effettuato il marshalling correttamente.

E_NOINTERFACE interfaccia specificata non è supportato.

STG_E_MEDIUMFULL il flusso è pieno.

E_FAIL l'operazione non riuscita.

## <a name="requirements"></a>Requisiti

**Intestazione:** ftm.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe FtmBase](../windows/ftmbase-class.md)