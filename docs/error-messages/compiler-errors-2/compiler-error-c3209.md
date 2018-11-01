---
title: Errore del compilatore C3209
ms.date: 11/04/2016
f1_keywords:
- C3209
helpviewer_keywords:
- C3209
ms.assetid: 1de44e39-69d1-4894-8f89-ff92136e8e5d
ms.openlocfilehash: f907d0605cccf0a36abd1361d8c87a783bb81506
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50526711"
---
# <a name="compiler-error-c3209"></a>Errore del compilatore C3209

'class': classe generica deve essere un oggetto gestito o WinRTclass

Una classe generica deve essere una classe gestita o una classe di Windows Runtime.

L'esempio seguente genera l'errore C3209 e mostra come risolverlo:

```
// C3209.cpp
// compile with: /clr
generic <class T>
class C {};   // C3209

// OK - ref class can be generic
generic <class T>
ref class D {};
```