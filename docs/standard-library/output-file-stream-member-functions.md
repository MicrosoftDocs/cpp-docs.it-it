---
title: Funzioni membro del flusso di file di output | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- output streams [C++], member functions
ms.assetid: 38aaf710-8035-4a34-a0c4-123a5327f28a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7a1cba80b18f94d5a833b238e19be8190a442146
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="output-file-stream-member-functions"></a>Funzioni membro del flussi di file di output

Le funzioni membro del flusso di output sono di tre tipi: quelle equivalenti a manipolatori, quelle che eseguono operazioni di scrittura non formattate e quelle che modificano lo stato del flusso e non hanno un manipolatore o un operatore di inserimento equivalente . Per l'output formattato e sequenziale, è possibile usare solo operatori di inserimento e manipolatori. Per l'output del disco binario ad accesso casuale, usare altre funzioni membro, con o senza operatori di inserimento.

## <a name="the-open-function-for-output-streams"></a>Funzione open per flussi di output

Per usare un flusso di file di output ([ofstream](../standard-library/basic-ofstream-class.md)), è necessario associare tale flusso a un file su disco specifico nel costruttore o alla funzione **open**. Se si usa la funzione **open**, è possibile riusare lo stesso oggetto di flusso con una serie di file. In entrambi i casi, gli argomenti che descrivono i file sono gli stessi.

Quando si apre il file associato a un flusso di output, in genere si specifica un flag **open_mode**. È possibile combinare questi flag, definiti come enumeratori nella classe `ios`, con l'operatore Bitwise-OR ( &#124; ). Per un elenco di enumeratori, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).

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

## <a name="the-write"></a>L'operazione di scrittura

La funzione **write** scrive un blocco di memoria in un flusso di file di output. L'argomento length specifica il numero di byte scritti. In questo esempio viene creato un flusso di file di output in cui viene scritto il valore binario della struttura `Date`:

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

La funzione **write** non si arresta quando raggiunge un carattere null, pertanto viene scritta la struttura di classe completa. La funzione accetta due argomenti: un puntatore `char` e un conteggio di caratteri da scrivere. Si noti il cast necessario per **char\*** prima dell'indirizzo dell'oggetto di struttura.

## <a name="the-seekp-and-tellp-functions"></a>Funzioni seekp e tellp

Un flusso di file di output mantiene un puntatore interno che punta alla posizione in cui verranno successivamente scritti i dati. La funzione membro `seekp` imposta questo puntatore, garantendo pertanto l'output di file su disco ad accesso casuale. La funzione membro `tellp` restituisce la posizione del file. Per esempi che usano gli equivalenti del flusso di input di `seekp` e `tellp`, vedere [Le funzioni di tellg e di seekg](../standard-library/input-stream-member-functions.md).

## <a name="the-close-function-for-output-streams"></a>Funzione close per flussi di output

La funzione membro **close** chiude il file su disco associato a un flusso di file di output. Per completare tutto l'output del disco, è necessario chiudere il file. Se necessario, il distruttore `ofstream` chiude automaticamente il file, ma è possibile usare la funzione **close** se è necessario aprire un altro file per lo stesso oggetto di flusso.

Il distruttore del flusso di output chiude automaticamente un file del flusso solo se il costruttore o la funzione membro **open** ha aperto il file. Se viene passato al costruttore un descrittore di file per un file già aperto o viene usata la funzione membro **attach**, è necessario chiudere il file in modo esplicito.

## <a name="vclrferrorprocessingfunctionsanchor10"></a> Funzioni per l'elaborazione degli errori

Usare queste funzioni membro per verificare gli errori durante la scrittura in un flusso:

|Funzione|Valore restituito|
|--------------|------------------|
|[bad](http://msdn.microsoft.com/Library/4038d331-e9c9-48b0-bf49-c6505744469c)|Restituisce **true** se è presente un errore irreversibile.|
|[fail](http://msdn.microsoft.com/Library/619f1b36-1e72-4551-8b48-888ae4e370d2)|Restituisce **true** se è presente un errore irreversibile o una condizione "prevista", ad esempio un errore di conversione, o se è impossibile trovare il file. L'elaborazione può spesso riprendere dopo una chiamata a **clear** con un argomento con valore zero.|
|[good](http://msdn.microsoft.com/Library/77f0aa17-2ae1-48ae-8040-592d301e3972)|Restituisce **true** se non è presente alcuna condizione di errore (errore irreversibile o altro errore) e non è impostato il flag di fine file.|
|[eof](http://msdn.microsoft.com/Library/3087f631-1268-49cd-86cf-ff4108862329)|Restituisce **true** in caso di condizione di fine file.|
|[clear](http://msdn.microsoft.com/Library/dc172694-1267-45f8-8f5c-e822e16fc271)|Imposta lo stato di errore interno. Se chiamato con gli argomenti predefiniti, cancella tutti i bit di errore.|
|[rdstate](http://msdn.microsoft.com/Library/e235e4e2-7e95-4777-a160-3938d263dd9c)|Restituisce lo stato di errore corrente.|

L'operatore **!** viene sottoposto a overload per eseguire la stessa funzione della funzione **fail**. Pertanto, l'espressione:

```cpp
if(!cout)...
```

equivale a:

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

L'operatore **void\*()** non è equivalente a **good** in quanto non verifica la fine del file.

## <a name="see-also"></a>Vedere anche

[Flussi di output](../standard-library/output-streams.md)<br/>
