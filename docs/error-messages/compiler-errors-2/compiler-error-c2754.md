---
title: Errore del compilatore C2754 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2754
dev_langs:
- C++
helpviewer_keywords:
- C2754
ms.assetid: 1cab66c5-da9d-4b81-b7fb-9cdc48ff1ccc
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 67338d647ce1774699973b8f498da9a8887eff11
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46095664"
---
# <a name="compiler-error-c2754"></a>Errore del compilatore C2754

'specialization': una specializzazione parziale non può avere un parametro di modello non di tipo dipendente

È stato effettuato un tentativo per specializzare parzialmente una classe di modello che ha un parametro di modello non di tipo dipendente. ma questa operazione non è consentita.

L'esempio seguente genera l'errore C2754:

```
// C2754.cpp
// compile with: /c

template<class T, T t>
struct A {};

template<class T, int N>
struct B {};

template<class T> struct A<T,5> {};   // C2754
template<> struct A<int,5> {};   // OK
template<class T> struct B<T,5> {};   // OK
```