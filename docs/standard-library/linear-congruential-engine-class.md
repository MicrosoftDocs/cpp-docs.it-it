---
title: "Classe linear_congruential_engine | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.linear_congruential_engine"
  - "random/std::tr1::linear_congruential_engine"
  - "linear_congruential_engine"
  - "std::tr1::linear_congruential_engine"
  - "tr1.linear_congruential_engine"
  - "tr1::linear_congruential_engine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "linear_congruential_engine (classe)"
ms.assetid: 30e00ca6-1933-4701-9561-54f3e810a5a1
caps.latest.revision: 21
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe linear_congruential_engine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera una sequenza casuale mediante l'algoritmo congruenziale lineare.  
  
## Sintassi  
  
```  
template<class UIntType, UIntType A, UIntType C, UIntType M>  
class linear_congruential_engine{  
public:  
    // types  
    typedef UIntType result_type;  
  
    // engine characteristics  
    static constexpr result_type multiplier = a;  
    static constexpr result_type increment = c;  
    static constexpr result_type modulus = m;  
    static constexpr result_type min() { return c == 0u ? 1u: 0u; }  
    static constexpr result_type max() { return m - 1u; }  
    static constexpr result_type default_seed = 1u;  
  
    // constructors and seeding functions  
    explicit linear_congruential_engine(result_type s = default_seed);  
    template<class Sseq> explicit linear_congruential_engine(Sseq& q);  
    void seed(result_type s = default_seed);  
    template<class Sseq> void seed(Sseq& q);  
  
    // generating functions  
    result_type operator()();  
    void discard(unsigned long long z);  
};  
```  
  
#### Parametri  
 `UIntType`  
 Tipo di risultato Unsigned Integer. Per i tipi possibili, vedere [\<random\>](../standard-library/random.md).  
  
 `A`  
 **Moltiplicatore**.**Precondizione**: vedere la sezione Osservazioni.  
  
 `C`  
 **Incremento**.**Precondizione**: vedere la sezione Osservazioni.  
  
 `M`  
 **Modulo**.**Precondizione**: Vedere Osservazioni.  
  
## Membri  
  
||||  
|-|-|-|  
|`linear_congruential_engine::linear_congruential_engine`|`linear_congruential_engine::min`|`linear_congruential_engine::discard`|  
|`linear_congruential_engine::operator()`|`linear_congruential_engine::max`|`linear_congruential_engine::seed`|  
  
 `default_seed` è una costante membro definita come `1u`, usata come valore di parametro predefinito per `linear_congruential_engine::seed` e per il costruttore a valore singolo.  
  
 Per ulteriori informazioni sui membri del motore, vedere [\<random\>](../standard-library/random.md).  
  
## Note  
 La classe modello `linear_congruential_engine` è il motore di generazione più semplice, ma non il più rapido o quello che offre la migliore qualità. Un miglioramento rispetto a questo motore è rappresentato da [substract\_with\_carry\_engine](../standard-library/subtract-with-carry-engine-class.md). Nessuno di questi motori può tuttavia eguagliare la rapidità e la qualità dei risultati offerte da [mersenne\_twister\_engine](../standard-library/mersenne-twister-engine-class.md).  
  
 Il motore produce valori di un tipo Unsigned Integral specificato dall'utente usando la relazione di ricorrenza \(*periodo*\) `x(i) = (A * x(i-1) + C) mod M`.  
  
 If `M` è zero, il valore usato per questa operazione di modulo è `numeric_limits<result_type>::max() + 1`. L'ultimo valore restituito è lo stato del motore oppure il valore di seeding se non sono state effettuate chiamate a `operator()`.  
  
 Se `M` è diverso da zero, i valori degli argomenti di modello `A` e `C` devono essere minori di `M`.  
  
 Sebbene sia possibile costruire direttamente un generatore da questo motore, è possibile utilizzare uno di questi typedef predefiniti.  
  
 `minstd_rand0`: 1988 motore standard minimo \(Lewis, Goodman e Miller, 1969\).  
  
```  
typedef linear_congruential_engine<unsigned int, 16807, 0, 2147483647> minstd_rand0;  
```  
  
 `minstd_rand`: Motore standard minimo aggiornato `minstd_rand0` \(Park, Miller e Stockmeyer, 1993\).  
  
```  
typedef linear_congruential_engine<unsigned int, 48271, 0, 2147483647> minstd_rand;  
```  
  
 Per informazioni dettagliate sull'algoritmo del motore congruenziale lineare, vedere l'articolo di Wikipedia [Generatore lineare congruenziale](http://go.microsoft.com/fwlink/?LinkId=402446).  
  
## Requisiti  
 **Intestazione:** \<random\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<random\>](../standard-library/random.md)