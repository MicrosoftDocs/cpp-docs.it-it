---
title: 'Procedura: utilizzare espressioni regolari di ricerca e sostituzione (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- search and replace
- Replace method
- regular expressions [C++], search and replace
ms.assetid: 12fe3e18-fe10-4b25-a221-19dc5eab3821
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: feb64670accef1cdcc5eedf9aa2b081dc41615b6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132414"
---
# <a name="how-to-use-regular-expressions-to-search-and-replace-ccli"></a>Procedura: utilizzare le espressioni regolari per la ricerca e sostituzione (C++/CLI)
Esempio di codice riportato di seguito viene illustrato come la classe di espressioni regolari <xref:System.Text.RegularExpressions.Regex> può essere usato per eseguire la ricerca e sostituzione. Questa operazione viene eseguita con il <xref:System.Text.RegularExpressions.Regex.Replace%2A> metodo. La versione utilizzata accetta come input due stringhe: la stringa da modificare e la stringa da inserire invece le sezioni (se presente) corrispondenti al criterio specificato per il <xref:System.Text.RegularExpressions.Regex> oggetto.  
  
 Questo codice sostituisce tutte le cifre in una stringa con caratteri di sottolineatura (_) e quindi lo sostituisce con una stringa vuota, rimuoverli in modo efficace. Lo stesso effetto può essere eseguito in un unico passaggio, ma due passaggi sono qui per scopi dimostrativi.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni regolari di .NET Framework](/dotnet/standard/base-types/regular-expressions)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)