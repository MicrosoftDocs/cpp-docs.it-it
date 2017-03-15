---
title: "Contenitori (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6e10b758-e928-4827-9c3f-86cafe54bf5b
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, utilizzare [vettore](vector%20Class.md) come contenitore predefinito sequenziale in C++. È l'equivalente dell'elenco \< T> in altri linguaggi.  
  
```cpp  
vector<string> v;  
v.push_back( "Geddy Lee" );  
  
```  
  
 Utilizzare [mappa](../standard-library/map-class.md) (non unordered_map) come contenitore associativo predefinito. Utilizzare [impostare](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), [multiset](../standard-library/multiset-class.md) degenerato & più casi.  
  
```cpp  
map<string, string> phone_book;  
// ...  
phone_book["Alex Lifeson"] = "+1 (416) 555-1212";  
  
```  
  
 Quando è necessaria l'ottimizzazione delle prestazioni, è consigliabile utilizzare:  
  
1.  il tipo di matrice durante l'incorporamento è importante, ad esempio, un membro di classe.  
  
2.  contenitori associativi non ordinati (unordered_map e altri): sovraccarico minore per ogni elemento (importante) e ricerca a tempo costante (potenzialmente importante, a volte meno importante). Più difficile da utilizzare correttamente e in modo efficace, a causa di inconvenienti e instabilità.  
  
3.  vettore ordinato. (Vedere: [Gli algoritmi](../cpp/algorithms-modern-cpp.md).)  
  
 Non utilizzare matrici del linguaggio C. (Per le API precedenti, utilizzare `f( vec.data(), vec.size() );` .)  
  
 Per un altro articolo sui contenitori, vedere [contenitori STL](../standard-library/stl-containers.md).  
  
## <a name="container-sizes"></a>Dimensioni contenitore  
 Le tabelle seguenti illustrano le dimensioni del contenitore, in byte, per piattaforme x86 e x64.  (Per tali scopi, ARM a 32 bit è equivalente a x86).  Queste tabelle coprono le modalità di rilascio, poiché la modalità di debug contiene controllo macchine che utilizza spazio e tempo.  Le colonne distinte sono [!INCLUDE[cpp_orcas_long](../cpp/includes/cpp_orcas_long_md.md)] SP1, in cui `_SECURE_SCL` per impostazione predefinita su 1 e per [!INCLUDE[cpp_orcas_long](../cpp/includes/cpp_orcas_long_md.md)] SP1 con `_SECURE_SCL` manualmente impostato su 0 per la massima velocità.  Visual C++ in Visual Studio 2010, [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], e [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] predefinito `_SECURE_SCL` su 0 (noto come `_ITERATOR_DEBUG_LEVEL`).  
  
|x86 contenitore dimensioni (byte)|VC9 SP1|VC9 SP1<br /><br /> SCL=0|VC10|VC11|  
|-----------------------------------|-------------|------------------------|----------|----------|  
|Vector \< int>|24|16|16|12|  
|matrice \< int, 5 >|20|20|20|20|  
|deque \< int>|32|32|24|20|  
|forward_list \< int>|N/D|N/D|8|4|  
|elenco \< int>|28|12|12|8|  
|priority_queue \< int>|28|20|20|16|  
|coda \< int>|32|32|24|20|  
|Stack \< int>|32|32|24|20|  
|coppia \< int, int >|8|8|8|8|  
|Tuple \< int, int, int >|16|16|16|12|  
|mappa \< int, int >|32|12|16|8|  
|multimap \< int, int >|32|12|16|8|  
|impostare \< int>|32|12|16|8|  
|multiset \< int>|32|12|16|8|  
|hash_map \< int, int >|72|44|44|32|  
|hash_multimap \< int, int >|72|44|44|32|  
|hash_set \< int>|72|44|44|32|  
|hash_multiset \< int>|72|44|44|32|  
|unordered_map \< int, int >|72|44|44|32|  
|unordered_multimap \< int, int >|72|44|44|32|  
|unordered_set \< int>|72|44|44|32|  
ordered_multiset \< int>|72|44|44|32|  
|string|28|28|28|24|  
|wstring|28|28|28|24|  
  
|x64 contenitore dimensioni (byte)|VC9 SP1|VC9 SP1<br /><br /> SCL=0|VC10|VC11|  
|-----------------------------------|-------------|------------------------|----------|----------|  
|Vector \< int>|48|32|32|24|  
|matrice \< int, 5 >|20|20|20|20|  
|deque \< int>|64|64|48|40|  
|forward_list \< int>|N/D|N/D|16|8|  
|elenco \< int>|56|24|24|16|  
|priority_queue \< int>|56|40|40|32|  
|coda \< int>|64|64|48|40|  
|Stack \< int>|64|64|48|40|  
|coppia \< int, int >|8|8|8|8|  
|Tuple \< int, int, int >|16|16|16|12|  
|mappa \< int, int >|64|24|32|16|  
|multimap \< int, int >|64|24|32|16|  
|impostare \< int>|64|24|32|16|  
|multiset \< int>|64|24|32|16|  
|hash_map \< int, int >|144|88|88|64|  
|hash_multimap \< int, int >|144|88|88|64|  
|hash_set \< int>|144|88|88|64|  
|hash_multiset \< int>|144|88|88|64|  
|unordered_map \< int, int >|144|88|88|64|  
|unordered_multimap \< int, int >|144|88|88|64|  
|unordered_set \< int>|144|88|88|64|  
ordered_multiset \< int>|144|88|88|64|  
|string|40|40|40|32|  
|wstring|40|40|40|32|  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornati su C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria Standard C++](../standard-library/cpp-standard-library-reference.md)