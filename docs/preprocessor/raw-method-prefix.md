---
title: raw_method_prefix
ms.date: 10/18/2018
f1_keywords:
- raw_method_prefix
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
ms.openlocfilehash: 4169b4e23049bf1cf2c61eaefba619169e0ce377
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467766"
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
> Gli effetti del **raw_method_prefix** attributo non verrà modificato dalla presenza delle [raw_interfaces_only](#_predir_raw_interfaces_only) attributo. Il **raw_method_prefix** ha sempre la precedenza su `raw_interfaces_only` nello specificare un prefisso. Se entrambi gli attributi vengono utilizzati nella stessa `#import` istruzione, quindi il prefisso specificato per il **raw_method_prefix** viene utilizzato l'attributo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)