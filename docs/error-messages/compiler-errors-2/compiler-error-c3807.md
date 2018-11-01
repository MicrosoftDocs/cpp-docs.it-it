---
title: Errore del compilatore C3807
ms.date: 11/04/2016
f1_keywords:
- C3807
helpviewer_keywords:
- C3807
ms.assetid: 7e2b0aab-8c61-4e71-b9c1-fcaeb6a1b5ea
ms.openlocfilehash: b5599914666af95a29667acc1ad4ad35eef7608f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591126"
---
# <a name="compiler-error-c3807"></a>Errore del compilatore C3807

'type': una classe con l'attributo ComImport non può derivare da 'type2', è consentito solo l'implementazione dell'interfaccia

Un tipo che deriva da <xref:System.Runtime.InteropServices.ComImportAttribute> può implementare solo un'interfaccia.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3807.

```
// C3807.cpp
// compile with: /clr /c
ref struct S {};
interface struct I {};

[System::Runtime::InteropServices::ComImportAttribute()]
ref struct S1 : S {};   // C3807
ref struct S2 : I {};
```