---
description: 'Altre informazioni su: ereditarietà (C++)'
title: Ereditarietà (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- derived classes [C++]
- derived classes [C++], about derived classes
- classes [C++], derived
ms.assetid: 3534ca19-d9ed-4a40-be1b-b921ad0e6956
ms.openlocfilehash: d3007b8e12d6ba695a8a3e6604270a65f1118bb2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97113896"
---
# <a name="inheritance--c"></a>Ereditarietà (C++)

In questa sezione viene illustrato come utilizzare le classi derivate per produrre programmi estensibili.

## <a name="overview"></a>Panoramica

Le nuove classi possono essere derivate dalle classi esistenti usando un meccanismo denominato "ereditarietà" (vedere le informazioni a partire da [Single ereditarietà](../cpp/single-inheritance.md)). Le classi utilizzate per la derivazione sono denominate "classi base" di una determinata classe derivata. Una classe derivata viene dichiarata utilizzando la sintassi seguente:

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

Dopo il tag (nome) della classe, vengono visualizzati i due punti seguiti da un elenco di specifiche di base.  Le classi base così denominate devono essere state dichiarate in precedenza.  Le specifiche di base possono contenere un identificatore di accesso, ovvero una delle parole **`public`** chiave **`protected`** o **`private`** .  Gli identificatori di accesso vengono visualizzati prima del nome della classe base e si applicano solo a tale classe.  Questi identificatori controllano l'autorizzazione della classe derivata a utilizzare i membri della classe base.  Per informazioni sull'accesso ai membri della classe base, vedere [controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md) .  Se l'identificatore di accesso viene omesso, viene considerato l'accesso a tale base **`private`** .  Le specifiche di base possono contenere la parola chiave **`virtual`** per indicare l'ereditarietà virtuale.  Questa parola chiave può essere visualizzata prima o dopo l'identificatore di accesso, se presente.  Se viene utilizzata l'ereditarietà virtuale, la classe base viene definita come una classe base virtuale.

È possibile specificare più classi base, separandole con virgole.  Se viene specificata una singola classe base, il modello di ereditarietà è [Single ereditarietà](../cpp/single-inheritance.md). Se viene specificata più di una classe base, il modello di ereditarietà viene chiamato [ereditarietà multipla](../cpp/multiple-base-classes.md).

Vengono trattati gli argomenti seguenti:

- [Ereditarietà singola](../cpp/single-inheritance.md)

- [Classi di base multiple](../cpp/multiple-base-classes.md)

- [Funzioni virtuali](../cpp/virtual-functions.md)

- [Override espliciti](../cpp/explicit-overrides-cpp.md)

- [Classi astratte](../cpp/abstract-classes-cpp.md)

- [Riepilogo delle regole di ambito](../cpp/summary-of-scope-rules.md)

Le parole chiave [__super](../cpp/super.md) e [__interface](../cpp/interface.md) sono descritte in questa sezione.

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)
