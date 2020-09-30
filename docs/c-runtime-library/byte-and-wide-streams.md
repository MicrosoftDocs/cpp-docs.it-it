---
title: Flussi di byte e "wide"
description: Panoramica dei flussi di byte nella libreria di runtime di Microsoft C.
ms.date: 11/04/2016
ms.topic: conceptual
f1_keywords:
- Byte and Wide Streams
helpviewer_keywords:
- byte streams
- wide streams
ms.assetid: 61ef0587-4cbc-4eb8-aae5-4c298dbbc6f9
ms.openlocfilehash: 38949206e65ff84836b9a3e83b78723adfe30582
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590277"
---
# <a name="byte-and-wide-streams"></a>Flussi di byte e "wide"

Un flusso di byte considera un file come una sequenza di byte. All'interno del programma il flusso è una sequenza di byte identici.

Per contro un flusso wide gestisce un file come sequenza di caratteri multibyte generici, che possono includere un'ampia gamma di regole di codifica. I file di testo e binari sono ancora letti e scritti come descritto in precedenza. All'interno del programma, il flusso è simile alla sequenza di caratteri wide corrispondente. Le conversioni tra le due rappresentazioni si verificano all'interno della libreria C standard. In linea di principio le regole di conversione possono essere modificate da una chiamata a [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) che modifica `LC_CTYPE` della categoria. Ogni flusso wide determina le proprie regole di conversione quando si orienta su wide e mantiene queste regole anche se il tipo `LC_CTYPE` della categoria cambia in un secondo tempo.

Il posizionamento in un flusso wide ha le stesse limitazioni valide per un flusso di testo. È anche possibile che l'indicatore file-position si trovi a gestire una codifica dipendente dallo stato. In genere questa include sia un offset di byte nel flusso sia un oggetto di tipo `mbstate_t`. Di conseguenza l'unico modo affidabile per ottenere una posizione di file all'interno di un flusso di caratteri wide è la chiamata di [fgetpos](../c-runtime-library/reference/fgetpos.md) e l'unico modo affidabile per ripristinare una posizione ottenuta in questo modo è la chiamata di [fsetpos](../c-runtime-library/reference/fsetpos.md).

## <a name="see-also"></a>Vedi anche

[File e flussi](../c-runtime-library/files-and-streams.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)
