---
title: Campi di Bit C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- bitfields [C++]
- fields [C++], bit
- bit fields
ms.assetid: 6f4b62e3-cc1d-4e5d-bf34-05904104f71a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4dcfd93d1529844c7e5b72d61a6f1fd87d6dd3a7
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940436"
---
# <a name="c-bit-fields"></a>Campi di bit C++

Le classi e le strutture possono contenere membri che occupano uno spazio di archiviazione minore rispetto a un valore di tipo integrale. Questi membri vengono specificati come campi di bit. La sintassi di campo di bit *dichiaratore di membro* specifica seguente:

## <a name="syntax"></a>Sintassi

*dichiaratore* **:** *espressione costante*

## <a name="remarks"></a>Note

(Facoltativo) *dichiaratore* è il nome mediante il quale il membro accede al programma. e deve essere un valore di tipo integrale (inclusi i tipi enumerati). Il *espressione costante* specifica il numero di bit il membro occupa nella struttura. I campi di bit anonimi, ovvero membri del campo di bit senza identificatore, possono essere usati per la spaziatura interna.

> [!NOTE]
> Un campo di bit senza nome di larghezza 0 forza l'allineamento del campo di bit successivo a quello successivo **tipo** limite, in cui **tipo** è il tipo del membro.

 Nell'esempio seguente viene dichiarata una struttura contenente i campi di bit:

```cpp
// bit_fields1.cpp
// compile with: /LD
struct Date {
   unsigned short nWeekDay  : 3;    // 0..7   (3 bits)
   unsigned short nMonthDay : 6;    // 0..31  (6 bits)
   unsigned short nMonth    : 5;    // 0..12  (5 bits)
   unsigned short nYear     : 8;    // 0..100 (8 bits)
};
```

Il layout concettuale di memoria di un oggetto di tipo `Date` viene illustrato nella figura seguente.

![Layout di memoria dell'oggetto date](../cpp/media/vc38uq1.png "vc38UQ1") Layout di memoria dell'oggetto data

Si noti che `nYear` è lungo 8 bit ed eccederebbe il confine di parola del tipo dichiarato **senza segno** **breve**. Pertanto, viene inizializzato all'inizio di una nuova **unsigned** **breve**. Non è necessario che tutti i campi di bit si adattino a un oggetto del tipo sottostante e le nuove unità di archiviazione vengono allocate a seconda del numero di bit necessari per la dichiarazione.

**Sezione specifica Microsoft**

L'ordine dei dati dichiarati come campi di bit va dal bit meno significativo a quello più significativo, come illustrato nella figura precedente.

**Fine sezione specifica Microsoft**

Se la dichiarazione di una struttura include un campo senza nome di lunghezza 0, come indicato nell'esempio seguente,

```cpp
// bit_fields2.cpp
// compile with: /LD
struct Date {
   unsigned nWeekDay  : 3;    // 0..7   (3 bits)
   unsigned nMonthDay : 6;    // 0..31  (6 bits)
   unsigned           : 0;    // Force alignment to next boundary.
   unsigned nMonth    : 5;    // 0..12  (5 bits)
   unsigned nYear     : 8;    // 0..100 (8 bits)
};
```

quindi il layout di memoria è come illustrato nella figura seguente:

![Layout dell'oggetto data con zero&#45;campo di bit di lunghezza](../cpp/media/vc38uq2.png "vc38UQ2") Layout dell'oggetto data con campo Bit a lunghezza Zero

Il tipo sottostante di un campo di bit deve essere un tipo integrale, come descritto in [tipi fondamentali](../cpp/fundamental-types-cpp.md).

Se l'inizializzatore per un riferimento di tipo `const T&` è un lvalue che fa riferimento a un campo di bit del tipo `T`, il riferimento non è associato direttamente a campo di bit. Al contrario, il riferimento è associato a una variabile temporanea inizializzata per contenere il valore del campo di bit.

## <a name="restrictions-on-bit-fields"></a>Limitazioni sui campi di bit

Nell'elenco seguente vengono descritte le operazioni erronee nei campi di bit:

- Acquisizione dell'indirizzo di un campo di bit.

- L'inizializzazione non -**const** riferimento con un campo di bit.

## <a name="see-also"></a>Vedere anche

- [Classi e struct](../cpp/classes-and-structs-cpp.md)
