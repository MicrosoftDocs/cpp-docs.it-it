---
title: 'Procedura: utilizzare espressioni regolari per ridisporre i dati (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- regular expressions [C++], rearranging data
- data [C++], rearranging
ms.assetid: 5f91e777-9471-424e-ba75-dca3d1b49e42
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 72c72721aa68417ff13905fdf96f8d2a48b310cd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33130864"
---
# <a name="how-to-use-regular-expressions-to-rearrange-data-ccli"></a>Procedura: utilizzare espressioni regolari per ridisporre i dati (C++/CLI)
Esempio di codice seguente viene illustrato come utilizzare il supporto di espressioni regolari di .NET Framework per ridisporre o riformattare i dati. Nell'esempio di codice viene illustrato come utilizzare il <xref:System.Text.RegularExpressions.Regex> e <xref:System.Text.RegularExpressions.Match> classi per estrarre i nomi e cognomi da una stringa e quindi visualizzare questi elementi di nome in ordine inverso.  
  
 La <xref:System.Text.RegularExpressions.Regex> classe viene utilizzata per costruire un'espressione regolare che descrive il formato corrente dei dati. I due nomi si presuppone che siano separati da una virgola e possono usare qualsiasi quantità di spazio intorno la virgola. Il <xref:System.Text.RegularExpressions.Match> metodo viene quindi utilizzato per analizzare ciascuna stringa. Se ha esito positivo, nome e cognome vengono recuperati il <xref:System.Text.RegularExpressions.Match> dell'oggetto e visualizzati.  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni regolari di .NET Framework](/dotnet/standard/base-types/regular-expressions)   
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)