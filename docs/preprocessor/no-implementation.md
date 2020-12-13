---
description: 'Altre informazioni su: no_implementation attributo Import'
title: no_implementation attributo Import
ms.date: 08/29/2019
f1_keywords:
- no_implementation
helpviewer_keywords:
- no_implementation attribute
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
ms.openlocfilehash: 0cfd51b344847d2e5658fd4e4ec1a9f30db51fe6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333322"
---
# <a name="no_implementation-import-attribute"></a>no_implementation attributo Import

**Sezione specifica C++**

Evita la generazione dell' `.tli` intestazione, che contiene le implementazioni delle funzioni membro wrapper.

## <a name="syntax"></a>Sintassi

> **#import** **no_implementation** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Se viene specificato questo attributo, l' `.tlh` intestazione, con le dichiarazioni per esporre gli elementi della libreria dei tipi, verrà generata senza un' `#include` istruzione per includere il `.tli` file di intestazione.

Questo attributo viene utilizzato in combinazione con [implementation_only](../preprocessor/implementation-only.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
