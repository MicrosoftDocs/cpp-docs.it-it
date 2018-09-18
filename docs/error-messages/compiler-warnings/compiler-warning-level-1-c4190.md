---
title: Compilatore Warning (level 1) C4190 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4190
dev_langs:
- C++
helpviewer_keywords:
- C4190
ms.assetid: a4d0ad93-a19a-4063-addd-36d605831567
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d398331c159c6fc639160dbe54d6ab5f969d3dbd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46063736"
---
# <a name="compiler-warning-level-1-c4190"></a>Compilatore Warning (level 1) C4190

'identifier1' ha specificato un collegamento C, ma restituisce tipi definiti dall'utente 'identifier2' che è incompatibile con C

Una funzione o un puntatore a funzione dispone di un tipo definito dall'utente (tipo definito dall'utente, ovvero una classe, struttura, enum o unione) come tipo restituito e `extern` collegamento "C". Tale operazione è valida se:

- Tutte le chiamate a questa funzione si verificano da C++.

- La definizione della funzione è in C++.

## <a name="example"></a>Esempio

```cpp
// C4190.cpp
// compile with: /W1 /LD
struct X
{
   int i;
   X ();
   virtual ~X ();
};

extern "C" X func ();   // C4190
```