---
title: C. 2 regole | Documenti Microsoft
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
ms.openlocfilehash: a3bdf26435fdfeea2196b9ef281d656805f51bf2
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="c2-rules"></a>C.2 Regole
La notazione è descritta nella sezione 6.1 dello standard C. Questa appendice grammatica sono illustrate le estensioni per la grammatica del linguaggio di base per le direttive OpenMP C e C++.  
  
 **/\* in C++ (ISO/IEC 14882:1998) \*/**  
  
 *istruzione-seq*:  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione-seq istruzione*  
  
 *istruzione-seq (direttiva openmp-)*  
  
 **/\* in C90 (ISO/IEC 9899:1990) \*/**  
  
 *statement-list*:  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *statement-list statement*  
  
 *elenco di istruzioni (direttiva openmp-)*  
  
 **/\* in C99 (ISO/IEC 9899:1999) \*/**  
  
 *elemento di blocco*:  
  
 *declaration*  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione*:  
  
 **/\* istruzioni standard \*/**  
  
 *costrutto OpenMP*  
  
 *costrutto OpenMP*:  
  
 *costrutto parallelo*  
  
 *per un costruttore*  
  
 *costrutto di sezioni*  
  
 *costrutto Single*  
  
 *parallelo per costrutto*  
  
 *costrutto di sezioni parallelo*  
  
 *master-construc*  
  
 *costrutto critical*  
  
 *costrutto Atomic*  
  
 *costrutto ordinato*  
  
 *direttiva OpenMP*:  
  
 *direttiva Barrier*  
  
 *direttiva Flush*  
  
 *blocco strutturato*:  
  
 *istruzione*  
  
 *costrutto parallelo*:  
  
 *parallelo-directive blocco strutturato*  
  
 *parallelo-directive*:  
  
 **# pragma omp parallel***parallelo clausola*optseq *nuova riga*   
  
 *parallelo-clausola*:  
  
 *univoco parallelo-clausola*  
  
 *dati-clausola*  
  
 *clausola di parallelo univoco*:  
  
 **Se (** *espressione* **)**  
  
 **num_threads (** *espressione* **)**  
  
 *per costrutto*:  
  
 *istruzione di iterazione per la direttiva*  
  
 *per la direttiva*:  
  
 **# pragma omp per** *clausola for*optseq *nuova riga*  
  
 *clausola for*:  
  
 *univoco per la clausola*  
  
 *dati-clausola*  
  
 **nowait**  
  
 *univoco per la clausola*:  
  
 **ordered**  
  
 **pianificazione (** *tipo di pianificazione* **)**  
  
 **pianificazione (** *tipo di pianificazione* **,** *espressione* **)**  
  
 *tipo di pianificazione*:  
  
 **static**  
  
 **dynamic**  
  
 **PGO**  
  
 **Runtime**  
  
 *Nelle sezioni costrutto*:  
  
 *ambito di sezione sezioni-direttiva*  
  
 *direttiva Sections*:  
  
 **Nelle sezioni di # pragma omp** *sezioni clausola*optseq *nuova riga*  
  
 *Nelle sezioni clausola*:  
  
 *dati-clausola*  
  
 **nowait**  
  
 *sezione ambito*:  
  
 *{sezione-sequenza}*  
  
 *sequenza di sezione*:  
  
 *direttiva di sezione*opt *blocco strutturato*  
  
 *direttiva di sezione sezione sequenza strutturato-blocco*  
  
 *direttiva di sezione*:  
  
 **# pragma omp section** *nuova riga*  
  
 *singolo costrutto*:  
  
 *direttiva singolo blocco strutturato*  
  
 *singola direttiva*:  
  
 **# pragma omp single** *singola clausola*optseq *nuova riga*  
  
 *singola clausola*:  
  
 *dati-clausola*  
  
 **nowait**  
  
 *parallelo per costrutto*:  
  
 *istruzione di iterazione per parallelo-direttiva*  
  
 *parallelo-per-directive*:  
  
 **# pragma omp parallel per** *parallelo per clausola*optseq *nuova riga*  
  
 *clausola for parallelo*:  
  
 *univoco parallelo-clausola*  
  
 *univoco per la clausola*  
  
 *dati-clausola*  
  
 *costrutto di sezioni parallelo*:  
  
 *ambito di sezione parallelo-sezioni-direttiva*  
  
 *parallelo-sezioni-directive*:  
  
 **Nelle sezioni di # pragma omp parallel** *parallelo-sezioni-clausola*optseq *nuova riga*  
  
 *parallelo-sezioni-clausola*:  
  
 *univoco parallelo-clausola*  
  
 *dati-clausola*  
  
 *costrutto master*:  
  
 *master-directive blocco strutturato*  
  
 *master-directive*:  
  
 **master di # pragma omp** *nuova riga*  
  
 *costrutto critical*:  
  
 *strutturato blocco critico (direttiva)*  
  
 *direttiva critical*:  
  
 **# pragma omp critico** *area frase*opt *nuova riga*  
  
 *area-frase*:  
  
 *(identificatore)*  
  
 *direttiva barriera*:  
  
 **barriera di # pragma omp** *nuova riga*  
  
 *costrutto atomic*:  
  
 *istruzione di espressione Atomic (direttiva)*  
  
 *direttiva atomica*:  
  
 **# pragma omp atomic** *nuova riga*  
  
 *direttiva Flush*:  
  
 **# pragma omp scaricamento** *var scaricamento*opt *nuova riga*  
  
 *scaricamento var*:  
  
 *(elenco di variabile)*  
  
 *costrutto ordinato*:  
  
 *direttiva ordinati blocco strutturato*  
  
 *direttiva ordinati*:  
  
 **# pragma omp ordinati** *nuova riga*  
  
 *dichiarazione*:  
  
 **/\* dichiarazioni standard \*/**  
  
 *direttiva threadprivate*  
  
 *direttiva threadprivate*:  
  
 **# pragma omp threadprivate (** *variabile-list***)** *nuova riga*   
  
 *clausola data*:  
  
 **private (** *variabile-list* **)**  
  
 **copyprivate (***variabile-list***)**   
  
 **firstprivate (***variabile-list***)**   
  
 **lastprivate (** *variabile-list***)**   
  
 **condiviso (** *variabile-list* **)**  
  
 **valore predefinito (condiviso)**  
  
 **valore predefinito (nessuno)**  
  
 **riduzione (***operatore di riduzione***:***elenco variabili***)**   
  
 **copyin (***variabile-list***)**   
  
 *operatore di riduzione*:  
  
 *Uno dei*:  **+  \* -& ^ &#124; & &&#124;&#124;**  
  
 **/\* in C \*/**  
  
 *elenco di variabili*:  
  
 *identifier*  
  
 *elenco di variabili* **,** *identificatore*  
  
 **/\* in C++ \*/**  
  
 *elenco di variabili*:  
  
 *ID-expression*  
  
 *elenco di variabili* **,** *id-expression*