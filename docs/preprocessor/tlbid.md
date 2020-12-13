---
description: 'Altre informazioni su: TLBID Import Attribute'
title: attributo di importazione TLBID
ms.date: 08/29/2019
f1_keywords:
- tlbid
helpviewer_keywords:
- tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
ms.openlocfilehash: 9bbf15f64c1813013fcd839a2d4f0a34c9872aff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339045"
---
# <a name="tlbid-import-attribute"></a>attributo di importazione TLBID

**Sezione specifica C++**

Consente di caricare librerie diverse dalla libreria dei tipi primaria.

## <a name="syntax"></a>Sintassi

> **#import** *Type-Library-DLL* **TLBID (** *Number* **)**

### <a name="parameters"></a>Parametri

*numero*\
Il numero della libreria dei tipi in *Type-Library-DLL*.

## <a name="remarks"></a>Commenti

Se più librerie dei tipi sono compilate in una singola DLL, è possibile caricare librerie diverse dalla libreria dei tipi primaria usando **TLBID**.

Ad esempio:

```cpp
#import <MyResource.dll> tlbid(2)
```

Equivale a:

```cpp
LoadTypeLib("MyResource.dll\\2");
```

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
