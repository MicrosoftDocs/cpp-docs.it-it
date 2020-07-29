---
title: Tipi gestiti (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- data types [C++], managed
- managed data types [C++]
- .NET Framework [C++], managed types
- data types [C++], .NET feature access
- main function, in managed applications
- managed code, main() function
- .NET Framework [C++], C++ equivalents
- __nogc type declarations
- __value keyword, issues when nesting
- equality, testing for
- versioning, diagnosing conflicts
- versioning
- exceptions, diagnosing odd behavior
- compatibility, between assemblies
ms.assetid: 679b8ed3-d966-4a0c-b627-2a3f3ec96b74
ms.openlocfilehash: c542151bda780e5306db35049d988e6514fffd62
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225605"
---
# <a name="managed-types-ccli"></a>Tipi gestiti (C++/CLI)

Visual C++ consente l'accesso alle funzionalità .NET tramite tipi gestiti, che forniscono supporto per le funzionalità del Common Language Runtime e sono soggette ai vantaggi e alle restrizioni del runtime.

## <a name="managed-types-and-the-main-function"></a><a name="main_functions"></a>Tipi gestiti e funzione Main

Quando si scrive un'applicazione utilizzando **`/clr`** , gli argomenti della funzione **Main ()** non possono essere di un tipo gestito.

Un esempio di firma corretta è:

```cpp
// managed_types_and_main.cpp
// compile with: /clr
int main(int, char*[], char*[]) {}
```

## <a name="net-framework-equivalents-to-c-native-types"></a><a name="dotnet"></a>.NET Framework equivalenti ai tipi nativi C++

Nella tabella seguente vengono illustrate le parole chiave per i tipi di Visual C++ predefiniti, ovvero alias di tipi predefiniti nello spazio dei nomi **System** .

|Tipo di Visual C++|Tipo .NET Framework|
|-----------------------|-------------------------|
|**`void`**|<xref:System.Void?displayProperty=nameWithType>|
|**`bool`**|<xref:System.Boolean?displayProperty=nameWithType>|
|**`signed char`** |<xref:System.SByte?displayProperty=nameWithType>|
|**`unsigned char`**|<xref:System.Byte?displayProperty=nameWithType>|
|**`wchar_t`**|<xref:System.Char?displayProperty=nameWithType>|
|**`short`** e**`signed short`**|<xref:System.Int16?displayProperty=nameWithType>|
|**`unsigned short`**|<xref:System.UInt16?displayProperty=nameWithType>|
|**`int`**, **`signed int`** , **`long`** e**`signed long`**|<xref:System.Int32?displayProperty=nameWithType>|
|**`unsigned int`** e**`unsigned long`**|<xref:System.UInt32?displayProperty=nameWithType>|
|**`__int64`** e**`signed __int64`**|<xref:System.Int64?displayProperty=nameWithType>|
|**`unsigned __int64`**|<xref:System.UInt64?displayProperty=nameWithType>|
|**`float`**|<xref:System.Single?displayProperty=nameWithType>|
|**`double`** e**`long double`**|<xref:System.Double?displayProperty=nameWithType>|

Per ulteriori informazioni sull'opzione del compilatore per impostazione predefinita su **`signed char`** o **`unsigned char`** , vedere [ `/J` (il tipo predefinito **`char`** è **`unsigned`** )](../build/reference/j-default-char-type-is-unsigned.md).

## <a name="version-issues-for-value-types-nested-in-native-types"></a><a name="version_issues"></a>Problemi di versione per tipi di valore annidati in tipi nativi

Si consideri un componente assembly con firma (nome sicuro) utilizzato per compilare un assembly client. Il componente contiene un tipo di valore usato nel client come tipo per un membro di un'Unione nativa, una classe o una matrice. Se una versione futura del componente modifica la dimensione o il layout del tipo di valore, è necessario ricompilare il client.

Creare un file con [sn.exe](/dotnet/framework/tools/sn-exe-strong-name-tool) ( `sn -k mykey.snk` ).

### <a name="example"></a>Esempio

L'esempio seguente è il componente.

```cpp
// nested_value_types.cpp
// compile with: /clr /LD
using namespace System::Reflection;
[assembly:AssemblyVersion("1.0.0.*"),
assembly:AssemblyKeyFile("mykey.snk")];

public value struct S {
   int i;
   void Test() {
      System::Console::WriteLine("S.i = {0}", i);
   }
};
```

### <a name="example"></a>Esempio

Questo esempio è il client:

```cpp
// nested_value_types_2.cpp
// compile with: /clr
#using <nested_value_types.dll>

struct S2 {
   S MyS1, MyS2;
};

int main() {
   S2 MyS2a, MyS2b;
   MyS2a.MyS1.i = 5;
   MyS2a.MyS2.i = 6;
   MyS2b.MyS1.i = 10;
   MyS2b.MyS2.i = 11;

   MyS2a.MyS1.Test();
   MyS2a.MyS2.Test();
   MyS2b.MyS1.Test();
   MyS2b.MyS2.Test();
}
```

### <a name="output"></a>Output

```Output
S.i = 5
S.i = 6
S.i = 10
S.i = 11
```

### <a name="comments"></a>Commenti

Tuttavia, se si aggiunge un altro membro a `struct S` in nested_value_types. cpp, ad esempio, `double d;` e si ricompila il componente senza ricompilare il client, il risultato è un'eccezione non gestita (di tipo <xref:System.IO.FileLoadException?displayProperty=fullName> ).

## <a name="how-to-test-for-equality"></a><a name="test_equality"></a>Procedura: verificare l'uguaglianza

Nell'esempio seguente, un test di uguaglianza che usa Estensioni gestite per C++ si basa su ciò che fanno riferimento gli handle.

### <a name="example"></a>Esempio

```cpp
// mcppv2_equality_test.cpp
// compile with: /clr /LD
using namespace System;

bool Test1() {
   String ^ str1 = "test";
   String ^ str2 = "test";
   return (str1 == str2);
}
```

Il linguaggio il per questo programma mostra che il valore restituito viene implementato tramite una chiamata a op_Equality.

```MSIL
IL_0012:  call       bool [mscorlib]System.String::op_Equality(string,
                                                               string)
```

## <a name="how-to-diagnose-and-fix-assembly-compatibility-problems"></a><a name="diagnose_fix"></a>Procedura: diagnosticare e correggere i problemi di compatibilità degli assembly

In questo argomento viene illustrato cosa può accadere quando la versione di un assembly a cui si fa riferimento in fase di compilazione non corrisponde alla versione dell'assembly a cui si fa riferimento in fase di esecuzione e come evitare il problema.

Quando si compila un assembly, è possibile fare riferimento ad altri assembly con la `#using` sintassi. Durante la compilazione, questi assembly sono accessibili dal compilatore. Le informazioni di questi assembly vengono utilizzate per prendere decisioni di ottimizzazione.

Tuttavia, se l'assembly a cui si fa riferimento viene modificato e ricompilato e non si ricompila l'assembly di riferimento dipendente, gli assembly potrebbero non essere ancora compatibili. Le decisioni di ottimizzazione valide inizialmente potrebbero non essere corrette rispetto alla nuova versione dell'assembly. Potrebbero verificarsi diversi errori di runtime a causa di queste incompatibilità. In questi casi non è presente alcuna eccezione specifica che verrà generata. Il modo in cui l'errore viene segnalato in fase di esecuzione dipende dalla natura della modifica del codice che ha causato il problema.

Questi errori non devono essere un problema nel codice di produzione finale, purché l'intera applicazione venga ricompilata per la versione rilasciata del prodotto. Gli assembly rilasciati al pubblico devono essere contrassegnati con un numero di versione ufficiale, in modo da evitare che questi problemi si verifichino. Per altre informazioni, vedere [Controllo delle versioni degli assembly](/dotnet/framework/app-domains/assembly-versioning).

### <a name="diagnosing-and-fixing-an-incompatibility-error"></a>Diagnosi e correzione di un errore di incompatibilità

1. Se si riscontrano eccezioni in fase di esecuzione o altre condizioni di errore che si verificano nel codice che fa riferimento a un altro assembly e non hanno altre cause identificate, è possibile che si stia utilizzando un assembly non aggiornato.

1. Prima di tutto, isolare e riprodurre l'eccezione o altre condizioni di errore. Un problema che si verifica a causa di un'eccezione obsoleta dovrebbe essere riproducibile.

1. Controllare il timestamp degli assembly a cui si fa riferimento nell'applicazione.

1. Se i timestamp degli assembly a cui si fa riferimento sono successivi al timestamp dell'ultima compilazione dell'applicazione, l'applicazione non è aggiornata. In tal caso, ricompilare l'applicazione con l'assembly più recente e apportare le modifiche al codice necessarie.

1. Eseguire di nuovo l'applicazione, eseguire i passaggi per riprodurre il problema e verificare che l'eccezione non venga eseguita.

### <a name="example"></a>Esempio

Nel programma seguente viene illustrato il problema riducendo l'accessibilità di un metodo e tentando di accedere a tale metodo in un altro assembly senza ricompilare. Prima di tutto, provare a eseguire la compilazione `changeaccess.cpp` . Si tratta dell'assembly a cui si fa riferimento che verrà modificato. Compilare quindi `referencing.cpp` . La compilazione ha esito positivo. A questo punto, ridurre l'accessibilità del metodo chiamato. Ricompilare `changeaccess.cpp` con il flag `/DCHANGE_ACCESS` . In questo modo, il metodo viene protetto, anziché privato, in modo che possa essere più chiamato legalmente. Senza ricompilare `referencing.exe` , eseguire di nuovo l'applicazione. Viene generata un'eccezione <xref:System.MethodAccessException> .

```cpp
// changeaccess.cpp
// compile with: /clr:safe /LD
// After the initial compilation, add /DCHANGE_ACCESS and rerun
// referencing.exe to introduce an error at runtime. To correct
// the problem, recompile referencing.exe

public ref class Test {
#if defined(CHANGE_ACCESS)
protected:
#else
public:
#endif

  int access_me() {
    return 0;
  }

};
```

```cpp
// referencing.cpp
// compile with: /clr:safe
#using <changeaccess.dll>

// Force the function to be inline, to override the compiler's own
// algorithm.
__forceinline
int CallMethod(Test^ t) {
  // The call is allowed only if access_me is declared public
  return t->access_me();
}

int main() {
  Test^ t = gcnew Test();
  try
  {
    CallMethod(t);
    System::Console::WriteLine("No exception.");
  }
  catch (System::Exception ^ e)
  {
    System::Console::WriteLine("Exception!");
  }
  return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
[Interoperabilità con altri linguaggi .NET (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)<br/>
[Tipi gestiti (C++/CLI)](../dotnet/managed-types-cpp-cli.md)<br/>
[#using (direttiva)](../preprocessor/hash-using-directive-cpp.md)
