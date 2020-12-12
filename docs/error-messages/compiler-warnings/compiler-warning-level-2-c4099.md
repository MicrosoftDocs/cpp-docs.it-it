---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4099'
title: Avviso del compilatore (livello 2) C4099
ms.date: 11/04/2016
f1_keywords:
- C4099
helpviewer_keywords:
- C4099
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
ms.openlocfilehash: c35ce10560ca81f9457f6a21c4c55d96996e7645
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326517"
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
