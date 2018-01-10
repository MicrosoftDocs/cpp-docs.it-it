---
title: struct UNWIND_INFO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: f0aee906-a1b9-44cc-a8ad-463637bd5411
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1effec5bc753f1b23f8d43a8406c61cb6663fa56
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="struct-unwindinfo"></a>struct UNWIND_INFO
La struttura di informazioni sulla rimozione dei dati viene utilizzata per registrare gli effetti di una funzione nel puntatore dello stack e in cui vengono salvati i registri non volatili nello stack:  
  
|||  
|-|-|  
|UBYTE: 3|Versione|  
|UBYTE: 5|Flag|  
|UBYTE|Dimensione del prologo|  
|UBYTE|Numero di codici di rimozione|  
|UBYTE: 4|Registrazione di frame|  
|UBYTE: 4|Offset del Registro di frame (scalata)|  
|USHORT * n|Matrice di codici di rimozione|  
|variabile|Può essere formato (1) o (2) seguito|  
  
 (1) gestore di eccezioni  
  
|||  
|-|-|  
|ULONG|Indirizzo del gestore di eccezioni|  
|variabile|Dati specifici della lingua gestore (facoltativi)|  
  
 (2) concatenate Unwind_info  
  
|||  
|-|-|  
|ULONG|Indirizzo iniziale (funzione)|  
|ULONG|Indirizzo finale (funzione)|  
|ULONG|Indirizzo di UNWIND_INFO|  
  
 La struttura UNWIND_INFO deve essere allineata DWORD in memoria. Il significato di ogni campo è il seguente:  
  
 **Version**  
 Numero di versione dei dati di rimozione, attualmente 1.  
  
 **Flag**  
 Tre flag attualmente definiti:  
  
 La funzione UNW_FLAG_EHANDLER ha un gestore di eccezioni che deve essere chiamato durante la ricerca per le funzioni che è necessario esaminare le eccezioni.  
  
 La funzione UNW_FLAG_UHANDLER dispone di un gestore di terminazione che deve essere chiamato quando la rimozione di un'eccezione.  
  
 UNW_FLAG_CHAININFO questo UNWIND_INFO struttura non è quello primario per la procedura. In alternativa, concatenati UNWIND_INFO voce è il contenuto di una voce RUNTIME_FUNCTION precedente. Il seguente testo per una spiegazione dei concatenate strutture UNWIND_INFO. Se questo flag è impostato, i flag UNW_FLAG_EHANDLER e UNW_FLAG_UHANDLER devono essere cancellati. Inoltre, i campi di allocazione register e fissa dello stack frame devono avere gli stessi valori del database primario UNWIND_INFO.  
  
 **Dimensione del prologo**  
 Lunghezza del prologo della funzione in byte.  
  
 **Numero di codici di rimozione**  
 Questo è il numero di slot nella matrice di codici di rimozione. Si noti che alcune (ad esempio UWOP_SAVE_NONVOL) i codici di rimozione richiedono più di uno slot nella matrice.  
  
 **Registrazione di frame**  
 Se diverso da zero, quindi la funzione utilizza un puntatore ai frame e questo campo è il numero di registro non volatile utilizzato come puntatore ai frame, utilizzando la stessa codifica per il campo di informazioni sul funzionamento dei nodi UNWIND_CODE.  
  
 **Frame registrare offset (scala)**  
 Se il campo frame register è diverso da zero, questo è l'offset scalato dal RSP che viene applicato a FP reg quando viene eseguita. Il registro FP effettivo è impostato su RSP + 16 * questo numero, consentendo di offset da 0 a 240. Questo permette di puntare FP reg nella parte centrale dell'allocazione dello stack locale per stack frame dinamici, consentendo una migliore densità di codice tramite l'utilizzo di istruzioni (più istruzioni possono utilizzare il formato di offset con segno a 8 bit).  
  
 **Matrice di codici di rimozione**  
 Si tratta di una matrice di elementi che descrive gli effetti del prologo su RSP e i registri non volatili. Vedere la sezione relativa alla struttura UNWIND_CODE per il significato dei singoli elementi. Per facilitare l'allineamento, questa matrice avrà sempre un numero pari di voci, con la voce finale potenzialmente inutilizzata (nel qual caso la matrice è una lunghezza superiore a quello indicato per il numero di campi di codici di rimozione).  
  
 **Indirizzo del gestore di eccezioni**  
 Si tratta di un puntatore relativo dell'immagine per il gestore di eccezioni specifiche della lingua/terminazione della funzione (se il flag UNW_FLAG_CHAININFO è chiaro e uno dei flag UNW_FLAG_EHANDLER o UNW_FLAG_UHANDLER è impostato).  
  
 **Dati del gestore specifico del linguaggio**  
 Si tratta di dati del gestore di eccezioni specifici del linguaggio della funzione. Il formato dei dati è specificato e completamente determinato dal gestore di eccezioni specifiche in uso.  
  
 **Concatenate Unwind_info**  
 Se è impostato il flag UNW_FLAG_CHAININFO la struttura UNWIND_INFO termina con tre che.  Che rappresentano le informazioni RUNTIME_FUNCTION per la funzione della struttura UNWIND_INFO.  
  
## <a name="see-also"></a>Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)