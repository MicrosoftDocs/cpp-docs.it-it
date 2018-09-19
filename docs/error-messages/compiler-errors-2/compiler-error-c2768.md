---
title: Errore del compilatore C2768 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2768
dev_langs:
- C++
helpviewer_keywords:
- C2768
ms.assetid: a7f6047a-6a80-4737-ad5c-c12868639fb5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c76173f99dbc2fb415b60212109242845501694
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109106"
---
# <a name="compiler-error-c2768"></a>Errore del compilatore C2768

'function': utilizzo non valido di argomenti di modello espliciti

Il compilatore non è riuscito a determinare se una definizione di funzione doveva per essere una specializzazione esplicita di un modello di funzione o se la definizione di funzione doveva per essere per una nuova funzione.

Questo errore è stato introdotto in Visual Studio .NET 2003 come parte dei miglioramenti della conformità del compilatore.

L'esempio seguente genera l'errore C2768:

```
// C2768.cpp
template<typename T>
void f(T) {}

void f<int>(int) {}   // C2768

// an explicit specialization
template<>
void f<int>(int) {}

// global nontemplate function overload
void f(int) {}
```