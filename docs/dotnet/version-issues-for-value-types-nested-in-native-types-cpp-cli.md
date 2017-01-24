---
title: "Problemi di versione per tipi di valore annidati in tipi nativi (C++/CLI) | Microsoft Docs"
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
  - "__nogc (dichiarazioni di tipi)"
  - "__value (parola chiave), problemi nell'annidamento"
ms.assetid: 0a3b1a43-39c6-4b52-be2f-1074690188aa
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Problemi di versione per tipi di valore annidati in tipi nativi (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si consideri un componente assembly firmato con nome sicuro che viene utilizzato per compilare un assembly client.  Tale componente contiene un tipo di valore che viene utilizzato nel client come tipo per un membro di una classe, una matrice o un'unione nativa.  Se in una versione successiva del componente viene modificato il layout o la dimensione del tipo di valore, sarà necessario ricompilare il client.  
  
 Creare un file di chiave con [sn.exe](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md) \(`sn -k mykey.snk`\).  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato il componente.  
  
```  
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
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato il client:  
  
```  
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
  
## Output  
  
```  
S.i = 5  
S.i = 6  
S.i = 10  
S.i = 11  
```  
  
### Commenti  
 Se tuttavia si aggiunge un altro membro a `struct S` in nested\_value\_types.cpp, ad esempio `double d;`, e si ricompila il componente senza ricompilare il client, verrà generata un'eccezione non gestita di tipo <xref:System.IO.FileLoadException?displayProperty=fullName>.  
  
## Vedere anche  
 [Tipi gestiti](../dotnet/managed-types-cpp-cli.md)