---
title: Errore del compilatore C3488
ms.date: 11/04/2016
f1_keywords:
- C3488
helpviewer_keywords:
- C3488
ms.assetid: 0a6fcd76-dd3b-48d7-abb3-22eccda96034
ms.openlocfilehash: ed3cccb77a40ab646c9a6375cf4c182de62aa478
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59025059"
---
# <a name="compiler-error-c3488"></a>Errore del compilatore C3488

'var' non è consentito quando la modalità di acquisizione predefinita è per riferimento

Quando si specifica che la modalità di acquisizione predefinita per un'espressione lambda è in base al riferimento, non è possibile passare una variabile per riferimento alla clausola di acquisizione dell'espressione.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Non passare in modo esplicito la variabile alla clausola di acquisizione oppure

- Non specificare l'acquisizione per riferimento come modalità predefinita oppure

- Specificare l'acquisizione per valore come modalità predefinita oppure

- Passare la variabile per valore alla clausola di acquisizione. In questo modo il comportamento dell'espressione lambda potrebbe cambiare.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3488 perché viene visualizzato un riferimento alla variabile `n` nella clausola di acquisizione di un'espressione lambda la cui modalità predefinita è per riferimento:

```
// C3488a.cpp

int main()
{
   int n = 5;
   [&, &n]() { return n; } (); // C3488
}
```

## <a name="example"></a>Esempio

L'esempio seguente mostra quattro possibili soluzioni all'errore C3488:

```
// C3488b.cpp

int main()
{
   int n = 5;

   // Possible resolution 1:
   // Do not explicitly pass &n to the capture clause.
   [&]() { return n; } ();

   // Possible resolution 2:
   // Do not specify by-reference as the default capture mode.
   [&n]() { return n; } ();

   // Possible resolution 3:
   // Specify by-value as the default capture mode.
   [=, &n]() { return n; } ();

   // Possible resolution 4:
   // Pass n by value to the capture clause.
   [n]() { return n; } ();
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)