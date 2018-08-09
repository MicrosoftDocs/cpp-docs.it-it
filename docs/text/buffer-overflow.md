---
title: Overflow del buffer | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- buffers [C++], character sizes
- buffer overflows [C++]
- MBCS [C++], buffer overflow
ms.assetid: f2b7e40a-f02b-46d8-a449-51d26fc0c663
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9bb362be360986371200c8cde292b3fff5acd7cd
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40020187"
---
# <a name="buffer-overflow"></a>Overflow del buffer
Dimensioni carattere diverse può causare problemi quando si inserisce i caratteri in un buffer. Si consideri il codice seguente, che copia i caratteri da una stringa, `sz`, in un buffer di `rgch`:  
  
```  
cb = 0;  
while( cb < sizeof( rgch ) )  
    rgch[ cb++ ] = *sz++;  
```  
  
 La domanda è: è stato l'ultimo byte copiati un byte iniziale? Di seguito non risolve il problema perché può provocare un overflow del buffer:  
  
```  
cb = 0;  
while( cb < sizeof( rgch ) )  
{  
    _mbccpy( rgch + cb, sz );  
    cb += _mbclen( sz );  
    sz = _mbsinc( sz );  
}  
```  
  
 Il `_mbccpy` chiamata tenta di eseguire l'operazione corretta, ovvero copia il carattere completo, se è 1 o 2 byte. Ma non viene preso in considerazione che l'ultimo carattere copiato potrebbe non soddisfare buffer se il carattere wide di 2 byte. La soluzione corretta è:  
  
```  
cb = 0;  
while( (cb + _mbclen( sz )) <= sizeof( rgch ) )  
{  
    _mbccpy( rgch + cb, sz );  
    cb += _mbclen( sz );  
    sz = _mbsinc( sz );  
}  
```  
  
 Questo codice di verifica overflow del buffer possibile nel ciclo di test, usando `_mbclen` per verificare la dimensione del carattere corrente a cui punta `sz`. Effettuando una chiamata per il `_mbsnbcpy` funzione, è possibile sostituire il codice nel **mentre** ciclo con una singola riga di codice. Ad esempio:  
  
```  
_mbsnbcpy( rgch, sz, sizeof( rgch ) );  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)