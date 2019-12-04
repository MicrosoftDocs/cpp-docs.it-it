---
title: Errore irreversibile C1104
ms.date: 11/04/2016
f1_keywords:
- C1104
helpviewer_keywords:
- C1104
ms.assetid: 45bd85c4-77d3-4d3c-b167-49c563aefb4d
ms.openlocfilehash: a26e65e98b44a69eb14daf6d835fafb23362dfa2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747332"
---
# <a name="fatal-error-c1104"></a>Errore irreversibile C1104

errore irreversibile durante l'importazione di libid: 'message'

Il compilatore ha rilevato un problema durante l'importazione di una libreria dei tipi.  Non è possibile, ad esempio, specificare una libreria dei tipi con libid e specificare anche `no_registry`.

Per ulteriori informazioni, vedere [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).

L'esempio seguente genera l'errore C1104:

```cpp
// C1104.cpp
#import "libid:11111111.1111.1111.1111.111111111111" version("4.0") lcid("9") no_registry auto_search   // C1104
```
