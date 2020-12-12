---
description: 'Altre informazioni su: Reflection (C++/CLI)'
title: Reflection (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- typeid keyword [C++]
- reflection [C++}, about reflection
- metadata, reflection
- GetType method
- .NET Framework [C++], reflection
- data types [C++], reflection
- reflection [C++}
- plug-ins [C++]
- reflection [C++}, plug-ins
- assemblies [C++], enumerating data types in
- public types [C++]
- reflection [C++], external assemblies
- assemblies [C++]
- data types [C++], enumerating
- public members [C++]
ms.assetid: 46b6ff4a-e441-4022-8892-78e69422f230
ms.openlocfilehash: a3a9a33a239ec678279455ea41b7c60749cc0189
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245798"
---
# <a name="reflection-ccli"></a>Reflection (C++/CLI)

La reflection consente di controllare i tipi di dati noti in fase di esecuzione. La reflection consente l'enumerazione dei tipi di dati in un determinato assembly e i membri di un determinato tipo di classe o valore possono essere individuati. Questo vale indipendentemente dal fatto che il tipo sia noto o a cui si fa riferimento in fase di compilazione. Questo rende la reflection una funzionalità utile per gli strumenti di sviluppo e gestione del codice.

Si noti che il nome dell'assembly specificato è il nome sicuro (vedere [creazione e uso di assembly Strong-Named](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies)), che include la versione dell'assembly, le impostazioni cultura e le informazioni di firma. Si noti inoltre che è possibile recuperare il nome dello spazio dei nomi in cui è definito il tipo di dati, insieme al nome della classe di base.

Il modo più comune per accedere alle funzionalità di Reflection è tramite il <xref:System.Object.GetType%2A> metodo. Questo metodo viene fornito da <xref:System.Object?displayProperty=nameWithType> , da cui derivano tutte le classi sottoposte a Garbage Collection.

> [!NOTE]
> La reflection su un file con estensione exe compilata con il compilatore Microsoft C++ è consentita solo se il file con estensione exe viene compilato con le opzioni del compilatore **/CLR: pure** o **/CLR: safe** . Le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non disponibili in Visual Studio 2017. Per ulteriori informazioni, vedere [/CLR (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) .

Per altre informazioni, vedere <xref:System.Reflection>.

## <a name="example-gettype"></a>Esempio: GetType

Il `GetType` metodo restituisce un puntatore a un <xref:System.Type> oggetto classe che descrive il tipo su quando l'oggetto è basato su. (L'oggetto **tipo** non contiene informazioni specifiche dell'istanza). Uno di questi elementi è il nome completo del tipo, che può essere visualizzato come segue:

Si noti che il nome del tipo include l'ambito completo in cui è definito il tipo, incluso lo spazio dei nomi, e che viene visualizzato nella sintassi .NET, con un punto come operatore di risoluzione dell'ambito.

```cpp
// vcpp_reflection.cpp
// compile with: /clr
using namespace System;
int main() {
   String ^ s = "sample string";
   Console::WriteLine("full type name of '{0}' is '{1}'", s, s->GetType());
}
```

```Output
full type name of 'sample string' is 'System.String'
```

## <a name="example-boxed-value-types"></a>Esempio: tipi di valore boxed

I tipi di valore possono essere usati `GetType` anche con la funzione, ma devono essere prima boxed.

```cpp
// vcpp_reflection_2.cpp
// compile with: /clr
using namespace System;
int main() {
   Int32 i = 100;
   Object ^ o = i;
   Console::WriteLine("type of i = '{0}'", o->GetType());
}
```

```Output
type of i = 'System.Int32'
```

## <a name="example-typeid"></a>Esempio: typeid

Come per il `GetType` metodo, l'operatore [typeid](../extensions/typeid-cpp-component-extensions.md) restituisce un puntatore a un oggetto **tipo** , pertanto questo codice indica il nome del tipo **System. Int32**. La visualizzazione dei nomi dei tipi è la funzionalità di base della reflection, ma una tecnica potenzialmente più utile consiste nell'ispezionare o individuare i valori validi per i tipi enumerati. Questa operazione può essere eseguita tramite la funzione statica **enum:: GetNames** , che restituisce una matrice di stringhe, ognuna delle quali contiene un valore di enumerazione in formato testo.  Nell'esempio seguente viene recuperata una matrice di stringhe che descrive i valori di enumerazione del valore per l'enumerazione **options** (CLR) e le Visualizza in un ciclo.

Se viene aggiunta una quarta opzione all'enumerazione **options** , questo codice segnalerà la nuova opzione senza ricompilazione, anche se l'enumerazione è definita in un assembly separato.

```cpp
// vcpp_reflection_3.cpp
// compile with: /clr
using namespace System;

enum class Options {   // not a native enum
   Option1, Option2, Option3
};

int main() {
   array<String^>^ names = Enum::GetNames(Options::typeid);

   Console::WriteLine("there are {0} options in enum '{1}'",
               names->Length, Options::typeid);

   for (int i = 0 ; i < names->Length ; i++)
      Console::WriteLine("{0}: {1}", i, names[i]);

   Options o = Options::Option2;
   Console::WriteLine("value of 'o' is {0}", o);
}
```

```Output
there are 3 options in enum 'Options'
0: Option1
1: Option2
2: Option3
value of 'o' is Option2
```

## <a name="example-gettype-members-and-properties"></a>Esempio: membri e proprietà GetType

L' `GetType` oggetto supporta diversi membri e proprietà che possono essere utilizzati per esaminare un tipo. Questo codice consente di recuperare e visualizzare alcune di queste informazioni:

```cpp
// vcpp_reflection_4.cpp
// compile with: /clr
using namespace System;
int main() {
   Console::WriteLine("type information for 'String':");
   Type ^ t = String::typeid;

   String ^ assemblyName = t->Assembly->FullName;
   Console::WriteLine("assembly name: {0}", assemblyName);

   String ^ nameSpace = t->Namespace;
   Console::WriteLine("namespace: {0}", nameSpace);

   String ^ baseType = t->BaseType->FullName;
   Console::WriteLine("base type: {0}", baseType);

   bool isArray = t->IsArray;
   Console::WriteLine("is array: {0}", isArray);

   bool isClass = t->IsClass;
   Console::WriteLine("is class: {0}", isClass);
}
```

```Output
type information for 'String':
assembly name: mscorlib, Version=1.0.5000.0, Culture=neutral,
PublicKeyToken=b77a5c561934e089
namespace: System
base type: System.Object
is array: False
is class: True
```

## <a name="example-enumeration-of-types"></a>Esempio: enumerazione di tipi

La reflection consente inoltre l'enumerazione dei tipi all'interno di un assembly e i membri all'interno delle classi. Per illustrare questa funzionalità, definire una classe semplice:

```cpp
// vcpp_reflection_5.cpp
// compile with: /clr /LD
using namespace System;
public ref class TestClass {
   int m_i;
public:
   TestClass() {}
   void SimpleTestMember1() {}
   String ^ SimpleMember2(String ^ s) { return s; }
   int TestMember(int i) { return i; }
   property int Member {
      int get() { return m_i; }
      void set(int i) { m_i = i; }
   }
};
```

## <a name="example-inspection-of-assemblies"></a>Esempio: ispezione degli assembly

Se il codice precedente viene compilato in una DLL denominata vcpp_reflection_6.dll, è possibile usare la reflection per esaminare il contenuto di questo assembly. Ciò comporta l'uso della funzione dell'API di reflection statica xrif: System. Reflection. assembly. Load% 2A? displayProperty = nameWithType per caricare l'assembly. Questa funzione restituisce l'indirizzo di un oggetto **assembly** su cui è possibile eseguire una query sui moduli e sui tipi all'interno di.

Una volta che il sistema di reflection ha caricato correttamente l'assembly, viene recuperata una matrice di oggetti di **tipo** con la <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=nameWithType> funzione. Ogni elemento della matrice contiene informazioni su un tipo diverso, anche se in questo caso è definita una sola classe. Utilizzando un ciclo, viene eseguita una query su ogni **tipo** in questa matrice sui membri del tipo utilizzando la funzione **Type:: GetMembers** . Questa funzione restituisce una matrice di oggetti **MethodInfo** , ogni oggetto contenente informazioni sulla funzione membro, sul membro dati o sulla proprietà nel tipo.

Si noti che l'elenco di metodi include le funzioni definite in modo esplicito in **TestClass** e le funzioni ereditate in modo implicito dalla classe **System:: Object** . Nell'ambito della descrizione di .NET anziché della sintassi Visual C++, le proprietà vengono visualizzate come membro dati sottostante a cui si accede tramite le funzioni get/set. Le funzioni get/set vengono visualizzate in questo elenco come metodi normali. La reflection è supportata tramite la Common Language Runtime, non dal compilatore Microsoft C++.

Sebbene sia stato utilizzato questo codice per esaminare un assembly definito, è possibile utilizzare questo codice anche per esaminare gli assembly .NET. Se ad esempio si modifica TestAssembly in mscorlib, verrà visualizzato un elenco di tutti i tipi e metodi definiti in mscorlib.dll.

```cpp
// vcpp_reflection_6.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;
using namespace System::Reflection;
int main() {
   Assembly ^ a = nullptr;
   try {
      // load assembly -- do not use file extension
      // will look for .dll extension first
      // then .exe with the filename
      a = Assembly::Load("vcpp_reflection_5");
   }
   catch (FileNotFoundException ^ e) {
      Console::WriteLine(e->Message);
      return -1;
   }

   Console::WriteLine("assembly info:");
   Console::WriteLine(a->FullName);
   array<Type^>^ typeArray = a->GetTypes();

   Console::WriteLine("type info ({0} types):", typeArray->Length);

   int totalTypes = 0;
   int totalMembers = 0;
   for (int i = 0 ; i < typeArray->Length ; i++) {
      // retrieve array of member descriptions
      array<MemberInfo^>^ member = typeArray[i]->GetMembers();

      Console::WriteLine("  members of {0} ({1} members):",
      typeArray[i]->FullName, member->Length);
      for (int j = 0 ; j < member->Length ; j++) {
         Console::Write("       ({0})",
         member[j]->MemberType.ToString() );
         Console::Write("{0}  ", member[j]);
         Console::WriteLine("");
         totalMembers++;
      }
      totalTypes++;
   }
   Console::WriteLine("{0} total types, {1} total members",
   totalTypes, totalMembers);
}
```

## <a name="how-to-implement-a-plug-in-component-architecture-using-reflection"></a><a name="implement"></a> Procedura: implementare un'architettura del componente Plug-In mediante reflection

Negli esempi di codice seguenti viene illustrato l'utilizzo della reflection per implementare una semplice architettura "plug-in". Il primo elenco è l'applicazione, il secondo è il plug-in. L'applicazione è un modulo costituito da più documenti che si popola utilizzando qualsiasi classe basata su form presente nella DLL del plug-in fornita come argomento della riga di comando.

L'applicazione tenta di caricare l'assembly specificato utilizzando il <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> metodo. In caso di esito positivo, i tipi all'interno dell'assembly vengono enumerati utilizzando il <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=fullName> metodo. Viene quindi verificata la compatibilità di ogni tipo utilizzando il <xref:System.Type.IsAssignableFrom%2A?displayProperty=fullName> metodo. In questo esempio, le classi disponibili nell'assembly fornito devono essere derivate dalla <xref:System.Windows.Forms.Form> classe per qualificarsi come plug-in.

Viene quindi creata un'istanza delle classi compatibili con il <xref:System.Activator.CreateInstance%2A?displayProperty=fullName> metodo, che accetta <xref:System.Type> come argomento e restituisce un puntatore a una nuova istanza. Ogni nuova istanza viene quindi associata al form e visualizzata.

Si noti che il <xref:System.Reflection.Assembly.Load%2A> metodo non accetta nomi di assembly che includono l'estensione di file. La funzione Main nell'applicazione consente di rimuovere tutte le estensioni fornite, quindi l'esempio di codice seguente funziona in entrambi i casi.

### <a name="example"></a>Esempio

Il codice seguente definisce l'applicazione che accetta plug-in. È necessario fornire un nome di assembly come primo argomento. Questo assembly deve contenere almeno un <xref:System.Windows.Forms.Form> tipo derivato pubblico.

```cpp
// plugin_application.cpp
// compile with: /clr /c
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Reflection;

ref class PluggableForm : public Form  {
public:
   PluggableForm() {}
   PluggableForm(Assembly^ plugAssembly) {
      Text = "plug-in example";
      Size = Drawing::Size(400, 400);
      IsMdiContainer = true;

      array<Type^>^ types = plugAssembly->GetTypes( );
      Type^ formType = Form::typeid;

      for (int i = 0 ; i < types->Length ; i++) {
         if (formType->IsAssignableFrom(types[i])) {
            // Create an instance given the type description.
            Form^ f = dynamic_cast<Form^> (Activator::CreateInstance(types[i]));
            if (f) {
               f->Text = types[i]->ToString();
               f->MdiParent = this;
               f->Show();
            }
         }
      }
   }
};

int main() {
   Assembly^ a = Assembly::LoadFrom("plugin_application.exe");
   Application::Run(gcnew PluggableForm(a));
}
```

### <a name="example"></a>Esempio

Il codice seguente definisce tre classi derivate da <xref:System.Windows.Forms.Form> . Quando il nome del nome dell'assembly risultante viene passato al file eseguibile nell'elenco precedente, ciascuna di queste tre classi viene individuata e ne viene creata un'istanza, nonostante il fatto che siano stati tutti sconosciuti all'applicazione host in fase di compilazione.

```cpp
// plugin_assembly.cpp
// compile with: /clr /LD
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Reflection;
using namespace System::Drawing;

public ref class BlueForm : public Form {
public:
   BlueForm() {
      BackColor = Color::Blue;
   }
};

public ref class CircleForm : public Form {
protected:
   virtual void OnPaint(PaintEventArgs^ args) override {
      args->Graphics->FillEllipse(Brushes::Green, ClientRectangle);
   }
};

public ref class StarburstForm : public Form {
public:
   StarburstForm(){
      BackColor = Color::Black;
   }
protected:
   virtual void OnPaint(PaintEventArgs^ args) override {
      Pen^ p = gcnew Pen(Color::Red, 2);
      Random^ r = gcnew Random( );
      Int32 w = ClientSize.Width;
      Int32 h = ClientSize.Height;
      for (int i=0; i<100; i++) {
         float x1 = w / 2;
         float y1 = h / 2;
         float x2 = r->Next(w);
         float y2 = r->Next(h);
         args->Graphics->DrawLine(p, x1, y1, x2, y2);
      }
   }
};
```

## <a name="how-to-enumerate-data-types-in-assemblies-using-reflection"></a><a name="enumerate"></a> Procedura: enumerare tipi di dati negli assembly tramite reflection

Il codice seguente illustra l'enumerazione dei tipi e dei membri pubblici usando <xref:System.Reflection> .

Dato il nome di un assembly, nella directory locale o nella GAC, il codice seguente tenta di aprire l'assembly e recuperare le descrizioni. In caso di esito positivo, ogni tipo viene visualizzato con i relativi membri pubblici.

Si noti che <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> richiede l'utilizzo di un'estensione di file. Pertanto, l'utilizzo di "mscorlib.dll" come argomento della riga di comando avrà esito negativo, mentre se si utilizza solo "mscorlib" verrà visualizzata la visualizzazione dei tipi di .NET Framework. Se non viene specificato alcun nome di assembly, il codice rileverà e segnalerà i tipi all'interno dell'assembly corrente (il file EXE risultante da questo codice).

### <a name="example"></a>Esempio

```cpp
// self_reflection.cpp
// compile with: /clr
using namespace System;
using namespace System::Reflection;
using namespace System::Collections;

public ref class ExampleType {
public:
   ExampleType() {}
   void Func() {}
};

int main() {
   String^ delimStr = " ";
   array<Char>^ delimiter = delimStr->ToCharArray( );
   array<String^>^ args = Environment::CommandLine->Split( delimiter );

// replace "self_reflection.exe" with an assembly from either the local
// directory or the GAC
   Assembly^ a = Assembly::LoadFrom("self_reflection.exe");
   Console::WriteLine(a);

   int count = 0;
   array<Type^>^ types = a->GetTypes();
   IEnumerator^ typeIter = types->GetEnumerator();

   while ( typeIter->MoveNext() ) {
      Type^ t = dynamic_cast<Type^>(typeIter->Current);
      Console::WriteLine("   {0}", t->ToString());

      array<MemberInfo^>^ members = t->GetMembers();
      IEnumerator^ memberIter = members->GetEnumerator();
      while ( memberIter->MoveNext() ) {
         MemberInfo^ mi = dynamic_cast<MemberInfo^>(memberIter->Current);
         Console::Write("      {0}", mi->ToString( ) );
         if (mi->MemberType == MemberTypes::Constructor)
            Console::Write("   (constructor)");

         Console::WriteLine();
      }
      count++;
   }
   Console::WriteLine("{0} types found", count);
}
```

## <a name="see-also"></a>Vedere anche

- [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
