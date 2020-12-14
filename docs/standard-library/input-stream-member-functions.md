---
description: 'Altre informazioni su: funzioni membro del flusso di input'
title: Funzioni membro del flusso di input
ms.date: 07/19/2019
helpviewer_keywords:
- input stream objects
- input streams, member functions
ms.assetid: b4b9465d-0da9-4ccf-859d-72a68418982e
ms.openlocfilehash: 8b75470d39e5c376da497f721c725eaad8424b3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231602"
---
# <a name="input-stream-member-functions"></a>Funzioni membro del flusso di input

Le funzioni membro del flusso di input vengono usate per l'input del disco.

## <a name="open"></a><a name="vclrftheopenfunctionforinputstreamsanchor11"></a> aprire

Se si usa un flusso di file di input ( `ifstream` ), è necessario associare tale flusso a un file su disco specifico. Questa operazione può essere eseguita nel costruttore oppure è possibile utilizzare la `open` funzione. In entrambi i casi, gli argomenti sono identici.

In genere si specifica un flag [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode) quando si apre il file associato a un flusso di input (la modalità predefinita è `ios::in` ). Per un elenco dei `openmode` flag, vedere [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode). I flag possono essere combinati con l'operatore OR ( &#124; ) bit per bit.

Per leggere un file, usare prima la `fail` funzione membro per determinare se esiste:

```cpp
istream ifile("FILENAME");

if (ifile.fail())
// The file does not exist ...
```

## <a name="get"></a><a name="vclrfthegetfunctionanchor12"></a> Ottieni

La funzione membro non formattato `get` funziona come l' `>>` operatore con due eccezioni. In primo luogo, la `get` funzione include spazi vuoti, mentre l'estrazione esclude gli spazi vuoti quando il `skipws` flag è impostato (impostazione predefinita). In secondo luogo, `get` è meno probabile che la funzione provochi lo scaricamento di un flusso di output associato `cout` , ad esempio.

Una variante della `get` funzione specifica un indirizzo del buffer e il numero massimo di caratteri da leggere. Questa caratteristica è utile per limitare il numero di caratteri inviati a una variabile specifica, come mostrato in questo esempio:

```cpp
// ioo_get_function.cpp
// compile with: /EHsc
// Type up to 24 characters and a terminating character.
// Any remaining characters can be extracted later.
#include <iostream>
using namespace std;

int main()
{
   char line[25];
   cout << " Type a line terminated by carriage return\n>";
   cin.get( line, 25 );
   cout << line << endl;
}
```

### <a name="input"></a>Input

```Input
1234
```

### <a name="sample-output"></a>Output di esempio

```Output
1234
```

## <a name="getline"></a><a name="vclrfthegetlinefunctionanchor13"></a> getline

La `getline` funzione membro è simile alla `get` funzione. Entrambe le funzioni accettano un terzo argomento che specifica il carattere di terminazione per l'input. Il valore predefinito è il carattere di nuova riga. Entrambe le funzioni riservano un singolo carattere per il carattere di terminazione obbligatorio. Tuttavia, `get` lascia il carattere di terminazione nel flusso e `getline` rimuove il carattere di terminazione.

L'esempio seguente specifica un carattere di terminazione per il flusso di input:

```cpp
// getline_func.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char line[100];
   cout << " Type a line terminated by 't'" << endl;
   cin.getline( line, 100, 't' );
   cout << line;
}
```

### <a name="input"></a>Input

```Input
test
```

## <a name="read"></a><a name="vclrfthereadfunctionanchor14"></a> lettura

La `read` funzione membro legge i byte da un file in un'area di memoria specificata. L'argomento length determina il numero di byte letti. Se non si include tale argomento, la lettura si interrompe quando viene raggiunta la fine di file fisica o, nel caso di un file in modalità testo, quando viene letto un carattere `EOF` incorporato.

Questo esempio legge un record binario da un file degli stipendi in una struttura:

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   struct
   {
      double salary;
      char name[23];
   } employee;

   ifstream is( "payroll" );
   if( is ) {  // ios::operator void*()
      is.read( (char *) &employee, sizeof( employee ) );
      cout << employee.name << ' ' << employee.salary << endl;
   }
   else {
      cout << "ERROR: Cannot open file 'payroll'." << endl;
   }
}
```

Il programma presuppone che i record di dati siano formattati esattamente come specificato dalla struttura senza caratteri di ritorno a capo o avanzamento riga.

## <a name="seekg-and-tellg"></a><a name="vclrftheseekgandtellgfunctionsanchor7"></a> seekg e tellg

I flussi di file di input mantengono un puntatore interno alla posizione nel file in cui dovrà essere eseguita la successiva lettura di dati. Questo puntatore viene impostato con la funzione `seekg`, come illustrato di seguito:

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   char ch;

   ifstream tfile( "payroll" );
   if( tfile ) {
      tfile.seekg( 8 );        // Seek 8 bytes in (past salary)
      while ( tfile.good() ) { // EOF or failure stops the reading
         tfile.get( ch );
         if( !ch ) break;      // quit on null
         cout << ch;
      }
   }
   else {
      cout << "ERROR: Cannot open file 'payroll'." << endl;
   }
}
```

Per usare `seekg` per implementare sistemi di gestione dati orientati ai record, moltiplicare le dimensioni dei record a lunghezza fissa in base al numero di record per ottenere la posizione di byte rispetto alla fine del file e quindi usare l' `get` oggetto per leggere il record.

La funzione membro `tellg` restituisce la posizione nel file corrente per la lettura. Questo valore è di tipo `streampos` , un oggetto **`typedef`** definito in \<iostream> . L'esempio seguente legge un file e visualizza i messaggi che mostrano le posizioni degli spazi.

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main( )
{
   char ch;
   ifstream tfile( "payroll" );
   if( tfile ) {
       while ( tfile.good( ) ) {
          streampos here = tfile.tellg();
          tfile.get( ch );
          if ( ch == ' ' )
             cout << "\nPosition " << here << " is a space";
       }
   }
   else {
      cout << "ERROR: Cannot open file 'payroll'." << endl;
   }
}
```

## <a name="close"></a><a name="vclrftheclosefunctionforinputstreamsanchor15"></a> vicino

La `close` funzione membro chiude il file su disco associato a un flusso di file di input e libera l'handle di file del sistema operativo. Il [`ifstream`](../standard-library/basic-ifstream-class.md) distruttore chiude il file per l'utente, ma è possibile usare la `close` funzione se è necessario aprire un altro file per lo stesso oggetto flusso.

## <a name="see-also"></a>Vedi anche

[Flussi di input](../standard-library/input-streams.md)
