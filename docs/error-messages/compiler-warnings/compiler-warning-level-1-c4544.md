---
title: Compilatore avviso (livello 1) C4544 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4544
dev_langs:
- C++
helpviewer_keywords:
- C4544
ms.assetid: 11ee04df-41ae-435f-af44-881e801315a8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c7cd274f0d1b595d374e1b108db40a51395b968
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46084276"
---
# <a name="compiler-warning-level-1-c4544"></a>Avviso del compilatore (livello 1) C4544

'declaration': argomento di modello predefinito ignorato in questa dichiarazione di modello

Un argomento di modello predefinito è stato specificato in un percorso non corretto ed è stato ignorato. Un argomento di modello predefinito per un modello di classe può essere specificato solo nella dichiarazione o nella definizione del modello di classe e non in un membro del modello di classe.

Questo esempio genera l'errore C4545 e l'esempio successivo mostra come correggerlo:

```
// C4544.cpp
// compile with: /W1 /LD
template <class T>
struct S
{
   template <class T1>
      struct S1;
   void f();
};

template <class T=int>
template <class T1>
struct S<T>::S1 {};   // C4544
```

In questo esempio, il parametro predefinito si applica al modello di classe `S`:

```
// C4544b.cpp
// compile with: /LD
template <class T = int>
struct S
{
   template <class T1>
      struct S1;
   void f();
};

template <class T>
template <class T1>
struct S<T>::S1 {};
```