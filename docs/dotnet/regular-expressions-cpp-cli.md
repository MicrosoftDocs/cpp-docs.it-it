---
description: 'Altre informazioni su: espressioni regolari (C++/CLI)'
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
ms.openlocfilehash: 429a121ec7acad46437a344b089f5c6a1ce4243b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245811"
---
# <a name="regular-expressions-ccli"></a>Espressioni regolari (C++/CLI)

Vengono illustrate varie operazioni di stringa utilizzando le classi di espressioni regolari nell'.NET Framework.

Negli argomenti seguenti viene illustrato l'utilizzo dello <xref:System.Text.RegularExpressions> spazio dei nomi .NET Framework (e in un caso il <xref:System.String.Split%2A?displayProperty=fullName> metodo) per la ricerca, l'analisi e la modifica delle stringhe.

## <a name="parse-strings-using-regular-expressions"></a><a name="parse_regex"></a> Analizza stringhe con espressioni regolari

Nell'esempio di codice seguente viene illustrata l'analisi semplice delle stringhe utilizzando la <xref:System.Text.RegularExpressions.Regex> classe nello <xref:System.Text.RegularExpressions?displayProperty=fullName> spazio dei nomi. Viene costruita una stringa contenente più tipi di delimitatori di parola. La stringa viene quindi analizzata usando la <xref:System.Text.RegularExpressions.Regex> classe insieme alla <xref:System.Text.RegularExpressions.Match> classe. Ogni parola nella frase viene quindi visualizzata separatamente.

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

## <a name="parse-strings-using-the-split-method"></a><a name="parse_split"></a> Analizzare le stringhe tramite il metodo Split

Nell'esempio di codice riportato di seguito viene illustrato l'utilizzo del <xref:System.String.Split%2A?displayProperty=fullName> metodo per estrarre ogni parola da una stringa. Una stringa contenente più tipi di delimitatori di parola viene costruita e quindi analizzata chiamando <xref:System.String.Split%2A> con un elenco di delimitatori. Ogni parola nella frase viene quindi visualizzata separatamente.

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

## <a name="use-regular-expressions-for-simple-matching"></a><a name="regex_simple"></a> Usare espressioni regolari per la corrispondenza semplice

Nell'esempio di codice seguente vengono utilizzate espressioni regolari per cercare corrispondenze esatte della sottostringa. La ricerca viene eseguita dal metodo statico <xref:System.Text.RegularExpressions.Regex.IsMatch%2A> , che accetta due stringhe come input. Il primo è la stringa in cui eseguire la ricerca e il secondo è il modello di cui eseguire la ricerca.

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

## <a name="use-regular-expressions-to-extract-data-fields"></a><a name="regex_extract"></a> Usare espressioni regolari per estrarre campi dati

Nell'esempio di codice seguente viene illustrato l'utilizzo di espressioni regolari per estrarre i dati da una stringa formattata. Nell'esempio di codice seguente viene usata la <xref:System.Text.RegularExpressions.Regex> classe per specificare un modello che corrisponde a un indirizzo di posta elettronica. Questo picchiettio include gli identificatori dei campi che possono essere utilizzati per recuperare le parti di ogni indirizzo di posta elettronica dell'utente e del nome host. La <xref:System.Text.RegularExpressions.Match> classe viene utilizzata per eseguire i criteri di ricerca effettivi. Se l'indirizzo di posta elettronica specificato è valido, verranno estratti e visualizzati il nome utente e i nomi host.

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

## <a name="use-regular-expressions-to-rearrange-data"></a><a name="regex_rearrange"></a> Usare espressioni regolari per ridisporre i dati

Nell'esempio di codice riportato di seguito viene illustrato come usare il supporto delle espressioni regolari .NET Framework per ridisporre o riformattare i dati. Nell'esempio di codice seguente vengono utilizzate le <xref:System.Text.RegularExpressions.Regex> <xref:System.Text.RegularExpressions.Match> classi e per estrarre i nomi e i cognomi da una stringa e quindi visualizzare questi elementi nome in ordine inverso.

La <xref:System.Text.RegularExpressions.Regex> classe viene utilizzata per costruire un'espressione regolare che descrive il formato corrente dei dati. Si presuppone che i due nomi siano separati da una virgola e possano usare qualsiasi quantità di spazio vuoto intorno alla virgola. Il <xref:System.Text.RegularExpressions.Match> metodo viene quindi utilizzato per analizzare ogni stringa. In caso di esito positivo, il nome e il cognome vengono recuperati dall' <xref:System.Text.RegularExpressions.Match> oggetto e visualizzati.

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

## <a name="use-regular-expressions-to-search-and-replace"></a><a name="regex_search"></a> Usare espressioni regolari per la ricerca e la sostituzione

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare la classe di espressioni regolari <xref:System.Text.RegularExpressions.Regex> per eseguire ricerche e sostituzioni. Questa operazione viene eseguita con il <xref:System.Text.RegularExpressions.Regex.Replace%2A> metodo. La versione utilizzata accetta due stringhe come input: la stringa da modificare e la stringa da inserire al posto delle sezioni (se presenti) che corrispondono al modello assegnato all' <xref:System.Text.RegularExpressions.Regex> oggetto.

Questo codice sostituisce tutte le cifre di una stringa con caratteri di sottolineatura (_) e quindi li sostituisce con una stringa vuota, rimuovendo effettivamente tali cifre. Lo stesso effetto può essere eseguito in un unico passaggio, ma in questo caso vengono usati due passaggi a scopo dimostrativo.

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

## <a name="use-regular-expressions-to-validate-data-formatting"></a><a name="regex_validate"></a> Usare espressioni regolari per convalidare la formattazione dei dati

Nell'esempio di codice riportato di seguito viene illustrato l'utilizzo di espressioni regolari per verificare la formattazione di una stringa. Nell'esempio di codice seguente, la stringa deve contenere un numero di telefono valido. Nell'esempio di codice seguente viene usata la stringa "\d {3} -\d {3} -\d {4} " per indicare che ogni campo rappresenta un numero di telefono valido. La "d" nella stringa indica una cifra e l'argomento dopo ogni "d" indica il numero di cifre che devono essere presenti. In questo caso, è necessario che il numero sia separato da trattini.

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

## <a name="see-also"></a>Vedi anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
