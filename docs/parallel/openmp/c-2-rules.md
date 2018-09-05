---
title: C.2 regole | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 4d52fef7-3eb7-4480-a335-8ed48681092b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bb83b35a03608e272e9af67159b61e5dbf4e1ec6
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43755021"
---
# <a name="c2-rules"></a>C.2 Regole
La notazione è descritto nella sezione 6.1 dello standard C. In questa appendice grammatica illustra le estensioni per la grammatica del linguaggio di base per le direttive OpenMP C e C++.

**/\* in C++ (ISO/IEC 14882:1998) \*/**

*istruzione-seq*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttive OpenMP*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione seq-istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione-seq (direttiva openmp-)*

**/\* in C90 (ISO/IEC 9899:1990) \*/**

*statement-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttive OpenMP*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione-list-istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elenco di istruzioni direttive openmp*

**/\* in C99 (ISO/IEC 9899:1999) \*/**

*elemento di blocco*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttive OpenMP*

**/\* istruzioni standard \*/**

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto di OpenMP*

*costrutto di OpenMP*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallelo-costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*per un costruttore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto di sezioni*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*singolo costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallelo-per-costrutto*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto di sezioni parallele*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto master*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto critical*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto Atomic*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costrutto ordinato*

*direttive OpenMP*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttive Barrier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*lo scaricamento-direttiva*

*blocco strutturato*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Istruzione*

*parallelo-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parallelo-direttiva blocco strutturato*

*parallelo-direttiva*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp parallel** *parallelo-clausola*<sub>optseq</sub> *nuova riga*

*parallelo-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-parallelo-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Data-clausola*

*Unique-parallelo-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Se (** *espressione* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**num_threads (** *espressione* **)**

*per un costruttore*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione di iterazione per la direttiva*

*per la direttiva*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp per** *clausola for*<sub>optseq</sub> *nuova riga*

*clausola for*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*univoco per la clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Data-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NOWAIT**

*univoco per la clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Ordinati**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**pianificazione (** *tipo di pianificazione* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**pianificazione (** *tipo di pianificazione* **,** *espressione* **)**

*tipo di pianificazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Statica**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Dinamica**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PGO**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Fase di esecuzione**

*costrutto di sezioni*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezione direttive sezioni dell'ambito*

*sezioni-direttiva*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**le sezioni di # pragma omp** *sezioni-clausola*<sub>optseq</sub> *nuova riga*

*sezioni-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Data-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NOWAIT**

*sezione ambito*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*{sezione-sequence}*

*sequenza di sezione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttiva Section*<sub>opt</sub> *blocco strutturato*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sezione-sequence-direttiva di sezione strutturato blocco*

*direttiva di sezione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp section** *nuova riga*

*singolo costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*strutturato blocco singolo-direttiva*

*Single-direttiva*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp single** *sola clausola*<sub>optseq</sub> *nuova riga*

*sola clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Data-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NOWAIT**

*parallelo-per-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione di iterazione parallelo-per-direttiva*

*parallelo-per-directive*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp parallel per** *clausola for parallelo*<sub>optseq</sub> *nuova riga*

*clausola for parallelo*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-parallelo-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*univoco per la clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Data-clausola*

*costrutto di sezioni parallele*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*ambito sezione direttive di sezioni parallele*

*direttiva di sezioni parallele*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**sezioni parallele di # pragma omp** *parallelo-sezioni-clausola*<sub>optseq</sub> *nuova riga*

*parallelo-sezioni-clausola*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Unique-parallelo-clausola*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Data-clausola*

*master-costrutto*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*struttura blocchi di master (direttiva)*

*master (direttiva)*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**master di # pragma omp** *nuova riga*

*costrutto critical*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttiva critical blocco strutturato*

*direttiva critical*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp critici** *area frase*<sub>opt</sub> *nuova riga*

*area-frase*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*(identificatore)*

*direttive Barrier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**barriera di # pragma omp** *nuova riga*

*costrutto atomic*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione di espressione Atomic (direttiva)*

*direttiva atomic*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp atomic** *nuova riga*

*direttiva Flush*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**scaricamento di # pragma omp** *flush var*<sub>opt</sub> *nuova riga*

*lo scaricamento var*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*(elenco di variabile)*

*costrutto ordinato*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttive ordinati blocco strutturato*

*direttiva ordinati*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp ordinati** *nuova riga*

**/\* dichiarazioni standard \*/**

*dichiarazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direttiva threadprivate*

*direttiva threadprivate*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**# pragma omp threadprivate (** *variabile-list***)** *nuova riga* 

*clausola data*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**private (** *variabile-list* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**copyprivate (***variabile-list***)** <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**firstprivate (***variabile-list***)** <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**lastprivate (** *variabile-list***)** <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**condiviso (** *variabile-list* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**predefinito (condiviso)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**predefinito (nessuno)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**Reduction (***operatore di riduzione***:***elenco variabili***)** <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**copyin (***variabile-list***)** 

*operatore di riduzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Uno dei:  **+  \* -& ^ &#124; & &&#124;&#124;**

**/\* in C \*/**

*elenco variabile*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*variabile-list* **,** *identificatore*

**/\* in C++ \*/**

*elenco variabile*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*ID-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*variabile-list* **,** *id-expression*