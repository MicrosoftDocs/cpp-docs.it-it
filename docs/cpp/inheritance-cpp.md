---
title: Ereditarietà (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- derived classes [C++]
- derived classes [C++], about derived classes
- classes [C++], derived
ms.assetid: 3534ca19-d9ed-4a40-be1b-b921ad0e6956
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3181369f492f82fca1590e07655e728dbbcd40ff
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38958598"
---
# <a name="inheritance--c"></a>Ereditarietà (C++)
In questa sezione viene illustrato come utilizzare le classi derivate per produrre programmi estensibili.  
  
## <a name="overview"></a>Panoramica  
 Nuove classi possono essere derivate dalle classi esistenti mediante un meccanismo denominato "ereditarietà" (vedere le informazioni fornite in [ereditarietà singola](../cpp/single-inheritance.md)). Le classi utilizzate per la derivazione sono denominate "classi base" di una determinata classe derivata. Una classe derivata viene dichiarata utilizzando la sintassi seguente:  
  
```cpp 
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
  
Dopo il tag (nome) della classe, vengono visualizzati i due punti seguiti da un elenco di specifiche di base.  Le classi base così denominate devono essere state dichiarate in precedenza.  Le specifiche di base possono contenere un identificatore di accesso, vale a dire una delle parole chiave **pubbliche**, **protetti** oppure **private**.  Gli identificatori di accesso vengono visualizzati prima del nome della classe base e si applicano solo a tale classe.  Questi identificatori controllano l'autorizzazione della classe derivata a utilizzare i membri della classe base.  Visualizzare [controllo di accesso ai membri](../cpp/member-access-control-cpp.md) per informazioni sull'accesso ai membri della classe base.  Se l'identificatore di accesso viene omesso, l'accesso a tale base viene considerato **privato**.  Le specifiche di base possono contenere la parola chiave **virtuale** per indicare l'ereditarietà virtuale.  Questa parola chiave può essere visualizzata prima o dopo l'identificatore di accesso, se presente.  Se viene utilizzata l'ereditarietà virtuale, la classe base viene definita come una classe base virtuale.  
  
 È possibile specificare più classi base, separandole con virgole.  Se una singola classe di base viene specificata, il modello di ereditarietà viene [ereditarietà singola](../cpp/single-inheritance.md). Se è specificata più di una classe di base, il modello di ereditarietà viene chiamato [ereditarietà multipla](../cpp/multiple-base-classes.md).  
  
 Sono inclusi i seguenti argomenti:  
  
-   [Ereditarietà singola](../cpp/single-inheritance.md)  
  
-   [Più classi base](../cpp/multiple-base-classes.md)  
  
-   [Funzioni virtuali](../cpp/virtual-functions.md)  
  
-   [Override espliciti](../cpp/explicit-overrides-cpp.md)  
  
-   [Classi astratte](../cpp/abstract-classes-cpp.md)  
  
-   [Riepilogo delle regole di ambito](../cpp/summary-of-scope-rules.md)  
  
 Il [super](../cpp/super.md) e [Interface](../cpp/interface.md) parole chiave sono documentate in questa sezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)
