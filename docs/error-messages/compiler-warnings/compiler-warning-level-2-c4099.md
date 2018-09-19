---
title: Compilatore avviso (livello 2) C4099 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4099
dev_langs:
- C++
helpviewer_keywords:
- C4099
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2d7ffee02e8e5414a0e06cc4ba0da77a50c75f53
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110172"
---
# <a name="compiler-warning-level-2-c4099"></a>Avviso del compilatore (livello 2) C4099

'identifier': nome del tipo in precedenza utilizzava 'tipooggetto1' ora usando 'objecttype2'

Un oggetto dichiarato come una struttura è definito come una classe o un oggetto dichiarato come una classe viene definito come una struttura. Il compilatore Usa il tipo specificato nella definizione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4099.

```
// C4099.cpp
// compile with: /W2 /c
struct A;
class A {};   // C4099, use different identifer or use same object type
```