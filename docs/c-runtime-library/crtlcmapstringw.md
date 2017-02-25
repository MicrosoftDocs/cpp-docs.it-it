---
title: "__crtLCMapStringW | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__crtLCMapStringW"
apilocation: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__crtLCMapStringW"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__crtLCMapStringW"
ms.assetid: 45b4ac0e-438c-4fa3-b4d1-34195f4467d9
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# __crtLCMapStringW
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue il mapping di una stringa di caratteri a un'altra, eseguendo una trasformazione specificata dipendente dalle impostazioni locali. Questa funzione può essere anche utilizzata per generare una chiave di ordinamento per la stringa di input.  
  
## Sintassi  
  
```cpp  
int __crtLCMapStringW(  
   LCID    Locale,  
   DWORD   dwMapFlags,  
   LPCWSTR lpSrcStr,  
   int     cchSrc,  
   LPWSTR  lpDestStr,  
   int     cchDest)  
```  
  
#### Parametri  
 `Locale`  
 Identificatore delle impostazioni locali. Le impostazioni locali forniscono un contesto per il mapping di stringhe o la generazione di chiavi di ordinamento. Un'applicazione può utilizzare la macro `MAKELCID` per creare un identificatore delle impostazioni locali.  
  
 `dwMapFlags`  
 Il tipo di trasformazione da utilizzare durante il mapping di stringhe o la generazione di chiavi di ordinamento.  
  
 `lpSrcStr`  
 Puntatore a una stringa di origine di cui la funzione esegue il mapping o che la funzione utilizza per la generazione di chiavi di ordinamento. Si presuppone che questo parametro sia una stringa Unicode.  
  
 `cchSrc`  
 Dimensione, in caratteri, della stringa puntata dal parametro `lpSrcStr`. Questo conteggio può includere o meno la terminazione NULL.  
  
 Un valore `cchSrc` pari a \-1 specifica che la stringa puntata da `lpSrcStr` è con terminazione null. In tal caso e se questa funzione viene utilizzata nella modalità di mapping di stringhe, la funzione calcola la lunghezza della stringa e fa terminare con null la stringa mappata archiviata in `*lpDestStr`.  
  
 `lpDestStr`  
 Puntatore long a un buffer in cui la funzione archivia la stringa mappata o la chiave di ordinamento.  
  
 `cchDest`  
 Dimensione, in caratteri, del buffer puntato da `lpDestStr`.  
  
## Valore restituito  
 Se il valore di `cchDest` è diverso da zero, il numero di caratteri, o di byte se `LCMAP_SORTKEY` viene specificato, scritto nel buffer indica l'esito positivo. Questo conteggio include lo spazio per una terminazione NULL.  
  
 Se il valore di `cchDest` è zero, la dimensione del buffer in caratteri, o byte se `LCMAP_SORTKEY` viene specificato, richiesta per ricevere la stringa tradotta o la chiave di ordinamento indica l'esito positivo. Questa dimensione include lo spazio per una terminazione NULL.  
  
 Zero indica un errore. Per ottenere informazioni estese sull'errore, chiamare la funzione `GetLastError`.  
  
## Note  
 Se `cchSrc` è maggiore di zero e `lpSrcStr` è una stringa con terminazione null, `__crtLCMapStringW` imposta `cchSrc` sulla lunghezza della stringa. Quindi `__crtLCMapStringW` chiama la versione di stringa a caratteri wide \(Unicode\) della funzione `LCMapString` con i parametri specificati. Per altre informazioni sui parametri e sul valore restituito di questa funzione, vedere la funzione `LCMapString` in [MSDN Library](http://go.microsoft.com/fwlink/?linkID=150542).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_\_crtLCMapStringW|awint.h|