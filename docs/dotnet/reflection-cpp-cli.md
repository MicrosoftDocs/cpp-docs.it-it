---
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
ms.openlocfilehash: a17910e0288b81723aa837ba9204bb40713d5d49
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58770804"
---
# <a name="reflection-ccli"></a>Reflection (C++/CLI)

La reflection consente ai tipi di dati noti essere controllata in fase di esecuzione. La reflection consente l'enumerazione dei tipi di dati in un determinato assembly e i membri di un determinato tipo di classe o il valore possono essere individuati. Questo vale indipendentemente dal fatto il tipo è noto o fatto riferimento in fase di compilazione. In questo modo la reflection una funzionalità utile per lo sviluppo e gli strumenti di gestione di codice.

Si noti che il nome dell'assembly specificato è il nome sicuro (vedere [creazione e assembly con nome sicuro](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies)), che include la versione dell'assembly, le impostazioni cultura e le informazioni sulla firma. Si noti inoltre che il nome dello spazio dei nomi in cui è definito il tipo di dati può essere recuperato, insieme al nome della classe di base.

Il modo più comune per accedere alle funzionalità di reflection è tramite il <xref:System.Object.GetType%2A> (metodo). Questo metodo è fornito da <xref:System.Object?displayProperty=nameWithType>, da cui derivano tutte le classi di garbage collection.

> [!NOTE]
> La reflection su un .exe compilate con il compilatore Visual C++ è consentita solo se il .exe viene compilata con il **/clr: pure** oppure **/CLR: safe** opzioni del compilatore. Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non è disponibile in Visual Studio 2017. Visualizzare [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per altre informazioni.

Per altre informazioni, vedere <xref:System.Reflection>.

## <a name="example-gettype"></a>Esempio: GetType

Il `GetType` metodo restituisce un puntatore a un <xref:System.Type> classe object, che descrive il tipo su cui è basato l'oggetto. (Il **tipo** oggetto non contiene eventuali informazioni specifiche dell'istanza.) Uno degli elementi è il nome completo del tipo, che può essere visualizzato come indicato di seguito:

Si noti che il nome del tipo include l'ambito completo in cui è definito il tipo, incluso lo spazio dei nomi, e che viene visualizzato nella sintassi di .NET, con un punto come operatore di risoluzione dell'ambito.

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

I tipi di valore possono essere utilizzati con il `GetType` funzionano anche, ma deve essere sottoposto a boxing prima di tutto.

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

Come con le `GetType` metodo, il [typeid](../extensions/typeid-cpp-component-extensions.md) operatore restituisce un puntatore a un **tipo** dell'oggetto, pertanto questo codice indica il nome del tipo **System.Int32**. Visualizzazione di nomi di tipo è la più semplice di reflection, ma è una tecnica potenzialmente più utile per controllare o individuare i valori validi per i tipi enumerati. Questa operazione può essere eseguita usando il metodo statico **enum:: GetNames** funzione, che restituisce una matrice di stringhe, ognuna delle quali contiene un valore di enumerazione sotto forma di testo.  L'esempio seguente recupera una matrice di stringhe che descrive i valori di enumerazione per il **opzioni** enum (CLR) e li visualizza in un ciclo.

Se si aggiunge una quarta opzione per la **opzioni** enumerazione, questo codice segnalerà la nuova opzione senza ricompilazione, anche se l'enumerazione viene definita in un assembly separato.

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

## <a name="example-gettype-members-and-properties"></a>Esempio: Proprietà e membri GetType

Il `GetType` oggetto supporta un numero di membri e le proprietà che possono essere utilizzate per esaminare un tipo. Questo codice recupera e visualizza alcune di queste informazioni:

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

Se il codice riportato sopra viene compilato in una DLL denominata vcpp_reflection_6. dll, è quindi possibile usare la reflection per esaminare il contenuto di questo assembly. Ciò comporta l'uso di reflection statica xref:System.Reflection.Assembly.Load%2A?displayProperty=nameWithType funzione API per caricare l'assembly. Questa funzione restituisce l'indirizzo di un **Assembly** oggetto che è quindi possibile eseguire query relative a moduli e tipi all'interno.

