---
title: Compilatore avviso (livello 2) C4412 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4412
dev_langs:
- C++
helpviewer_keywords:
- C4412
ms.assetid: f28dc531-1a98-497b-a366-0a13e1bc81c7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47659a9ba0469b8ee719dbc686ba611e876d32c1
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704013"
---
# <a name="compiler-warning-level-2-c4412"></a>Avviso del compilatore (livello 2) C4412

> '*funzione*': funzione firma contiene il tipo '*tipo*'; Gli oggetti C++ sono non è sicuro passare tra codice pure e misto o nativo.

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017. Se si dispone di codice che deve essere puro, è consigliabile convertirlo per c#.

Il compilatore ha rilevato una situazione potenzialmente non sicuro che potrebbe causare un errore di runtime: è in corso una chiamata da un **/clr: pure** compilando a una funzione che è stata importata tramite dllimport e la firma della funzione contiene un tipo unsafe . Un tipo unsafe se contiene una funzione membro o è un membro dati che è un tipo unsafe o un riferimento indiretto a un tipo unsafe.

Questo è unsafe causato dalla differenza di convenzioni tra codice pure e native di chiamata predefinita o misto nativo e gestito. Durante l'importazione (tramite `dllimport`) una funzione in un **/clr: pure** compilando, assicurarsi che siano identiche a quelli del modulo che esporta la funzione (prestando particolare attenzione alle dichiarazioni di ogni tipo nella firma differenze nelle convenzioni di chiamata implicite).

Una funzione membro virtuale è particolarmente soggetta a produrre risultati imprevisti.  Tuttavia, anche una funzione non virtuale deve essere testata per assicurarsi di ottenere i risultati corretti. Se si è certi di ottenere i risultati corretti, è possibile ignorare questo avviso.

C4412 è disattivata per impostazione predefinita. Vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) e [dllexport, dllimport](../../cpp/dllexport-dllimport.md) per ulteriori informazioni.

Per risolvere il problema, rimuovere tutte le funzioni dal tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4412.

```cpp
// C4412.cpp
// compile with: /c /W2 /clr:pure
#pragma warning (default : 4412)

struct Unsafe {
   virtual void __cdecl Test();
};

struct Safe {
   int i;
};

__declspec(dllimport) Unsafe * __cdecl func();
__declspec(dllimport) Safe * __cdecl func2();

int main() {
   Unsafe *pUnsafe = func();   // C4412
   // pUnsafe->Test();

   Safe *pSafe = func2();   // OK
}
```

## <a name="example"></a>Esempio

L'esempio seguente è un file di intestazione che dichiara due tipi. Il `Unsafe` tipo è unsafe perché contiene una funzione membro.

```cpp
// C4412.h
struct Unsafe {
   // will be __clrcall if #included in pure compilation
   // defaults to __cdecl in native or mixed mode compilation
   virtual void Test(int * pi);

   // try the following line instead
   // virtual void __cdecl Test(int * pi);
};

struct Safe {
   int i;
};
```

## <a name="example"></a>Esempio

In questo esempio consente di esportare funzioni con i tipi definiti nel file di intestazione.

```cpp
// C4412_2.cpp
// compile with: /LD
#include "C4412.h"

void Unsafe::Test(int * pi) {
   *pi++;
}

__declspec(dllexport) Unsafe * __cdecl func() { return new Unsafe; }
__declspec(dllexport) Safe * __cdecl func2() { return new Safe; }
```

## <a name="example"></a>Esempio

Il valore predefinito la convenzione di chiamata un **/clr: pure** compilazione è diversa da una compilazione nativa.  Quando viene incluso, C4412 `Test` per impostazione predefinita `__clrcall`. Se viene compilato ed eseguito il programma (non utilizzare **/c**), verrà generata un'eccezione.

L'esempio seguente genera l'errore C4412.

```cpp
// C4412_3.cpp
// compile with: /W2 /clr:pure /c /link C4412_2.lib
#pragma warning (default : 4412)
#include "C4412.h"

__declspec(dllimport) Unsafe * __cdecl func();
__declspec(dllimport) Safe * __cdecl func2();

int main() {
   int n = 7;
   Unsafe *pUnsafe = func();   // C4412
   pUnsafe->Test(&n);

   Safe *pSafe = func2();   // OK
}
```