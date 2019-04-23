---
title: raw_interfaces_only
ms.date: 11/04/2016
f1_keywords:
- raw_interfaces_only
helpviewer_keywords:
- raw_interfaces_only attribute
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
ms.openlocfilehash: 48133b85ccb5ddb8de8e6cb614d41cde22dac66b
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59028260"
---
# <a name="rawinterfacesonly"></a>raw_interfaces_only
**Sezione specifica C++**

Elimina la generazione di funzioni wrapper di gestione degli errori e [proprietà](../cpp/property-cpp.md) dichiarazioni che utilizzano tali funzioni.

## <a name="syntax"></a>Sintassi

```
raw_interfaces_only
```

## <a name="remarks"></a>Note

Il **raw_interfaces_only** attributo determina anche il prefisso predefinito usato nei nomi di funzioni non di proprietà da rimuovere. È in genere il prefisso **raw _**. Se viene specificato questo attributo, i nomi delle funzioni vengono derivati direttamente dalla libreria dei tipi.

Questo attributo consente di esporre solo i contenuti di basso livello della libreria dei tipi.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)