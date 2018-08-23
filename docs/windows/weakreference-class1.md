---
title: WeakReference Class1 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference
dev_langs:
- C++
helpviewer_keywords:
- WeakReference class
ms.assetid: 3f4c956b-dbbd-49b1-8cfa-9509a9956c97
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a9b7270a03192a6fcf53f0c2ecfd1af07a216243
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595531"
---
# <a name="weakreference-class1"></a>WeakReference Class1

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class WeakReference;
```

## <a name="remarks"></a>Note

Rappresenta un *riferimento debole* che può essere utilizzato con il Runtime di Windows o da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

Oggetto **WeakReference** oggetto mantiene una *riferimento sicuro*, che è un puntatore a un oggetto e un *conteggio dei riferimenti forti*, che corrisponde al numero di copie della forte riferimento che sono stati distribuiti per la `Resolve()` (metodo). Anche se il conteggio dei riferimenti forti è diverso da zero, il riferimento sicuro è valido e l'oggetto è accessibile. Quando il conteggio dei riferimenti forti diventa zero, il riferimento sicuro non è valido e l'oggetto non è accessibile.

Oggetto **WeakReference** oggetto viene in genere usato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o un thread esterno. Ad esempio, creare un **WeakReference** oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

Il **WeakReference** metodi sono thread-safe.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore WeakReference::WeakReference](../windows/weakreference-weakreference-constructor.md)|Inizializza una nuova istanza di **WeakReference** classe.|
|[Distruttore WeakReference::~WeakReference](../windows/weakreference-tilde-weakreference-destructor.md)|Deinizializza (Elimina) l'istanza corrente del **WeakReference** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo WeakReference::DecrementStrongReference](../windows/weakreference-decrementstrongreference-method.md)|Decrementa il riferimento sicuro conteggio dell'oggetto corrente **WeakReference** oggetto.|
|[Metodo WeakReference::IncrementStrongReference](../windows/weakreference-incrementstrongreference-method.md)|Incrementa il conteggio dei riferimenti forti dell'oggetto corrente **WeakReference** oggetto.|
|[Metodo WeakReference::Resolve](../windows/weakreference-resolve-method.md)|Imposta il puntatore specificato per il valore di riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.|
|[Metodo WeakReference::SetUnknown](../windows/weakreference-setunknown-method.md)|Imposta il riferimento sicuro dell'oggetto corrente **WeakReference** oggetto al puntatore a interfaccia specificato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WeakReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)