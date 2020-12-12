---
description: 'Altre informazioni su: errore del compilatore C3519'
title: Errore del compilatore C3519
ms.date: 11/04/2016
f1_keywords:
- C3519
helpviewer_keywords:
- C3519
ms.assetid: ca24b2bc-7e90-4448-ae84-3fedddf9bca7
ms.openlocfilehash: f8eb90620894627beab450275c6725d665d837e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113084"
---
# <a name="compiler-error-c3519"></a>Errore del compilatore C3519

' invalid_param ': parametro non valido per embedded_idl attributo

Un parametro è stato passato all' `embedded_idl` attributo di [#import](../../preprocessor/hash-import-directive-cpp.md), ma il compilatore non ha riconosciuto il parametro.

Gli unici parametri consentiti per `embedded_idl` sono `emitidl` e `no_emitidl` .

L'esempio seguente genera l'C3519:

```cpp
// C3519.cpp
// compile with: /LD
[module(name="MyLib2")];
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidcl")
// C3519
#import "C:\testdir\bin\importlib.tlb" embedded_idl("no_emitidl")
// OK
```
