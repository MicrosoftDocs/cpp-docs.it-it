---
title: "Classe checked_array_iterator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "iterator/checked_array_iterator"
  - "checked_array_iterator"
  - "std::checked_array_iterator"
  - "std.checked_array_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "checked_array_iterator"
  - "checked_array_iterator (classe)"
  - "checked_array_iterator, sintassi"
ms.assetid: 7f07185e-d588-4ae3-9c4f-84ec4aa25a28
caps.latest.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 28
---
# Classe checked_array_iterator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe `checked_array_iterator` consente di trasformare una matrice o un puntatore in un iteratore verificato.  Utilizzare questa classe come wrapper \(utilizzando la funzione [make\_checked\_array\_iterator](../Topic/make_checked_array_iterator.md)\) per i puntatori o le matrici non elaborati in modo da fornire un controllo e gestire gli avvisi relativi ai puntatori non verificati anziché disattivarli globalmente.  Se necessario, è possibile utilizzare la versione non verificata della classe [unchecked\_array\_iterator](../standard-library/unchecked-array-iterator-class.md).  
  
> [!NOTE]
>  Questa classe è un'estensione Microsoft della libreria C\+\+ standard.  Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C\+\+ che non supportano questa estensione Microsoft.  Per un esempio su come scrivere codice che non richieda l'utilizzo di tale classe, vedere il secondo esempio riportato di seguito.  
  
## Sintassi  
  
```  
template <class _Iterator>  
    class checked_array_iterator;  
```  
  
## Note  
 Questa classe è definita nello spazio dei nomi [stdext](../standard-library/stdext-namespace.md).  
  
 Per altre informazioni e il codice di esempio per la funzionalità relativa agli iteratori verificati, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come definire e utilizzare un iteratore di matrice verificato.  
  
 Se la destinazione non è sufficientemente grande da contenere tutti gli elementi che vengono copiati, come succederebbe se la riga venisse modificata:  
  
```cpp  
copy(a, a + 5, checked_array_iterator<int*>(b, 5));  
```  
  
 a  
  
```cpp  
copy(a, a + 5, checked_array_iterator<int*>(b, 4));  
```  
  
 Si verificherà un errore di runtime.  
  
```cpp  
// compile with: /EHsc /W4 /MTd  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
using namespace stdext;  
  
int main() {  
   int a[]={0, 1, 2, 3, 4};  
   int b[5];  
   copy(a, a + 5, checked_array_iterator<int*>(b, 5));  
  
   cout << "(";  
   for (int i = 0 ; i < 5 ; i++)  
      cout << " " << b[i];  
   cout << " )" << endl;  
  
   // constructor example  
   checked_array_iterator<int*> checked_out_iter(b, 5);  
   copy(a, a + 5, checked_out_iter);  
  
   cout << "(";  
   for (int i = 0 ; i < 5 ; i++)  
      cout << " " << b[i];  
   cout << " )" << endl;  
}  
```  
  
  **\( 0 1 2 3 4 \)**  
**\( 0 1 2 3 4 \)**   
## Esempio  
 Per eliminare la necessità della classe `checked_array_iterator` quando si utilizzano gli algoritmi della libreria C\+\+ standard, si consideri l'utilizzo di un `vector` al posto di una matrice allocata in modo dinamico.  Nell'esempio riportato di seguito viene illustrato come procedere.  
  
```cpp  
// compile with: /EHsc /W4 /MTd  
  
#include <algorithm>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main()  
{  
    std::vector<int> v(10);  
    int *arr = new int[10];  
    for (int i = 0; i < 10; ++i)  
    {  
        v[i] = i;  
        arr[i] = i;  
    }  
  
    // std::copy(v.begin(), v.end(), arr); will result in  
    // warning C4996. To avoid this warning while using int *,  
    // use the Microsoft extension checked_array_iterator.  
    std::copy(v.begin(), v.end(),  
              stdext::checked_array_iterator<int *>(arr, 10));  
  
    // Instead of using stdext::checked_array_iterator and int *,  
    // consider using std::vector to encapsulate the array. This will  
    // result in no warnings, and the code will be portable.  
    std::vector<int> arr2(10);    // Similar to int *arr = new int[10];  
    std::copy(v.begin(), v.end(), arr2.begin());  
  
    for (int j = 0; j < arr2.size(); ++j)  
    {  
        cout << " " << arr2[j];  
    }  
    cout << endl;  
  
    return 0;  
}  
```  
  
  **0 1 2 3 4 5 6 7 8 9**   
