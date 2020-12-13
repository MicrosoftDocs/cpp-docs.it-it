---
description: 'Altre informazioni su: no_auto_exclude attributo Import'
title: no_auto_exclude attributo Import
ms.date: 08/29/2019
f1_keywords:
- no_auto_exclude
helpviewer_keywords:
- no_auto_exclude attribute
ms.assetid: 3241ef9c-758a-4e86-bdc5-37da6072430f
ms.openlocfilehash: 81e4d7e7f9295a4ed983e2a5024d891e30fe1361
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333350"
---
# <a name="no_auto_exclude-import-attribute"></a>no_auto_exclude attributo Import

**Sezione specifica C++**

Disabilita l'esclusione automatica.

## <a name="syntax"></a>Sintassi

> **#import** **no_auto_exclude** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. `#import` tenta di evitare più errori di definizione escludendo automaticamente tali elementi. Viene generato un [Avviso del compilatore (livello 3) C4192](../error-messages/compiler-warnings/compiler-warning-level-3-c4192.md) per ogni elemento da escludere. È possibile disabilitare l'esclusione automatica usando questo attributo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
