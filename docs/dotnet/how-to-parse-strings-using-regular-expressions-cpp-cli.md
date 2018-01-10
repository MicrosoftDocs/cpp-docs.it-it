---
title: 'Procedura: analizzare stringhe tramite espressioni regolari (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- parsing strings [C++]
- examples [C++], strings
- regular expressions [C++], parsing strings
- strings [C++], parsing
ms.assetid: 5b0c7ca3-9bba-4389-a45c-6d373cff91b0
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 629486c98888fd8012d616c9e845e7d70a90fdcf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-parse-strings-using-regular-expressions-ccli"></a>Procedura: analizzare le stringhe mediante espressioni regolari (C++/CLI)
Esempio di codice riportato di seguito viene illustrato come analizzare semplici stringhe utilizzando il <xref:System.Text.RegularExpressions.Regex> classe il <xref:System.Text.RegularExpressions?displayProperty=fullName> dello spazio dei nomi. Stringa che contiene più tipi di descrittori di parole viene costruita. La stringa viene quindi analizzata utilizzando il <xref:System.Text.RegularExpressions.Regex> classe in combinazione con la <xref:System.Text.RegularExpressions.Match> classe. Quindi, ogni parola della frase viene visualizzato separatamente.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni regolari di .NET Framework](/dotnet/standard/base-types/regular-expressions)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)