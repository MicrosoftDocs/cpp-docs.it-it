---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4398'
title: Avviso del compilatore (livello 3) C4398
ms.date: 11/04/2016
f1_keywords:
- C4398
helpviewer_keywords:
- C4398
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
ms.openlocfilehash: ea88f81e44fe0520cd096e1904c49a306863496a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97160428"
---
# <a name="compiler-warning-level-3-c4398"></a>Avviso del compilatore (livello 3) C4398

> '*Variable*': l'oggetto globale per processo potrebbe non funzionare correttamente con più AppDomain. prendere in considerazione l'uso di __declspec (AppDomain)

## <a name="remarks"></a>Commenti

Una funzione virtuale con [__clrcall](../../cpp/clrcall.md) convenzione di chiamata in un tipo nativo causa la creazione di un oggetto vtable per dominio applicazione. Una variabile di questo tipo potrebbe non essere corretta se utilizzata in più domini dell'applicazione.

È possibile risolvere questo avviso contrassegnando in modo esplicito la variabile `__declspec(appdomain)` . Nelle versioni di Visual Studio precedenti a Visual Studio 2017, è possibile risolvere questo avviso compilando con **/CLR: pure**, che rende le variabili globali per dominio applicazione per impostazione predefinita. L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Per ulteriori informazioni, vedere [AppDomain](../../cpp/appdomain.md) e [domini applicazione e Visual C++](../../dotnet/application-domains-and-visual-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4398.

```cpp
// C4398.cpp
// compile with: /clr /W3 /c
struct S {
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall
};

S glob_s;   // C4398
__declspec(appdomain) S glob_s2;   // OK
```
