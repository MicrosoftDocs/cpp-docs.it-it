---
title: Errore del compilatore C2978
ms.date: 11/04/2016
f1_keywords:
- C2978
helpviewer_keywords:
- C2978
ms.assetid: 5e7bee82-e266-4ccd-ad2e-ee89606ec5bf
ms.openlocfilehash: cf682bf14246754cca74a43dffc39761ff6125c1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395326"
---
# <a name="compiler-error-c2978"></a>Errore del compilatore C2978

errore di sintassi: previsto 'keyword1' o 'keyword2', trovato il tipo 'keyword3'. I parametri non di tipo non sono supportati in generics

Una classe generica è stata dichiarata in modo non corretto. Visualizzare [Generics](../../extensions/generics-cpp-component-extensions.md)per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2978.

```
// C2978.cpp
// compile with: /clr /c
generic <ref class T>   // C2978
// try the following line instead
// generic <typename T>   // OK
ref class Utils {
   static void sort(T elems, size_t size);
};

generic <int>
// try the following line instead
// generic <class T>
ref class Utils2 {
   static void sort(T elems, size_t size);
};
```