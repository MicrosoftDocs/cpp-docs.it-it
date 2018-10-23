---
title: raw_method_prefix | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_method_prefix
dev_langs:
- C++
helpviewer_keywords:
- raw_method_prefix attribute
ms.assetid: 71490313-af78-4bb2-b28a-eee67950d30b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78094053c963f5d836646e91857e171625c447c9
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808550"
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