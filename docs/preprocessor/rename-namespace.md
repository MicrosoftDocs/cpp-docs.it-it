---
title: attributo di importazione rename_namespace
ms.date: 08/29/2019
f1_keywords:
- rename_namespace
helpviewer_keywords:
- rename_namespace attribute
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
ms.openlocfilehash: d319d7390e7c7dce070a35be44aad37c7a34e1a0
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216650"
---
# <a name="rename_namespace-import-attribute"></a>attributo di importazione rename_namespace

**C++Specifico**

Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **rename_namespace (** "*newname*" **)**

### <a name="parameters"></a>Parametri

*NewName*\
Nuovo nome dello spazio dei nomi.

## <a name="remarks"></a>Note

L'attributo **rename_namespace** accetta un solo argomento, *newname*, che specifica il nuovo nome per lo spazio dei nomi.

Per rimuovere lo spazio dei nomi, usare invece l'attributo [no_namespace](../preprocessor/no-namespace.md) .

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
