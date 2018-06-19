---
title: Costanti di accesso in lettura/scrittura file | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.constants.file
dev_langs:
- C++
helpviewer_keywords:
- read/write access constants
- write access constants
- access constants for file read/write
- constants [C++], file attributes
- file read/write access constants
ms.assetid: 56cd1d22-39a5-4fcf-bea2-7046d249e8ee
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f57ac6ffc3c13c640d7bdf6a2ec64912148bfbc3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32391142"
---
# <a name="file-readwrite-access-constants"></a>Costanti di accesso in lettura/scrittura file
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <stdio.h>  
```  
  
## <a name="remarks"></a>Note  
 Queste costanti specificano il tipo di accesso ("a", "r" o "w") richiesto per il file. Con il tipo di accesso è possibile specificare sia la [modalità di conversione](../c-runtime-library/file-translation-constants.md) ("b" o "t") che la [modalità di commit su disco](../c-runtime-library/commit-to-disk-constants.md) ("c" o "n").  
  
 I tipi di accesso sono descritti di seguito.  
  
 **"a"**  
 Viene aperto in scrittura alla fine del file (aggiunta); crea prima il file se non esiste. Tutte le operazioni di scrittura vengono eseguite alla fine del file. Benché il puntatore del file possa essere riposizionato usando `fseek` o **rewind**, viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura.  
  
 **"a+"**  
 Uguale al precedente, ma consente la lettura.  
  
 **"r"**  
 Viene aperto per la lettura. Se il file non esiste o non può essere trovato, la chiamata per aprire il file avrà esito negativo.  
  
 **"r+"**  
 Viene aperto per la lettura e la scrittura. Se il file non esiste o non può essere trovato, la chiamata per aprire il file avrà esito negativo.  
  
 **"w"**  
 Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 **"w+"**  
 Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 Quando il tipo di accesso "r+", "w+", o "a+" viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per "l'aggiornamento"). Quando tuttavia si passa da lettura a scrittura, devono essere presenti operazioni intermedie `fflush`, `fsetpos`, `fseek` o **rewind**. È possibile specificare la posizione corrente per l'operazione `fsetpos` o `fseek`.  
  
## <a name="see-also"></a>Vedere anche  
 [_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)   
 [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)