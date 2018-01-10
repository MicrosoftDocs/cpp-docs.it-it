---
title: Overflow del buffer | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- buffers [C++], character sizes
- buffer overflows [C++]
- MBCS [C++], buffer overflow
ms.assetid: f2b7e40a-f02b-46d8-a449-51d26fc0c663
caps.latest.revision: "8"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4bfad181ee7c6b702af87bc8ff0a49ccfb42cb65
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="buffer-overflow"></a>Overflow del buffer
Variazione delle dimensioni dei caratteri può causare problemi quando si inserisce i caratteri in un buffer. Si consideri il codice seguente, che copia i caratteri da una stringa, `sz`, in un buffer, `rgch`:  
  
```  
cb = 0;  
while( cb < sizeof( rgch ) )  
    rgch[ cb++ ] = *sz++;  
```  
  
 La domanda è: è stato l'ultimo byte copiato un byte iniziale? Di seguito non risolve il problema perché può provocare un overflow del buffer:  
  
```  
cb = 0;  
while( cb < sizeof( rgch ) )  
{  
    _mbccpy( rgch + cb, sz );  
    cb += _mbclen( sz );  
    sz = _mbsinc( sz );  
}  
```  
  
 Il `_mbccpy` chiamata tenta di eseguire l'operazione corretta, copiare il carattere completo, se è 1 o 2 byte. Ma non viene preso in considerazione che l'ultimo carattere copiato potrebbe non essere adatte buffer se il carattere è 2 byte. La soluzione corretta è:  
  
```  
cb = 0;  
while( (cb + _mbclen( sz )) <= sizeof( rgch ) )  
{  
    _mbccpy( rgch + cb, sz );  
    cb += _mbclen( sz );  
    sz = _mbsinc( sz );  
}  
```  
  
 Questo codice di test per l'eventuale overflow del buffer nel ciclo di test, utilizzando `_mbclen` per verificare la dimensione del carattere corrente a cui puntata `sz`. Effettuando una chiamata al `_mbsnbcpy` funzione, è possibile sostituire il codice di `while` ciclo con una singola riga di codice. Ad esempio:  
  
```  
_mbsnbcpy( rgch, sz, sizeof( rgch ) );  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)