### Costruttori  
  
|||  
|-|-|  
|[checked\_array\_iterator](../Topic/checked_array_iterator::checked_array_iterator.md)|Costruisce un `checked_array_iterator` predefinito o un `checked_array_iterator` da un iteratore sottostante.|  
  
### Typedef  
  
|||  
|-|-|  
|[difference\_type](../Topic/checked_array_iterator::difference_type.md)|Tipo che fornisce la differenza tra due `checked_array_iterator` che fanno riferimento agli elementi all'interno dello stesso contenitore.|  
|[puntatore](../Topic/checked_array_iterator::pointer.md)|Tipo che fornisce un puntatore a un elemento a cui punta un `checked_array_iterator`.|  
|[riferimento](../Topic/checked_array_iterator::reference.md)|Tipo che fornisce un riferimento a un elemento a cui punta un `checked_array_iterator`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[base](../Topic/checked_array_iterator::base.md)|Recupera l'iteratore sottostante dal relativo `checked_array_iterator`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\=\=](../Topic/checked_array_iterator::operator==.md)|Verifica l'uguaglianza di due `checked_array_iterator`.|  
|[operator\!\=](../Topic/checked_array_iterator::operator!=.md)|Verifica la disuguaglianza di due `checked_array_iterator`.|  
|[operatore \<](../Topic/checked_array_iterator::operator%3C.md)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è minore di `checked_array_iterator` sul lato destro.|  
|[operatore \>](../Topic/checked_array_iterator::operator%3E.md)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è maggiore di `checked_array_iterator` sul lato destro.|  
|[operatore \<\=](../Topic/checked_array_iterator::operator%3C=.md)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è minore o uguale di `checked_array_iterator` sul lato destro.|  
|[operatore \>\=](../Topic/checked_array_iterator::operator%3E=.md)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è maggiore o uguale a `checked_array_iterator` sul lato destro.|  
|[operator\*](../Topic/checked_array_iterator::operator*.md)|Restituisce l'elemento a cui punta un `checked_array_iterator`.|  
|[operator\-\>](../Topic/checked_array_iterator::operator-%3E.md)|Restituisce un puntatore all'elemento a cui punta un `checked_array_iterator`.|  
|[operator\+\+](../Topic/checked_array_iterator::operator++.md)|Incrementa `checked_array_iterator` all'elemento successivo.|  
|[operator\-\-](../Topic/checked_array_iterator::operator--.md)|Decrementa `checked_array_iterator` all'elemento precedente.|  
|[operator\+\=](../Topic/checked_array_iterator::operator+=.md)|Aggiunge un offset specificato a un `checked_array_iterator`.|  
|[operatore \+](../Topic/checked_array_iterator::operator+.md)|Aggiunge un offset a un iteratore e restituisce il nuovo `checked_array_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|  
|[operator\-\=](../Topic/checked_array_iterator::operator-=.md)|Decrementa un offset specificato da un `checked_array_iterator`.|  
|[operator\-](../Topic/checked_array_iterator::operator-.md)|Decrementa un offset da un iteratore e restituisce il nuovo `checked_array_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|  
|[operator&#91;&#93;](../Topic/checked_array_iterator::operator.md)|Restituisce un riferimento all'offset di un elemento dall'elemento a cui punta un `checked_array_iterator` di un numero specificato di posizioni.|  
  
## Requisiti  
 **Intestazione:** \<iterator\>  
  
 **Spazio dei nomi:** stdext  
  
## Vedere anche  
 [\<iterator\>](../standard-library/iterator.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)