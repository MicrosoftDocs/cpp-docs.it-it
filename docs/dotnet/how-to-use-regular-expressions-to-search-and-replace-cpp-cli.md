---
title: "Procedura: utilizzare le espressioni regolari per la ricerca e sostituzione (C++/CLI) | Microsoft Docs"
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
  - "espressioni regolari [C++], ricerca e sostituzione"
  - "Replace (metodo)"
  - "ricerca e sostituzione"
ms.assetid: 12fe3e18-fe10-4b25-a221-19dc5eab3821
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare le espressioni regolari per la ricerca e sostituzione (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare la classe di espressioni regolari <xref:System.Text.RegularExpressions.Regex> per eseguire operazioni di ricerca e sostituzione.  A questo scopo verrà utilizzato il metodo <xref:System.Text.RegularExpressions.Regex.Replace%2A>.  La versione utilizzata accetta come input due stringhe, ossia la stringa da modificare e la stringa da inserire al posto delle eventuali sezioni corrispondenti al modello assegnato all'oggetto <xref:System.Text.RegularExpressions.Regex>.  
  
 Questo codice sostituisce tutte le cifre contenute in una stringa con caratteri di sottolineatura \(\_\) e quindi sostituisce tali caratteri con una stringa vuota, in effetti rimuovendoli.  Sebbene lo stesso risultato possa essere ottenuto anche con un singolo passaggio, in questo caso verranno utilizzati due passaggi a scopo di dimostrazione.  
  
## Esempio  
  
```  
// regex_replace.cpp  
// compile with: /clr  
#using <System.dll>  
using namespace System::Text::RegularExpressions;  
using namespace System;  
  
int main()  
{  
   String^ before = "The q43uick bro254wn f0ox ju4mped";  
   Console::WriteLine("original  : {0}", before);  
  
   Regex^ digitRegex = gcnew Regex("(?<digit>[0-9])");  
   String^ after = digitRegex->Replace(before, "_");  
   Console::WriteLine("1st regex : {0}", after);  
  
   Regex^ underbarRegex = gcnew Regex("_");  
   String^ after2 = underbarRegex->Replace(after, "");  
   Console::WriteLine("2nd regex : {0}", after2);  
  
   return 0;  
}  
```  
  
## Vedere anche  
 [Espressioni regolari di .NET Framework](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)