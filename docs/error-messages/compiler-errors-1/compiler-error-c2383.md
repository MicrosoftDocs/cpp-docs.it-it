---
title: Errore del compilatore C2383
ms.date: 11/04/2016
f1_keywords:
- C2383
helpviewer_keywords:
- C2383
ms.assetid: 6696221d-879c-477a-a0f3-a6edc15fd3d7
ms.openlocfilehash: e9c1774fe7cd4a6883aa79f384cc64521a57ed17
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65448010"
---
# <a name="compiler-error-c2383"></a>Errore del compilatore C2383

«*simbolo*': argomenti predefiniti non sono consentiti su questo simbolo

Il compilatore C++ non supporta gli argomenti predefiniti sui puntatori a funzioni.

Questo codice è stato accettato da Microsoft C++ compilatore nelle versioni precedenti a Visual Studio 2005, ma ora genera un errore. Per il codice che funziona in tutte le versioni di Visual C++, non assegnare un valore predefinito a un argomento di puntatore a funzione.

## <a name="example"></a>Esempio

Nell'esempio seguente genera l'errore C2383 e illustra una possibile soluzione:

```cpp
// C2383.cpp
// compile with: /c
void (*pf)(int = 0);   // C2383
void (*pf)(int);   // OK
```