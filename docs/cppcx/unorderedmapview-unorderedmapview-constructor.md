---
title: "Costruttore UnorderedMapView::UnorderedMapView | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::UnorderedMapView"
ms.assetid: 408aa6ca-dd8d-4946-a817-42a31d19f429
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore UnorderedMapView::UnorderedMapView
Inizializza una nuova istanza della classe UnorderedMapView.  
  
## Sintassi  
  
```cpp  
  
UnorderedMapView();  
  
explicit UnorderedMapView(size_t n);  
  
UnorderedMapView(size_t n, const H& h);  
  
UnorderedMapView(size_t n, const H& h, const P& p);  
  
explicit UnorderedMapView(  
    const std::unordered_map<K, V, H, P>& m  
    );  
explicit UnorderedMapView(  
    std::unordered_map<K, V, H, P>&& m  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n,  
    const H& h  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n,  
    const H& h,  
    const P& p  
    );  
  
UnorderedMapView(  
    std::initializer_list<std::pair<const K, V>> il  
    );  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n  
    );  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n,  
    const H& h  
    );  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n,  
    const H& h,  
    const P& p  
    );  
```  
  
#### Parametri  
 n  
 Numero di elementi per cui preallocare spazio.  
  
 `InIt`  
 Typename dell'oggetto UnorderedMapView.  
  
 `H`  
 Oggetto funzione che può eseguire l'hash di un valore per una chiave. Per impostazione predefinita, è [std::hash\<K\>](http://msdn.microsoft.com/it-it/54f67435-af9d-4217-a29d-fa4d2491a104) per i tipi supportati da `std::hash`.  
  
 `P`  
 Tipo che fornisce un oggetto funzione che può confrontare due chiavi per determinare la loro uguaglianza. Per impostazione predefinita, è [std::equal\_to\<K\>](../standard-library/equal-to-struct.md).  
  
 `m`  
 Riferimento o [Elementi Lvalue e Rvalue](~/cpp/lvalues-and-rvalues-visual-cpp.md) a un oggetto [std::unordered\_map](../standard-library/unordered-map-class.md) usato per inizializzare l'oggetto UnorderedMap corrente.  
  
 `first`  
 Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.  
  
 `last`  
 Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::UnorderedMapView](../cppcx/platform-collections-unorderedmapview-class.md)