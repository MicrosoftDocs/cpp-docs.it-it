---
title: "Assegnazione di caratteri | Microsoft Docs"
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
  - "caratteri [C++], assegnazioni"
  - "MBCS [C++], assegnazioni di caratteri"
ms.assetid: dcc329cd-92df-4e20-817d-364be62ff28f
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Assegnazione di caratteri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Si consideri l'esempio seguente, nel quale il ciclo `while` effettua l'analisi di una stringa, copiando in un'altra stringa tutti i caratteri tranne 'X':  
  
```  
while( *sz2 )  
{  
    if( *sz2 != 'X' )  
        *sz1++ = *sz2++;  
    else  
        sz2++;  
}  
```  
  
 Il codice copia il byte in `sz2` nella posizione indicata da `sz1`, quindi incrementa `sz1` per ricevere il byte successivo.  Se però il carattere successivo presente in `sz2` è un carattere a byte doppio, tramite l'assegnazione a `sz1` verrà copiato solo il byte iniziale.  Nel codice seguente viene utilizzata una funzione portabile per copiare il carattere e un'altra funzione dello stesso tipo per incrementare correttamente `sz1` e `sz2`:  
  
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
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Confronto tra caratteri](../text/character-comparison.md)