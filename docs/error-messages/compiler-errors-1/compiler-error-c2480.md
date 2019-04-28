---
title: Errore del compilatore C2480
ms.date: 11/04/2016
f1_keywords:
- C2480
helpviewer_keywords:
- C2480
ms.assetid: 1a58d1c2-971b-4084-96fa-f94aa51c02f1
ms.openlocfilehash: 90016b65d4ddd58da3fb3c5ab6d81322dc0ef394
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62187614"
---
# <a name="compiler-error-c2480"></a>Errore del compilatore C2480

'identifier': 'thread' è valido solo per gli elementi di dati di estensione statica

Non è possibile usare il `thread` attributo con una variabile automatica, membro dati non statico, parametro della funzione oppure in definizioni o dichiarazioni di funzione.

Usare il `thread` attributo per le variabili globali, i membri dati statici e variabili statiche locali solo.

L'esempio seguente genera l'errore C2480:

```
// C2480.cpp
// compile with: /c
__declspec( thread ) void func();   // C2480
__declspec( thread ) static int i;   // OK
```