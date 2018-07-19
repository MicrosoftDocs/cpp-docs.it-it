---
title: Funzioni membro del flusso di input | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- input stream objects
- input streams, member functions
ms.assetid: b4b9465d-0da9-4ccf-859d-72a68418982e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 57288e7eb85e3d23fe8790ac3097cab82acdcf8b
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954669"
---
# <a name="input-stream-member-functions"></a>Funzioni membro del flusso di input

Le funzioni membro del flusso di input vengono usate per l'input del disco. Sono incluse le funzioni membro seguenti:

- [Funzione open per flussi di input](#vclrftheopenfunctionforinputstreamsanchor11)

- [Get](#vclrfthegetfunctionanchor12)

- [Getline](#vclrfthegetlinefunctionanchor13)

- [La lettura](#vclrfthereadfunctionanchor14)

- [Funzioni seekg e tellg](#vclrftheseekgandtellgfunctionsanchor7)

- [Funzione close per flussi di input](#vclrftheclosefunctionforinputstreamsanchor15)

## <a name="vclrftheopenfunctionforinputstreamsanchor11"></a> Funzione open per flussi di input

Se si usa un flusso di file di input (ifstream), è necessario associare tale flusso a uno specifico file su disco. È possibile eseguire questa operazione nel costruttore oppure è possibile usare il `open` (funzione). In entrambi i casi, gli argomenti sono identici.

In genere si specifica un [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode) flag quando si apre il file associato a un flusso di input (la modalità predefinita è `ios::in`). Per un elenco del `open_mode` flag, vedere [open](#vclrftheopenfunctionforinputstreamsanchor11). I flag possono essere combinati con l'operatore OR ( &#124; ) bit per bit.

Per leggere un file, usare innanzitutto il `fail` funzione membro per determinare l'esistenza:

```cpp
istream ifile("FILENAME");

if (ifile.fail())
// The file does not exist ...
```

## <a name="vclrfthegetfunctionanchor12"></a> Get

Il non formattato `get` funzione membro funziona come il `>>` operatore con due eccezioni. Prima di tutto, il `get` funzione include spazi, mentre l'estrattore esclude gli spazi vuoti durante il `skipws` flag è impostato (predefinito). Secondo, il `get` funzione è meno probabile che un flusso di output correlato (`cout`, ad esempio) per essere scaricato.

Una variante del `get` funzione specifica un indirizzo di buffer e il numero massimo di caratteri da leggere. Questa caratteristica è utile per limitare il numero di caratteri inviati a una variabile specifica, come mostrato in questo esempio:

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

### <a name="sample-output"></a>Esempio di output

```Output
1234
```

## <a name="vclrfthegetlinefunctionanchor13"></a> Getline

Il `getline` funzione membro è simile al `get` (funzione). Entrambe le funzioni accettano un terzo argomento che specifica il carattere di terminazione per l'input. Il valore predefinito è il carattere di nuova riga. Entrambe le funzioni riservano un singolo carattere per il carattere di terminazione obbligatorio. Tuttavia `get` lascia il carattere di terminazione nel flusso e `getline` rimuove il carattere di terminazione.

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

## <a name="vclrfthereadfunctionanchor14"></a> La lettura

Il `read` funzione membro legge i byte da un file a un'area specificata di memoria. L'argomento length determina il numero di byte letti. Se non si include tale argomento, la lettura si interrompe quando viene raggiunta la fine di file fisica o, nel caso di un file in modalità testo, quando viene letto un carattere `EOF` incorporato.

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

Il programma presuppone che i record di dati siano formattati esattamente come specificato dalla struttura senza caratteri finali di ritorno a capo o di avanzamento riga.

## <a name="vclrftheseekgandtellgfunctionsanchor7"></a> Funzioni seekg e tellg

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

Per utilizzare `seekg` per implementare sistemi di gestione dati orientato ai record, moltiplicare le dimensioni dei record a lunghezza fissa in base al numero di record per ottenere la posizione di byte relativa alla fine del file e quindi usare il `get` oggetto da cui leggere il record.

La funzione membro `tellg` restituisce la posizione nel file corrente per la lettura. Questo valore è di tipo `streampos`, un `typedef` definito in \<iostream>. L'esempio seguente legge un file e visualizza i messaggi che mostrano le posizioni degli spazi.

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

## <a name="vclrftheclosefunctionforinputstreamsanchor15"></a> Funzione close per flussi di input

Il `close` funzione membro si chiude il file del disco associato a un flusso di file di input e rilascia l'handle di file del sistema operativo. Il [ifstream](../standard-library/basic-ifstream-class.md) distruttore chiude il file automaticamente, ma è possibile usare il `close` funzioni se è necessario aprire un altro file per lo stesso oggetto di flusso.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
