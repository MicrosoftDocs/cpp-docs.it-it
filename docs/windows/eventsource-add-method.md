---
title: 'Metodo EventSource:: Add | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::Add
dev_langs:
- C++
helpviewer_keywords:
- Add method
ms.assetid: 8bded85b-929e-4425-a464-e5de67bb774c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a13c5b48a7e242f47903fda038331fd126832dcf
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42592231"
---
# <a name="eventsourceadd-method"></a>Metodo EventSource::Add

Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente **EventSource** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT Add(
   _In_ TDelegateInterface* delegateInterface,
   _Out_ EventRegistrationToken* token
);
```

### <a name="parameters"></a>Parametri

*delegateInterface*  
L'interfaccia per un oggetto delegato, che rappresenta un gestore eventi.

*token*  
Quando questa operazione viene completata, un handle che rappresenta l'evento. Usare questo token come parametro per il [Remove ()](../windows/eventsource-remove-method.md) metodo rimuovere il gestore dell'evento.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
[Classe EventSource](../windows/eventsource-class.md)