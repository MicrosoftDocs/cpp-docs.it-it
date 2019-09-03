---
title: attributo di importazione no_smart_pointers
ms.date: 08/29/2019
f1_keywords:
- no_smart_pointers
helpviewer_keywords:
- no_smart_pointers attribute
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
ms.openlocfilehash: 1fca3eb486ff3cfc7403c38e91855b799a698782
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220692"
---
# <a name="no_smart_pointers-import-attribute"></a>attributo di importazione no_smart_pointers

**C++Specifico**

Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **no_smart_pointers**

## <a name="remarks"></a>Note

Per impostazione predefinita, quando si utilizza `#import`, si ottiene una dichiarazione del puntatore intelligente per tutte le interfacce nella libreria dei tipi. Questi puntatori intelligenti sono di tipo [_com_ptr_t](../cpp/com-ptr-t-class.md).

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
