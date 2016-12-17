---
title: "Overflow del buffer | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "buffer (overflow) [C++]"
  - "buffer [C++], dimensioni dei caratteri"
  - "MBCS [C++], overflow del buffer"
ms.assetid: f2b7e40a-f02b-46d8-a449-51d26fc0c663
caps.latest.revision: 8
caps.handback.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Overflow del buffer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si apportano variazioni alle dimensioni in byte dei caratteri, è possibile che si verifichino problemi durante la memorizzazione dei caratteri in un buffer.  Si consideri il codice seguente, con cui i caratteri vengono copiati dalla stringa `sz` in un buffer denominato `rgch`:  
  
```  
cb = 0;  
while( cb < sizeof( rgch ) )  
    rgch[ cb++ ] = *sz++;  
```  
  
 Ci si chiederà se l'ultimo byte copiato era un "byte iniziale".  L'esempio seguente non risolve il problema, in quanto può provocare un overflow del buffer:  
  
```  
cb = 0;  
while( cb < sizeof( rgch ) )  
{  
    _mbccpy( rgch + cb, sz );  
    cb += _mbclen( sz );  
    sz = _mbsinc( sz );  
}  
```  
  
 La chiamata a `_mbccpy` tenta di eseguire l'operazione corretta, ovvero copiare il carattere intero, sia esso composto da uno o due byte.  Non tiene conto, tuttavia, del fatto che l'ultimo carattere copiato potrebbe non entrare nel buffer se l'ampiezza è di due byte.  La soluzione corretta è quindi la seguente:  
  
```  
cb = 0;  
while( (cb + _mbclen( sz )) <= sizeof( rgch ) )  
{  
    _mbccpy( rgch + cb, sz );  
    cb += _mbclen( sz );  
    sz = _mbsinc( sz );  
}  
```  
  
 Questo codice consente di effettuare un controllo per individuare l'eventuale overflow del buffer nel test del ciclo, utilizzando `_mbclen` per verificare la dimensione del carattere corrente a cui fa riferimento `sz`.  Se si esegue una chiamata alla funzione `_mbsnbcpy`, è possibile sostituire il codice del ciclo `while` con una riga singola di codice,  Di seguito è riportato un esempio.  
  
```  
_mbsnbcpy( rgch, sz, sizeof( rgch ) );  
```  
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)