---
title: Errore del compilatore C3646 | Microsoft Docs
ms.custom: ''
ms.date: 06/14/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3646
dev_langs:
- C++
helpviewer_keywords:
- C3646
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c038520c1a35fa5264e1e98b074687efb336d028
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "35658611"
---
# <a name="compiler-error-c3646"></a>Errore del compilatore C3646

> 'identificatore': identificatore di override sconosciuto

## <a name="remarks"></a>Note

Il compilatore ha rilevato un token nella posizione in cui previsto un identificatore di override, ma il token non riconosciuto dal compilatore.

Ad esempio, se il non riconosciuto *specifier* viene **_NOEXCEPT**, sostituirla con la parola chiave **noexcept**.

Per altre informazioni, vedere [gli identificatori di Override](../../windows/override-specifiers-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3646 e viene illustrato un modo per risolvere il problema:

```cpp
// C3646.cpp
// compile with: /clr /c
ref class C {
   void f() unknown;   // C3646
   // try the following line instead
   // virtual void f() abstract;
};
```