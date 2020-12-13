---
description: 'Altre informazioni su: no_dual_interfaces attributo Import'
title: no_dual_interfaces attributo Import
ms.date: 08/29/2019
f1_keywords:
- no_dual_interfaces
helpviewer_keywords:
- no_dual_interfaces attribute
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
ms.openlocfilehash: 1c3010b252ac71e38312fa193520938fbb4d681a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333339"
---
# <a name="no_dual_interfaces-import-attribute"></a>no_dual_interfaces attributo Import

**Sezione specifica C++**

Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.

## <a name="syntax"></a>Sintassi

> **#import** **no_dual_interfaces** della *libreria di tipi*

## <a name="remarks"></a>Commenti

In genere, il wrapper chiama il metodo tramite la tabella di funzioni virtuali per l'interfaccia. Con **no_dual_interfaces**, il wrapper chiama invece `IDispatch::Invoke` per richiamare il metodo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
