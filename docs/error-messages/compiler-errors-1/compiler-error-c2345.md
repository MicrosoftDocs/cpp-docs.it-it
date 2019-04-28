---
title: Errore del compilatore C2345
ms.date: 11/04/2016
f1_keywords:
- C2345
helpviewer_keywords:
- C2345
ms.assetid: e1cc88b0-0223-4d07-975b-fa99956a82bd
ms.openlocfilehash: ceb2a835ca94399f27640628105afcde986af1b0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62188309"
---
# <a name="compiler-error-c2345"></a>Errore del compilatore C2345

align(value): valore di allineamento non valido

Alla parola chiave [align](../../cpp/align-cpp.md) è stato passato un valore che non rientra nell'intervallo consentito.

Il codice seguente genera l'errore C2345

```
// C2345.cpp
// compile with: /c
__declspec(align(0)) int a;   // C2345
__declspec(align(1)) int a;   // OK
```