---
title: "&lt;ios&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.<ios>"
  - "std::<ios>"
  - "<ios>"
  - "ios/std::<ios>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ios (intestazione)"
ms.assetid: d3d4c161-2f37-4f04-93cc-0a2a89984a9c
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# &lt;ios&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diversi tipi e funzioni alla base del funzionamento delle intestazioni iostream.  Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente viene inclusa direttamente dall'utente.  
  
## Sintassi  
  
```  
  
#include <ios>  
  
```  
  
## Note  
 Molte funzioni vengono considerate manipolatori.  Un manipolatore dichiarato in \<ios\> modifica i valori archiviati nel relativo oggetto argomento della classe [ios\_base](../standard-library/ios-base-class.md).  Altri manipolatori eseguono azioni sui flussi controllati dagli oggetti di un tipo derivato da questa classe, ad esempio una specializzazione di una delle classi modello [basic\_istream](../standard-library/basic-istream-class.md) o [basic\_ostream](../standard-library/basic-ostream-class.md).  Ad esempio, [noskipws](../Topic/noskipws.md)\(**str**\) cancella il flag di formato `ios_base::skipws` nell'oggetto **str**, che può essere di uno di questi tipi.  
  
 È anche possibile chiamare un manipolatore inserendolo in un flusso di output o estraendolo da un flusso di input, a causa delle operazioni speciali di inserimento ed estrazione fornite per le classi derivate da `ios_base`.  Ad esempio:  
  
```  
istr >> noskipws;  
```  
  
 chiama [noskipws](../Topic/noskipws.md)\(**istr**\).  
  
### Typedef  
  
|||  
|-|-|  
|[ios](../Topic/ios.md)|Supporta la classe ios dalla libreria iostream precedente.|  
|[streamoff](../Topic/streamoff.md)|Supporta operazioni interne.|  
|[streampos](../Topic/streampos.md)|Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.|  
|[streamsize](../Topic/streamsize.md)|Specifica le dimensioni del flusso.|  
|[wios](../Topic/wios.md)|Supporta la classe wios dalla libreria iostream precedente.|  
|[wstreampos](../Topic/wstreampos.md)|Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.|  
  
### Manipolatori  
  
|||  
|-|-|  
|[boolalpha](../Topic/boolalpha.md)|Specifica che le variabili di tipo [bool](../cpp/bool-cpp.md) vengano visualizzate come **true** o **false** nel flusso.|  
|[dec](../Topic/dec.md)|Specifica che le variabili Integer vengano visualizzate nella notazione in base 10.|  
|[defaultfloat](../Topic/%3Cios%3E%20defaultfloat.md)|Configura i flag di un oggetto `ios_base` per usare un formato di visualizzazione predefinito per i valori float.|  
|[fissa](../Topic/fixed.md)|Specifica che un numero a virgola mobile venga visualizzato nella notazione decimale fissa.|  
|[hex](../Topic/hex.md)|Specifica che le variabili Integer vengono visualizzate nella notazione in base 16.|  
|[internal](../Topic/internal%20\(Standard%20C++%20Library\).md)|Fa sì che il segno di un numero venga giustificato a sinistra e il numero a destra.|  
|[left](../Topic/left.md)|Fa sì che il testo la cui larghezza non corrisponde a quella dell'output venga visualizzato nel flusso allineato con il margine sinistro.|  
|[noboolalpha](../Topic/noboolalpha.md)|Specifica che le variabili di tipo [bool](../cpp/bool-cpp.md) vengano visualizzate come 1 o 0 nel flusso.|  
|[noshowbase](../Topic/noshowbase.md)|Disattiva l'indicazione della base notazionale in cui viene visualizzato un numero.|  
|[noshowpoint](../Topic/noshowpoint.md)|Visualizza solo la parte di numero intero dei numeri a virgola mobile la cui parte frazionaria è pari a zero.|  
|[noshowpos](../Topic/noshowpos.md)|Fa sì che per i numeri positivi il segno non venga visualizzato in modo esplicito.|  
|[noskipws](../Topic/noskipws.md)|Fa sì che gli spazi vengano letti dal flusso di input.|  
|[nounitbuf](../Topic/nounitbuf.md)|Fa sì che l'output venga memorizzato nel buffer ed elaborato quando il buffer è pieno.|  
|[nouppercase](../Topic/nouppercase.md)|Specifica che le cifre esadecimali e l'esponente nella notazione scientifica vengano visualizzati in minuscolo.|  
|[oct](../Topic/oct%20\(%3Cios%3E\).md)|Specifica che le variabili Integer vengano visualizzate nella notazione in base 8.|  
|[right](../Topic/right.md)|Fa sì che il testo la cui larghezza non corrisponde a quella dell'output venga visualizzato nel flusso allineato con il margine destro.|  
|[scientifica](../Topic/scientific.md)|Fa sì che i numeri a virgola mobile vengano visualizzati usando la notazione scientifica.|  
|[showbase](../Topic/showbase.md)|Indica la base notazionale in cui viene visualizzato un numero.|  
|[showpoint](../Topic/showpoint.md)|Visualizza la parte di numero intero di un numero a virgola mobile e le cifre a destra del separatore decimale, anche quando la parte frazionaria è pari a zero.|  
|[showpos](../Topic/showpos.md)|Fa sì che per i numeri positivi il segno venga visualizzato in modo esplicito.|  
|[skipws](../Topic/skipws.md)|Fa sì che gli spazi non vengano letti dal flusso di input.|  
|[unitbuf](../Topic/unitbuf.md)|Fa sì che l'output venga elaborato quando il buffer non è pieno.|  
|[tutto maiuscole](../Topic/uppercase.md)|Specifica che le cifre esadecimali e l'esponente nella notazione scientifica vengano visualizzati in maiuscolo.|  
  
### Classi  
  
|||  
|-|-|  
|[basic\_ios](../standard-library/basic-ios-class.md)|La classe modello descrive le funzioni membro e di archiviazione comuni ai flussi di input \(della classe modello [basic\_istream](../standard-library/basic-istream-class.md)\) e ai flussi di output \(della classe modello [basic\_ostream](../standard-library/basic-ostream-class.md)\) che dipendono dai parametri di modello.|  
|[fpos](../standard-library/fpos-class.md)|La classe modello descrive un oggetto che può archiviare tutte le informazioni necessarie per ripristinare un indicatore di posizione del file arbitrario all'interno di qualsiasi flusso.|  
|[ios\_base](../standard-library/ios-base-class.md)|La classe descrive le funzioni membro e di archiviazione comuni ai flussi di input e di output che non dipendono dai parametri di modello.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)