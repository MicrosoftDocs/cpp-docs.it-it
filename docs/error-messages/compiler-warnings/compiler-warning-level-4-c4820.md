---
title: Compilatore avviso (livello 4) C4820 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4820
dev_langs:
- C++
helpviewer_keywords:
- C4820
ms.assetid: 17aa29f4-c287-49b8-bc43-8ed82ffed5ea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c27466912956988a2396b8e3c52fc41ed2caa604
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016339"
---
# <a name="compiler-warning-level-4-c4820"></a>Avviso del compilatore (livello 4) C4820

'byte' byte di riempimento aggiunti dopo costrutto 'nome_membro'

Il tipo e l'ordine degli elementi ha causato il compilatore di aggiungere spaziatura al fine di uno struct. Visualizzare [allineare](../../cpp/align-cpp.md) per ulteriori informazioni sulla spaziatura interna in uno struct.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4820:

```
// C4820.cpp
// compile with: /W4 /c
#pragma warning(default : 4820)

// Delete the following 4 lines to resolve.
__declspec(align(2)) struct MyStruct {
   char a;
   int i;   // C4820
};

// OK
#pragma pack(1)
__declspec(align(1)) struct MyStruct2 {
   char a;
   int i;
};
```