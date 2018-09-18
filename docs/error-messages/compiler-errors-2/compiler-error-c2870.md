---
title: Errore del compilatore C2870 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2870
dev_langs:
- C++
helpviewer_keywords:
- C2870
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47101cbc2fb1be48ba54166b9c6ef99fc0c6c35e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46073876"
---
# <a name="compiler-error-c2870"></a>Errore del compilatore C2870

'name': una definizione dello spazio dei nomi deve comparire in ambito file o immediatamente all'interno di un'altra definizione dello spazio dei nomi

È definito lo spazio dei nomi `name` in modo non corretto. Gli spazi dei nomi deve essere definita nell'ambito file (all'esterno di tutti i blocchi e le classi) o immediatamente all'interno di un altro spazio dei nomi.

L'esempio seguente genera l'errore C2870:

```
// C2870.cpp
// compile with: /c
int main() {
   namespace A { int i; };   // C2870
}
```