---
title: Includi attributo di importazione ()
ms.date: 08/29/2019
f1_keywords:
- include()
helpviewer_keywords:
- include() attribute
ms.assetid: 86c9dcb2-d9e0-4fd5-97d7-0bb3e23d6ecc
ms.openlocfilehash: 39ab63525b2b83781cbcaf86a61742c5fb767b72
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70218875"
---
# <a name="include-import-attribute"></a>Includi attributo di importazione ()

**C++Specifico**

Disabilita l'esclusione automatica.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **include ("** _name1_ **"** [ __, "__ *name2* __"__ ...] __)__

### <a name="parameters"></a>Parametri

*Name1*\
Primo elemento da includere forzatamente.

*Name2*\
Secondo elemento da includere forzatamente (se necessario).

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi. Se alcuni elementi non devono essere esclusi automaticamente, è possibile che venga visualizzato un [Avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md). È possibile utilizzare questo attributo per disabilitare l'esclusione automatica. Questo attributo può assumere un numero qualsiasi di argomenti, uno per ogni nome di un elemento della libreria dei tipi da includere.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
