---
title: Avviso del compilatore C4936
ms.date: 11/04/2016
f1_keywords:
- C4936
helpviewer_keywords:
- C4936
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
ms.openlocfilehash: bbb69cccbf93be6e97d13db5008780f57e63f9da
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62280854"
---
# <a name="compiler-warning-c4936"></a>Avviso del compilatore C4936

> questo __declspec è supportato solo con la compilazione con /clr o /clr:pure

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

È stato usato un modificatore `__declspec` , ma tale modificatore `__declspec` è valido solo quando viene compilato con una delle opzioni [/clr](../../build/reference/clr-common-language-runtime-compilation.md) .

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