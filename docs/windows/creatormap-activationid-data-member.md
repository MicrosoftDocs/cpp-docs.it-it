---
title: 'Membro dati creatormap:: ActivationID | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap::activationId
dev_langs:
- C++
helpviewer_keywords:
- activationId data member
ms.assetid: 77518b76-6e6a-4b48-8e2e-a4c7c67769e0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d5b50c57a80b2a9aca2681c3ade3c6d4fc3568e0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385989"
---
# <a name="creatormapactivationid-data-member"></a>Membro dati CreatorMap::activationId

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
union {
   const IID* clsid;
   const wchar_t* (*getRuntimeName)();
} activationId;
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID di interfaccia.

*getRuntimeName*<br/>
Una funzione che recupera il nome del runtime di Windows di un oggetto.

## <a name="remarks"></a>Note

Rappresenta un ID di oggetto identificato da un ID di classe COM classico o un nome del runtime di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura CreatorMap](../windows/creatormap-structure.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)