---
description: 'Altre informazioni su: avviso del compilatore C4394'
title: Avviso del compilatore C4394
ms.date: 11/04/2016
f1_keywords:
- C4394
helpviewer_keywords:
- C4394
ms.assetid: 5de94de0-17e3-4e7c-92f4-5c3c1b825120
ms.openlocfilehash: 8a732e4cc1b3454a0dd602cd36b9ae8b959a8118
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180760"
---
# <a name="compiler-warning-c4394"></a>Avviso del compilatore C4394

' Function ': il simbolo per dominio di applicazione non deve essere contrassegnato con __declspec (dllexport)

Una funzione contrassegnata con [](../../cpp/appdomain.md) il **`__declspec`** modificatore AppDomain viene compilata in MSIL (non nativa) e le [](../../windows/attributes/export.md) tabelle di esportazione ( **`__declspec`** modificatore export) non sono supportate per le funzioni gestite.

È possibile dichiarare una funzione gestita per avere accessibilità pubblica. Per ulteriori informazioni, vedere [visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [visibilità dei membri](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility).

C4394 viene sempre emesso come un errore.  È possibile disattivare questo avviso con `#pragma warning` o **/WD.**. per ulteriori informazioni, vedere l' [avviso](../../preprocessor/warning.md) o [/W,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4394.

```cpp
// C4394.cpp
// compile with: /clr /c
__declspec(dllexport) __declspec(appdomain) int g1 = 0;   // C4394
__declspec(dllexport) int g2 = 0;   // OK
```
