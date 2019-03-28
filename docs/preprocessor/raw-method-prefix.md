---
title: raw_method_prefix
ms.date: 03/27/2019
f1_keywords:
- raw_method_prefix
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
ms.openlocfilehash: c3015cf8b51646d25fd8f36a7336c63dc8fe492b
ms.sourcegitcommit: 309dc532f13242854b47759cef846de59bb807f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/28/2019
ms.locfileid: "58565597"
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