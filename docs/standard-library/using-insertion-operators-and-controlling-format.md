---
title: "Utilizzo degli operatori di inserimento e controllo del formato | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatori di inserimento"
ms.assetid: cdefe986-6548-4cd1-8a67-b431d7d36a1c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo degli operatori di inserimento e controllo del formato
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento illustra come controllare il formato e creare gli operatori di inserimento per le classi personalizzate.  L'operatore di inserimento \(**\<\<**\), che è preprogrammato per tutti i tipi di dati C\+\+ standard, invia byte a un oggetto del flusso di output.  Gli operatori di inserimento funzionano con "manipolatori" predefiniti, cioè elementi che modificano il formato predefinito di argomenti Integer.  
  
 È possibile controllare il formato con le opzioni seguenti:  
  
-   [Larghezza di output](#vclrfoutputwidthanchor3)  
  
-   [Allineamento](#vclrfalignmentanchor4)  
  
-   [Precisione](#vclrfprecisionanchor5)  
  
-   [Radice](#vclrfradixanchor6)  
  
##  <a name="vclrfoutputwidthanchor3"></a> Larghezza di output  
 Per allineare l'output, si specifica la larghezza di output per ogni elemento posizionando il manipolatore `setw` nel flusso o chiamando la funzione membro **width**.  Questo esempio allinea a destra i valori in una colonna ampia almeno 10 caratteri:  
  
```  
// output_width.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   double values[] = { 1.23, 35.36, 653.7, 4358.24 };  
   for( int i = 0; i < 4; i++ )  
   {  
      cout.width(10);  
      cout << values[i] << '\n';  
   }  
}  
```  
  
### Output  
  
```  
   1.23  
  35.36  
  653.7  
4358.24  
```  
  
 Gli spazi a sinistra vengono aggiunti a qualsiasi valore inferiore a 10 caratteri.  
  
 Per riempire un campo, usare la funzione membro **fill**, che imposta il valore del carattere di spaziatura interna per i campi per cui è stata specificata una larghezza.  Il valore predefinito è vuoto.  Per riempire la colonna di numeri con un asterisco, modificare il precedente ciclo **for** come indicato di seguito:  
  
```  
for( int i = 0; i < 4; i++ )  
{  
   cout.width( 10 );  
   cout.fill( '*' );  
   cout << values[i] << endl;  
}  
```  
  
 Il manipolatore `endl` sostituisce il carattere di nuova riga \(`'\n'`\).  L'output sarà analogo al seguente:  
  
```  
******1.23  
*****35.36  
*****653.7  
***4358.24  
```  
  
 Per specificare la larghezza per elementi di dati nella stessa riga, usare il manipolatore `setw`:  
  
```  
// setw.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main( )  
{  
   double values[] = { 1.23, 35.36, 653.7, 4358.24 };  
   char *names[] = { "Zoot", "Jimmy", "Al", "Stan" };  
   for( int i = 0; i < 4; i++ )  
      cout << setw( 6 )  << names[i]  
           << setw( 10 ) << values[i] << endl;  
}  
```  
  
### Output  
 La funzione membro **width** è dichiarata in \<iostream\>.  Se si usa `setw` o qualsiasi altro manipolatore con argomenti, è necessario includere \<iomanip\>.  Nell'output, le stringhe vengono stampate in un campo della larghezza 6 e gli Integer in un campo di larghezza 10:  
  
```  
 Zoot      1.23  
Jimmy     35.36  
   Al     653.7  
 Stan   4358.24  
```  
  
 Né `setw` né **width** tronca i valori.  Se l'output formattato supera la larghezza, viene stampato il valore intero, soggetto alle impostazioni di precisione del flusso.  Sia `setw` sia **width** interessano solo il campo seguente.  Viene ripristinato il comportamento predefinito della larghezza del campo \(larghezza necessaria\) dopo la stampa di un campo.  Le altre opzioni di formato di flusso, tuttavia, rimangono valide finché non vengono modificate.  
  
##  <a name="vclrfalignmentanchor4"></a> Allineamento  
 Per impostazione predefinita, i flussi di output sono allineati a destra.  Per allineare a sinistra i nomi nell'esempio precedente e a destra i numeri, sostituire il ciclo **for** come segue:  
  
```  
for ( int i = 0; i < 4; i++ )  
   cout << setiosflags( ios::left )  
        << setw( 6 )  << names[i]  
        << resetiosflags( ios::left )  
        << setw( 10 ) << values[i] << endl;  
```  
  
 L'output sarà analogo al seguente:  
  
```  
Zoot        1.23  
Jimmy      35.36  
Al         653.7  
Stan     4358.24  
```  
  
 Il flag di allineamento a sinistra viene impostato usando il manipolatore [setiosflags](../Topic/setiosflags.md) con l'enumeratore [left](../Topic/left.md).  Questo enumeratore viene definito nella classe [ios](../Topic/ios.md), dunque il suo riferimento deve includere il prefisso **ios::**.  Il manipolatore [resetiosflags](../Topic/resetiosflags.md) disattiva il flag di allineamento a sinistra.  A differenza di **width** e `setw`, l'effetto di `setiosflags` e di `resetiosflags` è permanente.  
  
##  <a name="vclrfprecisionanchor5"></a> Precisione  
 Il valore predefinito per la precisione a virgola mobile è sei.  Ad esempio, il numero 3466.9768 viene stampato come 3466.98.  Per modificare il modo in cui questo valore viene stampato, usare il manipolatore [setprecision](../Topic/setprecision.md).  Il manipolatore ha due flag: [fixed](../Topic/fixed.md) e [scientific](../Topic/scientific.md).  Se s'imposta [fixed](../Topic/fixed.md), il numero viene stampato come 3466.976800.  Se s'imposta **scientific** , il numero viene stampato come 3.4669773\+003.  
  
 Per visualizzare i numeri a virgola mobile visualizzati in [Allineamento](#vclrfalignmentanchor4) con una cifra significativa, sostituire il ciclo **for** come indicato di seguito:  
  
```  
for ( int i = 0; i < 4; i++ )  
   cout << setiosflags( ios::left )  
        << setw( 6 )    
        << names[i]  
        << resetiosflags( ios::left )  
        << setw( 10 )   
        << setprecision( 1 )  
        << values[i]   
        << endl;  
```  
  
 Il programma stampa questo elenco:  
  
```  
Zoot          1  
Jimmy     4e+001  
Al        7e+002  
Stan      4e+003  
```  
  
 Per eliminare la notazione scientifica, inserire questa istruzione prima del ciclo **for**:  
  
```  
cout << setiosflags( ios::fixed );  
```  
  
 Con la notazione fissa, il programma stampa con una cifra dopo il separatore decimale.  
  
```  
Zoot         1.2  
Jimmy       35.4  
Al         653.7  
Stan      4358.2  
```  
  
 Se si modifica il flag **ios::fixed** in **ios::scientific**, il programma stampa quanto segue:  
  
```  
Zoot    1.2e+000  
Jimmy   3.5e+001  
Al      6.5e+002  
Stan    4.4e+003  
```  
  
 Anche in questo caso, il programma stampa con una cifra dopo il separatore decimale.  Se è impostato il flag **ios::fixed** o **ios::scientific**, il valore di precisione determina il numero di cifre dopo il separatore decimale.  Se nessuno dei due flag è impostato, il valore di precisione determina il numero totale di cifre significative.  Il manipolatore `resetiosflags` cancella questi flag.  
  
##  <a name="vclrfradixanchor6"></a> Radice  
 I manipolatori **dec**, **oct** e **hex** impostano la radice predefinita per input e output.  Ad esempio, se si inserisce il manipolatore **hex** nel flusso di output, l'oggetto converte correttamente la rappresentazione di dati interni di Integer in un formato di output esadecimale.  I numeri vengono visualizzati con le cifre da a ad f in lettere minuscole se il flag [uppercase](../Topic/uppercase.md) flag è deselezionato \(predefinito\); in caso contrario, vengono visualizzati in lettere maiuscole.  La radice predefinita è **dec** \(decimale\).  
  
## Stringhe tra virgolette \(C\+\+14\)  
 Quando si inserisce una stringa in un flusso, è possibile recuperare facilmente la stessa stringa nuovamente chiamando la funzione membro stringstream::str\(\).  Tuttavia, se si vuole usare l'operatore di estrazione per inserire il flusso in una nuova stringa in un secondo momento, è possibile ottenere un risultato imprevisto perché per impostazione predefinita l'operatore \>\> si arresterà quando rileva il primo carattere di spazio vuoto.  
  
```  
  
std::stringstream ss;  
std::string inserted = "This is a sentence.";  
std::string extracted;  
  
ss << inserted;  
ss >> extracted;  
  
std::cout << inserted;     //  This is a sentence.  
std::cout << extracted;   //   This  
```  
  
 Questo comportamento può essere aggirato manualmente, ma per rendere più pratiche le sequenze di andata e ritorno, C\+\+14 aggiunge il manipolatore del flusso `std::quoted` in `<iomanip>`.  Al momento dell'inserimento, `quoted()` racchiude la stringa con un delimitatore \(virgolette doppie ' " ' per impostazione predefinita\) e all'estrazione modifica il flusso per estrarre tutti i caratteri fino a quando non viene rilevato il delimitatore finale.  Eventuali virgolette incorporate sono precedute da un carattere di escape \('\\\\' per impostazione predefinita\).  
  
 I delimitatori sono presenti solo nell'oggetto flusso; non sono presenti nella stringa estratta, ma sono presenti nella stringa restituita da [basic\_stringstream::str](../Topic/basic_stringstream::str.md)\(\).  
  
 Il comportamento degli spazi vuoti delle operazioni di inserimento e di estrazione è indipendente dal modo in cui una stringa è rappresentata nel codice, dunque l'operatore tra virgolette è utile indipendentemente dal fatto che la stringa di input sia un valore letterale stringa non elaborato o una stringa normale.  La stringa di input, qualunque sia il formato, può avere virgolette incorporate, interruzioni di riga, tabulazioni e così via e tutti questi verranno mantenuti dal manipolatore quoted\(\).  
  
 Per altre informazioni ed esempi di codice completi, vedere [quoted](../Topic/quoted.md).  
  
## Vedere anche  
 [Flussi di output](../standard-library/output-streams.md)   
 [quoted](../Topic/quoted.md)