---
title: "Reflection (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "..NET Framework [C++], reflection"
  - "tipi di dati [C++], reflection"
  - "GetType (metodo)"
  - "metadati, reflection"
  - "Reflection [C++]"
  - "Reflection [C++], informazioni sulla reflection"
  - "typeid (parola chiave) [C++]"
ms.assetid: 46b6ff4a-e441-4022-8892-78e69422f230
caps.latest.revision: 24
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Reflection (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La reflection consente l'analisi dei tipi di dati conosciuti in fase di esecuzione,  consentendo l'enumerazione dei tipi di dati contenuti in un determinato assembly e l'individuazione dei membri di una classe o di un tipo di valore specificato.  Tale capacità prescinde dal fatto che il tipo sia noto o vi si faccia riferimento in fase di compilazione.  La reflection rappresenta pertanto una funzionalità utile per gli strumenti di sviluppo e gestione del codice.  
  
 Si noti che il nome di assembly fornito è il nome sicuro \(vedere [Assembly con nomi sicuri](../Topic/Creating%20and%20Using%20Strong-Named%20Assemblies.md)\), che include le informazioni sulla versione, le impostazioni cultura e la firma dell'assembly.  Si noti inoltre che è possibile recuperare il nome dello spazio dei nomi in cui il tipo di dati è definito, insieme al nome della classe base.  
  
 Il modo più comune per accedere alle funzionalità di reflection consiste nell'utilizzare il metodo <xref:System.Object.GetType%2A>.  Tale metodo è fornito da [System::Object](https://msdn.microsoft.com/en-us/library/system.object.aspx), da cui derivano tutte le classi sottoposte alla procedura di Garbage Collection.  
  
 La reflection su un file exe generato con il compilatore Visual C\+\+ è consentita in caso di generazione del file con le opzioni **\/clr:pure** o **\/clr:safe** del compilatore.  Per ulteriori informazioni, vedere [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 Argomenti contenuti in questa sezione:  
  
-   [Procedura: implementare un'architettura plug\-in tramite reflection](../dotnet/how-to-implement-a-plug-in-component-architecture-using-reflection-cpp-cli.md)  
  
-   [Procedura: enumerare tipi di dati negli assembly tramite reflection](../dotnet/how-to-enumerate-data-types-in-assemblies-using-reflection-cpp-cli.md)  
  
 Per ulteriori informazioni, vedere [Spazio dei nomi System.Reflection](https://msdn.microsoft.com/en-us/library/system.reflection.aspx).  
  
## Esempio  
 Il metodo `GetType` restituisce un puntatore a un oggetto della classe <xref:System.Type> che descrive il tipo su cui l'oggetto è basato. L'oggetto **Type** non contiene informazioni specifiche dell'istanza. Uno degli elementi disponibili è il nome completo del tipo, che può essere visualizzato nel modo seguente:  
  
 Si noti che il nome del tipo include l'ambito completo in cui il tipo è definito, compreso lo spazio dei nomi, e che è visualizzato in sintassi .NET, con un punto come operatore di risoluzione dell'ambito.  
  
```  
// vcpp_reflection.cpp  
// compile with: /clr  
using namespace System;  
int main() {  
   String ^ s = "sample string";  
   Console::WriteLine("full type name of '{0}' is '{1}'", s, s->GetType());  
}  
```  
  
  **Nome completo della "stringa di esempio" è "'System.String"**   
## Esempio  
 È inoltre possibile utilizzare tipi di valore con la funzione `GetType`, ma devono essere sottoposti innanzitutto a boxing.  
  
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
  
  **tipo di i \= 'System.Int32'**   
## Esempio  
 Come nel caso del metodo `GetType`, l'operatore [typeid](../windows/typeid-cpp-component-extensions.md) restituisce un puntatore a un oggetto **Type**. Il codice indica pertanto il nome di tipo **System.Int32**.  La visualizzazione dei nomi dei tipi costituisce la funzionalità di base della reflection, ma una tecnica potenzialmente più utile consiste nell'analizzare o individuare i valori validi per i tipi enumerati.  A tale scopo, è possibile utilizzare la funzione static **Enum::GetNames**, che restituisce una matrice di stringhe ciascuna delle quali contiene un valore di enumerazione in formato testo.  Nell'esempio riportato di seguito viene recuperata una matrice di stringhe che descrive i valori dell'enumerazione **Options** e li visualizza in un ciclo.  
  
 Se si aggiunge una quarta opzione all'enumerazione **Options**, il codice riporterà la nuova opzione senza ripetere la compilazione, anche se l'enumerazione è definita in un assembly separato.  
  
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
  
  **Sono presenti 3 opzioni nell'enumerazione 'Options'**  
**0: Option1**  
**1: Option2**  
**2: Option3**  
**il valore "o" è Option2**   
## Esempio  
 L'oggetto `GetType` supporta diversi membri e proprietà che possono essere utilizzati per esaminare un tipo.  Il codice seguente recupera e visualizza alcune di queste informazioni:  
  
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
  
  **informazioni sul tipo per "stringa":**  
**nome assembly: mscorlib, Versione\=1.0.5000.0, Impostazioni cultura\=neutre,**   
**PublicKeyToken\=b77a5c561934e089**  
**spazio dei nomi: System**  
**base type: System.Object**  
**is array: False**  
**is class: True**   
## Esempio  
 La reflection permette anche l'enumerazione dei tipi contenuti in un assembly e dei membri delle classi.  Per verificare tale funzionalità, si definisca una classe semplice:  
  
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
  
## Esempio  
 Se il codice precedente viene compilato in una DLL denominata vcpp\_reflection\_6.dll, sarà possibile utilizzare la reflection per analizzare il contenuto dell'assembly.  A tal fine, occorre utilizzare la funzione static [Assembly::Load](https://msdn.microsoft.com/en-us/library/system.reflection.assembly.load.aspx) delle API di reflection per caricare l'assembly.  Tale funzione restituisce l'indirizzo di un oggetto **Assembly** su cui è possibile eseguire query relativamente ai moduli e ai tipi in esso contenuti.  
  
 Una volta che il sistema di reflection ha caricato l'assembly, viene recuperata una matrice di oggetti **Type** tramite la funzione [Assembly::GetTypes](https://msdn.microsoft.com/en-us/library/system.reflection.assembly.gettypes.aspx).  Ogni elemento della matrice contiene informazioni su un tipo diverso, ma in questo caso è stata definita una sola classe.  In ciclo, vengono recuperati i membri di ciascun **Type** della matrice tramite la funzione **Type::GetMembers**.  Tale funzione restituisce una matrice di oggetti **MethodInfo**, ciascuno dei quali contiene informazioni su funzione membro, membro dati o proprietà del tipo.  
  
 Si noti che l'elenco dei metodi include le funzioni esplicitamente definite in **TestClass** e le funzioni implicitamente ereditate dalla classe **System::Object**.  Come effetto dell'adozione della sintassi .NET anziché Visual C\+\+, le proprietà risultano membri dati sottostanti a cui si accede tramite le funzioni get\/set.  Le funzioni get\/set sono riportate in elenco come normali metodi.  La reflection è supportata tramite Common Language Runtime, non dal compilatore Visual C\+\+.  
  
 Oltre che per ispezionare un proprio assembly, è possibile utilizzare questo codice per ispezionare gli assembly di .NET.  Se ad esempio si sostituisce mscorlib a TestAssembly, verrà visualizzato un elenco di tutti i tipi e i metodi definiti in mscorlib.dll.  
  
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
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)