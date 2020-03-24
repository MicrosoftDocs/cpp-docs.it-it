---
title: Avviso del compilatore (livello 2) C4412
ms.date: 11/04/2016
f1_keywords:
- C4412
helpviewer_keywords:
- C4412
ms.assetid: f28dc531-1a98-497b-a366-0a13e1bc81c7
ms.openlocfilehash: 601b99eec4625e9b598ece4cbb74d0039ad04bf0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161789"
---
# <a name="compiler-warning-level-2-c4412"></a>Avviso del compilatore (livello 2) C4412

> '*Function*': la firma della funzione contiene il tipo '*Type*'; C++ gli oggetti non sono sicuri di passare tra codice puro e misto o nativo.

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017. Se si dispone di codice che deve essere pure, è consigliabile portarlo in C#.

Il compilatore ha rilevato una situazione potenzialmente non sicura che può causare un errore di runtime: è stata eseguita una chiamata da un modulo **/CLR: pure** a una funzione importata tramite dllimport e la firma della funzione contiene un tipo unsafe. Un tipo non è sicuro se contiene una funzione membro o un membro dati che è un tipo unsafe o un riferimento indiretto a un tipo unsafe.

Questo non è sicuro a causa della differenza tra le convenzioni di chiamata predefinite tra il codice puro e il codice nativo (o nativo e gestito misto). Quando si importano (tramite `dllimport`) una funzione in un modulo **/CLR: pure** , assicurarsi che le dichiarazioni di ogni tipo nella firma siano identiche a quelle presenti nel modulo che esporta la funzione (con particolare attenzione alle differenze nelle convenzioni di chiamata implicite).

Una funzione membro virtuale è particolarmente soggetta a risultati imprevisti.  Tuttavia, anche una funzione non virtuale deve essere testata per assicurarsi di ottenere i risultati corretti. Se si è certi di ottenere i risultati corretti, è possibile ignorare questo avviso.

C4412 è disattivato per impostazione predefinita. Per ulteriori informazioni, vedere [avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) e [dllexport, dllimport](../../cpp/dllexport-dllimport.md) .

Per risolvere il problema, rimuovere tutte le funzioni dal tipo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4412.

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

L'esempio seguente è un file di intestazione che dichiara due tipi. Il tipo di `Unsafe` non è sicuro perché contiene una funzione membro.

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

Questo esempio Esporta le funzioni con i tipi definiti nel file di intestazione.

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

La convenzione di chiamata predefinita in una compilazione **/CLR: pure** è diversa da una compilazione nativa.  Quando si include C4412. h, per impostazione predefinita `Test` `__clrcall`. Se si compila ed esegue il programma (non si utilizza **/c**), il programma genererà un'eccezione.

L'esempio seguente genera l'C4412.

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
