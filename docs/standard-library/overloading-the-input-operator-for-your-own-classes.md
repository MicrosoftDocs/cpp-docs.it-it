---
title: Overload dell'operatore &gt;&gt; per classi personalizzate
ms.date: 11/04/2016
helpviewer_keywords:
- operator>>
- operator>>, overloading for your own classes
- operator >>, overloading for your own classes
ms.assetid: 40dab4e0-3f97-4745-9cc8-b86e740fa246
ms.openlocfilehash: 672dfb7ec40b2f18cbde0adc92522d3194a5e738
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450129"
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

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)
