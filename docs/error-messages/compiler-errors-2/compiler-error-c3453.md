---
description: 'Altre informazioni su: errore del compilatore C3453'
title: Errore del compilatore C3453
ms.date: 11/04/2016
f1_keywords:
- C3453
helpviewer_keywords:
- C3453
ms.assetid: dbefdbcf-f697-4239-b7a5-1d99b85e9e7f
ms.openlocfilehash: 2ff1c246dc66d60266f0fc44e134db3ab21605df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315972"
---
# <a name="compiler-error-c3453"></a>Errore del compilatore C3453

'attribute': attributo non applicato per mancata corrispondenza del qualificatore 'assembly'

Gli attributi a livello di assembly o di modulo possono essere specificati solo come istruzioni autonome.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3453.

```cpp
// C3453.cpp
// compile with: /clr /c
[assembly:System::CLSCompliant(true)]   // C3453
// try the following line instead
// [assembly:System::CLSCompliant(true)];
ref class X {};
```
