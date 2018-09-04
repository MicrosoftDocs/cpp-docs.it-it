---
title: Stringa (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- string support with /clr
- /clr compiler option [C++], string support
ms.assetid: c695f965-9be0-4e20-9661-373bfee6557e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5e37a3a934fbc66af62a30fd2fc2c23e1c659ef2
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43692098"
---
# <a name="string--c-component-extensions"></a>Stringa (Estensioni del componente C++)

Il compilatore Visual C++ supporta *stringhe*, che sono oggetti che rappresentano il testo come una sequenza di caratteri. Visual C++ supporta variabili di stringa, il cui valore è implicito, e i valori letterali, il cui valore è una stringa tra virgolette esplicita.

## <a name="all-runtimes"></a>Tutti i runtime

Il Windows Runtime e common language runtime rappresentano stringhe come oggetti la cui allocata la memoria viene gestita automaticamente. Vale a dire, non è necessario rimuovere in modo esplicito la memoria per una stringa quando termina l'esce variabile stringa dall'ambito o l'applicazione. Per indicare che la durata di un oggetto stringa deve essere gestita automaticamente, dichiarare il tipo di stringa con il [handle a oggetto (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md) modificatore.

## <a name="windows-runtime"></a>Windows Runtime

L'architettura di Windows Runtime richiede Visual C++ per implementare il `String` tipo di dati di `Platform` dello spazio dei nomi. Per comodità, Visual C++ fornisce anche il `string` tipo di dati che è un sinonimo `Platform::String`, nella `default` dello spazio dei nomi.

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

Questo argomento viene illustrato come il compilatore Visual C++ elabora i valori letterali stringa durante l'esecuzione usando il `/clr` opzione del compilatore. Usare `/clr`, è necessario anche usare common language runtime (CLR), C + + c++ /CLI sintassi della riga di comando e oggetti gestiti. Per altre informazioni sulle `/clr`, vedere [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md).

Durante la compilazione con `/clr`, il compilatore convertirà i valori letterali stringa in stringhe di tipo <xref:System.String>. Per mantenere la compatibilità con il codice esistente sono due eccezioni a questa:

- Gestione delle eccezioni. Quando viene generata una stringa letterale, il compilatore rileva, come valore letterale stringa.

- Deduzione del modello. Quando un valore letterale stringa viene passata come argomento di modello, il compilatore non lo convertirà da un <xref:System.String>. Si noti che i valori letterali stringa passati come argomento generico verranno alzata di livello <xref:System.String>.

Il compilatore include anche supporto predefinito per tre operatori, ovvero è possibile eseguire l'override per personalizzarne il comportamento:

- System:: String ^ operatore + (System:: String, System:: String)

- System:: String ^ operatore + (System:: Object, System:: String);

- System:: String ^ operatore + (System:: String, System:: Object);

Quando viene passato un <xref:System.String>, il compilatore finestra, se necessario e quindi concatenare l'oggetto (con ToString) con la stringa.

> [!NOTE]
> Il punto di inserimento ("^") indica che la variabile dichiarata è un handle per C + + / CLI dell'oggetto gestito.

Per altre informazioni, vedere [String and Character Literals](../cpp/string-and-character-literals-cpp.md).

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/clr**

### <a name="examples"></a>Esempi

Esempio di codice seguente illustra la concatenazione e confronto di stringhe.

```cpp
// string_operators.cpp
// compile with: /clr
// In the following code, the caret ("^") indicates that the
// declared variable is a handle to a C++/CLI managed object.
using namespace System;

int main() {
   String ^ a = gcnew String("abc");
   String ^ b = "def";   // same as gcnew form
   Object ^ c = gcnew String("ghi");

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

   // you can append to a System::String ^
   Console::WriteLine(a + 1);
   Console::WriteLine(a + 'a');
   Console::WriteLine(a + 3.1);

   // test System::String ^ for equality
   a += b;
   Console::WriteLine(a);
   a = b;
   if (a == b)  
      Console::WriteLine("a and b are equal");

   a = "abc";
   if (a != b)  
      Console::WriteLine("a and b are not equal");

   // System:String ^ and tracking reference
   String^% rstr1 = a;
   Console::WriteLine(rstr1);

   // testing an empty System::String ^
   String ^ n;
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

L'esempio seguente viene illustrato che è possibile eseguire l'overload gli operatori fornito dal compilatore e che il compilatore individuerà un overload della funzione in base il <xref:System.String> tipo.

```cpp
// string_operators_2.cpp
// compile with: /clr
using namespace System;

// a string^ overload will be favored when calling with a String
void Test_Overload(const char * a) {
   Console::WriteLine("const char * a");
}
void Test_Overload(String ^ a) {
   Console::WriteLine("String ^ a");
}

// overload will be called instead of compiler defined operator
String ^ operator +(String ^ a, String ^ b) {
   return ("overloaded +(String ^ a, String ^ b)");
}

// overload will be called instead of compiler defined operator
String ^ operator +(Object ^ a, String ^ b) {
   return ("overloaded +(Object ^ a, String ^ b)");
}

// overload will be called instead of compiler defined operator
String ^ operator +(String ^ a, Object ^ b) {
   return ("overloaded +(String ^ a, Object ^ b)");
}

int main() {
   String ^ a = gcnew String("abc");
   String ^ b = "def";   // same as gcnew form
   Object ^ c = gcnew String("ghi");

   char d[100] = "abc";

   Console::WriteLine(a + b);
   Console::WriteLine(a + c);
   Console::WriteLine(c + a);

   Test_Overload("hello");
   Test_Overload(d);
}
```

```Output
overloaded +(String ^ a, String ^ b)

overloaded +(String ^ a, Object ^ b)

overloaded +(Object ^ a, String ^ b)

String ^ a

const char * a
```

L'esempio seguente mostra che il compilatore distingue tra stringhe native e <xref:System.String> stringhe.

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

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)  
[Valori letterali stringa e carattere](../cpp/string-and-character-literals-cpp.md)  
[/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md)