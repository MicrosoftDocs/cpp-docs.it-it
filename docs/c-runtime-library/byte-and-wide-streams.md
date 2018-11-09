---
title: Flussi di byte e "wide"
ms.date: 11/04/2016
f1_keywords:
- Byte and Wide Streams
helpviewer_keywords:
- byte streams
- wide streams
ms.assetid: 61ef0587-4cbc-4eb8-aae5-4c298dbbc6f9
ms.openlocfilehash: bb14cbd5caed413425810bfe017e068f4b4b4257
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590428"
---
# <a name="byte-and-wide-streams"></a>Flussi di byte e "wide"

Un flusso di byte considera un file come una sequenza di byte. All'interno del programma il flusso è una sequenza di byte identici.

Per contro un flusso wide gestisce un file come sequenza di caratteri multibyte generici, che possono includere un'ampia gamma di regole di codifica. I file binari e di testo vengono comunque letti e scritti come illustrato in precedenza. All'interno del programma il flusso ha l'aspetto della sequenza di caratteri wide corrispondente. Le conversioni tra le due rappresentazioni si verificano all'interno della libreria C standard. In linea di principio le regole di conversione possono essere modificate da una chiamata a [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) che modifica `LC_CTYPE` della categoria. Ogni flusso wide determina le proprie regole di conversione quando si orienta su wide e mantiene queste regole anche se il tipo `LC_CTYPE` della categoria cambia in un secondo tempo.

Il posizionamento in un flusso wide ha le stesse limitazioni valide per un flusso di testo. È anche possibile che l'indicatore file-position si trovi a gestire una codifica dipendente dallo stato. In genere questa include sia un offset di byte nel flusso sia un oggetto di tipo `mbstate_t`. Di conseguenza l'unico modo affidabile per ottenere una posizione di file all'interno di un flusso di caratteri wide è la chiamata di [fgetpos](../c-runtime-library/reference/fgetpos.md) e l'unico modo affidabile per ripristinare una posizione ottenuta in questo modo è la chiamata di [fsetpos](../c-runtime-library/reference/fsetpos.md).

## <a name="see-also"></a>Vedere anche

[File e flussi](../c-runtime-library/files-and-streams.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)