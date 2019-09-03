---
title: attributo di importazione no_namespace
ms.date: 08/29/2019
f1_keywords:
- no_namespace
helpviewer_keywords:
- no_namespace attribute
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
ms.openlocfilehash: ba52aed69cdbb46c135e6de5078d718e93f99c87
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220734"
---
# <a name="no_namespace-import-attribute"></a>attributo di importazione no_namespace

**C++Specifico**

Specifica che il compilatore non genera un nome di spazio dei nomi.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **no_namespace**

## <a name="remarks"></a>Note

Il contenuto della libreria di tipi nel file di intestazione `#import` è in genere definito in uno spazio dei nomi. Il nome dello spazio dei nomi viene `library` specificato nell'istruzione del file IDL originale. Se viene specificato l'attributo **no_namespace** , questo spazio dei nomi non viene generato dal compilatore.

Se si vuole usare un nome di spazio dei nomi diverso, usare invece l'attributo [rename_namespace](../preprocessor/rename-namespace.md) .

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
