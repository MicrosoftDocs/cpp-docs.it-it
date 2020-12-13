---
description: "Altre informazioni su: overload dell' &gt; &gt; operatore per classi personalizzate"
title: Overload dell'operatore &gt;&gt; per classi personalizzate
ms.date: 11/04/2016
helpviewer_keywords:
- operator>>
- operator>>, overloading for your own classes
- operator >>, overloading for your own classes
ms.assetid: 40dab4e0-3f97-4745-9cc8-b86e740fa246
ms.openlocfilehash: 4de7c16dd1c42f85f169da50f11a514eb245b47c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340853"
---
# <a name="overloading-the-gtgt-operator-for-your-own-classes"></a>Overload dell'operatore &gt;&gt; per classi personalizzate

I flussi di input usano l'operatore di estrazione (`>>`) per i tipi standard. È possibile scrivere operatori di estrazione simili per i tipi personalizzati. L'esito positivo dipende dall'uso degli spazi vuoti in modo preciso.

Di seguito è riportato un esempio di un operatore di estrazione per la classe `Date` presentata in precedenza:

```cpp
istream& operator>> (istream& is, Date& dt)
{
    is>> dt.mo>> dt.da>> dt.yr;
    return is;
}
```

## <a name="see-also"></a>Vedi anche

[Flussi di input](../standard-library/input-streams.md)
