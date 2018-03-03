---
title: C. 2 regole | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 4d52fef7-3eb7-4480-a335-8ed48681092b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e5efa8d0e7cf4118362b7695bafcd4710b4021f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c2-rules"></a>C.2 Regole
La notazione è descritta nella sezione 6.1 dello standard C. Questa appendice grammatica sono illustrate le estensioni per la grammatica del linguaggio di base per le direttive OpenMP C e C++.  
  
 **/\*in C++ (ISO/IEC 14882:1998)\*/**  
  
 *istruzione-seq*:  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione seq-istruzione*  
  
 *istruzione-seq (direttiva openmp-)*  
  
 **/\*in C90 (ISO/IEC 9899: 1990)\*/**  
  
 *statement-list*:  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *statement-list statement*  
  
 *elenco di istruzioni direttiva openmp*  
  
 **/\*in C99 (ISO/IEC 9899: 1999)\*/**  
  
 *elemento di blocco*:  
  
 *declaration*  
  
 *istruzione*  
  
 *direttiva OpenMP*  
  
 *istruzione*:  
  
 **/\*istruzioni standard\*/**  
  
 *costrutto di OpenMP*  
  
 *costrutto di OpenMP*:  
  
 *costrutto parallelo*  
  
 *per costrutto*  
  
 *costrutto di sezioni*  
  
 *singolo costrutto*  
  
 *parallelo-per-costrutto*  
  
 *costrutto di sezioni parallelo*  
  
 *master-construc*  
  
 *costrutto critical*  
  
 *costrutto Atomic*  
  
 *costrutto ordinato*  
  
 *direttiva OpenMP*:  
  
 *barriera-direttiva*  
  
 *direttiva Flush*  
  
 *blocco strutturato*:  
  
 *istruzione*  
  
 *parallelo costrutto*:  
  
 *parallelo direttiva blocco strutturato*  
  
 *parallelo direttiva*:  
  
 **# pragma omp parallel***parallelo clausola*optseq *nuova riga*   
  
 *parallelo-clausola*:  
  
 *univoco parallelo-clausola*  
  
 *clausola di dati*  
  
 *univoco parallelo-clausola*:  
  
 **Se (** *espressione* **)**  
  
 **num_threads (** *espressione* **)**  
  
 *per costrutto*:  
  
 *istruzione di iterazione per la direttiva*  
  
 *per la direttiva*:  
  
 **# pragma omp per** *clausola for*optseq *nuova riga*  
  
 *clausola for*:  
  
 *univoco per la clausola*  
  
 *clausola di dati*  
  
 **nowait**  
  
 *univoco per la clausola*:  
  
 **ordinati**  
  
 **pianificazione (** *-tipo di pianificazione* **)**  
  
 **pianificazione (** *-tipo di pianificazione* **,** *espressione* **)**  
  
 *tipo di pianificazione*:  
  
 **static**  
  
 **dynamic**  
  
 **PGO**  
  
 **Runtime**  
  
 *Nelle sezioni costrutto*:  
  
 *sezione ambito sezioni-direttiva*  
  
 *direttiva Sections*:  
  
 **Nelle sezioni di # pragma omp** *sezioni clausola*optseq *nuova riga*  
  
 *Nelle sezioni clausola*:  
  
 *clausola di dati*  
  
 **nowait**  
  
 *sezione ambito*:  
  
 *{sezione sequenza}*  
  
 *sezione sequenza*:  
  
 *direttiva di sezione*opt *blocco strutturato*  
  
 *direttiva di sezione sezione sequenza strutturato-blocco*  
  
 *direttiva di sezione*:  
  
 **# pragma omp section** *nuova riga*  
  
 *singolo costrutto*:  
  
 *singola direttiva blocco strutturato*  
  
 *singola direttiva*:  
  
 **# pragma omp singolo** *singola clausola*optseq *nuova riga*  
  
 *singola clausola*:  
  
 *clausola di dati*  
  
 **nowait**  
  
 *parallelo-per-costrutto*:  
  
 *istruzione di iterazione per parallelo-direttiva*  
  
 *parallelo-per-directive*:  
  
 **# pragma omp parallel per** *parallelo clausola for*optseq *nuova riga*  
  
 *clausola for parallelo*:  
  
 *univoco parallelo-clausola*  
  
 *univoco per la clausola*  
  
 *clausola di dati*  
  
 *costrutto di sezioni parallelo*:  
  
 *sezione ambito parallelo-sezioni-direttiva*  
  
 *parallelo-sezioni-directive*:  
  
 **Nelle sezioni di # pragma omp parallel** *parallelo-sezioni-clausola*optseq *nuova riga*  
  
 *parallelo-sezioni-clausola*:  
  
 *univoco parallelo-clausola*  
  
 *clausola di dati*  
  
 *master-costrutto*:  
  
 *direttiva master blocco strutturato*  
  
 *direttiva master*:  
  
 **master di # pragma omp** *nuova riga*  
  
 *costrutto critical*:  
  
 *strutturato blocco critico (direttiva)*  
  
 *direttiva critical*:  
  
 **# pragma omp critico** *area frase*opt *nuova riga*  
  
 *area-frase*:  
  
 *(identificatore)*  
  
 *barriera direttiva*:  
  
 **barriera di # pragma omp** *nuova riga*  
  
 *costrutto atomic*:  
  
 *istruzione di espressione Atomic (direttiva)*  
  
 *direttiva atomica*:  
  
 **# pragma omp atomic** *nuova riga*  
  
 *scaricamento direttiva*:  
  
 **# pragma omp scaricamento** *scaricamento var*opt *nuova riga*  
  
 *scaricamento var*:  
  
 *(elenco di variabili)*  
  
 *costrutto ordinato*:  
  
 *direttiva ordinati blocco strutturato*  
  
 *direttiva ordinati*:  
  
 **# pragma omp ordinati** *nuova riga*  
  
 *dichiarazione*:  
  
 **/\*dichiarazioni standard\*/**  
  
 *direttiva threadprivate*  
  
 *direttiva threadprivate*:  
  
 **# pragma omp threadprivate (** *elenco variabili***)** *nuova riga*   
  
 *clausola data*:  
  
 **private (** *elenco variabili* **)**  
  
 **copyprivate (***elenco variabili***)**   
  
 **firstprivate (***elenco variabili***)**   
  
 **lastprivate (** *elenco variabili***)**   
  
 **condiviso (** *elenco variabili* **)**  
  
 **predefinito (condiviso)**  
  
 **predefinito (nessuno)**  
  
 **riduzione (***operatore di riduzione***:***elenco variabili***)**   
  
 **copyin (***elenco variabili***)**   
  
 *operatore di riduzione*:  
  
 *Uno dei*:  **+  \* -& ^ &#124; & & &#124; &#124;**  
  
 **/\*in C\*/**  
  
 *elenco di variabili*:  
  
 *identifier*  
  
 *elenco di variabili* **,** *identificatore*  
  
 **/\*in C++\*/**  
  
 *elenco di variabili*:  
  
 *ID-expression*  
  
 *elenco di variabili* **,** *id espressione*