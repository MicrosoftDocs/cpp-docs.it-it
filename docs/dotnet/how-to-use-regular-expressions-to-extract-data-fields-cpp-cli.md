---
title: 'Procedura: utilizzare espressioni regolari per estrarre campi dati (C + + CLI) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- strings [C++], extracting data from
- formatted strings [C++]
- regular expressions [C++], extracting data fields
- data [C++], extracting from strings
ms.assetid: b581d9b6-630e-48fa-94fe-20b0f7b89b06
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a82afb894b31dcbee88c7ecdf0720ef198c866b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-use-regular-expressions-to-extract-data-fields-ccli"></a>Procedura: utilizzare espressioni regolari per estrarre campi dati (C++/CLI)
Esempio di codice seguente viene illustrato l'utilizzo di espressioni regolari per estrarre dati da una stringa formattata. Nell'esempio di codice viene illustrato come utilizzare la <xref:System.Text.RegularExpressions.Regex> classe per specificare un criterio che corrisponde a un indirizzo di posta elettronica. In questo modello include gli identificatori di campo che possono essere utilizzati per recuperare le parti di nome host di ogni indirizzo di posta elettronica. La <xref:System.Text.RegularExpressions.Match> classe viene utilizzata per eseguire la ricerca effettiva. Se l'indirizzo di posta elettronica specificato è valido, il nome utente e i nomi host vengono estratti e visualizzati.  
  
## <a name="example"></a>Esempio  
  
```  
// Regex_extract.cpp  
// compile with: /clr  
#using <System.dll>  
  
using namespace System;  
using namespace System::Text::RegularExpressions;  
  
int main()  
{  
    array<String^>^ address=  
    {  
        "jay@southridgevideo.com",  
        "barry@adatum.com",  
        "treyresearch.net",  
        "karen@proseware.com"  
    };  
  
    Regex^ emailregex = gcnew Regex("(?<user>[^@]+)@(?<host>.+)");  
  
    for (int i=0; i<address->Length; i++)  
    {  
        Match^ m = emailregex->Match( address[i] );  
        Console::Write("\n{0,25}", address[i]);  
  
        if ( m->Success )   
        {  
            Console::Write("   User='{0}'",   
            m->Groups["user"]->Value);  
            Console::Write("   Host='{0}'",   
            m->Groups["host"]->Value);  
        }  
        else   
            Console::Write("   (invalid email address)");  
        }  
  
    Console::WriteLine("");  
    return 0;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni regolari di .NET Framework](/dotnet/standard/base-types/regular-expressions)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)