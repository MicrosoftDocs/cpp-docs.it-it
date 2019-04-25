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
ms.openlocfilehash: b91918d526d83d4cf47436d02b7c67038576bafb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62152773"
---
# <a name="managed-types-ccli"></a>Tipi gestiti (C++/CLI)

Visual C++ consente l'accesso alle funzionalità .NET attraverso tipi gestiti, che forniscono supporto per funzionalità di common language runtime e sono soggetti ai vantaggi e limitazioni di runtime.

## <a name="main_functions"></a> Tipi gestiti e funzione main

Quando si scrive un'applicazione che usa **/clr**, gli argomenti delle **Main ()** funzione non può essere di un tipo gestito.

È un esempio di una firma appropriata:

```cpp
// managed_types_and_main.cpp
// compile with: /clr
int main(int, char*[], char*[]) {}
```

## <a name="dotnet"></a> Equivalenti di .NET framework a tipi nativi C++

La tabella seguente illustra le parole chiave per i tipi incorporati di Visual C++, che rappresentano gli alias dei tipi predefiniti in di **sistema** dello spazio dei nomi.

|Tipo di Visual C++|Tipo .NET Framework|
|-----------------------|-------------------------|
|**void**|<xref:System.Void?displayProperty=nameWithType>|
|**bool**|<xref:System.Boolean?displayProperty=nameWithType>|
|**char con segno** |<xref:System.SByte?displayProperty=nameWithType>|
|**unsigned char**|<xref:System.Byte?displayProperty=nameWithType>|
|**wchar_t**|<xref:System.Char?displayProperty=nameWithType>|
|**brevi** e **short con segno**|<xref:System.Int16?displayProperty=nameWithType>|
|**unsigned short**|<xref:System.UInt16?displayProperty=nameWithType>|
|**int**, **tipo signed int**, **long**, e **lungo firmato**|<xref:System.Int32?displayProperty=nameWithType>|
|**int senza segno** e **long senza segno**|<xref:System.UInt32?displayProperty=nameWithType>|
|**__int64** e **firmato __int64**|<xref:System.Int64?displayProperty=nameWithType>|
|**unsigned __int64**|<xref:System.UInt64?displayProperty=nameWithType>|
|**float**|<xref:System.Single?displayProperty=nameWithType>|
|**doppie** e **long double**|<xref:System.Double?displayProperty=nameWithType>|

Per altre informazioni sull'opzione del compilatore sul valore predefinito di a con o senza segno **char**, vedere [/J (il tipo char predefinito è unsigned)](../build/reference/j-default-char-type-is-unsigned.md).

## <a name="version_issues"></a> Problemi di versione per tipi di valore annidati in tipi nativi

Prendere in considerazione un componente di assembly firmato (nome sicuro) consente di compilare un assembly client. Il componente contiene un tipo di valore utilizzato nel client come il tipo per un membro di un'unione native, una classe o una matrice. Se una versione futura del componente viene modificato il layout del tipo di valore o la dimensione, è necessario ricompilare il client.

Creare un file di chiave con [sn.exe](/dotnet/framework/tools/sn-exe-strong-name-tool) (`sn -k mykey.snk`).

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

In questo esempio è il client:

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

Tuttavia, se si aggiunge un altro membro `struct S` in nested_value_types, (ad esempio, `double d;`) e ricompilare il componente senza ricompilare il client, il risultato è un'eccezione non gestita (di tipo <xref:System.IO.FileLoadException?displayProperty=fullName>).

## <a name="test_equality"></a> Procedura: Per verificare l'uguaglianza

Nell'esempio seguente, un test di uguaglianza che usa le estensioni gestite per C++ si basa su ciò che l'handle fanno riferimento.

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

Il linguaggio IL per questo programma mostra che il valore restituito viene implementato tramite una chiamata a op_Equality.

```MSIL
IL_0012:  call       bool [mscorlib]System.String::op_Equality(string,
                                                               string)
```

## <a name="diagnose_fix"></a> Procedura: Diagnosticare e risolvere i problemi di compatibilità di Assembly

Questo argomento viene illustrato cosa può accadere quando la versione di un assembly cui viene fatto riferimento in fase di compilazione non corrisponde alla versione dell'assembly cui viene fatto riferimento in fase di esecuzione e su come evitare il problema.

Quando viene compilato un assembly, è possibile fare riferimento ad altri assembly con il `#using` sintassi. Durante la compilazione, questi assembly sono accessibili dal compilatore. Informazioni da questi assembly vengono utilizzate per prendere decisioni di ottimizzazione.

Tuttavia, se l'assembly di riferimento viene modificato e ricompilata e ma non si ricompila l'assembly di riferimento che è dipendente su di esso, gli assembly potrebbero non essere ancora compatibili. Le decisioni di ottimizzazione valide nella prima di tutto potrebbero non essere corrette per quanto riguarda la nuova versione dell'assembly. Possono verificarsi diversi errori di runtime a causa di incompatibilità. Non si verifica alcuna eccezione specifici che verrà prodotti in tali casi. Il modo in cui che viene segnalato l'errore in fase di esecuzione dipende dalla natura della modifica del codice che ha causato il problema.

Questi errori non devono essere un problema nel codice di produzione finale, purché l'intera applicazione viene ricompilata per la versione rilasciata del prodotto. Gli assembly che vengono rilasciati al pubblico devono essere contrassegnati con un numero di versione ufficiale, che assicura che evitare questi problemi. Per altre informazioni, vedere [Controllo delle versioni degli assembly](/dotnet/framework/app-domains/assembly-versioning).

### <a name="diagnosing-and-fixing-an-incompatibility-error"></a>La diagnosi e correzione di un errore di incompatibilità

1. Se si verificano eccezioni di runtime o altre condizioni di errore che si verificano nel codice che fa riferimento a un altro assembly e nessun altro causa identificata, è possibile che sia presente un assembly aggiornato.

1. In primo luogo, isolare e riprodurre l'eccezione o un'altra condizione di errore. Un problema che si verifica a causa di un'eccezione obsoleta deve essere riproducibile.

1. Controllare il timestamp di tutti gli assembly cui viene fatto riferimento nell'applicazione.

1. Se i timestamp di tutti gli assembly cui viene fatto riferimento siano successivi al timestamp dell'ultima compilazione dell'applicazione, l'applicazione non è aggiornato. Se in questo caso, ricompilare l'applicazione con l'assembly più recente e apportare modifiche al codice necessarie.

1. Eseguire nuovamente l'applicazione, completare i passaggi per riprodurre il problema e verificare che non si verifica l'eccezione.

### <a name="example"></a>Esempio

Il seguente programma illustra il problema riducendo l'accessibilità di un metodo e il tentativo di accedere a tale metodo in un altro assembly senza ricompilare. Provare a compilare `changeaccess.cpp` prima. Questo è l'assembly di riferimento che verrà modificato. Compilare quindi `referencing.cpp`. La compilazione ha esito positivo. A questo punto, ridurre l'accessibilità del metodo chiamato. Ricompilare `changeaccess.cpp` con il flag `/DCHANGE_ACCESS`. In questo modo il metodo protetto, anziché privato, in modo più può essere legalmente chiamato. Senza dover ricompilare `referencing.exe`, eseguire nuovamente l'applicazione. Un'eccezione <xref:System.MethodAccessException> verrà generato.

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
[Direttiva #using](../preprocessor/hash-using-directive-cpp.md)
