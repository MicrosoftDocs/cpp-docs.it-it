---
title: Avviso del compilatore C4394
ms.date: 11/04/2016
f1_keywords:
- C4394
helpviewer_keywords:
- C4394
ms.assetid: 5de94de0-17e3-4e7c-92f4-5c3c1b825120
ms.openlocfilehash: b97819a6f1b95f083eb594d3b9b2e68cbf30d19a
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73623691"
---
# <a name="compiler-warning-c4394"></a>Avviso del compilatore C4394

' Function ': il simbolo per dominio di applicazione non deve essere contrassegnato con _ _ declspec (dllexport)

Una funzione contrassegnata con il modificatore [appdomain](../../cpp/appdomain.md)`__declspec` viene compilata in MSIL (non nativa) e le tabelle di esportazione ([esportazione](../../windows/export.md)`__declspec` modificatore) non sono supportate per le funzioni gestite.

È possibile dichiarare una funzione gestita per avere accessibilità pubblica. Per ulteriori informazioni, vedere [visibilità dei tipi](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [visibilità dei membri](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility).

C4394 viene sempre emesso come un errore.  È possibile disattivare questo avviso con il `#pragma warning` o **/WD.** ; Per ulteriori informazioni, vedere [warning](../../preprocessor/warning.md) o [/w,/W0,/W1,/W2,/W3,/W4,/W1,/W2,/W3,/W4,/Wall,/WD.,/we,/wo,/WV,/WX (livello di avviso)](../../build/reference/compiler-option-warning-level.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4394.

```cpp
// C4394.cpp
// compile with: /clr /c
__declspec(dllexport) __declspec(appdomain) int g1 = 0;   // C4394
__declspec(dllexport) int g2 = 0;   // OK
```