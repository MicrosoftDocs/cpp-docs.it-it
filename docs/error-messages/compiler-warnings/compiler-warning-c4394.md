---
title: Avviso del compilatore C4394 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4394
dev_langs:
- C++
helpviewer_keywords:
- C4394
ms.assetid: 5de94de0-17e3-4e7c-92f4-5c3c1b825120
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d99200dd01db610aa558e8a9df18b7afacdf3d7d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099512"
---
# <a name="compiler-warning-c4394"></a>Avviso del compilatore C4394

'function': simbolo per dominio di applicazione non deve essere contrassegnato con dllexport

Una funzione contrassegnata con il [appdomain](../../cpp/appdomain.md) `__declspec` modificatore viene compilato in MSIL (non in codice nativo) e le tabelle di esportazione ([Esporta](../../windows/export.md) `__declspec` modificatore) non sono supportati per le funzioni gestite.

È possibile dichiarare una funzione gestita per avere accessibilità pubblica. Per altre informazioni, vedere [digitare la visibilità](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) e [visibilità dei membri](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility).

C4394 viene sempre generato come errore.  È possibile disattivare questo avviso con il `#pragma warning` oppure **/wd**; vedere [avviso](../../preprocessor/warning.md) o [/w, /W0, / W1, / W2, / w3, / W4, / W1, / W2, / w3, / W4, /Wall, /wd, / we, /wo, /Wv, /WX (livello avviso)](../../build/reference/compiler-option-warning-level.md)per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4394.

```
// C4394.cpp
// compile with: /clr /c
__declspec(dllexport) __declspec(appdomain) int g1 = 0;   // C4394
__declspec(dllexport) int g2 = 0;   // OK
```