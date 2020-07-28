---
title: Avviso del compilatore C4936
ms.date: 11/04/2016
f1_keywords:
- C4936
helpviewer_keywords:
- C4936
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
ms.openlocfilehash: 9b1c3d1de662451432fe4fa0f058c503dc1f7b39
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220119"
---
# <a name="compiler-warning-c4936"></a>Avviso del compilatore C4936

> questo __declspec è supportato solo con la compilazione con /clr o /clr:pure

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

**`__declspec`** È stato usato un modificatore **`__declspec`** , ma tale modificatore è valido solo quando viene compilato con una delle opzioni [/CLR](../../build/reference/clr-common-language-runtime-compilation.md) .

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).

C4936 viene sempre generato come errore.  È possibile disabilitare C4936 con il pragma [warning](../../preprocessor/warning.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'avviso C4936:

```cpp
// C4936.cpp
// compile with: /c
// #pragma warning (disable : 4936)
__declspec(process) int i;   // C4936
__declspec(appdomain) int j;   // C4936
```
