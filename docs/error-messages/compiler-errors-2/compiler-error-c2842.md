---
title: Errore del compilatore C2842 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2842
dev_langs:
- C++
helpviewer_keywords:
- C2842
ms.assetid: 8674f08d-9f50-46ad-9229-abc6b74fa0e5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f6143249871384d89227d63fe1900814ae5077fd
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055242"
---
# <a name="compiler-error-c2842"></a>Errore del compilatore C2842

'class': un tipo gestito o WinRT non può definire il proprio 'operator new' o 'operator delete'

È possibile definire il proprio * * operatore new o **operatore delete** per gestire l'allocazione di memoria nell'heap nativo. Tuttavia, le classi di riferimento non possono definire questi operatori perché vengono allocati esclusivamente nell'heap gestito.

Per altre informazioni, vedere [operatori definiti dall'utente (C + + CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2842.

```
// C2842.cpp
// compile with: /clr /c
ref class G {
   void* operator new( size_t nSize );   // C2842
};
```
