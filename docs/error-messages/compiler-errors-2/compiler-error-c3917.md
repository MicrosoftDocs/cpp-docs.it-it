---
title: Errore del compilatore C3917
ms.date: 11/04/2016
f1_keywords:
- C3917
helpviewer_keywords:
- C3917
ms.assetid: a24cd0c9-262f-46e5-9488-1c01f945933d
ms.openlocfilehash: 3d527f8447306ff74606a0aa733014d45f985dc0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165470"
---
# <a name="compiler-error-c3917"></a>Errore del compilatore C3917

'*Property*': stile di dichiarazione costrutto obsoleto

Una proprietà o una definizione di evento utilizza la sintassi di una versione precedente a Visual Studio 2005.

Per altre informazioni, vedere [property](../../extensions/property-cpp-component-extensions.md).

## <a name="example"></a>Esempio

```cpp
// C3917.cpp
// compile with: /clr /c
public ref class  C {
private:
   int m_length;
public:
   C() {
      m_length = 0;
   }

   property int get_Length();   // C3917

   // The correct property definition:
   property int Length {
      int get() {
         return m_length;
      }

      void set( int i ) {
         m_length = i;
      }
   }
};
```
