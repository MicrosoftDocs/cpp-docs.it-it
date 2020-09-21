---
title: Errore del compilatore C2664
ms.date: 11/04/2016
f1_keywords:
- C2664
helpviewer_keywords:
- C2664
ms.assetid: 3595d66e-cf87-4fda-a896-c0cd81f95db4
ms.openlocfilehash: d4368358b88e5334a4aa70d1dd51450ce3dbb27e
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743230"
---
# <a name="compiler-error-c2664"></a>Errore del compilatore C2664

'function': impossibile convertire l'argomento n da 'type1' a 'type2'

Questo problema di conversione dei parametri può verificarsi se viene creata un'istanza di una classe e viene eseguito un tentativo di conversione implicita su un costruttore contrassegnato con la **`explicit`** parola chiave. Per ulteriori informazioni sulle conversioni esplicite, vedere [conversioni di tipi definiti dall'utente](../../cpp/user-defined-type-conversions-cpp.md).

Se un oggetto temporaneo viene passato a una funzione che accetta un riferimento a un oggetto come parametro, il riferimento deve essere un **`const`** riferimento.

Se la funzione viene passata a un parametro che non è del tipo previsto dalla funzione, viene creato un oggetto temporaneo mediante il costruttore appropriato. Questo oggetto temporaneo viene quindi passato alla funzione. In questo caso, l'oggetto temporaneo viene utilizzato per inizializzare il riferimento. Nelle versioni precedenti del linguaggio era possibile inizializzare tutti i riferimenti mediante oggetti temporanei.

Per correggere C2664,

- Ricontrollare il prototipo per la funzione specificata e correggere l'argomento indicato nel messaggio d'errore.

- Se necessario, fornire una conversione esplicita.

L'errore C2664 può inoltre verificarsi se una classe nasconde un membro in una delle relative classi base.

Per altre informazioni, vedere [procedura: convertire System:: String in wchar_t * o char \* ](../../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md).

## <a name="examples"></a>Esempi

L'esempio seguente genera l'errore C2664 e mostra come risolverlo.

```cpp
// C2664.cpp
// C2664
struct A {
   void f(int i) {};
};

struct B : public A {
   // To fix, uncomment the following line.
   // using A::f;
   void f(A a) {};
};

int main() {
   B b;
   int i = 1;
   b.f(i);   // B::F hides A::f Uncomment the using declaration in B.
}
```

Anche questo esempio genera l'errore C2664 e mostra come risolverlo.

```cpp
// C2664b.cpp
// C2664 expected
struct A {
   // To fix, uncomment the following line.
   // A(int i){}
};

void func( int, A ) {}

int main() {
   func( 1, 1 );   // No conversion from int to A.
}
```

L'esempio successivo illustra l'errore C2664 usando un valore letterale stringa per chiamare `Test` e mostra come risolverlo. Poiché il parametro è un riferimento `szString`, è necessario creare un oggetto mediante il costruttore appropriato. Ne risulta un oggetto temporaneo che non può essere utilizzato per inizializzare il riferimento.

```cpp
// C2664c.cpp
// compile with: /EHsc
// C2664 expected
#include <iostream>
#include <string.h>
using namespace std;

class szString {
   int slen;
   char *str;

public:
   szString(const char *);
   int len() const {
      return slen;
   }
};

// Simple reference cannot bind to temp var.
void Test(szString &a) {}

// To fix, uncomment the following line.
// void Test(const szString &a) {}

szString::szString(const char * newstr) : slen(0), str(NULL) {
   slen=strlen(newstr);
   str = new char[slen + 1];
   if (str)
      strcpy_s(str, (slen + 1), newstr);
}

int main() {
   Test("hello");
}
```

Il compilatore impone i requisiti standard C++ per l'applicazione di **`const`** . In questo esempio viene generato l'errore C2664:

```cpp
// C2664d.cpp
// C2664 expected
#include <windows.h>

void func1(LPCSTR &s)
{

}

void func2(LPSTR &s)
{
   func1(s);
}

int main()
{
   return 0;
}
```

Ecco una situazione più complessa in cui viene generato l'errore C2664, incluse le istruzioni su come risolverlo:

