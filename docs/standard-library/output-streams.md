---
title: Flussi di output | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: output streams
ms.assetid: b49410e3-5caa-4153-9d0d-c4266408dc83
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f8fee8ecffda86f306b44f0d5b873d5192d4d181
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="output-streams"></a>Flussi di output
Un oggetto flusso di output è una destinazione per byte. Le tre classi di flusso di output più importanti sono `ostream`, `ofstream` e `ostringstream`.  
  
 La classe `ostream`, attraverso la classe derivata `basic_ostream`, supporta gli oggetti di flusso predefiniti:  
  
-   `cout` output standard  
  
-   `cerr` errore standard con buffer limitato  
  
-   `clog` simile a `cerr` ma con buffer completo  
  
 Raramente vengono costruiti oggetti da `ostream`. Normalmente si usano oggetti predefiniti. In alcuni casi, è possibile riassegnare oggetti predefiniti dopo l'avvio del programma. La classe `ostream`, che può essere configurata per operare con o senza buffer, è più adatta all'output in modalità testo sequenziale. Tutte le funzionalità della classe di base, `ios`, sono incluse in `ostream`. Se si costruisce un oggetto di classe `ostream`, si deve specificare un oggetto `streambuf` al costruttore.  
  
 La classe `ofstream` supporta l'output di file su disco. Se è necessario un disco di solo output, costruire un oggetto della classe `ofstream`. È possibile specificare se gli oggetti `ofstream` accettano dati binari o in modalità testo durante la costruzione dell'oggetto `ofstream` o durante la chiamata della funzione membro `open` dell'oggetto. Molte opzioni di formattazione e funzioni membro si applicano agli oggetti `ofstream`, che includono tutte le funzionalità delle classi di base `ios` e `ostream`.  
  
 Se si specifica un nome di file nel costruttore, tale file viene aperto automaticamente quando l'oggetto viene costruito. In alternativa, è possibile usare la funzione membro `open` dopo aver richiamato il costruttore predefinito.  
  
 Analogamente alla funzione di runtime `sprintf_s`, la classe `ostringstream` supporta l'output nelle stringhe in memoria. Per creare una stringa in memoria usando la formattazione di flussi I/O, costruire un oggetto della classe `ostringstream`.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Costruzione di oggetti di flusso di output](../standard-library/constructing-output-stream-objects.md)  
  
 [Uso degli operatori di inserimento e controllo del formato](../standard-library/using-insertion-operators-and-controlling-format.md)  
  
 [Funzioni membro del flusso di file di output](../standard-library/output-file-stream-member-functions.md)  
  
 [Effetti del buffering](../standard-library/effects-of-buffering.md)  
  
 [File di output binari](../standard-library/binary-output-files.md)  
  
 [Overload dell'operatore << per classi personalizzate](../standard-library/overloading-the-output-operator-for-your-own-classes.md)  
  
 [Scrittura di manipolatori personalizzati senza gli argomenti](../standard-library/writing-your-own-manipulators-without-arguments.md)  
  
## <a name="see-also"></a>Vedere anche 
 [ofstream](../standard-library/basic-ofstream-class.md)   
 [ostringstream](../standard-library/basic-ostringstream-class.md)   
 [Programmazione iostream](../standard-library/iostream-programming.md)

