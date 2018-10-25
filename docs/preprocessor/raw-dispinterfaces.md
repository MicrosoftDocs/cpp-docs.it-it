---
title: raw_dispinterfaces | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_dispinterfaces
dev_langs:
- C++
helpviewer_keywords:
- raw_dispinterfaces attribute
ms.assetid: f762864d-29bf-445b-825a-ba7b29a95409
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b89c1f549168a762b5ae095c4eacf5ddb1b4d053
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50062353"
---
# <a name="rawdispinterfaces"></a>raw_dispinterfaces
**Sezione specifica C++**

Indica al compilatore di generare funzioni wrapper di basso livello per i metodi di interfaccia dispatch e proprietà che chiamano `IDispatch::Invoke` e restituire il codice di errore HRESULT.

## <a name="syntax"></a>Sintassi

```
raw_dispinterfaces
```

## <a name="remarks"></a>Note

Se questo attributo non viene specificato, solo i wrapper di alto livello vengono generati, che generano eccezioni C++ in caso di errore.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)