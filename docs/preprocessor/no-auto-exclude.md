---
title: attributo di importazione no_auto_exclude
ms.date: 08/29/2019
f1_keywords:
- no_auto_exclude
helpviewer_keywords:
- no_auto_exclude attribute
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
ms.openlocfilehash: 530c2b2adf24e964cb0a512371f4430a61bf8b11
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216082"
---
# <a name="no_auto_exclude-import-attribute"></a>attributo di importazione no_auto_exclude

**C++Specifico**

Disabilita l'esclusione automatica.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **no_auto_exclude**

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi. Viene generato un [Avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) per ogni elemento da escludere. È possibile disabilitare l'esclusione automatica usando questo attributo.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
