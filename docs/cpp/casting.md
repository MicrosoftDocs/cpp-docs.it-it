---
title: Esegue il cast | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- casting [C++]
- coercion [C++]
- virtual functions [C++], in derived classes [C++]
- static cast operator
- dynamic cast operator
- polymorphic classes [C++]
- classes [C++], polymorphism
ms.assetid: 3dbeb06e-2f4b-4693-832d-624bc8ec95de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c7dfe18c65fcde7cbfa0ea2121234f2896a2723
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39405019"
---
# <a name="casting"></a>Cast
Nel linguaggio C++ se una classe è derivata da una classe base che contiene funzioni virtuali, un puntatore a quel tipo della classe base può essere utilizzato per chiamare le implementazioni delle funzioni virtuali che si trovano nell'oggetto classe derivata. La classe che contiene le funzioni virtuali è talvolta detta "classe polimorfica".  
  
 Poiché una classe derivata completamente contiene le definizioni di tutte le classi di base da cui deriva, è possibile eseguire il cast di un puntatore alla gerarchia di classi a una di queste classi base. Dato un puntatore a una classe base, è possibile eseguire la riduzione del puntatore nella gerarchia. Questo è possibile se l'oggetto a cui si sta puntando è effettivamente di un tipo derivato dalla classe base. In questo caso, l'oggetto effettivo è definito "oggetto completo". Al puntatore alla classe base viene detto di puntare a un "oggetto secondario" dell'intero oggetto. Si consideri ad esempio la gerarchia di classe illustrata nella figura che segue.  
  
 ![Gerarchia delle classi](../cpp/media/vc38zz1.gif "vc38ZZ1")  
Gerarchia di classi  
  
 Un oggetto di tipo `C` potrebbe essere visualizzato come illustrato di seguito.  
  
 ![La classe C con sub&#45;gli oggetti B e A](../cpp/media/vc38zz2.gif "vc38ZZ2")  
La classe C con oggetto secondario B e oggetto secondario A  
  
 Data un'istanza della classe `C`, esiste un oggetto secondario `B` e un oggetto secondario `A`. L'istanza di `C`, inclusi gli oggetti secondari `A` e `B`, è "l'oggetto completo".  
  
 Utilizzando le informazioni del tipo di runtime, è possibile verificare se un puntatore punti effettivamente a un oggetto completo e possa essere eseguito il cast in modo sicuro a un altro oggetto nella relativa gerarchia. Il [dynamic_cast](../cpp/dynamic-cast-operator.md) operatore può essere usato per rendere questi tipi di cast. Esegue inoltre la verifica del runtime necessaria per rendere l'operazione sicura.  
  
 Per la conversione dei tipi non polimorfici, è possibile usare la [static_cast](../cpp/static-cast-operator.md) operatore (in questo argomento illustra la differenza tra le conversioni di cast statiche e dinamiche e quando è appropriato usare ciascuna).  
  
 In questa sezione vengono trattati i seguenti argomenti:  
  
-   [Operatori di cast](../cpp/casting-operators.md)  
  
-   [Informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni](../cpp/expressions-cpp.md)