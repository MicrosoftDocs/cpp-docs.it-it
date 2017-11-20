---
title: Reflection (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- typeid keyword [C++]
- reflection [C++}, about reflection
- metadata, reflection
- GetType method
- .NET Framework [C++], reflection
- data types [C++], reflection
- reflection [C++}
ms.assetid: 46b6ff4a-e441-4022-8892-78e69422f230
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: cff5256d94593959c280614858cdde8be3dee9f6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="reflection-ccli"></a>Reflection (C++/CLI)
La reflection consente ai tipi di dati noti deve essere controllato in fase di esecuzione. La reflection consente l'enumerazione dei tipi di dati in un determinato assembly e i membri di un determinato tipo di classe o di valore possono essere individuati. Questo vale indipendentemente dal fatto che il tipo è noto o a cui fa riferimento in fase di compilazione. In questo modo la reflection di una funzionalità utile per lo sviluppo e gli strumenti di gestione di codice.  
  
 Si noti che il nome di assembly fornito è il nome sicuro (vedere [creazione e uso degli assembly](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies)), che include la versione dell'assembly, le impostazioni cultura e sulla firma. Si noti inoltre che il nome dello spazio dei nomi in cui è definito il tipo di dati può essere recuperato, insieme al nome della classe di base.  
  
 Il modo più comune per accedere alle funzionalità di reflection è tramite il <xref:System.Object.GetType%2A> metodo. Questo metodo è fornito da [System:: Object](https://msdn.microsoft.com/en-us/library/system.object.aspx), da cui derivano tutte le classi di garbage collection.  
  
 La reflection su un .exe generato con il compilatore Visual C++ è consentita solo se il .exe viene compilato con la **/clr: pure** o **/CLR: safe** opzioni del compilatore. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015. Vedere [/clr (compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) per ulteriori informazioni.  
  
 Argomenti contenuti in questa sezione:  
  
-   [Procedura: Implementare un'architettura plug-in con reflection (C++/CLI)](../dotnet/how-to-implement-a-plug-in-component-architecture-using-reflection-cpp-cli.md)  
  
-   [Procedura: Enumerare tipi di dati negli assembly con reflection (C++/CLI)](../dotnet/how-to-enumerate-data-types-in-assemblies-using-reflection-cpp-cli.md)  
  
 Per ulteriori informazioni, vedere [Namespace System. Reflection](https://msdn.microsoft.com/en-us/library/system.reflection.aspx)  
  
## <a name="example"></a>Esempio  
 Il `GetType` il metodo restituisce un puntatore a un <xref:System.Type> classe object, che descrive il tipo su cui è basato l'oggetto. (Il **tipo** oggetto non contiene le informazioni specifiche dell'istanza.) Uno degli elementi è il nome completo del tipo, che può essere visualizzato come indicato di seguito:  
  
 Si noti che il nome del tipo include l'ambito completo in cui è definito il tipo, incluso lo spazio dei nomi, e che venga visualizzato nella sintassi .NET, con un punto come operatore di risoluzione dell'ambito.  
  
```  
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
  
## <a name="example"></a>Esempio  
 Tipi di valore possono essere utilizzati con il `GetType` nonché di funzionare, ma deve essere boxed prima.  
  
```  
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
  
## <a name="example"></a>Esempio  
 Come con la `GetType` (metodo), il [typeid](../windows/typeid-cpp-component-extensions.md) operatore restituisce un puntatore a un **tipo** dell'oggetto, pertanto questo codice indica il nome del tipo **System. Int32**. Visualizzazione di nomi di tipo è la funzionalità di base della reflection, ma è una tecnica potenzialmente più utile per controllare o individuare i valori validi per i tipi enumerati. Questa operazione può essere eseguita tramite il metodo statico **enum:: GetNames** funzione che restituisce una matrice di stringhe, ognuna delle quali contiene un valore di enumerazione in formato testo.  L'esempio seguente recupera una matrice di stringhe che descrive i valori di enumerazione per il **opzioni** enum (CLR) e li visualizza in un ciclo.  
  
 Se si aggiunge una quarta opzione per il **opzioni** enumerazione, il codice riporterà la nuova opzione senza ricompilazione, anche se l'enumerazione è definita in un assembly separato.  
  
```  
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
  
## <a name="example"></a>Esempio  
 Il `GetType` oggetto supporta un numero di membri e proprietà che può essere utilizzata per esaminare un tipo. Il codice recupera e visualizza alcune di queste informazioni:  
  
```  
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
  
## <a name="example"></a>Esempio  
 La reflection consente inoltre l'enumerazione di tipi all'interno di un assembly e dei membri delle classi. Per illustrare questa funzionalità, definire una classe semplice:  
  
```  
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
  
## <a name="example"></a>Esempio  
 Se il codice precedente viene compilato in una DLL denominata vcpp_reflection_6. dll, è quindi possibile usare la reflection per esaminare il contenuto di questo assembly. Ciò comporta l'utilizzo di funzione API di reflection statica [assembly:: Load](https://msdn.microsoft.com/en-us/library/system.reflection.assembly.load.aspx) per caricare l'assembly. Questa funzione restituisce l'indirizzo di un **Assembly** oggetto che è possibile eseguire query sui tipi all'interno di moduli.  
  
 Una volta che il sistema di reflection ha caricato l'assembly, una matrice di **tipo** oggetti viene recuperato con il [assembly:: GetTypes](https://msdn.microsoft.com/en-us/library/system.reflection.assembly.gettypes.aspx) (funzione). Ogni elemento della matrice contiene informazioni su un tipo diverso, anche se in questo caso, solo una classe è definita. Utilizzo di un ciclo, ogni **tipo** in questa matrice viene eseguita una query sui membri del tipo utilizzando il **:: GetMembers** (funzione). Questa funzione restituisce una matrice di **MethodInfo** oggetti, ogni oggetto che contiene informazioni sulle proprietà del tipo, la funzione membro o membro dati.  
  
 Si noti che l'elenco dei metodi include in modo esplicito le funzioni definite **TestClass** e le funzioni in modo implicito ereditare il **System:: Object** classe. Come parte dell'adozione in .NET invece che nella sintassi di Visual C++, le proprietà vengono visualizzati come membri dati sottostanti a cui che si accede tramite le funzioni get/set. Questo elenco vengono visualizzate le funzioni get/set come metodi regolari. La reflection è supportata tramite common language runtime, non dal compilatore Visual C++.  
  
 Anche se si usa questo codice per controllare un assembly a cui è definito, è anche possibile utilizzare questo codice per controllare gli assembly .NET. Ad esempio, se si sostituisce a mscorlib, si verrà visualizzato un elenco di ogni tipo e un metodo definito in mscorlib. dll.  
  
```  
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
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)