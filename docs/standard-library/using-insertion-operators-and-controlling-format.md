---
title: Utilizzo degli operatori di inserimento e controllo del formato | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- insertion operators
ms.assetid: cdefe986-6548-4cd1-8a67-b431d7d36a1c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 60f82332f9dd0fa6d6e64beb2a5d793784471a1f
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234599"
---
# <a name="using-insertion-operators-and-controlling-format"></a>Utilizzo degli operatori di inserimento e controllo del formato

Questo argomento illustra come controllare il formato e creare gli operatori di inserimento per le classi personalizzate. L'operatore di inserimento (**<<**), che è preprogrammato per tutti i tipi di dati C++ standard, invia byte a un oggetto del flusso di output. Gli operatori di inserimento funzionano con "manipolatori" predefiniti, cioè elementi che modificano il formato predefinito di argomenti Integer.

È possibile controllare il formato con le opzioni seguenti:

- [Larghezza di output](#vclrfoutputwidthanchor3)

- [Allineamento](#vclrfalignmentanchor4)

- [Precisione](#vclrfprecisionanchor5)

- [Base](#vclrfradixanchor6)

## <a name="vclrfoutputwidthanchor3"></a> Larghezza di output

Per allineare l'output, si specifica la larghezza di output per ogni elemento posizionando il `setw` manipolatore nel flusso o chiamando il `width` funzione membro. Questo esempio allinea a destra i valori in una colonna ampia almeno 10 caratteri: 

```cpp
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

```Output
      1.23
     35.36
     653.7
   4358.24
```

Gli spazi a sinistra vengono aggiunti a qualsiasi valore inferiore a 10 caratteri.

Per riempire un campo, usare il `fill` funzione membro, che imposta il valore del carattere di riempimento per i campi che è stata specificata una larghezza. Il valore predefinito è vuoto. Per riempire la colonna di numeri con asterischi, modificare il precedente ciclo **for** come indicato di seguito:

```cpp
for (int i = 0; i <4; i++)
{
    cout.width(10);
    cout.fill('*');
    cout << values[i] << endl;
}
```

Il manipolatore `endl` sostituisce il carattere di nuova riga (`'\n'`). L'output sarà analogo al seguente:

```Output
******1.23
*****35.36
*****653.7
***4358.24
```

Per specificare la larghezza per elementi di dati nella stessa riga, usare il manipolatore `setw`:

```cpp
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
      cout << setw( 7 )  << names[i]
           << setw( 10 ) << values[i] << endl;
}
```

Il `width` funzione membro viene dichiarata \<iostream >. Se si usa `setw` o qualsiasi altro manipolatore con argomenti, è necessario includere \<iomanip>. Nell'output, le stringhe vengono stampate in un campo della larghezza 6 e gli Integer in un campo di larghezza 10:

```Output
   Zoot      1.23
  Jimmy     35.36
     Al     653.7
   Stan   4358.24
```

Né `setw` né `width` tronca i valori. Se l'output formattato supera la larghezza, viene stampato il valore intero, soggetto alle impostazioni di precisione del flusso. Entrambe `setw` e `width` interessano solo il campo seguente. Viene ripristinato il comportamento predefinito della larghezza del campo (larghezza necessaria) dopo la stampa di un campo. Le altre opzioni di formato di flusso, tuttavia, rimangono valide finché non vengono modificate.

## <a name="vclrfalignmentanchor4"></a> Allineamento

Per impostazione predefinita, i flussi di output sono allineati a destra. Per allineare a sinistra i nomi nell'esempio precedente e a destra i numeri, sostituire il ciclo **for** come segue:

```cpp
for (int i = 0; i <4; i++)
    cout << setiosflags(ios::left)
         << setw(6) << names[i]
         << resetiosflags(ios::left)
         << setw(10) << values[i] << endl;
```

L'output sarà analogo al seguente:

```Output
Zoot        1.23
Jimmy      35.36
Al         653.7
Stan     4358.24
```

Il flag di allineamento a sinistra viene impostato usando il manipolatore [setiosflags](../standard-library/iomanip-functions.md#setiosflags) con l'enumeratore `left`. Questo enumeratore viene definito nella classe [ios](../standard-library/basic-ios-class.md), pertanto il relativo riferimento deve includere il prefisso **ios::**. Il manipolatore [resetiosflags](../standard-library/iomanip-functions.md#resetiosflags) disattiva il flag di allineamento a sinistra. A differenza `width` e `setw`, l'effetto dei `setiosflags` e `resetiosflags` è permanente.

## <a name="vclrfprecisionanchor5"></a> Precisione

Il valore predefinito per la precisione a virgola mobile è sei. Ad esempio, il numero 3466.9768 viene stampato come 3466.98. Per modificare il modo in cui questo valore viene stampato, usare il manipolatore [setprecision](../standard-library/iomanip-functions.md#setprecision). Il manipolatore ha due flag: [fixed](../standard-library/ios-functions.md#fixed) e [scientific](../standard-library/ios-functions.md#scientific). Se si imposta [fixed](../standard-library/ios-functions.md#fixed), il numero viene stampato come 3466.976800. Se `scientific` è impostato, stampato come 3.4669773 + 003.

Per visualizzare i numeri a virgola mobile mostrati in [Allineamento](#vclrfalignmentanchor4) con una cifra significativa, sostituire il ciclo **for** come indicato di seguito:

```cpp
for (int i = 0; i <4; i++)
    cout << setiosflags(ios::left)
         << setw(6)
         << names[i]
         << resetiosflags(ios::left)
         << setw(10)
         << setprecision(1)
         << values[i]
         << endl;
```

Il programma stampa questo elenco:

```Output
Zoot          1
Jimmy     4e+01
Al        7e+02
Stan      4e+03
```

Per eliminare la notazione scientifica, inserire questa istruzione prima del ciclo **for**:

```cpp
cout << setiosflags(ios::fixed);
```

Con la notazione fissa, il programma stampa con una cifra dopo il separatore decimale.

```Output
Zoot         1.2
Jimmy       35.4
Al         653.7
Stan      4358.2
```

Se si modifica il `ios::fixed` flag `ios::scientific`, il programma stampa questo:

```cpp
Zoot    1.2e+00
Jimmy   3.5e+01
Al      6.5e+02
Stan    4.4e+03
```

Anche in questo caso, il programma stampa con una cifra dopo il separatore decimale. Se uno dei due `ios::fixed` o `ios::scientific` è impostato, il valore di precisione determina il numero di cifre dopo il separatore decimale. Se nessuno dei due flag è impostato, il valore di precisione determina il numero totale di cifre significative. Il manipolatore `resetiosflags` cancella questi flag.

## <a name="vclrfradixanchor6"></a> Base

Il `dec`, `oct`, e `hex` manipolatori impostano la base predefinita per input e output. Ad esempio, se si inserisce il `hex` manipolatore nel flusso di output, l'oggetto converte correttamente la rappresentazione di dati interni di integer in un formato di output esadecimale. I numeri vengono visualizzati con le cifre a-f in lettere minuscole se il flag [uppercase](../standard-library/ios-functions.md#uppercase) flag è deselezionato (predefinito); in caso contrario, vengono visualizzati in lettere maiuscole. La base predefinita è `dec` (decimale).

## <a name="quoted-strings-c14"></a>Stringhe tra virgolette (C++14)

Quando si inserisce una stringa in un flusso, è possibile recuperare facilmente la stessa stringa nuovamente chiamando la funzione membro stringstream::str(). Tuttavia, se si vuole usare l'operatore di estrazione per inserire il flusso in una nuova stringa in un secondo momento, è possibile ottenere un risultato imprevisto perché per impostazione predefinita l'operatore >> si arresterà quando rileva il primo carattere di spazio vuoto.

```cpp
std::stringstream ss;
std::string inserted = "This is a sentence.";
std::string extracted;

ss << inserted;
ss >> extracted;

std::cout << inserted;     //  This is a sentence.
std::cout << extracted;    //  This
```

Questo comportamento può essere aggirato manualmente, ma per rendere i round trip di stringa più pratico, c++14 aggiunge il `std::quoted` manipolatore del flusso \<iomanip >. Al momento dell'inserimento, `quoted()` racchiude la stringa con un delimitatore (virgolette doppie ' " ' per impostazione predefinita) e all'estrazione modifica il flusso per estrarre tutti i caratteri fino a quando non viene rilevato il delimitatore finale. Eventuali virgolette incorporate sono precedute da un carattere di escape ('\\\\' per impostazione predefinita).

I delimitatori sono presenti solo nell'oggetto flusso; non sono presenti nella stringa estratta, ma sono presenti nella stringa restituita da [basic_stringstream:: str](../standard-library/basic-stringstream-class.md#str).

Il comportamento degli spazi vuoti delle operazioni di inserimento e di estrazione è indipendente dal modo in cui una stringa è rappresentata nel codice, dunque l'operatore tra virgolette è utile indipendentemente dal fatto che la stringa di input sia un valore letterale stringa non elaborato o una stringa normale. La stringa di input, qualunque sia il formato, può avere virgolette incorporate, interruzioni di riga, tabulazioni e così via e tutti questi verranno mantenuti dal manipolatore quoted().

Per altre informazioni ed esempi di codice completo, vedere [racchiuso tra virgolette](../standard-library/iomanip-functions.md#quoted).

## <a name="see-also"></a>Vedere anche

[Flussi di output](../standard-library/output-streams.md)<br/>
