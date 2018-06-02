---
title: Strumenti del linker LNK2028 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2028
dev_langs:
- C++
helpviewer_keywords:
- LNK2028
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e9c8eaa03927f51acd3c3d84731e9ef2b282b7c6
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704154"
---
# <a name="linker-tools-error-lnk2028"></a>Errore degli strumenti del linker LNK2028

"*exported_function*" (*nome_decorato*) fa riferimento nella funzione "*function_containing_function_call*" (*nome_decorato*)

## <a name="remarks"></a>Note

Quando si tenta di importare una funzione nativa in un'immagine pure, tenere presente che le convenzioni di chiamata implicite differiscono tra compilazioni pure e native.

Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

## <a name="example"></a>Esempio

In questo esempio di codice genera un componente con una funzione nativa esportata la cui convenzione di chiamata implicita [cdecl](../../cpp/cdecl.md).

```cpp
// LNK2028.cpp
// compile with: /LD
__declspec(dllexport) int func() {
   return 3;
}
```

## <a name="example"></a>Esempio

L'esempio seguente crea un client puro che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata in **/clr: pure** è [clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'errore LNK2028.

```cpp
// LNK2028_b.cpp
// compile with: /clr:pure lnk2028.lib
// LNK2028 expected
int func();

int main() {
   return func();
}
```