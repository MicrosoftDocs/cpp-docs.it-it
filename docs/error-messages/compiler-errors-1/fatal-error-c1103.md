---
title: Errore irreversibile C1103
ms.date: 11/04/2016
f1_keywords:
- C1103
helpviewer_keywords:
- C1103
ms.assetid: 9d276939-9c47-4235-9d20-76b8434f9731
ms.openlocfilehash: f037d1acb281b5997e3486a542784abc4b4b7542
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747384"
---
# <a name="fatal-error-c1103"></a>Errore irreversibile C1103

errore irreversibile durante l'importazione del progid: 'message'

Il compilatore ha rilevato un problema durante l'importazione di una libreria dei tipi.  Non è possibile, ad esempio, specificare una libreria dei tipi con progid e specificare anche `no_registry`.

Per ulteriori informazioni, vedere [#import direttiva](../../preprocessor/hash-import-directive-cpp.md).

L'esempio seguente genera l'errore C1103:

```cpp
// C1103.cpp
#import "progid:a.b.id.1.5" no_registry auto_search   // C1103
```
