---
title: attributo di importazione no_dual_interfaces
ms.date: 08/29/2019
f1_keywords:
- no_dual_interfaces
helpviewer_keywords:
- no_dual_interfaces attribute
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
ms.openlocfilehash: 6270888f0d31e4fbe18fb3364995be8c73426b83
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220758"
---
# <a name="no_dual_interfaces-import-attribute"></a>attributo di importazione no_dual_interfaces

**C++Specifico**

Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **no_dual_interfaces**

## <a name="remarks"></a>Note

In genere, il wrapper chiama il metodo tramite la tabella di funzioni virtuali per l'interfaccia. Con **no_dual_interfaces**, il wrapper chiama `IDispatch::Invoke` invece per richiamare il metodo.

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
