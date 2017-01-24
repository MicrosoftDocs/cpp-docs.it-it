---
title: "Procedura: utilizzare espressioni regolari per estrarre campi dati (C++/CLI) | Microsoft Docs"
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
  - "dati [C++], estrazione dalle stringhe"
  - "stringhe formattate [C++]"
  - "espressioni regolari [C++], estrazione di campi di dati"
  - "stringhe [C++], estrazione di dati da"
ms.assetid: b581d9b6-630e-48fa-94fe-20b0f7b89b06
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare espressioni regolari per estrarre campi dati (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare le espressioni regolari per estrarre i dati da una stringa formattata.  Nell'esempio di codice seguente viene utilizzata la classe <xref:System.Text.RegularExpressions.Regex> per specificare un modello corrispondente a un indirizzo di posta elettronica.  In questo modello sono inclusi identificatori di campo che possono essere utilizzati per recuperare le parti relative al nome utente e al nome host di ciascun indirizzo di posta elettronica.  La classe <xref:System.Text.RegularExpressions.Match> viene utilizzata per eseguire l'effettiva corrispondenza del modello.  Se l'indirizzo di posta elettronica fornito è valido, il nome utente e il nome host vengono estratti e visualizzati.  
  
## Esempio  
  
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
  
## Vedere anche  
 [Espressioni regolari di .NET Framework](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)