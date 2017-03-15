---
title: "Riferimenti alla codifica ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codifica"
  - "codifica, funzioni"
ms.assetid: 82d4fdf3-3c4a-4fe2-b297-8ffb4714406f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Riferimenti alla codifica ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La codifica in un intervallo di standard di Internet comuni quali il uuencode, i valori esadecimali e UTF8 supportata dal codice trovato in atlenc.h.  
  
### Funzioni  
  
|||  
|-|-|  
|[AtlGetHexValue](../Topic/AtlGetHexValue.md)|Chiamare la funzione per ottenere il valore numerico di una cifra esadecimale.|  
|[AtlHexDecode](../Topic/AtlHexDecode.md)|Decodifica una serie di dati che sono stati codificati come testo come esadecimale da una chiamata precedente a [AtlHexEncode](../Topic/AtlHexEncode.md).|  
|[AtlHexDecodeGetRequiredLength](../Topic/AtlHexDecodeGetRequiredLength.md)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una serie sfortuna\- alla lunghezza specificata.|  
|[AtlHexEncode](../Topic/AtlHexEncode.md)|Chiamare la funzione per codificare alcuni dati come stringa di testo esadecimale.|  
|[AtlHexEncodeGetRequiredLength](../Topic/AtlHexEncodeGetRequiredLength.md)|Chiamare la funzione per ottenere la dimensione dei caratteri di un buffer che contenga una stringa codificata dai dati della dimensione specificata.|  
|[AtlUnicodeToUTF8](../Topic/AtlUnicodeToUTF8.md)|Chiamare la funzione per convertire una stringa Unicode UTF\-8.|  
|[BEncode](../Topic/BEncode.md)|Chiamare la funzione per convertire alcuni dati utilizzando la codifica di "B".|  
|[BEncodeGetRequiredLength](../Topic/BEncodeGetRequiredLength.md)|Chiamare la funzione per ottenere la dimensione dei caratteri di un buffer che contenga una stringa codificata dai dati della dimensione specificata.|  
|[EscapeXML](../Topic/EscapeXML.md)|Chiamare la funzione per convertire i caratteri non sicuri disponibili per l'utilizzo in XML nei relativi equivalenti specifici.|  
|[GetExtendedChars](../Topic/GetExtendedChars.md)|Chiamare la funzione per ottenere il numero di caratteri estesi in una stringa.|  
|[IsExtendedChar](../Topic/IsExtendedChar.md)|Chiamare la funzione per determinare se un carattere specificato è un carattere esteso \(minore di 32, maggiore di 126 e non una scheda, un avanzamento riga o un ritorno a capo\)|  
|[QEncode](../Topic/QEncode.md)|Chiamare la funzione per convertire alcuni dati utilizzando la codifica di "Q".|  
|[QEncodeGetRequiredLength](../Topic/QEncodeGetRequiredLength.md)|Chiamare la funzione per ottenere la dimensione dei caratteri di un buffer che contenga una stringa codificata dai dati della dimensione specificata.|  
|[QPDecode](../Topic/QPDecode.md)|Decodifica una serie di dati che sono stati codificati in formato tra virgolette\- stampabile come da una chiamata precedente a [QPEncode](../Topic/QPEncode.md).|  
|[QPDecodeGetRequiredLength](../Topic/QPDecodeGetRequiredLength.md)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da stringa tra virgolette\-stampabile\- alla lunghezza specificata.|  
|[QPEncode](../Topic/QPEncode.md)|Chiamare la funzione per codificare alcuni dati nel formato tra virgolette\- stampabile.|  
|[QPEncodeGetRequiredLength](../Topic/QPEncodeGetRequiredLength.md)|Chiamare la funzione per ottenere la dimensione dei caratteri di un buffer che contenga una stringa codificata dai dati della dimensione specificata.|  
|[Uudecode](../Topic/UUDecode.md)|Decodifica una serie di dati che uuencoded come da una chiamata precedente a [uuencode](../Topic/UUEncode.md).|  
|[UUDecodeGetRequiredLength](../Topic/UUDecodeGetRequiredLength.md)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una serie uuencoded la lunghezza specificata.|  
|[Uuencode](../Topic/UUEncode.md)|Chiamare la funzione a uuencode dati.|  
|[UUEncodeGetRequiredLength](../Topic/UUEncodeGetRequiredLength.md)|Chiamare la funzione per ottenere la dimensione dei caratteri di un buffer che contenga una stringa codificata dai dati della dimensione specificata.|  
  
### Macro  
  
|||  
|-|-|  
|[Flag di ATL\_ESC](../Topic/ATL_ESC%20Flags.md)|Questi flag utilizzati per controllare il comportamento [EscapeXML](../Topic/EscapeXML.md).|  
|[Flag di ATLSMTP\_QPENCODE](../Topic/ATLSMTP_QPENCODE%20Flags.md)|Questi flag descrivono come la codifica tra virgolette\-stampabile deve essere eseguita da [QPEncode](../Topic/QPEncode.md).|  
|[Flag di ATLSMTP\_UUENCODE](../Topic/ATLSMTP_UUENCODE%20Flags.md)|Questi flag descritto come uuencoding deve essere eseguito da [uuencode](../Topic/UUEncode.md).|  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../atl/atl-com-desktop-components.md)