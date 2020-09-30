---
title: Controllo dei flussi
description: Panoramica dell'utilizzo dei flussi nella libreria di runtime di Microsoft C.
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- Controlling Streams
helpviewer_keywords:
- streams, controlling
- controlling streams
- streams
ms.assetid: 267e9013-9afc-45f6-91e3-ca093230d9d9
ms.openlocfilehash: 0caa9eca7c960acbb581358c1a92afcc6a8af066
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589718"
---
# <a name="controlling-streams"></a>Controllo dei flussi

[fopen](../c-runtime-library/reference/fopen-wfopen.md) restituisce l'indirizzo di un oggetto di tipo `FILE`. Si utilizza questo indirizzo come l'argomento `stream` a diverse funzioni di libreria per eseguire varie operazioni in un file aperto. Per un flusso di byte, tutti gli input vengono eseguiti come se ogni carattere fosse letto chiamando [fgetc](../c-runtime-library/reference/fgetc-fgetwc.md) e tutti gli output vengono eseguiti come se ogni carattere fosse scritto chiamando [fputc](../c-runtime-library/reference/fputc-fputwc.md). Per un flusso di caratteri wide, tutti gli input vengono eseguiti come se ogni carattere fosse letto chiamando [fgetwc](../c-runtime-library/reference/fgetc-fgetwc.md) e tutti gli output vengono eseguiti come se ogni carattere fosse scritto chiamando [fputwc](../c-runtime-library/reference/fputc-fputwc.md).

È possibile chiudere un file chiamando [fclose](../c-runtime-library/reference/fclose-fcloseall.md). Dopo questa operazione l'indirizzo dell'oggetto `FILE` non sarà valido.

Un oggetto `FILE` memorizza lo stato di un flusso, tra cui:

- Un indicatore di errore impostato su un valore diverso da zero da una funzione che rileva un errore di lettura o di scrittura.

- Un indicatore di fine file impostato su un valore diverso da zero da una funzione che rileva la fine del file durante la lettura.

- Un indicatore di posizione del file specifica il byte successivo nel flusso da leggere o scrivere, se il file può supportare le richieste di posizionamento.

- Uno [stato del flusso](../c-runtime-library/stream-states.md) specifica se il flusso accetta letture e/o scritture e se il flusso è non associato, orientato ai byte o orientato ai caratteri wide.

- Uno stato di conversione mantiene lo stato di ogni carattere multibyte generalizzato parzialmente generato o assemblato, nonché ogni stato di spostamento per la sequenza di byte nel file).

- Un buffer di file specifica l'indirizzo e la dimensione di un oggetto matrice che le funzioni di libreria possono utilizzare per migliorare le prestazioni delle operazioni di lettura e scrittura nel flusso.

Non alterare nessun valore memorizzato in un oggetto `FILE` o in un buffer di file specificato per essere utilizzato con tale oggetto. Non è possibile copiare un oggetto `FILE` e utilizzare in modo portabile l'indirizzo della copia come un argomento `stream` a una funzione di libreria.

## <a name="see-also"></a>Vedi anche

[File e flussi](../c-runtime-library/files-and-streams.md)
