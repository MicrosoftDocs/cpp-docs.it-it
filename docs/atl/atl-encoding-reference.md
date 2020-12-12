---
description: 'Altre informazioni su: riferimenti alla codifica ATL'
title: Riferimenti alla codifica ATL
ms.date: 11/04/2016
helpviewer_keywords:
- encoding
- encoding, functions
ms.assetid: 82d4fdf3-3c4a-4fe2-b297-8ffb4714406f
ms.openlocfilehash: 309c4cbf695b5f40e58116c9422f8da481799cbc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148668"
---
# <a name="atl-encoding-reference"></a>Riferimenti alla codifica ATL

La codifica in un intervallo di standard Internet comuni come UUENCODE, esadecimale e UTF8 è supportata dal codice disponibile in *`atlenc.h`* .

### <a name="functions"></a>Funzioni

| Funzione | Caso d'uso |
|--|--|
| [AtlGetHexValue](reference/atl-text-encoding-functions.md#atlgethexvalue) | Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale. |
| [AtlHexDecode](reference/atl-text-encoding-functions.md#atlhexdecode) | Decodifica una stringa di dati codificata come testo esadecimale, ad esempio da una precedente chiamata a [AtlHexEncode](reference/atl-text-encoding-functions.md#atlhexencode). |
| [AtlHexDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#atlhexdecodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata. |
| [AtlHexEncode](reference/atl-text-encoding-functions.md#atlhexencode) | Chiamare questa funzione per codificare dei dati come stringa di testo esadecimale. |
| [AtlHexEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#atlhexencodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata. |
| [AtlUnicodeToUTF8](reference/atl-text-encoding-functions.md#atlunicodetoutf8) | Chiamare questa funzione per convertire una stringa Unicode in UTF-8. |
| [BEncode](reference/atl-text-encoding-functions.md#bencode) | Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "B". |
| [BEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#bencodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata. |
| [EscapeXML](reference/atl-text-encoding-functions.md#escapexml) | Chiamare questa funzione per convertire i caratteri non sicuri per l'utilizzo in XML nei relativi equivalenti specifici. |
| [GetExtendedChars](reference/atl-text-encoding-functions.md#getextendedchars) | Chiamare questa funzione per ottenere il numero di caratteri estesi in una stringa. |
| [IsExtendedChar](reference/atl-text-encoding-functions.md#isextendedchar) | Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una tabulazione, un avanzamento riga o un ritorno a capo) |
| [QEncode](reference/atl-text-encoding-functions.md#qencode) | Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "Q". |
| [QEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#qencodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata. |
| [QPDecode](reference/atl-text-encoding-functions.md#qpdecode) | Decodifica una stringa di dati codificata in formato stampabile tra virgolette, ad esempio da una precedente chiamata a [QPEncode](reference/atl-text-encoding-functions.md#qpencode). |
| [QPDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#qpdecodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata. |
| [QPEncode](reference/atl-text-encoding-functions.md#qpencode) | Chiamare questa funzione per codificare alcuni dati nel formato stampabile tra virgolette. |
| [QPEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#qpencodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata. |
| [UUDecode](reference/atl-text-encoding-functions.md#uudecode) | Decodifica una stringa di dati UUencoded, ad esempio da una precedente chiamata a [uuencode](reference/atl-text-encoding-functions.md#uuencode). |
| [UUDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#uudecodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata. |
| [UUEncode](reference/atl-text-encoding-functions.md#uuencode) | Chiamare questa funzione per convertire i dati in uuencode. |
| [UUEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#uuencodegetrequiredlength) | Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata. |

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Componenti desktop COM ATL](../atl/atl-com-desktop-components.md)
