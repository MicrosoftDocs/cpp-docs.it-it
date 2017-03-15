---
title: "Procedura: utilizzare espressioni regolari per la corrispondenza semplice (C++/CLI) | Microsoft Docs"
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
  - "IsMatch (metodo)"
  - "espressioni regolari [C++], corrispondenza semplice"
  - "ricerca, corrispondenze esatte di sottostringhe"
  - "stringhe [C++], corrispondenza esatta di sottostringhe"
  - "sottostringhe, corrispondenze semplici"
ms.assetid: 4661f6f3-0f6d-48f2-abe4-cb4770bf9bd5
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare espressioni regolari per la corrispondenza semplice (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito vengono utilizzate le espressioni regolari per cercare le corrispondenze di sottostringa esatte.  La ricerca viene eseguita dal metodo statico <xref:System.Text.RegularExpressions.Regex.IsMatch%2A>, che accetta come input due stringhe.  La prima corrisponde alla stringa da cercare e la seconda indica il criterio di ricerca da utilizzare.  
  
## Esempio  
  
```  
// regex_simple.cpp  
// compile with: /clr  
#using <System.dll>  
  
using namespace System;  
using namespace System::Text::RegularExpressions;  
  
int main()  
{  
   array<String^>^ sentence =   
   {  
      "cow over the moon",  
      "Betsy the Cow",  
      "cowering in the corner",  
      "no match here"  
   };  
  
   String^ matchStr = "cow";  
   for (int i=0; i<sentence->Length; i++)  
   {  
      Console::Write( "{0,24}", sentence[i] );  
      if ( Regex::IsMatch( sentence[i], matchStr,  
                     RegexOptions::IgnoreCase ) )  
         Console::WriteLine("  (match for '{0}' found)", matchStr);  
      else  
         Console::WriteLine("");  
   }  
   return 0;  
}  
```  
  
## Vedere anche  
 [Espressioni regolari di .NET Framework](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)