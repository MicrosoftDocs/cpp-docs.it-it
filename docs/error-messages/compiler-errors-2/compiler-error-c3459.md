---
title: Errore del compilatore C3459
ms.date: 11/04/2016
f1_keywords:
- C3459
helpviewer_keywords:
- C3459
ms.assetid: 3d290a20-d313-4c07-9bd8-c5c159cb169f
ms.openlocfilehash: aaad9610ffec3efc73b1ff5650472689a2d2e82a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438015"
---
# <a name="compiler-error-c3459"></a>Errore del compilatore C3459

'attribute': attributo consentito solo su indicizzatore di classe (proprietà indicizzata predefinita)

Un attributo progettato per essere applicato a una proprietà dell'indicizzatore di classe è stato usato in modo errato.

Per altre informazioni, vedere [procedura: utilizzare le proprietà in C + + c++ /CLI CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3459.

```
// C3459.cpp
// compile with: /clr /c
public ref class MyString {
public:
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // C3459
   property int Prop;
};

// OK
public ref class MyString2 {
   array<int>^ MyArr;
public:
   MyString2() {
      MyArr = gcnew array<int>(5);
   }

   [System::Runtime::CompilerServices::IndexerName("Chars")]   // OK
   property int default[int] {
      int get(int index) {
         return MyArr[index];
      }
      void set(int index, int value) {
         MyArr[index] = value;
      }
   }
};
```