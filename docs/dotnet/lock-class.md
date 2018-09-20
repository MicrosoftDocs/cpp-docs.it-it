---
title: Classe lock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::lock
- msclr.lock
- lock
dev_langs:
- C++
helpviewer_keywords:
- lock class
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7ef0887ca3eec7510717aab21ba4c6c7aba98d25
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380295"
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