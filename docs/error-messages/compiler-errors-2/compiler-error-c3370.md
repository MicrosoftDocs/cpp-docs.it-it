---
title: Errore del compilatore C3370
ms.date: 11/04/2016
f1_keywords:
- C3370
helpviewer_keywords:
- C3370
ms.assetid: ee6d4c85-78fc-42b2-836e-5cc491a3b2ba
ms.openlocfilehash: 0dbc95fcb26354b0f963d1844ddd6a43783c532a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466170"
---
# <a name="compiler-error-c3370"></a>Errore del compilatore C3370

'idl_module name': idl_module non ancora definito

Prima di poter usare [idl_module](../../windows/idl-module.md) per specificare un punto di ingresso in una DLL, è necessario usare `idl_module` per specificare il nome della DLL.

L'esempio seguente genera l'errore C3370:

```
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