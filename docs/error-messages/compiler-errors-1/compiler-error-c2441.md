---
title: Errore del compilatore C2441
ms.date: 11/04/2016
f1_keywords:
- C2441
helpviewer_keywords:
- C2441
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
ms.openlocfilehash: 7fcf333f62253eb676c0f0ada1c927ab962ae1ca
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62338922"
---
# <a name="compiler-error-c2441"></a>Errore del compilatore C2441

> «*variabile*': un simbolo dichiarato con declspec (Process) deve essere const in /clr: pure modalità

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

Per impostazione predefinita, le variabili sono per ogni dominio dell'applicazione sotto **/clr: pure**. Una variabile contrassegnata `__declspec(process)` sotto **/clr: pure** è soggetta a errori se modificato in un dominio dell'applicazione e letti in un altro.

Pertanto, il compilatore applica le variabili per processo `const` sotto **/clr: pure**, rendere loro letti solo in tutti i domini applicazione.

Per altre informazioni, vedere [processo](../../cpp/process.md) e [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2441.

```cpp
// C2441.cpp
// compile with: /clr:pure /c
__declspec(process) int i;   // C2441
__declspec(process) const int j = 0;   // OK
```