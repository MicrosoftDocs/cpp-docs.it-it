---
title: auto_rename | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- auto_rename
dev_langs:
- C++
helpviewer_keywords:
- auto_rename attribute
ms.assetid: 1075f3ab-f6fc-4e04-8e22-ebe02695a567
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 52147dcf79c73e1f931a3e9b52241308def864c4
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234425"
---
# <a name="autorename"></a>auto_rename

**Sezione specifica C++**

Rinomina parole riservate C++ aggiungendo due caratteri di sottolineatura (__) al nome della variabile per risolvere potenziali conflitti di nomi.

## <a name="syntax"></a>Sintassi

```
auto_rename
```

## <a name="remarks"></a>Note

Questo attributo viene utilizzato quando si importa una libreria dei tipi che utilizza una o più parole riservate C++ (parole chiave o macro) come nomi di variabile.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)