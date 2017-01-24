---
title: "Archiviazione di unioni | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "archiviazione, union"
  - "union (parola chiave) [C]"
  - "union (parola chiave) [C], archiviazione"
ms.assetid: b33d246a-8d20-41c4-89b2-ab05f1428792
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Archiviazione di unioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Lo spazio di archiviazione associato a una variabile di unione è lo spazio di archiviazione necessario per il membro di dimensioni maggiori dell'unione.  Quando un membro di dimensioni più piccole viene archiviato, la variabile di unione può contenere lo spazio di memoria inutilizzato.  Tutti i membri vengono archiviati nello stesso spazio di memoria e iniziano allo stesso indirizzo.  Il valore archiviato viene sovrascritto ogni volta che un valore viene assegnato a un membro diverso.  Ad esempio:  
  
```  
union         /* Defines a union named x */  
{  
    char *a, b;  
    float f[20];  
} x;  
```  
  
 I membri dell'unione `x` sono, nell'ordine di dichiarazione, un puntatore a un valore `char`, a un valore `char` e a una matrice di valori **a virgola mobile**.  Lo spazio di archiviazione allocato per `x` è lo spazio di archiviazione necessario per la matrice `f`di 20 elementi, poiché `f` è il membro più lungo dell'unione.  Poiché nessun tag è associato all'unione, il tipo è senza nome o "anonimo".  
  
## Vedere anche  
 [Dichiarazioni di unione](../c-language/union-declarations.md)