---
title: 1.2 Definizione dei termini
ms.date: 11/04/2016
ms.assetid: fcaa8eb8-bbbf-4a24-ad0e-e299c442db79
ms.openlocfilehash: cd8bcc47a7fc9d1d0683c220ccd5ef1edac2b4e9
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51326030"
---
# <a name="12-definition-of-terms"></a>1.2 Definizione dei termini

In questo documento vengono usati i termini seguenti:

- barrier

   Un punto di sincronizzazione che deve essere raggiunto da tutti i thread in un team.  Ogni thread attende che tutti i thread del team di arrivano a questo punto. Sono disponibili le barriere esplicitare identificate da direttive e le barriere implicite create dall'implementazione.

- construct

   Un costrutto è un'istruzione. È costituito da una direttiva e il successivo blocco strutturato. Si noti che alcune direttive non fanno parte di un costrutto. (Vedere *direttive openmp* nelle [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)).

- direttiva

   Una C o C++ **#pragma** aggiungendo il **omp** identificatore, altro testo e una nuova riga. La direttiva specifica il comportamento del programma.

- extent dinamica

   Tutte le istruzioni di *lessicale extent*, oltre a qualsiasi istruzione all'interno di una funzione che viene eseguita come risultato l'esecuzione di istruzioni entro l'ambito lessicale. Un extent dinamico è detta anche un *regione*.

- ambito lessicale

   Istruzioni lessicalmente contenute all'interno di un *blocco strutturato*.

- thread master

   Il thread che crea un team quando una *area parallela* viene immesso.

- area parallela

   Istruzioni di che eseguire l'associazione a un costrutto parallelo OpenMP e possono essere eseguite da più thread.

- private

   Una variabile privata denomina un blocco di memoria che è univoco per il thread che effettua il riferimento. Si noti che esistono diversi modi per specificare che una variabile è privata: una definizione all'interno di un'area parallela, un **threadprivate** direttiva, un **privato**, **firstprivate**, **lastprivate**, o **riduzione** clausola o l'utilizzo della variabile, una **per**variabile di controllo del ciclo in un **per** ciclo immediatamente dopo una **per** oppure **parallele per** direttiva.

- area

   Un extent dinamico.

- area seriale

   Le istruzioni eseguite solo per il *master thread* di fuori l'ambito dinamico di qualsiasi *area parallela*.

- Serializzare

   Per eseguire un costrutto parallelo con un team di thread costituito da un solo thread (ovvero il thread principale per tale costrutto parallelo), con un ordine seriale di esecuzione per le istruzioni all'interno del blocco strutturato (lo stesso ordine come se il blocco non è stato in parte di un costrutto parallelo) e senza alcun effetto sul valore restituito da **omp_in_parallel()** (oltre gli effetti di qualsiasi costrutti paralleli annidati).

- shared

   Una variabile condivisa denomina un singolo blocco di archiviazione. Tutti i thread in un team che accedono a questa variabile accederà questo blocco singolo di archiviazione.

- blocco strutturato

   Un blocco strutturato è un'istruzione (singola o composta) con una singola voce e una singola chiusura. Istruzione non è un blocco strutturato se è presente un salto da e verso tale istruzione (tra cui una chiamata a **longjmp**(3c) o l'utilizzo di **throw**, ma una chiamata a **uscire** è consentito). Un'istruzione composta è un blocco strutturato se l'esecuzione sempre inizia in corrispondenza dell'apertura **{** e termina sempre con la chiusura **}**. Un'istruzione di espressione, l'istruzione di selezione, l'istruzione di iterazione, oppure **provare** blocco viene un blocco strutturato se l'istruzione composta corrispondente ottenuto includendolo nel **{** e **}**  sarebbe un blocco strutturato. Un'istruzione di salto, l'istruzione con etichetta o istruzione di dichiarazione non è un blocco strutturato.

- Team

   Uno o più thread cooperano l'esecuzione di un costrutto.

- thread

   Un'entità di esecuzione con un flusso di controllo seriale, un set di variabili private e l'accesso alle variabili condivise.

- variabile

   Un identificatore, essere qualificato facoltativamente con spazi dei nomi, che denomina un oggetto.
