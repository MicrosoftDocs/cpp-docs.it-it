---
title: "Procedura: utilizzare espressioni regolari per ridisporre i dati (C++/CLI) | Microsoft Docs"
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
  - "dati [C++], ridisposizione"
  - "espressioni regolari [C++], ridisposizione di dati"
ms.assetid: 5f91e777-9471-424e-ba75-dca3d1b49e42
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare espressioni regolari per ridisporre i dati (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare le espressioni regolari di .NET Framework per ridisporre o riformattare i dati.  Vengono utilizzate le classi <xref:System.Text.RegularExpressions.Regex> e <xref:System.Text.RegularExpressions.Match> per estrarre il nome e il cognome da una stringa e vengono quindi visualizzati tali elementi in ordine inverso.  
  
 La classe <xref:System.Text.RegularExpressions.Regex> viene utilizzata per costruire un'espressione regolare in cui sia indicato il formato corrente dei dati.  Si presuppone che i due nomi siano separati da una virgola e che sia possibile utilizzare un numero qualsiasi di spazi prima e dopo la virgola.  Viene quindi utilizzato il metodo <xref:System.Text.RegularExpressions.Match> per analizzare ciascuna stringa.  Se l'operazione riesce, il nome e il cognome vengono recuperati dall'oggetto <xref:System.Text.RegularExpressions.Match> e visualizzati.  
  
## Esempio  
  
```  
// regex_reorder.cpp  
// compile with: /clr  
#using <System.dll>  
using namespace System;  
using namespace Text::RegularExpressions;  
  
int main()  
{  
   array<String^>^ name =   
   {  
      "Abolrous, Sam",   
      "Berg,Matt",   
      "Berry , Jo",  
      "www.contoso.com"  
   };  
  
   Regex^ reg = gcnew Regex("(?<last>\\w*)\\s*,\\s*(?<first>\\w*)");  
  
   for ( int i=0; i < name->Length; i++ )  
   {  
      Console::Write( "{0,-20}", name[i] );  
      Match^ m = reg->Match( name[i] );  
      if ( m->Success )  
      {  
         String^ first = m->Groups["first"]->Value;  
         String^ last = m->Groups["last"]->Value;  
         Console::WriteLine("{0} {1}", first, last);  
      }  
      else  
         Console::WriteLine("(invalid)");  
   }  
   return 0;  
}  
```  
  
## Vedere anche  
 [Espressioni regolari di .NET Framework](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)