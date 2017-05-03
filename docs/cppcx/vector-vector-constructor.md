---
title: "Vector::Vector (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "01/24/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::Vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::Vector (costruttore)"
ms.assetid: 5454433d-e206-45ea-bc8b-bb5a7bf38c17
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::Vector (costruttore)
Inizializza una nuova istanza della classe Vector.  
  
## Sintassi  
  
```  
Vector();  
  
explicit Vector(  
    unsigned int size  
    );  
  
Vector(  
    unsigned int size,  
    T value  
    );  
  
template <typename U> explicit Vector(  
    const ::std::vector<U>& v  
    );  
  
template <typename U> explicit Vector(  
    std::vector<U>&& v  
    );  
  
Vector(  
    const T * ptr,  
    unsigned int size  
    );  
  
template <size_t N> explicit Vector(  
    const T(&arr)[N]  
    );  
  
template <size_t N> explicit Vector(  
    const std::array<T, N>& a  
    );  
  
explicit Vector(  
    const Array<T>^ arr  
    );  
  
template <typename InIt> Vector(  
    InIt first,  
    InIt last  
    );  
  
Vector(  
    std::initializer_list<T> il  
    );  
```  
  
#### Parametri  
 a  
 Oggetto [std::array](../standard-library/array-class-stl.md) che verrà usato per inizializzare l'oggetto Vector.  
  
 a  
 Oggetto [Platform::Array](../cppcx/platform-array-class.md) che verrà usato per inizializzare l'oggetto Vector.  
  
 `InIt`  
 Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.  
  
 il  
 Oggetto [std::initializer\_list](../standard-library/initializer-list-class.md) di oggetti di tipo `T` che verrà usato per inizializzare l'oggetto Vector.  
  
 `N`  
 Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.  
  
 `size`  
 Numero di elementi nell'oggetto Vector.  
  
 `value`  
 Valore utilizzato per inizializzare ciascun elemento nell'oggetto Vector corrente.  
  
 `v`  
 [Elementi Lvalue e Rvalue](~/cpp/lvalues-and-rvalues-visual-cpp.md) a un oggetto [std::vector](../Topic/vector%20Class%201.md) che viene usato per inizializzare l'oggetto Vector corrente.  
  
 `ptr`  
 Puntatore a `std::vector` utilizzato per inizializzare l'oggetto Vector corrente.  
  
 `arr`  
 Oggetto [Platform::Array](../cppcx/platform-array-class.md) utilizzato per inizializzare l'oggetto Vector corrente.  
  
 `a`  
 Oggetto [std::array](../Topic/vector%20Class%201.md) utilizzato per inizializzare l'oggetto Vector corrente.  
  
 `first`  
 Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di `first` viene passato mediante l'*inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](~/cpp/rvalue-reference-declarator-amp-amp.md).  
  
 `last`  
 Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di `last` viene passato mediante l'*inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](~/cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)   
 [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md)