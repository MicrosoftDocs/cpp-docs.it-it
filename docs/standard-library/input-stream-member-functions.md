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
ms.openlocfilehash: 41ab041fe3cee9a3b6065f22e5f96a44a56af030
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33850040"
---
# <a name="input-stream-member-functions"></a>Funzioni membro del flusso di input

Le funzioni membro del flusso di input vengono usate per l'input del disco. Sono incluse le funzioni membro seguenti:

- [Funzione open per flussi di input](#vclrftheopenfunctionforinputstreamsanchor11)

- [Get](#vclrfthegetfunctionanchor12)

- [Il getline](#vclrfthegetlinefunctionanchor13)

- [Lettura](#vclrfthereadfunctionanchor14)

- [Funzioni seekg e tellg](#vclrftheseekgandtellgfunctionsanchor7)

- [Funzione close per flussi di input](#vclrftheclosefunctionforinputstreamsanchor15)

## <a name="vclrftheopenfunctionforinputstreamsanchor11"></a> Funzione open per flussi di input

Se si usa un flusso di file di input (ifstream), è necessario associare tale flusso a uno specifico file su disco. È possibile eseguire questa operazione nel costruttore oppure usare la funzione **open**. In entrambi i casi, gli argomenti sono identici.

In genere si specifica un flag [ios_base::openmode](../standard-library/ios-base-class.md#openmode) quando si apre il file associato a un flusso di input (la modalità predefinita è **ios::in**). Per un elenco di **open_mode** flag, vedere [aprire](#vclrftheopenfunctionforinputstreamsanchor11). I flag possono essere combinati con l'operatore OR ( &#124; ) bit per bit.

Per leggere un file, usare prima la funzione membro **fail** per determinare se esiste:

```cpp
istream ifile("FILENAME");

if (ifile.fail())
// The file does not exist ...
```

## <a name="vclrfthegetfunctionanchor12"></a> Get

La funzione membro **get** non formattata ha un funzionamento simile all'operatore **>>** con due eccezioni. In primo luogo, la funzione **get** include spazi vuoti, mentre l'estrattore esclude gli spazi vuoti quando è impostato il flag **skipws** (impostazione predefinita). In secondo luogo, è meno probabile che la funzione **get** determini lo scaricamento di un flusso di output correlato, ad esempio `cout`.

Una variante della funzione **get** specifica un indirizzo di buffer e il numero massimo di caratteri da leggere. Questa caratteristica è utile per limitare il numero di caratteri inviati a una variabile specifica, come mostrato in questo esempio:

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

## <a name="vclrfthegetlinefunctionanchor13"></a> Il getline

La funzione membro **getline** è simile alla funzione **get**. Entrambe le funzioni accettano un terzo argomento che specifica il carattere di terminazione per l'input. Il valore predefinito è il carattere di nuova riga. Entrambe le funzioni riservano un singolo carattere per il carattere di terminazione obbligatorio. Tuttavia, **get** lascia il carattere di terminazione nel flusso, mentre **getline** lo rimuove.

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

## <a name="vclrfthereadfunctionanchor14"></a> Lettura

La funzione membro **read** legge i byte da un file in un'area di memoria specificata. L'argomento length determina il numero di byte letti. Se non si include tale argomento, la lettura si interrompe quando viene raggiunta la fine di file fisica o, nel caso di un file in modalità testo, quando viene letto un carattere `EOF` incorporato.

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

Per usare `seekg` per implementare sistemi di gestione dei dati orientati ai record, moltiplicare per il numero di record la dimensione dei record a lunghezza fissa in modo da ottenere la posizione di byte relativa alla fine del file e quindi usare l'oggetto **get** per leggere il record.

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

La funzione membro **close** chiude il file su disco associato a un flusso di file di input e rilascia l'handle di file del sistema operativo. Il distruttore [ifstream](../standard-library/basic-ifstream-class.md) chiude automaticamente il file, ma è possibile usare la funzione **close** se è necessario aprire un altro file per lo stesso oggetto di flusso.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
