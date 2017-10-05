---
title: Creare un'istanza esplicita | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- templates, instantiation
- explicit instantiation
- instantiation, explicit
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: ecd8f8c893abab10699a0bd43f368356335c6e10
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="explicit-instantiation"></a>creazione di un'istanza esplicita
È possibile utilizzare l'istanziazione esplicita per creare un'istanza di una classe o di una funzione basata su modelli senza utilizzarla nel codice. Poiché questo è utile quando si creano i file di libreria (con estensione lib) che utilizzano modelli per la distribuzione, le definizioni di modello prive di istanza non vengono inserite nei file oggetto (con estensione obj).  
  
 Questo codice crea esplicitamente un'istanza di `MyStack` per le variabili `int` e sei elementi:  
  
```cpp  
template class MyStack<int, 6>;  
```  
  
 Questa istruzione crea un'istanza di `MyStack` senza riservare memoria per un oggetto. Il codice viene generato per tutti i membri.  
  
 La riga successiva crea un'istanza solo della funzione membro costruttore:  
  
```cpp  
template MyStack<int, 6>::MyStack( void );  
```  
  
 È possibile creare in modo esplicito un'istanza di modelli di funzione utilizzando un argomento di tipo specifico per dichiarare nuovamente, come illustrato nell'esempio di [funzione del template](../cpp/function-template-instantiation.md).  
  
 È possibile utilizzare la parola chiave `extern` per impedire la creazione di un'istanza automatica dei membri. Ad esempio:  
  
```cpp  
extern template class MyStack<int, 6>;  
```  
  
 Analogamente, è possibile contrassegnare i membri specifici come esterni e non istanziati:  
  
```cpp  
extern template MyStack<int, 6>::MyStack( void );  
```  
  
 È possibile utilizzare la parola chiave `extern` per impedire al compilatore di generare la stessa istanza di codice in più di un modulo oggetto. È necessario creare istanze della funzione del modello utilizzando i parametri di modello specificati espliciti in almeno un modulo collegato se la funzione viene chiamata o verrà generato un errore del linker quando il programma viene compilato.  
  
> [!NOTE]
>  La parola chiave `extern` nella specializzazione si applica solo alle funzioni membro definite all'esterno del corpo della classe. Le funzioni definite all'interno della dichiarazione della classe vengono considerate funzioni inline e ne viene sempre creata un'istanza.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)
