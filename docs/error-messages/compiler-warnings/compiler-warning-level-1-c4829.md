---
title: Avviso del compilatore (livello 1) C4829
ms.date: 11/04/2016
f1_keywords:
- C4829
helpviewer_keywords:
- C4829
ms.assetid: 4ffabe2b-2ddc-4c52-8564-d1355c93cfa6
ms.openlocfilehash: a5c7cd062f22e9888e484f6d254fcf173cf83d1a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199381"
---
# <a name="compiler-warning-level-1-c4829"></a>Avviso del compilatore (livello 1) C4829

Parametri probabilmente errati per la funzione main. Prendere in considerazione ' intmain (Platform:: Array\<Platform:: String ^ > ^ argv)'

Alcune funzioni, ad esempio main, non possono accettare parametri di tipo riferimento. Anche se la compilazione avrà esito positivo, l'immagine risultante probabilmente non verrà eseguita.

L'esempio seguente genera l'errore C4829:

```cpp
// C4829.cpp
// compile by using: cl /EHsc /ZW /W4 /c C4829.cpp
int main(Platform::String ^ s) {}   // C4829
```
