---
title: Errore del compilatore C2756 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2756
dev_langs:
- C++
helpviewer_keywords:
- C2756
ms.assetid: 42eb988d-4043-4dee-8fd4-596949f69a55
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 252f212f9034151bc5e77d1d2d6e64e1ee388faa
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46061214"
---
# <a name="compiler-error-c2756"></a>Errore del compilatore C2756

'template type': argomenti di modello predefiniti non consentiti in una specializzazione parziale

Il modello per una specializzazione parziale non può contenere un argomento predefinito.

L'esempio seguente genera l'errore C2756 e mostra come risolverlo:

```
// C2756.cpp
template <class T>
struct S {};

template <class T=int>
// try the following line instead
// template <class T>
struct S<T*> {};   // C2756
```