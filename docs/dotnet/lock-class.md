---
title: Classe lock
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- msclr::lock
- msclr.lock
- lock
helpviewer_keywords:
- lock class
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
ms.openlocfilehash: 8876810b15a7d2736f2c8ab0ca1f4c6011918a5f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50547134"
---
# <a name="lock-class"></a>Classe lock

Questa classe consente di automatizzare l'acquisizione di un blocco per la sincronizzazione dell'accesso a un oggetto da più thread.  Quando viene costruito viene acquisito il blocco e quando viene eliminato rilasci il blocco.

## <a name="syntax"></a>Sintassi

```
ref class lock;
```

## <a name="remarks"></a>Note

`lock` è disponibile solo per gli oggetti CLR e può essere usato solo nel codice CLR.

Internamente, la classe Usa blocco <xref:System.Threading.Monitor> per sincronizzare l'accesso. Vedere questo argomento per informazioni più dettagliate sulla sincronizzazione.

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\lock.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[lock](../dotnet/lock.md)<br/>
[Membri lock](../dotnet/lock-members.md)