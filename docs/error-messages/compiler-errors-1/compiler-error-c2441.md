---
description: 'Altre informazioni su: errore del compilatore C2441'
title: Errore del compilatore C2441
ms.date: 11/04/2016
f1_keywords:
- C2441
helpviewer_keywords:
- C2441
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
ms.openlocfilehash: d7a6073be821fcd2717caae258c5b3f397fb3f87
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189730"
---
# <a name="compiler-error-c2441"></a>Errore del compilatore C2441

> '*Variable*': un simbolo dichiarato con __declspec (Process) deve essere const in modalità/CLR: pure

## <a name="remarks"></a>Commenti

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per impostazione predefinita, le variabili sono per dominio applicazione in **/CLR: pure**. Una variabile contrassegnata in `__declspec(process)` **/CLR: pure** è soggetta a errori se modificata in un dominio dell'applicazione e letta in un'altra.

Il compilatore impone pertanto le variabili per processo in **`const`** **/CLR: pure**, rendendole di sola lettura in tutti i domini applicazione.

Per altre informazioni, vedere [Process](../../cpp/process.md) e [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2441.

```cpp
// C2441.cpp
// compile with: /clr:pure /c
__declspec(process) int i;   // C2441
__declspec(process) const int j = 0;   // OK
```
