---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4820'
title: Avviso del compilatore (livello 4) C4820
ms.date: 11/04/2016
f1_keywords:
- C4820
helpviewer_keywords:
- C4820
ms.assetid: 17aa29f4-c287-49b8-bc43-8ed82ffed5ea
ms.openlocfilehash: 778bf605d6ee1441e9efd68380c64d231df03b69
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330482"
---
# <a name="compiler-warning-level-4-c4820"></a>Avviso del compilatore (livello 4) C4820

'byte' byte di riempimento aggiunti dopo costrutto 'nome_membro'

Il tipo e l'ordine degli elementi hanno causato l'aggiunta del riempimento alla fine di uno struct da parte del compilatore. Per ulteriori informazioni sulla spaziatura interna in uno struct, vedere [align](../../cpp/align-cpp.md) .

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'C4820:

```cpp
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
