---
title: Assegnazione di caratteri | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- characters [C++], assignments
- MBCS [C++], character assignments
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c5efdaefdfd961a10d40c00855261eb547164f95
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42591401"
---
# <a name="character-assignment"></a>Assegnazione di caratteri
Si consideri l'esempio seguente, in cui il **mentre** ciclo analizza una stringa, la copia di tutti i caratteri eccetto 'X' in un'altra stringa:  
  
```  
while( *sz2 )  
{  
    if( *sz2 != 'X' )  
        *sz1++ = *sz2++;  
    else  
        sz2++;  
}  
```  
  
 Il codice copia i byte in corrispondenza `sz2` al percorso a cui punta `sz1`, quindi incrementa `sz1` per ricevere il byte successivo. Tuttavia, se il carattere successivo nel `sz2` è un carattere a byte doppio, l'assegnazione al `sz1` copiato solo il primo byte. Il codice seguente usa una funzione portatile per copiare in modo sicuro il carattere e un altro per incrementare `sz1` e `sz2` correttamente:  
  
```  
while( *sz2 )  
{  
    if( *sz2 != 'X' )  
    {  
        _mbscpy_s( sz1, 1, sz2 );  
        sz1 = _mbsinc( sz1 );  
        sz2 = _mbsinc( sz2 );  
    }  
    else  
        sz2 = _mbsinc( sz2 );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Confronto tra caratteri](../text/character-comparison.md)