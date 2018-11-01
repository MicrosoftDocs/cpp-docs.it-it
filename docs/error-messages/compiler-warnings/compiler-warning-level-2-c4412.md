---
title: Avviso del compilatore (livello 2) C4412
ms.date: 11/04/2016
f1_keywords:
- C4412
helpviewer_keywords:
- C4412
ms.assetid: f28dc531-1a98-497b-a366-0a13e1bc81c7
ms.openlocfilehash: 2c9d50fc3433321c0ca92366a512892212545754
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665517"
---
# <a name="compiler-warning-level-2-c4412"></a>Avviso del compilatore (livello 2) C4412

> «*funzione*': funzione firma contiene il tipo '*tipo*'; Gli oggetti di C++ sono non è sicuro passare tra codice pure e misto o nativo.

## <a name="remarks"></a>Note

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017. Se si dispone di codice che deve essere in puro, è consigliabile convertirlo per C#.

Il compilatore ha rilevato una situazione potenzialmente non sicura che potrebbe comportare un errore di runtime: è stata effettuata una chiamata da un **/clr: pure** compilando a una funzione che è stata importata tramite dllimport e la firma della funzione contiene un tipo unsafe . Un tipo è sicuro se contiene una funzione membro o un membro dati che è un tipo unsafe o un riferimento indiretto a un tipo unsafe.

Non è sicuro a causa della differenza tra codice nativo puro e convenzioni di chiamata predefinita (o misto nativo e gestito). Quando si importano (tramite `dllimport`) una funzione in una **/clr: pure** compilando, assicurarsi che le dichiarazioni di ogni tipo nella firma sono identiche a quelle del modulo che consente di esportare la funzione (prestando particolare attenzione alle differenze nelle convenzioni di chiamata implicite).

Una funzione membro virtuale è particolarmente soggetta a risultati imprevisti.  Tuttavia, anche una funzione non virtuale deve essere testata per assicurarsi di ottenere i risultati corretti. Se si è certi di ottenere i risultati corretti, è possibile ignorare questo avviso.

C4412 è disattivata per impostazione predefinita. Visualizzare [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) e [dllexport, dllimport](../../cpp/dllexport-dllimport.md) per altre informazioni.

Per risolvere questo problema, rimuovere tutte le funzioni dal tipo.

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

L'esempio seguente è un file di intestazione che dichiara due tipi. Il `Unsafe` tipo è sicuro perché contiene una funzione membro.

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

L'impostazione predefinita la convenzione di chiamata un **/clr: pure** compilazione è diversa da una compilazione nativa.  Quando viene incluso, C4412 `Test` per impostazione predefinita `__clrcall`. Se viene compilato ed Esegui questo programma (non utilizzare **/c**), il programma verrà generata un'eccezione.

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