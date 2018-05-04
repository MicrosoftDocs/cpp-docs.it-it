---
title: Creare un'istanza esplicita | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- templates, instantiation
- explicit instantiation
- instantiation, explicit
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f4925a60843ada350a2795709d9257ab796616a7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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