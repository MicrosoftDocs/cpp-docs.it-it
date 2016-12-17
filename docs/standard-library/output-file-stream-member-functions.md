---
title: "Funzioni membro del flussi di file di output | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "flussi di output, funzioni membro"
ms.assetid: 38aaf710-8035-4a34-a0c4-123a5327f28a
caps.latest.revision: 8
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni membro del flussi di file di output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni membro flusso di output hanno tre tipi: quelli che sono equivalenti ai manipolatori, quelle che eseguono le operazioni di scrittura non formattato e quelli che modificano nello stato del flusso e non hanno manipolatore o l'operatore equivalente di inserimento.  Per sequenziale, output formattato, è possibile utilizzare solo gli operatori e i manipolatori di inserimento.  Per l'output binario di accesso casuale del disco, si utilizzano altre funzioni membro, con o senza gli operatori di inserimento.  
  
## La funzione open per flussi di output  
 Per utilizzare un flusso del file di output \([ofstream](../Topic/ofstream.md)\), è necessario associare il flusso con un file su disco nel costruttore specifico o funzione di **apri**.  Se si utilizza la funzione di **apri**, è possibile riutilizzare lo stesso oggetto flusso attraverso una serie di file.  In entrambi i casi, gli argomenti che descrivono il file sono identici.  
  
 Quando si apre il file associato a un flusso di output, specificare in genere un flag di **open\_mode**.  È possibile combinare questi flag, definiti come enumeratori nella classe di `ios`, con l'operazione OR bit per bit \( &#124; operatore\).  Vedere [ios\_base::openmode](../Topic/ios_base::openmode.md) per un elenco di enumeratori.  
  
 Tre situazioni comuni del flusso di output include le opzioni di modi:  
  
-   Creare un file.  Se il file esiste già, la versione precedente viene eliminato.  
  
    ```  
    ostream ofile( "FILENAME" );  // Default is ios::out  
    ofstream ofile( "FILENAME", ios::out ); // Equivalent to above  
    ```  
  
-   Aggiungendo i record a un file esistente oppure per creare uno se non esiste.  
  
    ```  
    ofstream ofile( "FILENAME", ios::app );  
    ```  
  
-   Aprendo due file, uno alla volta, nello stesso flusso.  
  
    ```  
    ofstream ofile();  
    ofile.open( "FILE1", ios::in );  
    // Do some output  
    ofile.close(); // FILE1 closed  
    ofile.open( "FILE2", ios::in );  
    // Do some more output  
    ofile.close(); // FILE2 closed  
    // When ofile goes out of scope it is destroyed.  
    ```  
  
## La funzione inserita  
 La funzione di **put** scrive un carattere nel flusso di output.  Le due istruzioni sono identiche per impostazione predefinita, ma il secondo saranno interessate dagli argomenti del formato del flusso:  
  
```  
cout.put( 'A' ); // Exactly one character written  
cout << 'A'; // Format arguments 'width' and 'fill' apply   
```  
  
## La funzione di scrittura  
 La funzione di **scrivere** scrive un blocco di memoria in un flusso del file di output.  L'argomento di lunghezza specifica il numero di byte scritto.  In questo esempio viene creato un flusso del file di output e scrive il valore binario della struttura di `Date` :  
  
```  
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
  
 La funzione di **scrivere** non termina quando raggiunge un carattere null, pertanto la struttura di classe completa viene scritta.  La funzione accetta due argomenti: un puntatore di `char` e un numero di caratteri da scrivere.  Si noti il cast richiesto a **Carattere a destra esteso** prima che l'indirizzo dell'oggetto della struttura.  
  
## Le funzioni di tellp e di seekp  
 Un flusso del file di output mantiene un puntatore interno che indica la posizione in cui i dati devono essere scritti avanti.  La funzione membro di `seekp` quindi il puntatore e pertanto fornisce output a accesso casuale di file su disco.  La funzione membro di `tellp` restituisce la posizione del file.  Per esempi che utilizzano gli equivalenti del flusso di input a `seekp` e a `tellp`, vedere [Le funzioni di tellg e di seekg](../standard-library/input-stream-member-functions.md).  
  
## La funzione close per flussi di output  
 La funzione membro di **chiudi** chiude il file su disco associato a un flusso del file di output.  Il file deve essere chiusa per completare tutto l'output del disco.  Se necessario, il distruttore di `ofstream` chiude il file automaticamente, ma è possibile utilizzare la funzione di **chiudi** se è necessario aprire un altro file per lo stesso oggetto flusso.  
  
 Il distruttore del flusso di output chiude automaticamente il file di un flusso solo se il costruttore o la funzione membro di **apri** apra il file.  Se si passa al costruttore un descrittore del file per un file già aperto o si utilizza la funzione membro di **allega**, è necessario chiudere il file in modo esplicito.  
  
##  <a name="vclrferrorprocessingfunctionsanchor10"></a> Funzioni di elaborazione di errore  
 Utilizzare queste funzioni membro per verificare gli errori mentre la scrittura in un flusso:  
  
|Funzione|Valore restituito|  
|--------------|-----------------------|  
|[non corretto](../Topic/basic_ios::bad.md)|Restituisce **true** se è presente un errore irreversibile.|  
|[non riuscito](../Topic/basic_ios::fail.md)|Restituisce **true** se è presente un errore irreversibile o uno stato "previsto", ad esempio un errore di conversione, o se il file non viene trovato.  L'elaborazione può riattivare spesso dopo una chiamata a **cancellare** con un argomento zero.|  
|[buon](../Topic/basic_ios::good.md)|Restituisce **true** se non esiste una condizione di errore irreversibile \(o else\) e il flag di fine file non è impostato.|  
|[EOF](../Topic/basic_ios::eof.md)|Restituisce **true** stato di fine file.|  
|[clear](../Topic/basic_ios::clear.md)|Impostare uno stato di errore interno.  Se viene chiamato con argomenti predefiniti, rimuove tutti i bit degli errori.|  
|[rdstate](../Topic/basic_ios::rdstate.md)|Restituisce lo stato di errore corrente.|  
  
 L'operatore di **\!** viene sottoposto a overload per eseguire la stessa funzione di **non riuscito**.  Pertanto l'espressione:  
  
```  
if( !cout)...  
```  
  
 equivale a:  
  
```  
if( cout.fail() )...  
```  
  
 L'operatore di **void\*\(\)** viene sottoposto a overload per essere l'opposto dell'operatore di **\!** ; pertanto l'espressione:  
  
```  
if( cout)...  
```  
  
 equivale a:  
  
```  
if( !cout.fail() )...  
```  
  
 L'operatore di **void\*\(\)** non equivale a **good** perché non test per il fine del file.  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)