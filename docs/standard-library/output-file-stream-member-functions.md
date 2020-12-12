---
description: 'Altre informazioni su: funzioni membro del flusso di file di output'
title: Funzioni membro del flussi di file di output
ms.date: 11/04/2016
helpviewer_keywords:
- output streams [C++], member functions
ms.assetid: 38aaf710-8035-4a34-a0c4-123a5327f28a
ms.openlocfilehash: f2e9bde7bcac8ebccc668c68f222b495b53e0889
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327571"
---
# <a name="output-file-stream-member-functions"></a>Funzioni membro del flussi di file di output

Le funzioni membro del flusso di output sono di tre tipi: quelle equivalenti a manipolatori, quelle che eseguono operazioni di scrittura non formattate e quelle che modificano lo stato del flusso e non hanno un manipolatore o un operatore di inserimento equivalente . Per l'output formattato e sequenziale, è possibile usare solo operatori di inserimento e manipolatori. Per l'output del disco binario ad accesso casuale, usare altre funzioni membro, con o senza operatori di inserimento.

## <a name="the-open-function-for-output-streams"></a>Funzione open per flussi di output

Per usare un flusso di file di output ([ofstream](../standard-library/basic-ofstream-class.md)), è necessario associare tale flusso a un file su disco specifico nel costruttore o nella `open` funzione. Se si usa la `open` funzione, è possibile riutilizzare lo stesso oggetto flusso con una serie di file. In entrambi i casi, gli argomenti che descrivono i file sono gli stessi.

Quando si apre il file associato a un flusso di output, in genere si specifica un `open_mode` flag. È possibile combinare questi flag, definiti come enumeratori nella classe `ios`, con l'operatore Bitwise-OR ( &#124; ). Per un elenco di enumeratori, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

Tre situazioni di flusso di output comuni impiegano opzioni di modalità:

- Creazione di un file. Se il file esiste già, la versione precedente viene eliminata.

   ```cpp
   ostream ofile("FILENAME");
   // Default is ios::out

   ofstream ofile("FILENAME", ios::out);
   // Equivalent to above
   ```

- Aggiunta di record a un file esistente o creazione di un record se non esiste.

   ```cpp
   ofstream ofile("FILENAME", ios::app);
   ```

- Apertura di due file, uno alla volta, nello stesso flusso.

   ```cpp
   ofstream ofile();
   ofile.open("FILE1", ios::in);
   // Do some output
   ofile.close();    // FILE1 closed
   ofile.open("FILE2", ios::in);
   // Do some more output
   ofile.close();    // FILE2 closed
   // When ofile goes out of scope it is destroyed.
   ```

## <a name="the-put"></a>Il put

La funzione **put** scrive un carattere nel flusso di output. Le due istruzioni seguenti sono uguali per impostazione predefinita, ma la seconda è influenzata dagli argomenti format del flusso:

```cpp
cout.put('A');

// Exactly one character written
cout <<'A'; // Format arguments 'width' and 'fill' apply
```

## <a name="the-write"></a>Scrittura

La `write` funzione scrive un blocco di memoria in un flusso di file di output. L'argomento length specifica il numero di byte scritti. In questo esempio viene creato un flusso di file di output in cui viene scritto il valore binario della struttura `Date`:

```cpp
// write_function.cpp
// compile with: /EHsc
#include <fstream>
using namespace std;

struct Date
{
   int mo, da, yr;
};

int main( )
{
   Date dt = { 6, 10, 92 };
   ofstream tfile( "date.dat" , ios::binary );
   tfile.write( (char *) &dt, sizeof dt );
}
```

La `write` funzione non si arresta quando raggiunge un carattere null, quindi viene scritta la struttura di classe completa. La funzione accetta due argomenti: un **`char`** puntatore e un conteggio di caratteri da scrivere. Si noti il cast richiesto a **`char`** <strong>\*</strong> prima dell'indirizzo dell'oggetto struttura.

## <a name="the-seekp-and-tellp-functions"></a>Funzioni seekp e tellp

Un flusso di file di output mantiene un puntatore interno che punta alla posizione in cui verranno successivamente scritti i dati. La funzione membro `seekp` imposta questo puntatore, garantendo pertanto l'output di file su disco ad accesso casuale. La funzione membro `tellp` restituisce la posizione del file. Per esempi che usano gli equivalenti del flusso di input di `seekp` e `tellp`, vedere [Le funzioni di tellg e di seekg](../standard-library/input-stream-member-functions.md).

## <a name="the-close-function-for-output-streams"></a>Funzione close per flussi di output

La `close` funzione membro chiude il file su disco associato a un flusso di file di output. Per completare tutto l'output del disco, è necessario chiudere il file. Se necessario, il `ofstream` distruttore chiude il file, ma è possibile usare la `close` funzione se è necessario aprire un altro file per lo stesso oggetto flusso.

Il distruttore del flusso di output chiude automaticamente il file di un flusso solo se il costruttore o la `open` funzione membro ha aperto il file. Se si passa il costruttore a un descrittore di file per un file già aperto o si utilizza la `attach` funzione membro, è necessario chiudere il file in modo esplicito.

## <a name="error-processing-functions"></a><a name="vclrferrorprocessingfunctionsanchor10"></a> Funzioni per l'elaborazione degli errori

Usare queste funzioni membro per verificare gli errori durante la scrittura in un flusso:

|Funzione|Valore restituito|
|--------------|------------------|
|[non valido](basic-ios-class.md#bad)|Restituisce **`true`** se si verifica un errore irreversibile.|
|[esito negativo](basic-ios-class.md#fail)|Restituisce se si verifica un **`true`** errore irreversibile o una condizione "prevista", ad esempio un errore di conversione, oppure se il file non viene trovato. L'elaborazione può spesso riprendersi dopo una chiamata a `clear` con un argomento zero.|
|[good](basic-ios-class.md#good)|Restituisce **`true`** se non è presente alcuna condizione di errore (irreversibile o diversa) e il flag di fine del file non è impostato.|
|[EOF](basic-ios-class.md#eof)|Restituisce **`true`** la condizione di fine del file.|
|[deselezionare](basic-ios-class.md#clear)|Imposta lo stato di errore interno. Se chiamato con gli argomenti predefiniti, cancella tutti i bit di errore.|
|rdstate (Basic-iOS-Class. MD # rdstate|Restituisce lo stato di errore corrente.|

L'operatore **!** viene eseguito l'overload dell'operatore per eseguire la stessa funzione della `fail` funzione. Pertanto, l'espressione:

```cpp
if(!cout)...
```

Equivale a:

```cpp
if(cout.fail())...
```

L'operatore **void\*()** viene sottoposto a overload per essere l'opposto dell'operatore **!**; pertanto, l'espressione:

```cpp
if(cout)...
```

è uguale a:

```cpp
if(!cout.fail())...
```

L'operatore **void \* ()** non è equivalente a `good` perché non verifica la fine del file.

## <a name="see-also"></a>Vedi anche

[Flussi di output](../standard-library/output-streams.md)
