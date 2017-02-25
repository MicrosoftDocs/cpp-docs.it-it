---
title: "CArrayRowset::operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CArrayRowset::operator[]"
  - "CArrayRowset.operator[]"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operatore [], matrici"
  - "[] (operatore)"
  - "operator[], matrici"
ms.assetid: 3bb8c310-cc1e-46e8-9711-9b565488acaa
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CArrayRowset::operator
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Vengono forniti sintassi di tipo matrice per accedere a una riga del rowset.  
  
## Sintassi  
  
```  
  
      TAccessor  
      & operator[](int nRow);  
```  
  
#### Parametri  
 `TAccessor`  
 Un parametro basato su modelli che specifica il tipo di funzione di accesso è archiviato nel rowset.  
  
 `nRow`  
 \[in\] numero di riga \(elemento di matrice\) che si desidera accedere.  
  
## Valore restituito  
 Il contenuto della riga richiesta.  
  
## Note  
 Se `nRow` supera il numero di righe nel rowset, viene generata un'eccezione.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CArrayRowset](../../data/oledb/carrayrowset-class.md)