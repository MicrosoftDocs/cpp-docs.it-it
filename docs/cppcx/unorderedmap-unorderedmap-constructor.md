---
title: "Costruttore UnorderedMap::UnorderedMap | Microsoft Docs"
ms.custom: ""
ms.date: "01/25/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::UnorderedMap"
ms.assetid: bd62e663-7f3a-43ef-ad6d-8266128c778b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore UnorderedMap::UnorderedMap
Inizializza una nuova istanza della classe UnorderedMap.  
  
## Sintassi  
  
```scr  
UnorderedMap();  
  
  explicit UnorderedMap(  
      size_t n  
      );  
  
  UnorderedMap(  
      size_t n,  
      const H& h  
      );  
  
  UnorderedMap(  
      size_t n,  
      const H& h,  
      const P& p  
      );  
  
  explicit UnorderedMap(  
      const std::unordered_map<K, V, H, P>& m  
      );  
  
  explicit UnorderedMap(  
      std::unordered_map<K, V, H, P>&& m  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last,  
      size_t n  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last,  
      size_t n,  
      const H& h  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last,  
      size_t n,  
      const H& h,  
      const P& p  
      );  
  
  UnorderedMap(std::initializer_list<  
      std::pair<const K, V>> il  
      );  
  
  UnorderedMap(::std::initializer_list<  
      std::pair<const K, V>> il,  
      size_t n  
      );  
  
  UnorderedMap(  
      ::std::initializer_list< ::std::pair<const K, V>> il,  
      size_t n,  
      const H& h  
      );  
  
  UnorderedMap(::std::initializer_list<  
      ::std::pair<const K, V>> il,  
      size_t n,  
      const H& h,  
      const P& p  
      );  
```  
  
#### Parametri  
 `InIt`  
 Typename dell'oggetto UnorderedMap corrente.  
  
 `P`  
 Oggetto funzione che può confrontare due chiavi per determinare se sono uguali. Per impostazione predefinita, questo parametro è [std::equal\_to\<K\>](../standard-library/equal-to-struct.md).  
  
 `H`  
 Oggetto funzione che produce un valore hash per una chiave. Per impostazione predefinita, questo parametro è [Classe hash](../Topic/hash%20Class%201.md) per i tipi di chiave supportati dalla classe.  
  
 `m`  
 Riferimento o [Elementi Lvalue e Rvalue](../Topic/Lvalues%20and%20Rvalues%20\(Visual%20C++\).md) a un oggetto [std::unordered\_map](../standard-library/unordered-map-class.md) usato per inizializzare l'oggetto UnorderedMap corrente.  
  
 il  
 Oggetto [std::initializer\_list](../standard-library/initializer-list-class.md) di oggetti [std::pair](../standard-library/pair-structure.md) che verrà usato per inizializzare la mappa.  
  
 `first`  
 Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.  
  
 `last`  
 Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMap corrente.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Platform::Collections \(spazio dei nomi\)](../cppcx/platform-collections-namespace.md)   
 [Raccolte](../cppcx/collections-c-cx.md)