---
title: "Classe value_compare delle classi | Microsoft Docs"
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
  - "std::value_compare"
  - "std.value_compare"
  - "value_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_compare (classe)"
ms.assetid: c306c5b9-3505-4357-aa6b-216451b951ed
caps.latest.revision: 20
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe value_compare delle classi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce un oggetto funzione che può confrontare gli elementi di un hash\_map confrontando i valori delle chiavi per determinare il relativo ordine nel relativo hash\_map.  
  
## Sintassi  
  
```  
class value_compare  
    : std::public binary_function<value_type, value_type, bool>   
{  
public:  
    bool operator( )(  
        const value_type& _Left,  
        const value_type& _Right ) const  
        {  
            return ( comp( _Left.first, _Right.first ) );   
        }  
protected:  
    value_compare( const key_compare& c ) : comp (c) { }  
    key_compare comp;  
};  
```  
  
## Note  
 I criteri di confronto forniti da value\_compare tra **value\_types** di interi elementi contenuti in un hash\_map è causato da un confronto tra le chiavi dei rispettivi elementi dalla costruzione ausiliaria della classe.  L'operatore di funzione membro viene utilizzato l'oggetto **comp** di tipo `key_compare` archiviato nell'oggetto funzione dato da value\_compare per confrontare i componenti di chiavi di ordinamento di due elementi.  
  
 Per i hash\_sets e i hash\_multisets, che sono contenitori semplici in cui i valori della chiave sono identici a quelli dell'elemento, il value\_compare equivale a `key_compare`; per i hash\_maps e i hash\_multimaps contrario, perché il valore degli elementi di `pair` del tipo non è identico al valore della chiave dell'elemento.  
  
 In Visual C\+\+ .NET 2003, i membri dei file di intestazione [\<hash\_set\>](../standard-library/hash-set.md) e [\<hash\_map\>](../standard-library/hash-map.md) non sono più nello spazio dei nomi di deviazione standard, ma sono stati spostati nello spazio dei nomi di stdext.  Per ulteriori informazioni, vedere [lo spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
## Esempio  
 Vedere l'esempio relativo [hash\_map::value\_comp](../Topic/hash_map::value_comp.md) per un esempio di come dichiarare e utilizzare il value\_compare.  
  
## Requisiti  
 **Intestazione:** \<hash\_map\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Struct binary\_function](../standard-library/binary-function-struct.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)