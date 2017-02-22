---
title: "Classe hash_compare | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "hash_set/stdext::hash_compare"
  - "std.hash_compare"
  - "hash_compare"
  - "std::hash_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_compare (classe)"
ms.assetid: d502bb59-de57-4585-beb9-00e3a998c0af
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe hash_compare
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash\_map, hash\_multimap, hash\_set o hash\_multiset, come oggetto del parametro **Traits** predefinito per l'ordinamento e l'hashing degli elementi contenuti.  
  
## Sintassi  
  
```  
template<class Key, class Traits = less<Key> >  
   class hash_compare  
   {  
   Traits comp;  
public:  
   const size_t bucket_size = 4;  
   const size_t min_buckets = 8;  
   hash_compare( );  
   hash_compare( Traits pred );  
   size_t operator( )( const Key& _Key ) const;  
   bool operator( )(   
      const Key& _Key1,  
      const Key& _Key2  
   ) const;  
   };  
```  
  
## Note  
 Ogni contenitore associativo hash archiviato include un oggetto tratti hash di tipo **Traits** \(un parametro di modello\).  È possibile derivare una classe da una specializzazione di hash\_compare per eseguire in modo selettivo l'override di determinati oggetti e funzioni oppure è possibile fornire la propria versione di questa classe se vengono soddisfatti determinati requisiti minimi.  In particolare, per un oggetto hash\_comp di tipo **hash\_compare\<Key, Traits\>**, i contenitori precedenti richiedono il comportamento seguente:  
  
-   Per tutti i valori `_Key` di tipo **Key**, la chiamata di **hash\_comp**\(`_Key`\) funge da funzione hash, che restituisce una distribuzione di valori di tipo **size\_t**.  La funzione fornita da hash\_compare restituisce `_Key`.  
  
-   Per qualsiasi valore `_Key1` di tipo **Key** che precede `_Key2` nella sequenza e ha lo stesso valore hash \(valore restituito dalla funzione hash\), **hash\_comp**\(`_Key2`, `_Key1`\) è false.  La funzione deve imporre un ordinamento globale dei valori di tipo **Key**.  La funzione fornita da hash\_compare restituisce *comp*\(`_Key2`, `_Key1`\)`,` dove *comp* è un oggetto archiviato di tipo **Traits** che è possibile specificare quando si costruisce l'oggetto hash\_comp.  Per il tipo di parametro **Traits** predefinito, **less\<Key\>**, il valore delle chiavi di ordinamento non diminuisce mai.  
  
-   La costante integer **bucket\_size** specifica il numero medio di elementi per "bucket" \(voce di tabella hash\) che il contenitore non deve superare.  Il valore deve essere maggiore di zero.  Il valore fornito da hash\_compare è 4.  
  
-   La costante integer **min\_buckets** specifica il numero minimo di bucket per la tabella hash.  Il valore deve essere una potenza di due e maggiore di zero.  Il valore fornito da hash\_compare è 8.  
  
 In Visual C\+\+ .NET 2003 i membri dei file di intestazione [\<hash\_map\>](../standard-library/hash-map.md) e [\<hash\_set\>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext.  Per ulteriori informazioni, vedere [lo spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
## Esempio  
 Fare riferimento agli esempi per [hash\_map::hash\_map](../Topic/hash_map::hash_map.md), [hash\_multimap::hash\_multimap](../Topic/hash_multimap::hash_multimap.md), [hash\_set::hash\_set](../Topic/hash_set::hash_set.md) e [hash\_multiset::hash\_multiset](../Topic/hash_multiset::hash_multiset.md) per informazioni su come dichiarare e usare hash\_compare.  
  
## Requisiti  
 **Intestazione:** \<hash\_map\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)