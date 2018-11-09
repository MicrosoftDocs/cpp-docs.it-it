---
title: Costanti di commit su disco
ms.date: 11/04/2016
f1_keywords:
- vc.constants
helpviewer_keywords:
- commit-to-disk constants
ms.assetid: 0b903b23-b4fa-431e-a937-51d95f695ecf
ms.openlocfilehash: f4da66c913cd8a046257158e837e5bdb20ed71c0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50581395"
---
# <a name="commit-to-disk-constants"></a>Costanti di commit su disco

**Sezione specifica Microsoft**

## <a name="syntax"></a>Sintassi

```
#include <stdio.h>
```

## <a name="remarks"></a>Note

Queste costanti specifiche di Microsoft indicano se il buffer associato al file aperto viene scaricato nei buffer del sistema operativo o sul disco. La modalità è inclusa nella stringa che specifica il tipo di accesso di lettura/scrittura (**"r"**, **"w"**, **"a"**, **"r+"**, **"w+"**, **"a+"**).

Le modalità di commit su disco sono le seguenti:

- **c**

   Scrive su disco il contenuto non scritto del buffer specificato. Questa funzionalità di commit su disco si verifica solo per chiamate esplicite della funzione [fflush](../c-runtime-library/reference/fflush.md) o della funzione [_flushall](../c-runtime-library/reference/flushall.md). Questa modalità è utile quando si lavora con dati sensibili. Se ad esempio il programma termina dopo una chiamata a `fflush` o `_flushall` è possibile essere certi che i dati abbiano raggiunto i buffer del sistema operativo. Tuttavia, a meno che un file non venga aperto con l'opzione **c**, i dati potrebbero non raggiungere mai il disco se anche l'esecuzione del sistema operativo viene terminata.

- **n**

   Scrive il contenuto non scritto del buffer specificato nei buffer del sistema operativo. Il sistema operativo può memorizzare i dati nella cache e quindi determinare il momento ottimale per la scrittura su disco. In molti casi questo comportamento determina un funzionamento efficiente dei programmi. Se tuttavia la conservazione dei dati (quali transazioni bancarie o dati di biglietti aerei) è della massima importanza, considerare l'uso dell'opzione **c**. La modalità **n** è quella predefinita.

> [!NOTE]
> Le opzioni**c** e **n**non fanno parte dello standard ANSI per `fopen` ma sono estensioni Microsoft e non devono essere usate quando è richiesta la portabilità ANSI.

## <a name="using-the-commit-to-disk-feature-with-existing-code"></a>Uso della funzionalità di commit su disco con il codice esistente

Per impostazione predefinita le chiamate delle funzioni della libreria [fflush](../c-runtime-library/reference/fflush.md) o [_flushall](../c-runtime-library/reference/flushall.md) scrivono dati nei buffer gestiti dal sistema operativo. Il sistema operativo determina il momento ottimale per la scrittura dei dati su disco. La funzionalità di commit su disco della libreria di runtime consente di garantire che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo. È possibile assegnare questa funzionalità a un programma esistente senza riscriverlo, collegando i file oggetto del programma a COMMODE.OBJ.

Nel file eseguibile risultante le chiamate a `fflush` scrivono il contenuto del buffer direttamente su disco e le chiamate a `_flushall` scrivono il contenuto di tutti i buffer su disco. Queste due funzioni sono le uniche sulle quali agisce COMMODE.OBJ.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../c-runtime-library/stream-i-o.md)<br/>
[_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)<br/>
[fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
