---
title: "Metodo UnorderedMap::Insert | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::Insert"
ms.assetid: 89d55301-3cad-4877-825b-35096a1dd740
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo UnorderedMap::Insert
Aggiunge la coppia chiave\-valore specificata all'oggetto UnorderedMap corrente.  
  
## Sintassi  
  
```cpp  
  
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
 `true` se la chiave di un elemento esistente nell'oggetto Map corrente corrisponde a `key` e la parte valore di tale elemento è impostata su `value`.`false` se nessun elemento esistente nell'oggetto Map corrente corrisponde a `key` e i parametri `key` e `value` vengono usati per creare una coppia chiave\-valore e successivamente aggiunti all'oggetto UnorderedMap corrente.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections