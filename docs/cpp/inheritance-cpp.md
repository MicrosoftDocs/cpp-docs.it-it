---
title: "Ereditarietà (C++) | Documenti Microsoft"
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
- derived classes [C++]
- derived classes [C++], about derived classes
- classes [C++], derived
ms.assetid: 3534ca19-d9ed-4a40-be1b-b921ad0e6956
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: dba45acbc602465db876038e83cb0cd496b2337e
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="inheritance--c"></a>Ereditarietà (C++)
In questa sezione viene illustrato come utilizzare le classi derivate per produrre programmi estensibili.  
  
## <a name="overview"></a>Panoramica  
 Nuove classi possono essere derivate dalle classi esistenti mediante un meccanismo denominato "ereditarietà" (vedere le informazioni fornite in [ereditarietà singola](../cpp/single-inheritance.md)). Le classi utilizzate per la derivazione sono denominate "classi base" di una determinata classe derivata. Una classe derivata viene dichiarata utilizzando la sintassi seguente:  
  
```  
 class Derived : [virtual] [access-specifier] Base  
{  
   // member list  
};  
 class Derived : [virtual] [access-specifier] Base1,  
 [virtual] [access-specifier] Base2, . . .  
{  
   // member list  
};  
```  
  
 Dopo il tag (nome) della classe, vengono visualizzati i due punti seguiti da un elenco di specifiche di base.  Le classi base così denominate devono essere state dichiarate in precedenza.  Le specifiche di base possono contenere un identificatore di accesso, ovvero una delle parole chiave **pubblica**, `protected` o `private`.  Gli identificatori di accesso vengono visualizzati prima del nome della classe base e si applicano solo a tale classe.  Questi identificatori controllano l'autorizzazione della classe derivata a utilizzare i membri della classe base.  Vedere [controllo di accesso ai membri](../cpp/member-access-control-cpp.md) per informazioni sull'accesso ai membri della classe base.  Se l'identificatore di accesso viene omesso, l'accesso a tale base viene considerato `private`.  Le specifiche di base possono contenere la parola chiave **virtuale** per indicare l'ereditarietà virtuale.  Questa parola chiave può essere visualizzata prima o dopo l'identificatore di accesso, se presente.  Se viene utilizzata l'ereditarietà virtuale, la classe base viene definita come una classe base virtuale.  
  
 È possibile specificare più classi base, separandole con virgole.  Se viene specificata una singola classe di base, il modello di ereditarietà è [ereditarietà singola](../cpp/single-inheritance.md). Se è specificata più di una classe di base, viene chiamato il modello di ereditarietà [ereditarietà multipla](http://msdn.microsoft.com/en-us/3b74185e-2beb-4e29-8684-441e51d2a2ca),  
  
 Sono inclusi i seguenti argomenti:  
  
-   [Ereditarietà singola](../cpp/single-inheritance.md)  
  
-   [Ereditarietà multipla](http://msdn.microsoft.com/en-us/3b74185e-2beb-4e29-8684-441e51d2a2ca)  
  
-   [Più classi base](../cpp/multiple-base-classes.md)  
  
-   [Funzioni virtuali](../cpp/virtual-functions.md)  
  
-   [Override espliciti](../cpp/explicit-overrides-cpp.md)  
  
-   [Classi astratte](../cpp/abstract-classes-cpp.md)  
  
-   [Riepilogo delle regole di ambito](../cpp/summary-of-scope-rules.md)  
  
 Il [super](../cpp/super.md) e [Interface](../cpp/interface.md) parole chiave sono documentate in questa sezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)
