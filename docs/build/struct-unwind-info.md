---
title: struct UNWIND_INFO
ms.date: 11/04/2016
ms.assetid: f0aee906-a1b9-44cc-a8ad-463637bd5411
ms.openlocfilehash: 0130d30c314a7736ffaf24753a2e6fdf9ad55b12
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50517039"
---
# <a name="struct-unwindinfo"></a>struct UNWIND_INFO

La struttura di informazioni sulla rimozione dei dati viene usata per registrare gli effetti di una funzione nel puntatore dello stack e in cui vengono salvati i registri non volatili sullo stack:

|||
|-|-|
|UBYTE: 3|Versione|
|UBYTE: 5|Flag|
|UBYTE|Dimensione del prologo della query|
|UBYTE|Numero di codici di rimozione|
|UBYTE: 4|Registra fotogramma|
|UBYTE: 4|Offset del Registro di frame (scala)|
|USHORT \* n|Matrice di codici di rimozione|
|variabile|Può essere del form (1) o (2) di seguito|

(1) gestore di eccezioni

|||
|-|-|
|ULONG|Indirizzo del gestore di eccezioni|
|variabile|Dati del gestore specifico del linguaggio (facoltativo)|

(2) concatenate Unwind_info

|||
|-|-|
|ULONG|Indirizzo iniziale (funzione)|
|ULONG|Indirizzo finale (funzione)|
|ULONG|Indirizzo di UNWIND_INFO|

La struttura UNWIND_INFO deve essere allineata DWORD in memoria. Come indicato di seguito è riportato il significato di ogni campo:

- **Version**

   Numero di versione dei dati di rimozione, attualmente 1.

- **flag**

   Attualmente sono definiti tre flag:

   |Flag|Descrizione|
   |-|-|
   |`UNW_FLAG_EHANDLER`| La funzione ha un gestore di eccezioni che deve essere chiamato durante la ricerca per le funzioni che devono esaminare le eccezioni.|
   |`UNW_FLAG_UHANDLER`| La funzione ha un gestore di terminazione che deve essere chiamato durante la rimozione di un'eccezione.|
   |`UNW_FLAG_CHAININFO`| Ciò UNWIND_INFO struttura non corrisponde a quello primario per la procedura. Al contrario, concatenati UNWIND_INFO voce è il contenuto di una voce RUNTIME_FUNCTION precedente. Vedere il testo seguente per una spiegazione delle concatenate strutture UNWIND_INFO. Se questo flag è impostato, i flag UNW_FLAG_EHANDLER e UNW_FLAG_UHANDLER devono essere cancellati. Inoltre, i campi di allocazione register e fissa dello stack frame devono avere gli stessi valori come il database primario UNWIND_INFO.|

- **Dimensione del prologo della query**

   Lunghezza del prologo della funzione in byte.

- **Numero di codici di rimozione**

   Questo è il numero di slot nella matrice di codici di rimozione. Nota che alcuni codici (ad esempio, UWOP_SAVE_NONVOL) di rimozione richiede più di uno slot della matrice.

- **Registra fotogramma**

   Se diverso da zero, la funzione Usa quindi un puntatore ai frame e questo campo è il numero di registro non volatile usato come puntatore ai frame, usando la stessa codifica per il campo di informazioni sul funzionamento dei nodi UNWIND_CODE.

- **Frame registrare offset (scala)**

   Se il campo frame register è diverso da zero, questo è l'offset in scala da RSP che viene applicato a di reg FP quando viene eseguita. L'effettivo reg FP è impostato su 16 + RSP \* questo numero, consentendo di offset da 0 a 240. Ciò consente di puntare al reg FP al centro dell'allocazione dello stack locali per i frame dello stack dinamico, consentendo una migliore densità di codice tramite le istruzioni più breve (più istruzioni possono utilizzare il formato di offset con segno a 8 bit).

- **Matrice di codici di rimozione**

   Si tratta di una matrice di elementi che descrive gli effetti del prologo sui registri non volatili e RSP. Vedere la sezione relativa alla struttura UNWIND_CODE per il significato dei singoli elementi. Ai fini dell'allineamento, questa matrice avranno sempre un numero pari di voci, in cui la voce finale potenzialmente inutilizzata (nel qual caso la matrice sarà una lunghezza superiore a quello indicato dal numero di campi di codici di rimozione).

- **Indirizzo del gestore di eccezioni**

   Si tratta di un puntatore relativo dell'immagine al gestore di eccezioni specifiche del linguaggio/interruzione della funzione (se il flag UNW_FLAG_CHAININFO sia chiaro e uno dei flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER è impostato).

- **Dati del gestore specifico del linguaggio**

   Si tratta di dati del gestore di eccezioni specifiche del linguaggio della funzione. Il formato dei dati è specificato e determinare completamente dal gestore di eccezioni specifiche in uso.

- **Concatenate Unwind_info**

   Se è impostato il flag UNW_FLAG_CHAININFO la struttura UNWIND_INFO termina con tre che.  Che rappresentano le informazioni di RUNTIME_FUNCTION per la funzione della struttura UNWIND_INFO.

## <a name="see-also"></a>Vedere anche

[Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)