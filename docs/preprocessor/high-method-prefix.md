---
title: high_method_prefix
ms.date: 10/18/2018
f1_keywords:
- high_method_prefix
helpviewer_keywords:
- high_method_prefix attribute
ms.assetid: cacebf09-12f5-4919-ad40-939e206e340c
ms.openlocfilehash: 1575b2e3fee461ee0e3987aaf1e770d0611e31ec
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383756"
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