---
title: "Procedura: analizzare le stringhe mediante espressioni regolari (C++/CLI) | Microsoft Docs"
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
  - "esempi [C++], stringhe"
  - "analisi di stringhe [C++]"
  - "espressioni regolari [C++], analisi di stringhe"
  - "stringhe [C++], analisi"
ms.assetid: 5b0c7ca3-9bba-4389-a45c-6d373cff91b0
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: analizzare le stringhe mediante espressioni regolari (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come analizzare semplici stringhe utilizzando la classe <xref:System.Text.RegularExpressions.Regex> nello spazio dei nomi <xref:System.Text.RegularExpressions?displayProperty=fullName>.  Viene innanzitutto costruita una stringa contenente più tipi di descrittori di parole.  La stringa viene quindi analizzata utilizzando le classi <xref:System.Text.RegularExpressions.Regex> e <xref:System.Text.RegularExpressions.Match>.  Infine, ciascuna parola nella frase viene visualizzata separatamente.  
  
## Esempio  
  
```  
// regex_parse.cpp  
// compile with: /clr  
#using <system.dll>  
  
using namespace System;  
using namespace System::Text::RegularExpressions;  
  
int main( )  
{  
   int words = 0;  
   String^ pattern = "[a-zA-Z]*";  
   Console::WriteLine( "pattern : '{0}'", pattern );  
   Regex^ regex = gcnew Regex( pattern );  
  
   String^ line = "one\ttwo three:four,five six  seven";     
   Console::WriteLine( "text : '{0}'", line );  
   for( Match^ match = regex->Match( line );   
        match->Success; match = match->NextMatch( ) )   
   {  
      if( match->Value->Length > 0 )  
      {  
         words++;  
         Console::WriteLine( "{0}", match->Value );  
      }  
   }  
   Console::WriteLine( "Number of Words : {0}", words );  
  
   return 0;  
}  
```  
  
## Vedere anche  
 [Espressioni regolari di .NET Framework](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)