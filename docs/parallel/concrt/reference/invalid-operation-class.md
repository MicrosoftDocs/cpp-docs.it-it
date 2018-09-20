---
title: Classe invalid_operation | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- invalid_operation
- CONCRT/concurrency::invalid_operation
- CONCRT/concurrency::invalid_operation::invalid_operation
dev_langs:
- C++
helpviewer_keywords:
- invalid_operation class
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9e903a3d5e269a273a191fd733ff8813b75b53a5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416909"
---
# <a name="invalidoperation-class"></a>Classe invalid_operation

Questa classe descrive un'eccezione generata quando viene eseguita un'operazione non valida non più descritta in maniera accurata da un altro tipo di eccezione generata dal runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```
class invalid_operation : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[invalid_operation](#ctor)|Di overload. Costruisce un oggetto `invalid_operation`.|

## <a name="remarks"></a>Note

Nei vari metodi che generano tale eccezione vengono di solito documentate le circostanze nelle quali verrà generata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_operation`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> invalid_operation

Costruisce un oggetto `invalid_operation`.

```
explicit _CRTIMP invalid_operation(_In_z_ const char* _Message) throw();

invalid_operation() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
