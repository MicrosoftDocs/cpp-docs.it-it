---
title: Errore del compilatore C3371
ms.date: 11/04/2016
f1_keywords:
- C3371
helpviewer_keywords:
- C3371
ms.assetid: f7ecf1aa-ed0a-4f73-81e5-62cf98f88ea1
ms.openlocfilehash: 7967f6fa92434dcac35ec732f42a32531bfcce03
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62300492"
---
# <a name="compiler-error-c3371"></a>Errore del compilatore C3371

'idl_module': solo la proprietà 'name' è ammessa in questo contesto

L'utilizzo diretto di[idl_module](../../windows/idl-module.md) in una dichiarazione di funzione non consente altri parametri oltre al nome.

L'esempio seguente genera l'errore C3371:

```
// C3371.cpp
[idl_module(name="Name", dllname="Some.dll")];
[idl_module(name="Name", helpstring="Some help")]   // C3371
int f1();
// try
// [idl_module(name="Name")]
// int f1();

int main()
{
}
```