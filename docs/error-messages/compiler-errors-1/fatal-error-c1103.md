---
title: Errore irreversibile C1103 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1103
dev_langs:
- C++
helpviewer_keywords:
- C1103
ms.assetid: 9d276939-9c47-4235-9d20-76b8434f9731
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d9e48d827c58ebf41ce3cf3862cbfbeaa494cf76
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055949"
---
# <a name="fatal-error-c1103"></a>Errore irreversibile C1103

errore irreversibile durante l'importazione del progid: 'message'

Il compilatore ha rilevato un problema durante l'importazione di una libreria dei tipi.  Non è possibile, ad esempio, specificare una libreria dei tipi con progid e specificare anche `no_registry`.

Per altre informazioni, vedere [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).

L'esempio seguente genera l'errore C1103:

```
// C1103.cpp
#import "progid:a.b.id.1.5" no_registry auto_search   // C1103
```