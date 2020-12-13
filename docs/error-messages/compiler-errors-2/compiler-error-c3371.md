---
description: 'Altre informazioni su: errore del compilatore C3371'
title: Errore del compilatore C3371
ms.date: 11/04/2016
f1_keywords:
- C3371
helpviewer_keywords:
- C3371
ms.assetid: f7ecf1aa-ed0a-4f73-81e5-62cf98f88ea1
ms.openlocfilehash: 8e990cf6de278a4812fabcd5b9f1eafa1810d327
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150761"
---
# <a name="compiler-error-c3371"></a>Errore del compilatore C3371

'idl_module': solo la proprietà 'name' è ammessa in questo contesto

L'utilizzo diretto di[idl_module](../../windows/attributes/idl-module.md) in una dichiarazione di funzione non consente altri parametri oltre al nome.

L'esempio seguente genera l'errore C3371:

```cpp
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
