---
title: Errore del compilatore C3489
ms.date: 11/04/2016
f1_keywords:
- C3489
helpviewer_keywords:
- C3489
ms.assetid: 47b58d69-459d-4499-abc7-5f0b9303d773
ms.openlocfilehash: 3b192a14a39b7c0c9d264bda8073c54f0f395924
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90685766"
---
# <a name="compiler-error-c3489"></a>Errore del compilatore C3489

'var' è obbligatorio quando la modalità di acquisizione predefinita è per valore

Quando si specifica che la modalità di acquisizione predefinita per un'espressione lambda è in base al valore, non è possibile passare una variabile per valore alla clausola di acquisizione dell'espressione.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Non passare in modo esplicito la variabile alla clausola di acquisizione oppure

- Non specificare l'acquisizione per valore come modalità predefinita oppure

- Specificare l'acquisizione per riferimento come modalità predefinita oppure

- Passare la variabile per riferimento alla clausola di acquisizione. In questo modo il comportamento dell'espressione lambda potrebbe cambiare.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'errore C3489 perché la variabile `n` viene visualizzata per valore nella clausola di acquisizione di un'espressione lambda la cui modalità predefinita è per valore:

```cpp
// C3489a.cpp

int main()
{
   int n = 5;
   [=, n]() { return n; } (); // C3489
}
```

L'esempio seguente mostra quattro possibili soluzioni all'errore C3489:

```cpp
// C3489b.cpp

int main()
{
   int n = 5;

   // Possible resolution 1:
   // Do not explicitly pass n to the capture clause.
   [=]() { return n; } ();

   // Possible resolution 2:
   // Do not specify by-value as the default capture mode.
   [n]() { return n; } ();

   // Possible resolution 3:
   // Specify by-reference as the default capture mode.
   [&, n]() { return n; } ();

   // Possible resolution 4:
   // Pass n by reference to the capture clause.
   [&n]() { return n; } ();
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
