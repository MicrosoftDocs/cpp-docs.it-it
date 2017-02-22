---
title: "Cast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cast"
  - "classi [C++], polimorfismo"
  - "coercizione"
  - "dynamic cast (operatore)"
  - "classi polimorfiche"
  - "static cast (operatore)"
  - "funzioni virtual, in classi derivate"
ms.assetid: 3dbeb06e-2f4b-4693-832d-624bc8ec95de
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Cast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel linguaggio C\+\+ se una classe è derivata da una classe base che contiene funzioni virtuali, un puntatore a quel tipo della classe base può essere utilizzato per chiamare le implementazioni delle funzioni virtuali che si trovano nell'oggetto classe derivata.  La classe che contiene le funzioni virtuali è talvolta detta "classe polimorfica".  
  
 Poiché una classe derivata completamente contiene le definizioni di tutte le classi di base da cui deriva, è possibile eseguire il cast di un puntatore alla gerarchia di classi a una di queste classi base.  Dato un puntatore a una classe base, è possibile eseguire la riduzione del puntatore nella gerarchia.  Questo è possibile se l'oggetto a cui si sta puntando è effettivamente di un tipo derivato dalla classe base.  In questo caso, l'oggetto effettivo è definito "oggetto completo". Al puntatore alla classe base viene detto di puntare a un "oggetto secondario" dell'intero oggetto.  Si consideri ad esempio la gerarchia di classe illustrata nella figura che segue.  
  
 ![Gerarchia delle classi](../cpp/media/vc38zz1.png "vc38ZZ1")  
Gerarchia di classi  
  
 Un oggetto di tipo `C` potrebbe essere visualizzato come illustrato di seguito.  
  
 ![Classe C con sottoggetti B e A](../cpp/media/vc38zz2.png "vc38ZZ2")  
La classe C con oggetto secondario B e oggetto secondario A  
  
 Data un'istanza della classe `C`, esiste un oggetto secondario `B` e un oggetto secondario `A`.  L'istanza di `C`, inclusi gli oggetti secondari `A` e `B`, è "l'oggetto completo".  
  
 Utilizzando le informazioni del tipo di runtime, è possibile verificare se un puntatore punti effettivamente a un oggetto completo e possa essere eseguito il cast in modo sicuro a un altro oggetto nella relativa gerarchia.  L'operatore [dynamic\_cast](../cpp/dynamic-cast-operator.md) può essere utilizzato per eseguire questi tipi di cast.  Esegue inoltre la verifica del runtime necessaria per rendere l'operazione sicura.  
  
 Per la conversione dei tipi non polimorfici, è possibile utilizzare l'operatore [static\_cast](../cpp/static-cast-operator.md) \(in questo argomento viene illustrata la differenza tra le conversioni di cast statiche e dinamiche e quando è consigliabile utilizzarle\).  
  
 In questa sezione vengono trattati i seguenti argomenti:  
  
-   [Operatori di cast](../cpp/casting-operators.md)  
  
-   [Informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md)  
  
## Vedere anche  
 [Espressioni](../cpp/expressions-cpp.md)