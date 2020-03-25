---
title: String (C++/CLI e C++/CX)
ms.date: 10/08/2018
ms.topic: reference
helpviewer_keywords:
- string support with /clr
- /clr compiler option [C++], string support
ms.assetid: c695f965-9be0-4e20-9661-373bfee6557e
ms.openlocfilehash: b9da900ffbfff34dc596d8981095d8285bf37208
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171944"
---
# <a name="string--ccli-and-ccx"></a>String (C++/CLI e C++/CX)

Windows Runtime e Common Language Runtime rappresentano le stringhe come oggetti la cui memoria allocata viene gestita automaticamente. Ciò significa che non è necessario rimuovere in modo esplicito la memoria per una stringa quando la variabile di tipo stringa esce dall'ambito o l'applicazione termina. Per indicare che la durata di un oggetto stringa deve essere gestita automaticamente, dichiarare il tipo stringa con il modificatore [handle a oggetto (^)](handle-to-object-operator-hat-cpp-component-extensions.md).

## <a name="windows-runtime"></a>Windows Runtime

L'architettura di Windows Runtime richiede che il tipo di dati `String` si trovi nello spazio dei nomi `Platform`. Per comodità, Visual C++ fornisce anche il tipo di dati `string`, che è un sinonimo per `Platform::String` nello spazio dei nomi `default`.

### <a name="syntax"></a>Sintassi

```cpp
// compile with /ZW
using namespace Platform;
using namespace default;
   Platform::String^ MyString1 = "The quick brown fox";
   String^ MyString2 = "jumped over the lazy dog.";
   String^ MyString3 = "Hello, world!";
```

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Quando si esegue la compilazione con `/clr`, il compilatore converte i valori letterali stringa in stringhe di tipo <xref:System.String>. Per mantenere la compatibilità con le versioni precedenti del codice, sono previste due eccezioni a questo comportamento:

- Gestione delle eccezioni. Quando viene generato un valore letterale stringa, il compilatore lo rileva come valore letterale stringa.

- Deduzione di modello. Quando un valore letterale stringa viene passato come argomento di un modello, il compilatore non lo converte in <xref:System.String>. I valori letterali stringa passati come argomento generico verranno alzati di livello convertendoli in <xref:System.String>.

Il compilatore include anche il supporto predefinito per tre operatori, di cui è possibile eseguire l'override per personalizzarne il comportamento:

- Operatore System::String^ +( System::String, System::String)

- Operatore System::String^ +( System::Object, System::String)

- Operatore System::String^ +( System::String, System::Object)

Quando viene passato un oggetto <xref:System.String>, il compilatore ne esegue la conversione boxing, se necessario, e quindi concatena l'oggetto (con ToString) con la stringa.

> [!NOTE]
> L'accento circonflesso ("^") indica che la variabile dichiarata è un handle a un oggetto C++/CLI gestito.

Per altre informazioni, vedere [Valori letterali stringa e carattere](../cpp/string-and-character-literals-cpp.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/clr**

### <a name="examples"></a>Esempi

L'esempio di codice seguente illustra la concatenazione e il confronto di stringhe.

```cpp
// string_operators.cpp
// compile with: /clr
// In the following code, the caret ("^") indicates that the
// declared variable is a handle to a C++/CLI managed object.
using namespace System;

int main() {
   String^ a = gcnew String("abc");
   String^ b = "def";   // same as gcnew form
   Object^ c = gcnew String("ghi");

   char d[100] = "abc";

   // variables of System::String returning a System::String
   Console::WriteLine(a + b);
   Console::WriteLine(a + c);
   Console::WriteLine(c + a);

   // accessing a character in the string
   Console::WriteLine(a[2]);

   // concatenation of three System::Strings
   Console::WriteLine(a + b + c);

   // concatenation of a System::String and string literal
   Console::WriteLine(a + "zzz");

   // you can append to a System::String^
   Console::WriteLine(a + 1);
   Console::WriteLine(a + 'a');
   Console::WriteLine(a + 3.1);

   // test System::String^ for equality
   a += b;
   Console::WriteLine(a);
   a = b;
   if (a == b)
      Console::WriteLine("a and b are equal");

   a = "abc";
   if (a != b)
      Console::WriteLine("a and b are not equal");

   // System:String^ and tracking reference
   String^% rstr1 = a;
   Console::WriteLine(rstr1);

   // testing an empty System::String^
   String^ n;
   if (n == nullptr)
      Console::WriteLine("n is empty");
}
```

```Output
abcdef

abcghi

ghiabc

c

abcdefghi

abczzz

abc1

abc97

abc3.1

abcdef

a and b are equal

a and b are not equal

abc

n is empty
```

L'esempio seguente illustra che è possibile eseguire l'overload degli operatori forniti dal compilatore e che il compilatore troverà un overload di funzione in base al tipo <xref:System.String>.

```cpp
// string_operators_2.cpp
// compile with: /clr
using namespace System;

// a string^ overload will be favored when calling with a String
void Test_Overload(const char * a) {
   Console::WriteLine("const char * a");
}
void Test_Overload(String^ a) {
   Console::WriteLine("String^ a");
}

// overload will be called instead of compiler defined operator
String^ operator +(String^ a, String^ b) {
   return ("overloaded +(String^ a, String^ b)");
}

// overload will be called instead of compiler defined operator
String^ operator +(Object^ a, String^ b) {
   return ("overloaded +(Object^ a, String^ b)");
}

// overload will be called instead of compiler defined operator
String^ operator +(String^ a, Object^ b) {
   return ("overloaded +(String^ a, Object^ b)");
}

int main() {
   String^ a = gcnew String("abc");
   String^ b = "def";   // same as gcnew form
   Object^ c = gcnew String("ghi");

   char d[100] = "abc";

   Console::WriteLine(a + b);
   Console::WriteLine(a + c);
   Console::WriteLine(c + a);

   Test_Overload("hello");
   Test_Overload(d);
}
```

```Output
overloaded +(String^ a, String^ b)

overloaded +(String^ a, Object^ b)

overloaded +(Object^ a, String^ b)

String^ a

const char * a
```

L'esempio seguente mostra che il compilatore distingue tra stringhe native e stringhe <xref:System.String>.

```cpp
// string_operators_3.cpp
// compile with: /clr
using namespace System;
int func() {
   throw "simple string";   // const char *
};

int func2() {
   throw "string" + "string";   // returns System::String
};

template<typename T>
void func3(T t) {
   Console::WriteLine(T::typeid);
}

int main() {
   try {
      func();
   }
   catch(char * e) {
      Console::WriteLine("char *");
   }

   try {
      func2();
   }
   catch(String^ str) {
      Console::WriteLine("String^ str");
   }

   func3("string");   // const char *
   func3("string" + "string");   // returns System::String
}
```

```Output
char *

String^ str

System.SByte*

System.String
```

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per .NET e UWP](component-extensions-for-runtime-platforms.md)<br/>
[Stringa e valori letterali carattere](../cpp/string-and-character-literals-cpp.md)<br/>
[/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md)
