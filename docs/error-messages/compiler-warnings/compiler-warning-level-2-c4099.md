---
title: Avviso del compilatore (livello 2) C4099
ms.date: 11/04/2016
f1_keywords:
- C4099
helpviewer_keywords:
- C4099
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
ms.openlocfilehash: d685f1f40826b975623dbedc2ba8115c6b3edc45
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052176"
---
# <a name="compiler-warning-level-2-c4099"></a>Avviso del compilatore (livello 2) C4099

' Identifier ': il nome del tipo visualizzato per primo con ' objecttype1' è ora visibile con ' objecttype2'

Un oggetto dichiarato come una struttura è definito come una classe o un oggetto dichiarato come una classe è definito come una struttura. Il compilatore usa il tipo specificato nella definizione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4099.

```cpp
// C4099.cpp
// compile with: /W2 /c
struct A;
class A {};   // C4099, use different identifer or use same object type
```