---
title: raw_method_prefix
ms.date: 03/27/2019
f1_keywords:
- raw_method_prefix
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
ms.openlocfilehash: 963e04752dcb797343550d9b89f778bfe0e8a593
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179867"
---
# <a name="rawmethodprefix"></a>raw_method_prefix

**Sezione specifica C++**

Specifica un prefisso diverso per evitare conflitti di nomi.

## <a name="syntax"></a>Sintassi

```
raw_method_prefix("Prefix")
```

### <a name="parameters"></a>Parametri

*Prefix*<br/>
Prefisso da utilizzare.

## <a name="remarks"></a>Note

Metodi e proprietà di basso livello vengono esposti dalle funzioni membro denominate con il prefisso predefinito **raw _** per evitare conflitti di nomi con le funzioni membro di gestione degli errori generali.

> [!NOTE]
> Gli effetti del **raw_method_prefix** attributo non verrà modificato dalla presenza delle [raw_interfaces_only](raw-interfaces-only.md) attributo. Il **raw_method_prefix** ha sempre la precedenza su `raw_interfaces_only` nello specificare un prefisso. Se entrambi gli attributi vengono utilizzati nella stessa `#import` istruzione, quindi il prefisso specificato per il **raw_method_prefix** viene utilizzato l'attributo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)