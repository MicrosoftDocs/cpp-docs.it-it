---
title: Fasi di conversione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- translation phases
- preprocessor, translation
- translation, compiler process
- preprocessor
- file translation [C++], compiler process
- files [C++], translation
ms.assetid: a7f7a8c9-e8ba-4321-9e50-ebfbbdcce9db
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 22d73156d4f03a32bd9aa382dd0cc610f8a5f03f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="phases-of-translation"></a>Fasi di conversione
I programmi in C e C++ sono costituiti da uno o più file di origine, ciascuno contenente parte del testo del programma. Un file di origine, insieme ai relativi file di inclusione (file che vengono inclusi utilizzando la direttiva per il preprocessore `#include`) e ad esclusione delle sezioni di codice rimosse dalle direttive di compilazione condizionale, come `#if`, viene chiamato "unità di conversione."  
  
 I file di origine possono essere convertiti in momenti diversi. È pratica comune, infatti, convertire solo i file obsoleti. Le unità di conversione convertite possono essere elaborate in distinti file oggetto o in librerie di codice oggetto. Tali distinte unità di conversione convertite vengono, in seguito, collegate, in modo da formare un programma eseguibile o una libreria di collegamento dinamico (DLL).  Per ulteriori informazioni sui file che può essere utilizzato come input per il linker, vedere [file di Input di collegamento](../build/reference/link-input-files.md).  
  
 Le unità di conversione possono comunicare utilizzando:  
  
-   Chiamate alle funzioni con collegamento esterno.  
  
-   Chiamate alle funzioni membri di classe che hanno un collegamento esterno.  
  
-   Modifica diretta degli oggetti che hanno un collegamento esterno.  
  
-   Modifica diretta dei file.  
  
-   Comunicazione interprocesso (solo con le applicazioni basate su Microsoft Windows).  
  
 Nell'elenco seguente vengono descritti i passaggi ai quali il compilatore si attiene per converte i file:  
  
 *Mapping dei caratteri*  
 I caratteri presenti nel file di origine vengono mappati alla rappresentazione interna di origine. Durante questa fase, le sequenze di trigramma vengono convertite in una rappresentazione interna a un solo carattere.  
  
 *Splicing riga*  
 Tutte le righe che terminano con una barra rovesciata (**\\**) e seguito immediatamente da un carattere di nuova riga vengono unite carattere con la riga successiva nel file di origine che costituiscono le righe logiche dalle righe fisiche. A meno che non sia vuoto, un file di origine deve terminare con un carattere di nuova riga non preceduto da una barra rovesciata.  
  
 *Suddivisione in token*  
 Il file di origine viene suddiviso in spazi vuoti e token di pre-elaborazione. I commenti presenti nel file di origine vengono sostituiti ognuno con uno spazio. I caratteri di nuova riga vengono mantenuti.  
  
 *Pre-elaborazione*  
 Le direttive di pre-elaborazione vengono eseguite e le macro vengono espanse nel file di origine. L'istruzione `#include` richiama la conversione a partire dai precedenti tre passaggi di conversione in ogni testo incluso.  
  
 *Mapping di set di caratteri*  
 Tutti i membri del set di caratteri e le sequenze di escape vengono convertite negli relativi equivalenti del set di caratteri di esecuzione. Per Microsoft C e C++, i set di caratteri di esecuzione e di origine sono entrambi ASCII.  
  
 *Concatenazione di stringhe*  
 Tutti i valori letterali stringa adiacenti e a caratteri "wide" vengono concatenati. `"String " "concatenation"`, ad esempio, diventa `"String concatenation"`.  
  
 *Conversione*  
 Tutti i token vengono analizzati sintatticamente e semanticamente; gli stessi token vengono poi convertiti in codice oggetto.  
  
 *Collegamento*  
 Tutti i riferimenti esterni vengono risolti per creare un programma eseguibile o una libreria di collegamento dinamico.  
  
 Il compilatore genera avvisi o errori durante le fasi di conversione in cui rileva errori di sintassi.  
  
 Il linker risolve tutti i riferimenti esterni e crea un programma eseguibile o una DLL, combinando una o più unità di conversione elaborate separatamente con le librerie standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Preprocessore](../preprocessor/preprocessor.md)