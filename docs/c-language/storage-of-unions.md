---
title: Archiviazione di unioni | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- storage, union
- union keyword [C], storage
- union keyword [C]
ms.assetid: b33d246a-8d20-41c4-89b2-ab05f1428792
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: cb349b2c1649b6e4e46fcc92829de87043d0c50a
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="storage-of-unions"></a>Archiviazione di unioni
Lo spazio di archiviazione associato a una variabile di unione è lo spazio di archiviazione necessario per il membro di dimensioni maggiori dell'unione. Quando un membro di dimensioni più piccole viene archiviato, la variabile di unione può contenere lo spazio di memoria inutilizzato. Tutti i membri vengono archiviati nello stesso spazio di memoria e iniziano allo stesso indirizzo. Il valore archiviato viene sovrascritto ogni volta che un valore viene assegnato a un membro diverso. Ad esempio:  
  
```  
union         /* Defines a union named x */  
{  
    char *a, b;  
    float f[20];  
} x;  
```  
  
 I membri dell'unione `x` sono, nell'ordine di dichiarazione, un puntatore a un valore `char`, un valore `char` e una matrice di valori **float**. Lo spazio di archiviazione allocato per `x` è lo spazio di archiviazione necessario per la matrice `f`di 20 elementi, poiché `f` è il membro più lungo dell'unione. Poiché nessun tag è associato all'unione, il tipo è senza nome o "anonimo".  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di unione](../c-language/union-declarations.md)
