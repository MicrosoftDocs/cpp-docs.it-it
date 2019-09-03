---
title: attributo di importazione no_implementation
ms.date: 08/29/2019
f1_keywords:
- no_implementation
helpviewer_keywords:
- no_implementation attribute
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
ms.openlocfilehash: 8f0a7454fdbedc1959b665ccb2a23748d21c342d
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220779"
---
# <a name="no_implementation-import-attribute"></a>attributo di importazione no_implementation

**C++Specifico**

Evita la generazione dell' `.tli` intestazione, che contiene le implementazioni delle funzioni membro wrapper.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **no_implementation**

## <a name="remarks"></a>Note

Se viene specificato questo attributo, l' `.tlh` intestazione, con le dichiarazioni per esporre gli elementi della libreria dei tipi, verrà generata senza un' `#include` istruzione per includere il `.tli` file di intestazione.

Questo attributo viene usato insieme a [implementation_only](../preprocessor/implementation-only.md).

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
