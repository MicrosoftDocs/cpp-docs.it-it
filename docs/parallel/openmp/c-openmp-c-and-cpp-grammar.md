---
description: 'Ulteriori informazioni su: C. OpenMP C e C++ grammatica'
title: C. Grammatica OpenMP C e C++
ms.date: 01/16/2019
ms.assetid: 97a878ce-1533-47f7-a134-66fcbff48524
ms.openlocfilehash: 9543d721afbff1069b5497ba8dc7092089a1b706
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342504"
---
# <a name="c-openmp-c-and-c-grammar"></a>C. Grammatica OpenMP C e C++

[C.1 Notazione](#c1-notation)<br/>
[C.2 Regole](#c2-rules)

## <a name="c1-notation"></a>C.1 Notazione

Le regole di grammatica sono costituite dal nome di un non terminale, seguito da due punti, seguito da alternative di sostituzione su righe separate.

Il termine di espressione<sub>sintattica indica che il termine è</sub> facoltativo all'interno della sostituzione.

Il *termine* di espressione sintattico <sub>optseq</sub> equivale a *termini-Seq*<sub>opt</sub> con le regole aggiuntive seguenti:

*termine-Seq*:  
&nbsp;&nbsp;&nbsp;&nbsp;*termine*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;termine *-* *termine* Seq<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*termine-Seq* `,` *termine*   

## <a name="c2-rules"></a>C.2 Regole

La notazione è descritta nella sezione 6,1 dello standard C. Questa appendice della grammatica Mostra le estensioni della grammatica del linguaggio di base per le direttive OpenMP C e C++.

**/\* in C++ (ISO/IEC 14882:1998) \*/**

*istruzione-Seq*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*OpenMP-Directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Statement-istruzione Seq*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione-Seq OpenMP-Directive*

**/\* in C90 (ISO/IEC 9899:1990) \*/**

*statement-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*OpenMP-Directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Statement-list-istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione-list OpenMP-Directive*

**/\* in C99 (ISO/IEC 9899:1999) \*/**

*block-item*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*OpenMP-Directive*

**/\* istruzioni standard \*/**

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*OpenMP-costrutto*

*OpenMP-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto parallelo*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*per costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezioni-costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto singolo*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Parallel-for-costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Parallel-sections-costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto Master*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*-costrutto critico*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto atomico*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto ordinato*

*OpenMP-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Barrier-Directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*flush-direttiva*

*blocco strutturato*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*

*costrutto parallelo*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*blocco strutturato-direttiva parallela*

*Parallel-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp parallel`*Parallel-clause*<sub>optseq</sub> *New-Line*

*clausola Parallel*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-Parallel-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clausola*

*Unique-Parallel-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `if (`*espressione*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `num_threads (`*espressione*   `)`

*per il costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione di iterazione for-Directive*

*per-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp for`*clausola for-*<sub>optseq</sub> *New-Line*

*clausola for*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-for-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `nowait`

*Unique-for-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `ordered`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `schedule (`*tipo di pianificazione*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `schedule (`*tipo* `,` di pianificazione *espressione*      `)`

*tipo di pianificazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `static`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `dynamic`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `guided`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `runtime`

*sezioni-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezioni-sezione direttiva-ambito*

*sections-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp sections`*sections-clausola*<sub>optseq</sub> *New-Line*

*sections-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `nowait`

*sezione-ambito*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*{Section-Sequence}*

*sequenza di sezioni*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezione-*<sub></sub> *blocco strutturato* opt-Directive<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezione di sequenza della sezione-blocco strutturato della direttiva*

*Section-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp section`*nuova riga*

*costrutto singolo*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*blocco strutturato a direttiva singola*

*Single-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp single`<sub></sub> *nuova riga optseq a* *singola clausola*

*singola clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `nowait`

*parallel-for-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione di iterazione parallela per la direttiva*

*parallel-for-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp parallel for`<sub>optseq</sub> *New-Line* *parallel-for-clause*

*parallel-for-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-Parallel-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-for-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clausola*

*Parallel-sections-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezione Parallel-sections-Directive-scope*

*Parallel-sections-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp parallel sections`*Parallel-sections-clause*<sub>optseq</sub> *New-Line*

*Parallel-sections-clause*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-Parallel-clause*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*data-clausola*

*costrutto Master*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*blocco strutturato Master-Directive*

*Master-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp master`*nuova riga*

*costrutto critico*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*critico-struttura di direttiva-blocco*

*Critical-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp critical`*nuova riga* - *frase*<sub>opt</sub>

*regione-frase*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*

*Barrier-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp barrier`*nuova riga*

*costrutto atomico*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione Atomic-Directive-Statement*

*Atomic-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp atomic`*nuova riga*

*Flush-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp flush`*Scarica-var*<sub>opt</sub> - *nuova riga*

*Scarica-var*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*(variabile-list)*

*costrutto ordinato*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*blocco strutturato-Directive ordinato*

*ordered-Directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp ordered`*nuova riga*

**/\* dichiarazioni standard \*/**

*dichiarazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*threadprivate-direttiva*

*threadprivate-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `# pragma omp threadprivate (`*elenco* `)` di variabili *nuova riga*    

*data-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `private (`*elenco di variabili*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `copyprivate (`  *elenco di variabili*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `firstprivate (`  *elenco di variabili*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `lastprivate (`*elenco di variabili*    `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `shared (`*elenco di variabili*   `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `default ( shared )`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `default ( none )`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `reduction (`  *operatore* `:` di riduzione *elenco di variabili*          `)`<br/>
&nbsp;&nbsp;&nbsp;&nbsp;  `copyin (`  *elenco di variabili*    `)`

*operatore di riduzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Uno dei seguenti:   `+ \* - & ^ | && ||`

**/\* in C \*/**

*elenco di variabili*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco* `,` di variabili *identificatore* di   

**/\* in C++ \*/**

*elenco di variabili*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione ID*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco* `,` di variabili *espressione ID*   
