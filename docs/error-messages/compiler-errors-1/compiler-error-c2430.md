---
description: 'Altre informazioni su: errore del compilatore C2430'
title: Errore del compilatore C2430
ms.date: 11/04/2016
f1_keywords:
- C2430
helpviewer_keywords:
- C2430
ms.assetid: 07c20f76-63e1-4d22-b2a9-98b0d45c5cac
ms.openlocfilehash: 9f953ee78b6e4b82ce0ebd4a6621f0f06abadadb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190055"
---
# <a name="compiler-error-c2430"></a>Errore del compilatore C2430

più di un registro di indice in ' Identifier '

Viene ridimensionato più di un registro. Il compilatore supporta l'indicizzazione ridimensionata, ma è possibile ridimensionare un solo registro.

## <a name="example"></a>Esempio

L'esempio seguente genera l'c2430.

```cpp
// C2430.cpp
// processor: x86
int main() {
   _asm mov eax, [ebx*2+ecx*4] // C2430
}
```
