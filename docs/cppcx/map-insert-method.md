---
title: "Metodo Map::Insert | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map::Insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map::Insert"
ms.assetid: 3acb2221-c12f-407a-a570-2e52df3569f6
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Map::Insert
Aggiunge la coppia chiave\-valore all'oggetto Map corrente.  
  
## Sintassi  
  
```  
  
virtual bool Insert(  
   K key,   
   V value  
);  
```  
  
#### Parametri  
 `key`  
 Chiave della coppia chiave\-valore. Il tipo di `key` è typename *K*.  
  
 `value`  
 Valore della coppia chiave\-valore. Il tipo di `value` è typename *V*.  
  
## Valore restituito  
 `true` se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde a `key` e la parte valore di tale elemento è impostata su `value`.`false` se nessun elemento esistente nell'oggetto Map corrente corrisponde a `key` e i parametri `key` e `value` vengono applicati a una coppia chiave\-valore e successivamente aggiunti all'oggetto Map corrente.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Map](../cppcx/platform-collections-map-class.md)