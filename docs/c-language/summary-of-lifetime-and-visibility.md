---
title: "Riepilogo di durata e visibilità | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- lifetime, and visibility
- visibility, identifiers
ms.assetid: ea05a253-7658-482c-9a6b-abd71169c42d
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1ee45ec7a2a842cc45c01c0e6f43ab49ba55aa3a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="summary-of-lifetime-and-visibility"></a>Riepilogo di durata e di visibilità
Nella tabella seguente è riportato un riepilogo delle caratteristiche di visibilità e di durata per la maggior parte degli identificatori. Le prime tre colonne forniscono gli attributi che definiscono la durata e la visibilità. Un identificatore con gli attributi forniti nelle prime tre colonne presenta la durata e la visibilità illustrate nella colonne quarta e quinta. Tuttavia, questa tabella non considera tutti i possibili casi. Per altre informazioni, fare riferimento a [Classi di archiviazione](../c-language/c-storage-classes.md).  
  
### <a name="summary-of-lifetime-and-visibility"></a>Riepilogo di durata e di visibilità  
  
|Attributi:<br /><br /> Livello|Elemento|Classe di archiviazione<br /><br /> Identificatore|Risultato:<br /><br /> Durata|Visibilità|  
|---------------------------|----------|----------------------------------|--------------------------|----------------|  
|Ambito di tipo file|Definizione di variabile|**static**|Global|Resto del file di origine in cui si verifica|  
||Dichiarazione di variabile|`extern`|Global|Resto del file di origine in cui si verifica|  
||Prototipo o definizione di funzione|**static**|Global|File di origine singolo|  
||Prototipo di funzione|`extern`|Global|Resto del file di origine|  
|Ambito blocco|Dichiarazione di variabile|`extern`|Global|Blocco|  
||Definizione di variabile|**static**|Global|Blocco|  
||Definizione di variabile|**auto** o **register**|Locale|Blocco|  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente vengono illustrati i blocchi, l'annidamento e la visibilità di variabili:  
  
### <a name="code"></a>Codice  
  
```  
// Lifetime_and_Visibility.c  
  
#include <stdio.h>  
  
int i = 1;  // i defined at external level  
  
int main()  // main function defined at external level  
{  
    printf_s( "%d\n", i ); // Prints 1 (value of external level i)  
    {                                 // Begin first nested block  
        int i = 2, j = 3;          // i and j defined at internal level  
        printf_s( "%d %d\n", i, j );  // Prints 2, 3  
        {                             // Begin second nested block  
            int i = 0;                // i is redefined  
            printf_s( "%d %d\n", i, j ); // Prints 0, 3  
        }                             // End of second nested block  
        printf_s( "%d\n", i );        // Prints 2 (outer definition  
                                      //  restored)  
    }                                 // End of first nested block  
    printf_s( "%d\n", i );            // Prints 1 (external level  
                                      // definition restored)  
    return 0;  
}   
```  
  
### <a name="comments"></a>Commenti  
 In questo esempio, sono disponibili quattro livelli di visibilità: il livello esterno e tre livelli di blocco. I valori vengono visualizzati sullo schermo come indicato nei commenti che seguono ogni istruzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md)