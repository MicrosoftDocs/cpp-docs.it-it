---
title: Avviso del compilatore (livello 3) C4398
ms.date: 11/04/2016
f1_keywords:
- C4398
helpviewer_keywords:
- C4398
ms.assetid: b6221432-9fed-4272-a547-a73f587904e6
ms.openlocfilehash: 4126a1267b41cdf9c0161c7e85a9057b2a301d77
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401969"
---
# <a name="compiler-warning-level-3-c4398"></a>Avviso del compilatore (livello 3) C4398

> «*variabile*': oggetto globale per processo potrebbe non funzionare correttamente con più domini di applicazione; si consiglia di utilizzare __declspec(appdomain)

## <a name="remarks"></a>Note

Una funzione virtuale con [clrcall](../../cpp/clrcall.md) convenzione di chiamata in un tipo nativo determina la creazione di una variabile di dominio dell'applicazione per. Tale variabile potrebbe non funzionare correttamente se utilizzato in più domini dell'applicazione.

È possibile risolvere il problema, si contrassegna in modo esplicito la variabile `__declspec(appdomain)`. Nelle versioni di Visual Studio precedenti a Visual Studio 2017, è possibile risolvere il problema eseguendo la compilazione con **/clr: pure**, che rende le variabili globali per ogni appdomain per impostazione predefinita. Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [domini applicazione e Visual C++](../../dotnet/application-domains-and-visual-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4398.

```cpp
// C4398.cpp
// compile with: /clr /W3 /c
struct S {
   virtual void f( System::String ^ );   // String^ parameter makes function __clrcall
};

S glob_s;   // C4398
__declspec(appdomain) S glob_s2;   // OK
```