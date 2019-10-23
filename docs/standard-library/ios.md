---
title: '&lt;ios&gt;'
ms.date: 11/04/2016
f1_keywords:
- <ios>
- ios/std::<ios>
helpviewer_keywords:
- ios header
ms.assetid: d3d4c161-2f37-4f04-93cc-0a2a89984a9c
ms.openlocfilehash: a322e517a4adb51879fc2a60f6c08f6561276de9
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689503"
---
# <a name="ltiosgt"></a>&lt;ios&gt;

Definisce diversi tipi e funzioni alla base del funzionamento delle intestazioni iostream. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente viene inclusa direttamente dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione**: \<ios >

**Spazio dei nomi:** std

> [!NOTE]
> Nella libreria di > \<ios viene utilizzata l'istruzione `#include <iosfwd>`.

## <a name="remarks"></a>Note

Molte funzioni vengono considerate manipolatori. Un manipolatore dichiarato in \<ios> modifica i valori archiviati nel relativo oggetto argomento della classe [ios_base](../standard-library/ios-base-class.md). Altri manipolatori eseguono azioni sui flussi controllati da oggetti di un tipo derivato da questa classe, ad esempio una specializzazione di uno dei modelli di classe [basic_istream](../standard-library/basic-istream-class.md) o [basic_ostream](../standard-library/basic-ostream-class.md). Ad esempio, [noskipws](../standard-library/ios-functions.md#noskipws)(**Str**) cancella il flag di formato `ios_base::skipws` nell'oggetto `str`, che può essere di uno di questi tipi.

È anche possibile chiamare un manipolatore inserendolo in un flusso di output o estraendolo da un flusso di input, a causa delle operazioni speciali di inserimento ed estrazione fornite per le classi derivate da `ios_base`. Esempio:

```cpp
istr>> noskipws;
```

chiama [noskipws](../standard-library/ios-functions.md#noskipws)(**istr**).

## <a name="members"></a>Members

### <a name="typedefs"></a>Definizioni typedef

|||
|-|-|
|[ios](../standard-library/ios-typedefs.md#ios)|Supporta la classe ios dalla libreria iostream precedente.|
|[streamoff](../standard-library/ios-typedefs.md#streamoff)|Supporta operazioni interne.|
|[streampos](../standard-library/ios-typedefs.md#streampos)|Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.|
|[streamsize](../standard-library/ios-typedefs.md#streamsize)|Specifica le dimensioni del flusso.|
|[wios](../standard-library/ios-typedefs.md#wios)|Supporta la classe wios dalla libreria iostream precedente.|
|[wstreampos](../standard-library/ios-typedefs.md#wstreampos)|Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.|

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[boolalpha](../standard-library/ios-functions.md#boolalpha)|Specifica che le variabili di tipo [bool](../cpp/bool-cpp.md) vengano visualizzate come **true** o **false** nel flusso.|
|[dec](../standard-library/ios-functions.md#dec)|Specifica che le variabili Integer vengano visualizzate nella notazione in base 10.|
|[defaultfloat](../standard-library/ios-functions.md#ios_defaultfloat)|Configura i flag di un oggetto `ios_base` per usare un formato di visualizzazione predefinito per i valori float.|
|[fixed](../standard-library/ios-functions.md#fixed)|Specifica che un numero a virgola mobile venga visualizzato nella notazione decimale fissa.|
|[hex](../standard-library/ios-functions.md#hex)|Specifica che le variabili Integer vengono visualizzate nella notazione in base 16.|
|[hexfloat](../standard-library/ios-functions.md#hexfloat)|
|[internal](../standard-library/ios-functions.md#internal)|Fa sì che il segno di un numero venga giustificato a sinistra e il numero a destra.|
|[left](../standard-library/ios-functions.md#left)|Fa sì che il testo la cui larghezza non corrisponde a quella dell'output venga visualizzato nel flusso allineato con il margine sinistro.|
|[noboolalpha](../standard-library/ios-functions.md#noboolalpha)|Specifica che le variabili di tipo [bool](../cpp/bool-cpp.md) vengano visualizzate come 1 o 0 nel flusso.|
|[noshowbase](../standard-library/ios-functions.md#noshowbase)|Disattiva l'indicazione della base notazionale in cui viene visualizzato un numero.|
|[noshowpoint](../standard-library/ios-functions.md#noshowpoint)|Visualizza solo la parte di numero intero dei numeri a virgola mobile la cui parte frazionaria è pari a zero.|
|[noshowpos](../standard-library/ios-functions.md#noshowpos)|Fa sì che per i numeri positivi il segno non venga visualizzato in modo esplicito.|
|[noskipws](../standard-library/ios-functions.md#noskipws)|Fa sì che gli spazi vengano letti dal flusso di input.|
|[nounitbuf](../standard-library/ios-functions.md#nounitbuf)|Fa sì che l'output venga memorizzato nel buffer ed elaborato quando il buffer è pieno.|
|[nouppercase](../standard-library/ios-functions.md#nouppercase)|Specifica che le cifre esadecimali e l'esponente nella notazione scientifica vengano visualizzati in minuscolo.|
|[oct](../standard-library/ios-functions.md#oct)|Specifica che le variabili Integer vengano visualizzate nella notazione in base 8.|
|[right](../standard-library/ios-functions.md#right)|Fa sì che il testo la cui larghezza non corrisponde a quella dell'output venga visualizzato nel flusso allineato con il margine destro.|
|[scientific](../standard-library/ios-functions.md#scientific)|Fa sì che i numeri a virgola mobile vengano visualizzati usando la notazione scientifica.|
|[showbase](../standard-library/ios-functions.md#showbase)|Indica la base notazionale in cui viene visualizzato un numero.|
|[showpoint](../standard-library/ios-functions.md#showpoint)|Visualizza la parte di numero intero di un numero a virgola mobile e le cifre a destra del separatore decimale, anche quando la parte frazionaria è pari a zero.|
|[showpos](../standard-library/ios-functions.md#showpos)|Fa sì che per i numeri positivi il segno venga visualizzato in modo esplicito.|
|[skipws](../standard-library/ios-functions.md#skipws)|Fa sì che gli spazi non vengano letti dal flusso di input.|
|[unitbuf](../standard-library/ios-functions.md#unitbuf)|Fa sì che l'output venga elaborato quando il buffer non è pieno.|
|[uppercase](../standard-library/ios-functions.md#uppercase)|Specifica che le cifre esadecimali e l'esponente nella notazione scientifica vengano visualizzati in maiuscolo.|

### <a name="error-reporting"></a>Segnalazione errori

|||
|-|-|
|[io_errc](../standard-library/ios-functions.md#io_errc)||
|[is_error_code_enum](../standard-library/ios-functions.md#is_error_code_enum)||
|[iostream_category](../standard-library/ios-functions.md#iostream_category)||
|[make_error_code](../standard-library/ios-functions.md#make_error_code)||
|[make_error_condition](../standard-library/ios-functions.md#make_error_condition)||

### <a name="classes"></a>Classi

|||
|-|-|
|[basic_ios](../standard-library/basic-ios-class.md)|Il modello di classe descrive le funzioni membro e di archiviazione comuni a entrambi i flussi di input (di classe modello [basic_istream](../standard-library/basic-istream-class.md)) e ai flussi di output (della classe modello [basic_ostream](../standard-library/basic-ostream-class.md)) che dipendono dai parametri del modello.|
|[fpos](../standard-library/fpos-class.md)|Il modello di classe descrive un oggetto in grado di archiviare tutte le informazioni necessarie per ripristinare un indicatore di posizione del file arbitrario all'interno di qualsiasi flusso.|
|[ios_base](../standard-library/ios-base-class.md)|La classe descrive le funzioni membro e di archiviazione comuni ai flussi di input e di output che non dipendono dai parametri di modello.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
