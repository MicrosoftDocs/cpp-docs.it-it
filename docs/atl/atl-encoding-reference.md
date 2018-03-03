---
title: Riferimenti alla codifica ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- encoding
- encoding, functions
ms.assetid: 82d4fdf3-3c4a-4fe2-b297-8ffb4714406f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b2a97809fefdc0a5e6e7d90e7b62bbee83f28bfb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-encoding-reference"></a>Riferimenti alla codifica ATL
Codifica in un intervallo di comuni standard di Internet, ad esempio uuencode, esadecimale e UTF8 è supportata per il codice presente in atlenc. h.  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[AtlGetHexValue](reference/atl-text-encoding-functions.md#atlgethexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.|  
|[AtlHexDecode](reference/atl-text-encoding-functions.md#atlhexdecode)|Decodifica una stringa di dati che codificati come testo esadecimale, ad esempio da una precedente chiamata a [AtlHexEncode](reference/atl-text-encoding-functions.md#atlhexencode).|  
|[AtlHexDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#atlhexdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata.|  
|[AtlHexEncode](reference/atl-text-encoding-functions.md#atlhexencode)|Chiamare questa funzione per codificare dei dati come stringa di testo esadecimale.|  
|[AtlHexEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#atlhexencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|  
|[AtlUnicodeToUTF8](reference/atl-text-encoding-functions.md#atlunicodetoutf8)|Chiamare questa funzione per convertire una stringa Unicode in UTF-8.|  
|[BEncode](reference/atl-text-encoding-functions.md#bencode)|Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "B".|  
|[BEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#bencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|  
|[EscapeXML](reference/atl-text-encoding-functions.md#escapexml)|Chiamare questa funzione per convertire i caratteri non sicuri per l'utilizzo in XML nei relativi equivalenti specifici.|  
|[GetExtendedChars](reference/atl-text-encoding-functions.md#getextendedchars)|Chiamare questa funzione per ottenere il numero di caratteri estesi in una stringa.|  
|[IsExtendedChar](reference/atl-text-encoding-functions.md#isextendedchar)|Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una scheda, un avanzamento riga o un ritorno a capo)|  
|[QEncode](reference/atl-text-encoding-functions.md#qencode)|Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "Q".|  
|[QEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#qencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|  
|[QPDecode](reference/atl-text-encoding-functions.md#qpdecode)|Decodifica una stringa di dati che sono stati codificati in formato stampabile tra virgolette, ad esempio da una precedente chiamata a [QPEncode](reference/atl-text-encoding-functions.md#qpencode).|  
|[QPDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#qpdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.|  
|[QPEncode](reference/atl-text-encoding-functions.md#qpencode)|Chiamare questa funzione per codificare alcuni dati nel formato stampabile tra virgolette.|  
|[QPEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#qpencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|  
|[UUDecode](reference/atl-text-encoding-functions.md#uudecode)|Decodifica una stringa di dati che sono stata convertita in UUEncode, ad esempio da una precedente chiamata a [UUEncode](reference/atl-text-encoding-functions.md#uuencode).|  
|[UUDecodeGetRequiredLength](reference/atl-text-encoding-functions.md#uudecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata.|  
|[UUEncode](reference/atl-text-encoding-functions.md#uuencode)|Chiamare questa funzione per convertire i dati in uuencode.|  
|[UUEncodeGetRequiredLength](reference/atl-text-encoding-functions.md#uuencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Componenti Desktop COM ATL](../atl/atl-com-desktop-components.md)

