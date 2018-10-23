---
title: high_method_prefix | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- high_method_prefix
dev_langs:
- C++
helpviewer_keywords:
- high_method_prefix attribute
ms.assetid: cacebf09-12f5-4919-ad40-939e206e340c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1fb69b9fbb7ede0ca458007aec1bee2cf38e286f
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49807718"
---
# <a name="highmethodprefix"></a>high_method_prefix

**Sezione specifica C++**

Specifica un prefisso da utilizzare quando si assegna un nome alle proprietà e ai metodi di alto livello.

## <a name="syntax"></a>Sintassi

```
high_method_prefix("Prefix")
```

### <a name="parameters"></a>Parametri

*Prefix*<br/>
Prefisso da utilizzare.

## <a name="remarks"></a>Note

Per impostazione predefinita, le proprietà e i metodi di gestione degli errori di alto livello vengono esposti dalle funzioni membro denominate senza un prefisso. I nomi provengono dalla libreria dei tipi.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)