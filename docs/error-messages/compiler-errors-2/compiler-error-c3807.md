---
description: 'Altre informazioni su: errore del compilatore C3807'
title: Errore del compilatore C3807
ms.date: 11/04/2016
f1_keywords:
- C3807
helpviewer_keywords:
- C3807
ms.assetid: 7e2b0aab-8c61-4e71-b9c1-fcaeb6a1b5ea
ms.openlocfilehash: ffa8b52b13ae7245b62cd5aa8d7fec9285754b73
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260098"
---
# <a name="compiler-error-c3807"></a>Errore del compilatore C3807

' type ': una classe con l'attributo ComImport non può derivare da' tipo2', ma è consentita solo l'implementazione dell'interfaccia

Un tipo che deriva da <xref:System.Runtime.InteropServices.ComImportAttribute> può implementare solo un'interfaccia.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3807.

```cpp
// C3807.cpp
// compile with: /clr /c
ref struct S {};
interface struct I {};

[System::Runtime::InteropServices::ComImportAttribute()]
ref struct S1 : S {};   // C3807
ref struct S2 : I {};
```
