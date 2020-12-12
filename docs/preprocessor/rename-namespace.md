---
description: 'Altre informazioni su: rename_namespace attributo Import'
title: rename_namespace attributo Import
ms.date: 08/29/2019
f1_keywords:
- rename_namespace
helpviewer_keywords:
- rename_namespace attribute
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
ms.openlocfilehash: 402d9c9cd8dee5979dd71e16fec1a606d8b4b996
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167383"
---
# <a name="rename_namespace-import-attribute"></a>rename_namespace attributo Import

**Sezione specifica C++**

Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.

## <a name="syntax"></a>Sintassi

> **#import** rename_namespace della *libreria di tipi* **(** "*newname*" **)**

### <a name="parameters"></a>Parametri

*NewName*\
Nuovo nome dello spazio dei nomi.

## <a name="remarks"></a>Commenti

L'attributo **rename_namespace** accetta un solo argomento, *newname*, che specifica il nuovo nome per lo spazio dei nomi.

Per rimuovere lo spazio dei nomi, usare invece l'attributo [no_namespace](../preprocessor/no-namespace.md) .

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
