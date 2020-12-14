---
description: 'Altre informazioni su: errore del compilatore C3838'
title: Errore del compilatore C3838
ms.date: 11/04/2016
f1_keywords:
- C3838
helpviewer_keywords:
- C3838
ms.assetid: d6f470c2-131a-4a8c-843a-254acd43da83
ms.openlocfilehash: 9ea5f250b7a881ab9be6724f84dac418eefc705e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249146"
---
# <a name="compiler-error-c3838"></a>Errore del compilatore C3838

non è possibile ereditare in modo esplicito da' type '

Il parametro specificato `type` non può fungere da classe base in qualsiasi classe.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3838:

```cpp
// C3838a.cpp
// compile with: /clr /c
public ref class B : public System::Enum {};   // C3838
```
