---
title: I/O a basso livello
ms.date: 11/04/2016
f1_keywords:
- c.io
helpviewer_keywords:
- I/O [CRT], low-level
- I/O [CRT], functions
- low-level I/O routines
- file handles [C++]
- file handles [C++], I/O functions
ms.assetid: 53e11bdd-6720-481c-8b2b-3a3a569ed534
ms.openlocfilehash: 7812656bdcb3f58866f91009b6ad3de9fd67cebe
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57740148"
---
# <a name="low-level-io"></a>I/O a basso livello

Queste funzioni richiamano direttamente il sistema operativo per operazioni di livello inferiore rispetto a quelle fornite dal flusso di I/O. Le chiamate di input e output di basso livello non vengono memorizzate nel buffer o non formattano dati.

Le routine di basso livello possono accedere ai flussi standard aperti all'avvio del programma utilizzando i seguenti descrittori di file predefiniti.

|Flusso|Descrittore del file|
|------------|---------------------|
|**stdin**|0|
|**stdout**|1|
|**stderr**|2|

Le routine di I/O a basso livello impostano la variabile globale [errno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) quando si verifica un errore. È necessario includere STDIO.H quando si usano funzioni di basso livello solo se il programma richiede una costante che sia definita in STDIO.H, come l'indicatore di fine file (**EOF**).

## <a name="low-level-io-functions"></a>Funzioni di I/O di basso livello

|Funzione|Usa|
|--------------|---------|
|[_close](../c-runtime-library/reference/close.md)|Chiudere il file|
|[_commit](../c-runtime-library/reference/commit.md)|Scaricare il file su disco|
|[_creat, _wcreat](../c-runtime-library/reference/creat-wcreat.md)|Creare file|
|[_dup](../c-runtime-library/reference/dup-dup2.md)|Restituire il descrittore del file successivo disponibile per il file specificato|
|[_dup2](../c-runtime-library/reference/dup-dup2.md)|Creare il secondo descrittore per il file specificato|
|[_eof](../c-runtime-library/reference/eof.md)|Test per la fine del file|
|[_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)|Riposizionare il puntatore del file nel percorso specificato|
|[_open, _wopen](../c-runtime-library/reference/open-wopen.md)|Aprire il file|
|[_read](../c-runtime-library/reference/read.md)|Leggere dati dal file|
|[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md), [_sopen_s, _wsopen_s](../c-runtime-library/reference/sopen-s-wsopen-s.md)|Aprire il file per la condivisione|
|[_tell, _telli64](../c-runtime-library/reference/tell-telli64.md)|Ottenere la posizione corrente del puntatore del file|
|[_umask](../c-runtime-library/reference/umask.md), [_umask_s](../c-runtime-library/reference/umask-s.md)|Impostare la maschera di autorizzazione del file|
|[_write](../c-runtime-library/reference/write.md)|Scrivere dati nel file|

**_dup** e **_dup2** in genere vengono usati per associare i descrittori del file predefiniti con diversi file.

## <a name="see-also"></a>Vedere anche

[Input e output](../c-runtime-library/input-and-output.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Chiamate di sistema](../c-runtime-library/system-calls.md)<br/>