```cpp
// C2664e.cpp
// compile with: /EHsc
// C2664 expected
#define _INTL
#include <locale>
#include <iostream>

using namespace std;
#define LEN 90

int main( ) {
   char* pszExt = "This is the string to be converted!";
   wchar_t pwszInt [LEN+1];
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));

   // To fix, delete the following line.
   char* pszNext;

   // To fix, uncomment the following line.
   // const char* pszNext;

   wchar_t* pwszNext;
   mbstate_t state;
   locale loc("C");
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >
      ( loc ).in( state,
      pszExt, &pszExt[strlen(pszExt)], pszNext,
      pwszInt, &pwszInt[strlen(pszExt)], pwszNext );
   // See earlier comment.
      pwszInt[strlen(pszExt)] = 0;
   wcout << ( (res!=codecvt_base::error) ?
                       L"It worked! " : L"It didn't work! " )
   << L"The converted string is:\n ["
   << &pwszInt[0]
   << L"]" << endl;

   exit(-1);
}
```

Una variabile enum non viene convertita nel relativo tipo sottostante in modo che venga soddisfatta una chiamata di funzione. Per ulteriori informazioni, vedere [enum class](../../extensions/enum-class-cpp-component-extensions.md). L'esempio seguente genera l'errore C2664 e mostra come risolverlo.

```cpp
// C2664f.cpp
// compile with: /clr
using namespace System;
public enum class A : Char {
   None = 0,
   NonSilent = 1,
};

void Test(Char c) {}

int main() {
   A aa = A::None;
   Test(aa);   // C2664
   Test(Char(aa));   // OK - fix by using a conversion cast
}
```

Un bug del compilatore midl causa l'emissione di un tipo wchar_t come tipo unsigned short nella libreria dei tipi. Per correggere l'errore, eseguire il cast del tipo nel codice sorgente C++ o definire il tipo come stringa nel file idl.

```
// C2664g.idl
import "prsht.idl";

[ object, uuid(8402B8F1-BF7F-4B49-92D4-C2B9DF4543E9) ]

interface IMyObj1 : IUnknown {
   HRESULT  teststr([in, string] wchar_t *wstr);
   HRESULT  testarr([in, size_is(len)] wchar_t wstr[], [in] int len);
   HRESULT  testbstr([in] BSTR bstr);
};

[  uuid(44463307-CBFC-47A6-8B4F-13CD0A83B436) ]
library myproj1 {
   [  version(1.0), uuid(D8622C12-5448-42B8-8F0E-E3AD6B8470C1) ]
   coclass CMyObj1 { interface IMyObj1; };
}
```

C2664 viene generato anche tramite **`wchar_t`** quando si porta il codice da Visual C++ 6,0 a versioni successive. In Visual C++ 6,0 e versioni precedenti, **`wchar_t`** era un **`typedef`** per **`unsigned short`** ed era quindi convertibile in modo implicito in tale tipo. Dopo Visual C++ 6,0, **`wchar_t`** è il proprio tipo incorporato, come specificato nello standard C++, e non è più convertibile in modo implicito in **`unsigned short`** . Vedere [/Zc: wchar_t (wchar_t è di tipo nativo)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

L'esempio seguente genera l'errore C2664 e mostra come risolverlo.

```cpp
// C2664h.cpp
#import "C2664g.tlb"
using namespace myproj1;

int main() {
   IMyObj1Ptr ptr;

   wchar_t * mybuff = 0;
   BSTR bstr = 0;
   int len;
   ptr->teststr(mybuff);
   ptr->testbstr(bstr);
   ptr->testarr(mybuff, len);   // C2664
   ptr->testarr((unsigned short *)mybuff, len);   // OK - Fix by using a cast
}
```

L'errore C2664 viene inoltre generato se il compilatore non è in grado di dedurre argomenti di modello.

```cpp
// C2664i.cpp
#include <stdio.h>
template <class T, int iType=0>
class CTypedImg {
public:
   CTypedImg() {}
   void run() {}

   operator CTypedImg<T>& () {
      return *((CTypedImg<T>*)this);
    }
};

template <class t1>
void test(CTypedImg<t1>& myarg) {
   myarg.run();
}

int main() {
   CTypedImg<float,2> img;

   test((CTypedImg<float>&)img);   // OK
   test<float>(img);   // OK
   test(img);   // C2664 - qualify as above to fix
}
```
