---
title: "Specifica precisione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr100.dll"
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "c.math"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "printf (funzione), campi di specifica di formato"
ms.assetid: dc59ea4e-d23a-4f1f-9881-2c919ebefb82
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Specifica precisione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In una specifica di formato, il terzo campo facoltativo è la specifica di precisione.  È costituito da un punto \(.\) seguito da un integer decimale non negativo che, a seconda del tipo di conversione, specifica il numero di caratteri della stringa, il numero di posizioni decimali, ovvero il numero di cifre significative da restituire.  
  
 A differenza della specifica della larghezza, la specifica di precisione può provocare il troncamento del valore di output o l'arrotondamento di un valore a virgola mobile.  Se `precision` viene specificato come 0 e il valore da convertire è 0, il risultato è nessun carattere restituito, come illustrato nel seguente esempio:  
  
 `printf( "%.0d", 0 );      /* No characters output */`  
  
 Se la specifica della precisione è un asterisco \(\*\), un argomento `int` dall'elenco degli argomenti fornisce il valore.  Nell'elenco degli argomenti, `precision` deve precedere il valore da formattare, come illustrato nel seguente esempio:  
  
 `printf( "%.*f", 3, 3.14159265 );  /* 3.142 output */`  
  
 Il tipo determina l'interpretazione di `precision` o la precisione predefinita quando `precision` viene omesso, come illustrato nella tabella seguente.  
  
### Come i valori di precisione hanno effetto sul tipo  
  
|Type|Significato|Valore|  
|----------|-----------------|------------|  
|`a`, `A`|La precisione indica il numero di cifre dopo il punto.|La precisione predefinita è 6.  Se la precisione è 0, nessun separatore decimale viene stampato a meno che il flag `#` non venga utilizzato.|  
|`c`, `C`|La precisione non ha alcun effetto.|Il carattere viene stampato.|  
|`d`, `i`, `u`, `o`, `x`, `X`|La precisione indica il numero minimo di cifre da stampare.  Se il numero di cifre nell'argomento è minore di `precision`, il valore di output verrà riempito a sinistra con zeri.  Il valore non viene troncato quando il numero di cifre supera `precision`.|La precisione predefinita è 1.|  
|`e`, `E`|L'identificatore di precisione indica il numero di cifre da stampare dopo il separatore decimale.  L'ultima cifra stampata viene arrotondata.|La precisione predefinita è 6.  Se `precision` è 0 o un punto \(.\) senza un numero successivo, nessun separatore decimale viene stampato.|  
|`f`|Il valore di precisione indica il numero di cifre desiderato dopo il separatore decimale.  Se un separatore decimale viene visualizzato, viene visualizzata almeno una cifra dopo di esso.  Il valore viene arrotondato al numero appropriato di cifre.|La precisione predefinita è 6.  Se `precision` è 0 o se un punto \(.\) senza un numero successivo, nessun separatore decimale viene stampato.|  
|`g`, `G`|La precisione indica il numero massimo di cifre significative stampate.|Vengono stampate sei cifre significative e gli zeri finali vengono troncati.|  
|`s`, `S`|La precisione indica il numero massimo di caratteri da stampare.  I caratteri al di sopra di `precision` non vengono stampati.|I caratteri vengono stampati fino al raggiungimento di un carattere null.|  
  
## Vedere anche  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Direttive flag](../c-runtime-library/flag-directives.md)   
 [Specifica della larghezza per printf](../c-runtime-library/printf-width-specification.md)   
 [Specifiche di dimensione](../c-runtime-library/size-specification.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)