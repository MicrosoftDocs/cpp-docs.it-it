---
title: "C.2 Regole | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4d52fef7-3eb7-4480-a335-8ed48681092b
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# C.2 Regole
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La notazione è descritto nella sezione 6.1 dello standard C. In questa appendice grammatica sono illustrate le estensioni per la grammatica del linguaggio di base per le direttive OpenMP C e C++.  
  
 **/\* in C++ (ISO/IEC 14882:1998) \*/**  
  
 *istruzione-seq*:  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione istruzione seq*  
  
 *istruzione-seq (direttiva openmp-)*  
  
 **/\* in C90 (ISO/IEC 9899: 1990) \*/**  
  
 *elenco di istruzioni*:  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione di elenco di istruzioni*  
  
 *elenco di istruzioni (direttiva openmp-)*  
  
 **/\* in C99 (ISO/IEC 9899:1999) \*/**  
  
 *elemento di blocco*:  
  
 *dichiarazione*  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione*:  
  
 **/\* istruzioni standard \*/**  
  
 *costrutto di OpenMP*  
  
 *costrutto di OpenMP*:  
  
 *costrutto parallelo*  
  
 *Per creare*  
  
 *costrutto di sezioni*  
  
 *costrutto Single*  
  
 *parallelo per costrutto*  
  
 *costrutto di sezioni parallele*  
  
 *master-construc*  
  
 *costrutto critical*  
  
 *costrutto Atomic*  
  
 *costrutto ordinato*  
  
 *direttiva OpenMP*:  
  
 *Barrier (direttiva)*  
  
 *direttiva Flush*  
  
 *blocco strutturato*:  
  
 *istruzione*  
  
 *costrutto parallelo*:  
  
 *direttiva parallelo strutturato-blocco*  
  
 *direttiva parallelo*:  
  
 **# pragma omp parallel**  *parallelo clausola*optseq *nuova riga*  
  
 *clausola parallelo*:  
  
 *univoco parallelo-clausola*  
  
 *dati-clausola*  
  
 *clausola univoco parallelo*:  
  
 **Se (** *espressione* **)**  
  
 **num_threads (** *espressione* **)**  
  
 *Per creare*:  
  
 *istruzione di iterazione per direttiva*  
  
 *per la direttiva*:  
  
 **# pragma omp per** *clausola for*optseq *nuova riga*  
  
 *clausola for*:  
  
 *univoco per la clausola*  
  
 *dati-clausola*  
  
 **NOWAIT**  
  
 *univoco per la clausola*:  
  
 **ordinati**  
  
 **pianificazione (** *tipo di pianificazione* **)**  
  
 **pianificazione (** *tipo di pianificazione* **,** *espressione* **)**  
  
 *tipo di pianificazione*:  
  
 **statico**  
  
 **dinamica**  
  
 **PGO**  
  
 **Runtime**  
  
 *Nelle sezioni costrutto*:  
  
 *sezione ambito Sections (direttiva)*  
  
 *Sections (direttiva)*:  
  
 **Nelle sezioni di # pragma omp** *sezioni clausola*optseq *nuova riga*  
  
 *clausola sezioni*:  
  
 *dati-clausola*  
  
 **NOWAIT**  
  
 *sezione ambito*:  
  
 *{sezione sequenza}*  
  
 *sezione sequenza*:  
  
 *sezione direttiva*opt *blocco strutturato*  
  
 *sezione direttiva sezione sequenza strutturato-blocco*  
  
 *sezione direttiva*:  
  
 **# pragma omp section** *nuova riga*  
  
 *singolo costrutto*:  
  
 *direttiva singolo blocco strutturato*  
  
 *singola direttiva*:  
  
 **# pragma omp singolo** *singola clausola*optseq *nuova riga*  
  
 *singola clausola*:  
  
 *dati-clausola*  
  
 **NOWAIT**  
  
 *parallelo per costrutto*:  
  
 *istruzione di iterazione parallelo per direttiva*  
  
 *parallelo per direttiva*:  
  
 **# pragma omp parallel per** *parallelo per clausola*optseq *nuova riga*  
  
 *clausola for parallelo*:  
  
 *univoco parallelo-clausola*  
  
 *univoco per la clausola*  
  
 *dati-clausola*  
  
 *costrutto di sezioni parallele*:  
  
 *sezione ambito parallelo-sezioni-direttiva*  
  
 *parallelo-sezioni-directive*:  
  
 **sezioni parallele # pragma omp** *parallelo-sezioni-clausola*optseq *nuova riga*  
  
 *clausola di sezioni parallele*:  
  
 *univoco parallelo-clausola*  
  
 *dati-clausola*  
  
 *costrutto master*:  
  
 *struttura blocchi master (direttiva)*  
  
 *master (direttiva)*:  
  
 **master di # pragma omp** *nuova riga*  
  
 *costrutto critical*:  
  
 *strutturato blocco critico (direttiva)*  
  
 *direttiva critical*:  
  
 **# pragma omp critico** *area frase*opt *nuova riga*  
  
 *area frase*:  
  
 *(identificatore)*  
  
 *direttiva barriera*:  
  
 **barriera di # pragma omp** *nuova riga*  
  
 *costrutto atomic*:  
  
 *istruzione di espressione Atomic (direttiva)*  
  
 *direttiva atomic*:  
  
 **# pragma omp atomic** *nuova riga*  
  
 *direttiva Flush*:  
  
 **# pragma omp scaricamento** *scaricamento var*opt *nuova riga*  
  
 *scaricamento var*:  
  
 *(elenco variabili)*  
  
 *costrutto ordinato*:  
  
 *direttiva ordinati strutturato-blocco*  
  
 *direttiva ordinati*:  
  
 **# pragma omp ordinati** *nuova riga*  
  
 *dichiarazione*:  
  
 **/\* dichiarazioni standard \*/**  
  
 *threadprivate (direttiva)*  
  
 *direttiva threadprivate*:  
  
 **# pragma omp threadprivate (** *elenco variabili*  **)** *nuova riga*  
  
 *clausola data*:  
  
 **private (** *elenco variabili* **)**  
  
 **copyprivate (**  *elenco variabili*  **)**  
  
 **firstprivate (**  *elenco variabili*  **)**  
  
 **lastprivate (** *elenco variabili*  **)**  
  
 **condiviso (** *elenco variabili* **)**  
  
 **valore predefinito (condiviso)**  
  
 **impostazione predefinita (nessuno)**  
  
 **riduzione (**  *operatore di riduzione*  **:**  *elenco variabili*  **)**  
  
 **copyin (**  *elenco variabili*  **)**  
  
 *operatore di riduzione*:  
  
 *Uno dei*: **+ \* -& ^ & #124; & & & #124; & #124;**  
  
 **/\* in C \*/**  
  
 *elenco di variabili*:  
  
 *Identificatore*  
  
 *elenco di variabili* **,** *identificatore*  
  
 **/\* in C++ \*/**  
  
 *elenco di variabili*:  
  
 *ID espressione*  
  
 *elenco di variabili* **,** *id espressione*