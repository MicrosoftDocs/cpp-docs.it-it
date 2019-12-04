---
title: Errore del compilatore C3370
ms.date: 11/04/2016
f1_keywords:
- C3370
helpviewer_keywords:
- C3370
ms.assetid: ee6d4c85-78fc-42b2-836e-5cc491a3b2ba
ms.openlocfilehash: 7c1a9e4e099fc33dd585e5cdbffa2bbb8ea36987
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755590"
---
# <a name="compiler-error-c3370"></a>Errore del compilatore C3370

'idl_module name': idl_module non ancora definito

Prima di poter usare [idl_module](../../windows/idl-module.md) per specificare un punto di ingresso in una DLL, è necessario usare `idl_module` per specificare il nome della DLL.

L'esempio seguente genera l'errore C3370:

```cpp
// C3370.cpp
[module(name=MyLibrary)];
// uncomment the following line to resolve the error
// [idl_module(name="name1", dllname=x.dll)];
[idl_module(name="name1"), entry(100)] // C3370
int f1();

int main()
{
}
```
