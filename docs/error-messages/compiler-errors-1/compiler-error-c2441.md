---
title: Errore del compilatore C2441
ms.date: 11/04/2016
f1_keywords:
- C2441
helpviewer_keywords:
- C2441
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
ms.openlocfilehash: 4e5d5335717ec77c61069ad08e209f9e1851dc2f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80205309"
---
# <a name="compiler-error-c2441"></a>Errore del compilatore C2441

> '*Variable*': un simbolo dichiarato con __declspec (Process) deve essere const in modalità/CLR: pure

## <a name="remarks"></a>Osservazioni

Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Per impostazione predefinita, le variabili sono per dominio applicazione in **/CLR: pure**. Una variabile contrassegnata come `__declspec(process)` in **/CLR: pure** è soggetta a errori se modificata in un dominio dell'applicazione e letta in un'altra.

Il compilatore impone pertanto le variabili in base al processo `const` in **/CLR: pure**, rendendole di sola lettura in tutti i domini applicazione.

Per altre informazioni, vedere [Process](../../cpp/process.md) e [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2441.

```cpp
// C2441.cpp
// compile with: /clr:pure /c
__declspec(process) int i;   // C2441
__declspec(process) const int j = 0;   // OK
```
