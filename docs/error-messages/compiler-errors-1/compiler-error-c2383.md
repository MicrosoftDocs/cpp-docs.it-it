---
title: Errore del compilatore C2383
ms.date: 11/04/2016
f1_keywords:
- C2383
helpviewer_keywords:
- C2383
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
ms.openlocfilehash: 2aa922ebeadb374a7eac73a0f452376472b00984
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80206028"
---
# <a name="compiler-error-c2383"></a>Errore del compilatore C2383

'*Symbol*': gli argomenti predefiniti non sono consentiti su questo simbolo

Il C++ compilatore non consente argomenti predefiniti sui puntatori alle funzioni.

Questo codice è stato accettato dal compilatore C++ Microsoft nelle versioni precedenti a Visual Studio 2005, ma ora restituisce un errore. Per il codice che funziona in tutte le versioni C++di visuale, non assegnare un valore predefinito a un argomento puntatore a funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera C2383 e Mostra una possibile soluzione:

```cpp
// C2383.cpp
// compile with: /c
void (*pf)(int = 0);   // C2383
void (*pf)(int);   // OK
```
