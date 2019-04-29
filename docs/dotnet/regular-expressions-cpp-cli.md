---
title: Espressioni regolari (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- regular expressions [C++]
- .NET Framework [C++], regular expressions
- regular expressions [C++], about regular expressions
- parsing strings [C++]
- examples [C++], strings
- regular expressions [C++], parsing strings
- Split method, parsing strings
- strings [C++], parsing
- substrings, simple matches
- searching, exact substring matches
- strings [C++], exact substring matching
- regular expressions [C++], simple matching
- IsMatch method
- strings [C++], extracting data from
- formatted strings [C++]
- regular expressions [C++], extracting data fields
- data [C++], extracting from strings
- regular expressions [C++], rearranging data
- data [C++], rearranging
- search and replace
- Replace method
- regular expressions [C++], search and replace
- strings [C++], formatting
- data [C++], formatting
- regular expressions [C++], validating data formatting
ms.assetid: 838bab49-0dbc-4089-a604-ef146269ef5a
ms.openlocfilehash: 24a278e4d5b208c5d8e3b95b9f5a0bd0306dbab3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384662"
---
# <a name="regular-expressions-ccli"></a>Espressioni regolari (C++/CLI)

Illustra diverse operazioni di stringa usando le classi di espressioni regolari in .NET Framework.

Gli argomenti seguenti illustrano l'uso di .NET Framework <xref:System.Text.RegularExpressions> dello spazio dei nomi (e in un caso di <xref:System.String.Split%2A?displayProperty=fullName> (metodo)) per eseguire ricerche, analizzare e modificare le stringhe.

## <a name="parse_regex"></a> Analizzare le stringhe mediante espressioni regolari

Esempio di codice seguente illustra l'analisi delle stringhe semplici usando il <xref:System.Text.RegularExpressions.Regex> classe la <xref:System.Text.RegularExpressions?displayProperty=fullName> dello spazio dei nomi. Viene creata una stringa che contiene più tipi di descrittori di parole. La stringa viene quindi analizzata tramite il <xref:System.Text.RegularExpressions.Regex> classe in combinazione con il <xref:System.Text.RegularExpressions.Match> classe. Quindi, ogni parola della frase viene visualizzato separatamente.

### <a name="example"></a>Esempio

```cpp
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

## <a name="parse_split"></a> Analizzare le stringhe usando il metodo Split

Esempio di codice seguente illustra l'uso di <xref:System.String.Split%2A?displayProperty=fullName> metodo per estrarre le parole da una stringa. Stringa che contiene più tipi di descrittori di parole viene costruita e quindi analizzata chiamando <xref:System.String.Split%2A> con un elenco di descrittori. Quindi, ogni parola della frase viene visualizzato separatamente.

### <a name="example"></a>Esempio

```cpp
// regex_split.cpp
// compile with: /clr
using namespace System;

int main()
{
   String^ delimStr = " ,.:\t";
   Console::WriteLine( "delimiter : '{0}'", delimStr );
   array<Char>^ delimiter = delimStr->ToCharArray( );
   array<String^>^ words;
   String^ line = "one\ttwo three:four,five six seven";

   Console::WriteLine( "text : '{0}'", line );
   words = line->Split( delimiter );
   Console::WriteLine( "Number of Words : {0}", words->Length );
   for (int word=0; word<words->Length; word++)
      Console::WriteLine( "{0}", words[word] );

   return 0;
}
```

## <a name="regex_simple"></a> Usare espressioni regolari per la corrispondenza semplice

Esempio di codice seguente usa le espressioni regolari per cercare le corrispondenze esatte di sottostringhe. La ricerca viene eseguita da statico <xref:System.Text.RegularExpressions.Regex.IsMatch%2A> un metodo, che accetta due stringhe come input. La prima è la stringa da cercare e il secondo è il motivo per cui eseguire la ricerca.

### <a name="example"></a>Esempio

```cpp
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

## <a name="regex_extract"></a> Usare espressioni regolari per estrarre campi dati

Esempio di codice seguente viene illustrato l'utilizzo delle espressioni regolari per estrarre dati da una stringa formattata. Il codice seguente viene illustrato come utilizzare il <xref:System.Text.RegularExpressions.Regex> classe per specificare un modello che corrisponde a un indirizzo di posta elettronica. In questo modello include identificatori del campo che possono essere utilizzati per recuperare l'utente e ospitano parti di nome di ogni indirizzo di posta elettronica. Il <xref:System.Text.RegularExpressions.Match> classe viene utilizzata per eseguire la ricerca effettiva. Se l'indirizzo di posta elettronica specificato è valido, il nome utente e i nomi host sono estratte e visualizzati.

### <a name="example"></a>Esempio

```cpp
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

## <a name="regex_rearrange"></a> Usare espressioni regolari per ridisporre i dati

Esempio di codice seguente viene illustrato come utilizzare il supporto di espressioni regolari di .NET Framework per ridisporre o riformattare i dati. Il codice seguente viene illustrato come utilizzare il <xref:System.Text.RegularExpressions.Regex> e <xref:System.Text.RegularExpressions.Match> classi per estrarre i nomi e cognomi da una stringa e quindi visualizzare questi elementi di nome in ordine inverso.

Il <xref:System.Text.RegularExpressions.Regex> classe viene utilizzata per costruire un'espressione regolare che descrive il formato corrente dei dati. I due nomi si presuppone che siano separati da una virgola e possono usare qualsiasi quantità di spazio intorno alla virgola. Il <xref:System.Text.RegularExpressions.Match> metodo viene quindi utilizzato per analizzare ogni stringa. Se ha esito positivo, nomi e cognomi vengono recuperati dal <xref:System.Text.RegularExpressions.Match> dell'oggetto e visualizzati.

### <a name="example"></a>Esempio

```cpp
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

## <a name="regex_search"></a> Usare espressioni regolari di ricerca e sostituzione

L'esempio di codice seguente illustra come la classe di espressioni regolari <xref:System.Text.RegularExpressions.Regex> può essere utilizzato per eseguire la ricerca e sostituzione. Questa operazione viene eseguita con il <xref:System.Text.RegularExpressions.Regex.Replace%2A> (metodo). La versione usata accetta due stringhe come input: la stringa da modificare e la stringa da inserire al posto di sezioni (se presente) corrispondenti al criterio specificato per il <xref:System.Text.RegularExpressions.Regex> oggetto.

Questo codice sostituisce tutte le cifre in una stringa con caratteri di sottolineatura (_) e quindi sostituisce quelle con una stringa vuota, in modo efficace di rimuoverli. Lo stesso effetto può essere eseguito in un unico passaggio, ma due passaggi sono qui usati a scopo dimostrativo.

### <a name="example"></a>Esempio

```cpp
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

## <a name="regex_validate"></a> Usare espressioni regolari per convalidare la formattazione dei dati

Esempio di codice seguente viene illustrato l'utilizzo delle espressioni regolari per verificare la formattazione della stringa. Nell'esempio di codice seguente, la stringa deve contenere un numero di telefono valido. Esempio di codice seguente usa la stringa "\d{3}-\d{3}-\d{4}" per indicare che ogni campo rappresenta un numero di telefono valido. "D" nella stringa indica una cifra e l'argomento dopo ciascuna "d" indica il numero di cifre che deve essere presente. In questo caso, il numero è obbligatorio per essere separati da trattini.

### <a name="example"></a>Esempio

```cpp
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

## <a name="related-sections"></a>Sezioni correlate

[Espressioni regolari di .NET Framework](/dotnet/standard/base-types/regular-expressions)

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
