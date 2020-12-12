---
description: 'Altre informazioni su: errore del compilatore C3237'
title: Errore del compilatore C3237
ms.date: 11/04/2016
f1_keywords:
- C3237
helpviewer_keywords:
- C3237
ms.assetid: 690970c8-e13b-4ff3-96e3-5fd93c4d356b
ms.openlocfilehash: 4cfb42f7b8267623d085794822f2688c8798b2d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307483"
---
# <a name="compiler-error-c3237"></a>Errore del compilatore C3237

'generic_class': una classe generica non può essere un attributo personalizzato

Le classi generiche non possono essere attributi definiti dall'utente.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3237.

```cpp
// C3237.cpp
// compile with: /clr /c
// C3237 expected
using namespace System;

generic <class T>
// Delete the following line to resolve.
[attribute(AttributeTargets::All, AllowMultiple=true)]
public ref class GR {};
```
