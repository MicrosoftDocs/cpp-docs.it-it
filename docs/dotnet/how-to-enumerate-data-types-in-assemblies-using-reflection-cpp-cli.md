---
title: "Procedura: enumerare tipi di dati negli assembly tramite reflection (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "assembly [C++]"
  - "assembly [C++], enumerazione di tipi di dati"
  - "tipi di dati [C++], enumerazione"
  - "membri pubblici [C++]"
  - "tipi pubblici [C++]"
  - "Reflection [C++], assembly esterni"
ms.assetid: c3578e6d-bb99-4599-80e1-ab795305f878
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: enumerare tipi di dati negli assembly tramite reflection (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrata l'enumerazione dei membri e dei tipi pubblici mediante <xref:System.Reflection>.  
  
 Dato il nome di un assembly, archiviato nella directory locale o nella Global Assembly Cache, si tenterà di aprire l'assembly e di recuperare le descrizioni.  Se l'operazione riesce, verrà visualizzato ciascun tipo con i relativi membri pubblici.  
  
 Tenere presente che <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> richiede che non venga utilizzata alcuna estensione di file.  Di conseguenza, se come argomento della riga di comando si utilizza "mscorlib.dll" verrà generato un errore, mentre se si utilizza semplicemente "mscorlib" verranno visualizzati i tipi di .NET Framework.  Se non viene fornito alcun nome di assembly, verranno rilevati e indicati i tipi definiti all'interno dell'assembly corrente \(il file exe risultante da questo codice\).  
  
## Esempio  
  
```  
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
  
## Vedere anche  
 [Reflection](../dotnet/reflection-cpp-cli.md)