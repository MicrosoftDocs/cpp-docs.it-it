---
title: 'Procedura: enumerare tipi di dati tramite Reflection (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- assemblies [C++], enumerating data types in
- public types [C++]
- reflection [C++], external assemblies
- assemblies [C++]
- data types [C++], enumerating
- public members [C++]
ms.assetid: c3578e6d-bb99-4599-80e1-ab795305f878
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 209124e6d4e8afa7930a4c74d2cce1acd7e279b5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-enumerate-data-types-in-assemblies-using-reflection-ccli"></a>Procedura: enumerare tipi di dati negli assembly tramite reflection (C++/CLI)
Il codice seguente illustra l'enumerazione dei membri e tipi pubblici tramite <xref:System.Reflection>.  
  
 Dato il nome di un assembly, nella directory locale o nella Global Assembly Cache, il codice seguente tenta di aprire l'assembly e recuperare le descrizioni. Se ha esito positivo, viene visualizzato ogni tipo con i propri membri pubblici.  
  
 Si noti che <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> richiede che venga utilizzata alcuna estensione di file. Pertanto, utilizzando "mscorlib" come un argomento della riga di comando avrà esito negativo, mentre utilizza semplicemente "mscorlib" comporterà la visualizzazione dei tipi di .NET Framework. Se viene fornito alcun nome di assembly, il codice verrà rilevare e segnalare i tipi all'interno dell'assembly corrente (il file EXE risultante da questo codice).  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)