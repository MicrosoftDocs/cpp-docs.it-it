---
title: Fasi di conversione
ms.date: 10/18/2018
helpviewer_keywords:
- translation phases
- preprocessor, translation
- translation, compiler process
- preprocessor
- file translation [C++], compiler process
- files [C++], translation
ms.assetid: a7f7a8c9-e8ba-4321-9e50-ebfbbdcce9db
ms.openlocfilehash: 11e36e06adc4fa95cb9aa607704e72f64c812429
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62180017"
---
# <a name="phases-of-translation"></a>Fasi di conversione

I programmi in C e C++ sono costituiti da uno o più file di origine, ciascuno contenente parte del testo del programma. Un file di origine, insieme ai relativi file di inclusione (file che vengono inclusi utilizzando la direttiva per il preprocessore `#include`) e ad esclusione delle sezioni di codice rimosse dalle direttive di compilazione condizionale, come `#if`, viene chiamato "unità di conversione."

I file di origine possono essere convertiti in momenti diversi. È pratica comune, infatti, convertire solo i file obsoleti. Le unità di conversione convertite possono essere elaborate in distinti file oggetto o in librerie di codice oggetto. Tali distinte unità di conversione convertite vengono, in seguito, collegate, in modo da formare un programma eseguibile o una libreria di collegamento dinamico (DLL).  Per altre informazioni sui file che può essere utilizzato come input del linker, vedere [file di Input LINK](../build/reference/link-input-files.md).

Le unità di conversione possono comunicare utilizzando:

- Chiamate alle funzioni con collegamento esterno.

- Chiamate alle funzioni membri di classe che hanno un collegamento esterno.

- Modifica diretta degli oggetti che hanno un collegamento esterno.

- Modifica diretta dei file.

- Comunicazione interprocesso (solo con le applicazioni basate su Microsoft Windows).

Nell'elenco seguente vengono descritti i passaggi ai quali il compilatore si attiene per converte i file:

*Mapping dei caratteri*<br/>
I caratteri presenti nel file di origine vengono mappati alla rappresentazione interna di origine. Durante questa fase, le sequenze di trigramma vengono convertite in una rappresentazione interna a un solo carattere.

*Splicing riga*<br/>
Tutte le righe che terminano con una barra rovesciata (**\\**) e seguito immediatamente da un carattere di nuova riga carattere vengono unite con la riga successiva nel file di origine formare righe logiche dalle righe fisiche. A meno che non sia vuoto, un file di origine deve terminare con un carattere di nuova riga non preceduto da una barra rovesciata.

*Suddivisione in token*<br/>
Il file di origine viene suddiviso in spazi vuoti e token di pre-elaborazione. I commenti presenti nel file di origine vengono sostituiti ognuno con uno spazio. I caratteri di nuova riga vengono mantenuti.

*Pre-elaborazione*<br/>
Le direttive di pre-elaborazione vengono eseguite e le macro vengono espanse nel file di origine. L'istruzione `#include` richiama la conversione a partire dai precedenti tre passaggi di conversione in ogni testo incluso.

*Mapping di set di caratteri*<br/>
Tutti i membri del set di caratteri e le sequenze di escape vengono convertite negli relativi equivalenti del set di caratteri di esecuzione. Per Microsoft C e C++, i set di caratteri di esecuzione e di origine sono entrambi ASCII.

*Concatenazione di stringhe*<br/>
Tutti i valori letterali stringa adiacenti e a caratteri "wide" vengono concatenati. `"String " "concatenation"`, ad esempio, diventa `"String concatenation"`.

*Traduzione*<br/>
Tutti i token vengono analizzati sintatticamente e semanticamente; gli stessi token vengono poi convertiti in codice oggetto.

*Collegamento*<br/>
Tutti i riferimenti esterni vengono risolti per creare un programma eseguibile o una libreria di collegamento dinamico.

Il compilatore genera avvisi o errori durante le fasi di conversione in cui rileva errori di sintassi.

Il linker risolve tutti i riferimenti esterni e crea un programma eseguibile o una DLL, combinando una o più unità di conversione elaborate separatamente con le librerie standard.

## <a name="see-also"></a>Vedere anche

[Preprocessore](../preprocessor/preprocessor.md)