Una volta che il sistema di reflection è stato caricato l'assembly, una matrice di **tipo** oggetti viene recuperata con il <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=nameWithType> (funzione). Ogni elemento della matrice contiene informazioni su un tipo diverso, anche se in questo caso, viene definita una sola classe. Usando un ciclo, ciascuna **tipo** in questa matrice viene eseguita una query sui membri del tipo tramite il **:: GetMembers** (funzione). Questa funzione restituisce una matrice di **MethodInfo** oggetti, ogni oggetto che contiene informazioni sulla funzione membro, membro dati o proprietà del tipo.

Si noti che l'elenco dei metodi include in modo esplicito le funzioni definite **TestClass** e le funzioni ereditate in modo implicito dalle **System:: Object** classe. Come parte dell'adozione in .NET anziché nella sintassi di Visual C++, le proprietà vengono visualizzate come membri dati sottostanti a cui che si accede tramite le funzioni get/set. Le funzioni get/set vengono visualizzati in questo elenco come i metodi regolari. Reflection è supportata tramite common language runtime, non dal compilatore Visual C++.

Anche se si usa questo codice per esaminare un assembly definito, è possibile utilizzare anche questo codice per controllare gli assembly .NET. Ad esempio, se si modifica TestAssembly a mscorlib, si verrà visualizzato un elenco di ogni tipo e un metodo definito in mscorlib. dll.

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

## <a name="implement"></a> Procedura: Implementare un'architettura plug-in tramite Reflection

Gli esempi di codice seguenti illustrano l'uso della reflection per implementare una semplice architettura "plug-in". Il primo listato è l'applicazione e il secondo è il plug-in. L'applicazione è un form che vengono inserite automaticamente usando tutte le classi presenti nella DLL del plug-in fornito come argomento della riga di comando basata su form.

L'applicazione tenta di caricare l'assembly fornito utilizzando il <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> (metodo). Se ha esito positivo, i tipi all'interno dell'assembly vengono enumerati utilizzando il <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=fullName> (metodo). Ogni tipo viene quindi verificato la compatibilità con le <xref:System.Type.IsAssignableFrom%2A?displayProperty=fullName> (metodo). In questo esempio, le classi disponibili nell'assembly specificato devono essere derivate dal <xref:System.Windows.Forms.Form> classe per essere considerata un plug-in.

Vengano quindi creata un'istanza di classi compatibile con il <xref:System.Activator.CreateInstance%2A?displayProperty=fullName> metodo, che accetta un <xref:System.Type> come argomento e restituisce un puntatore a una nuova istanza. Ogni nuova istanza viene quindi collegato al form e visualizzato.

Si noti che il <xref:System.Reflection.Assembly.Load%2A> metodo non accetta i nomi di assembly che includono l'estensione di file. La funzione principale dell'applicazione elimina le eventuali estensioni fornite, in modo che il codice seguente funziona in entrambi i casi.

### <a name="example"></a>Esempio

Il codice seguente definisce l'applicazione che accetta i plug-in. Come primo argomento, è necessario specificare un nome di assembly. Questo assembly deve contenere almeno un pubblico <xref:System.Windows.Forms.Form> tipo derivato.

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

Il codice seguente definisce tre classi derivate da <xref:System.Windows.Forms.Form>. Quando il nome del nome dell'assembly risultante viene passato all'eseguibile nell'elenco precedente, ognuna di queste tre classi verrà ora individuata e creare un'istanza, nonostante il fatto che sono stati tutti sconosciuti per l'applicazione host in fase di compilazione.

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

## <a name="enumerate"></a> Procedura: Enumerazione dei tipi di dati negli assembly tramite Reflection

Il codice seguente illustra l'enumerazione dei tipi e membri usando pubblici <xref:System.Reflection>.

Dato il nome di un assembly, la directory locale o nella Global Assembly Cache, il codice seguente tenta di aprire l'assembly e recuperare le descrizioni. Se ha esito positivo, viene visualizzato ogni tipo con i propri membri pubblici.

Si noti che <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> richiede che venga utilizzata alcuna estensione di file. Pertanto, utilizzando "mscorlib. dll" come un argomento della riga di comando avrà esito negativo, mentre l'uso solo "mscorlib" risulterà la visualizzazione dei tipi .NET Framework. Se viene fornito alcun nome di assembly, il codice rileverà e visualizzano i tipi all'interno dell'assembly corrente (il file EXE risultanti da questo codice).

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
