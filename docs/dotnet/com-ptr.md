---
title: 'COM:: PTR | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- ptr
dev_langs:
- C++
helpviewer_keywords:
- com::ptr
ms.assetid: ee302e3c-8fed-4875-a372-2e55003718d3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f5e6a3f7936e21d22282fe37a29b5d91f2e50caa
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46434492"
---
# <a name="comptr"></a>com::ptr

Un wrapper per un oggetto COM che può essere utilizzato come membro di una classe CLR. Il wrapper consente anche di automatizzare la gestione della durata dell'oggetto COM, rilasciando i riferimenti di proprietà nell'oggetto quando viene chiamato il distruttore. Analogo a [classe CComPtr](../atl/reference/ccomptr-class.md).

## <a name="syntax"></a>Sintassi

```
#include <msclr\com\ptr.h>
```

## <a name="remarks"></a>Note

[Classe com:: PTR](../dotnet/com-ptr-class.md) definito nel \<msclr\com\ptr.h > file.

## <a name="see-also"></a>Vedere anche

[Libreria di supporto per C++](../dotnet/cpp-support-library.md)