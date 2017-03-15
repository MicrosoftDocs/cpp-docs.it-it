---
title: "Procedura: utilizzare espressioni regolari per convalidare la formattazione dei dati (C++/CLI) | Microsoft Docs"
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
  - "dati [C++], formattazione"
  - "espressioni regolari [C++], convalida della formattazione di dati"
  - "stringhe [C++], formattazione"
ms.assetid: 225775c3-3efc-4734-bde2-1fdf73e3d397
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare espressioni regolari per convalidare la formattazione dei dati (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare le espressioni regolari per verificare la formattazione di una stringa.  In questo esempio, la stringa deve contenere un numero di telefono valido.  Viene utilizzata la stringa "\\d{3}\-\\d{3}\-\\d{4}" per indicare che ciascun campo rappresenta un numero di telefono valido.  La lettera "d" nella stringa indica una cifra, mentre l'argomento dopo ciascuna lettera "d" indica il numero di cifre che devono essere presenti.  In questo caso, il numero deve essere separato da trattini.  
  
## Esempio  
  
```  
// regex_validate.cpp  
// compile with: /clr  
#using <System.dll>  
  
using namespace System;  
using namespace Text::RegularExpressions;  
  
int main()  
{  
   array<String^>^ number =   
   {  
      "123-456-7890",   
      "444-234-22450",   
      "690-203-6578",   
      "146-893-232",  
      "146-839-2322",  
      "4007-295-1111",   
      "407-295-1111",   
      "407-2-5555",   
   };  
  
   String^ regStr = "^\\d{3}-\\d{3}-\\d{4}$";  
  
   for ( int i = 0; i < number->Length; i++ )  
   {  
      Console::Write( "{0,14}", number[i] );  
  
      if ( Regex::IsMatch( number[i], regStr ) )  
         Console::WriteLine(" - valid");  
      else  
         Console::WriteLine(" - invalid");  
   }  
   return 0;  
}  
```  
  
## Vedere anche  
 [Espressioni regolari di .NET Framework](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)