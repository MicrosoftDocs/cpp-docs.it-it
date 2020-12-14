---
description: 'Altre informazioni su: errore del compilatore C2383'
title: Errore del compilatore C2383
ms.date: 11/04/2016
f1_keywords:
- C2383
helpviewer_keywords:
- C2383
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
ms.openlocfilehash: 862346d7f2bfe92a5d2182a7fe53f260b357ad0b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185934"
---
# <a name="compiler-error-c2383"></a>Errore del compilatore C2383

'*Symbol*': gli argomenti predefiniti non sono consentiti su questo simbolo

Il compilatore C++ non consente argomenti predefiniti sui puntatori alle funzioni.

Questo codice è stato accettato dal compilatore Microsoft C++ nelle versioni precedenti a Visual Studio 2005, ma ora restituisce un errore. Per il codice che funziona in tutte le versioni di Visual C++, non assegnare un valore predefinito a un argomento puntatore a funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera C2383 e Mostra una possibile soluzione:

```cpp
// C2383.cpp
// compile with: /c
void (*pf)(int = 0);   // C2383
void (*pf)(int);   // OK
```
