---
title: Campi di bit C++
ms.date: 11/19/2018
helpviewer_keywords:
- bitfields [C++]
- fields [C++], bit
- bit fields
ms.assetid: 6f4b62e3-cc1d-4e5d-bf34-05904104f71a
ms.openlocfilehash: b952ca0aab5c4417f22fd958514894c53a39f800
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80170605"
---
# <a name="c-bit-fields"></a>Campi di bit C++

Le classi e le strutture possono contenere membri che occupano uno spazio di archiviazione minore rispetto a un valore di tipo integrale. Questi membri vengono specificati come campi di bit. Di seguito è riportata la sintassi per la specifica del *membro* del campo di bit:

## <a name="syntax"></a>Sintassi

*dichiaratore* **:** *Constant-Expression*

## <a name="remarks"></a>Osservazioni

Il *dichiaratore* (facoltativo) è il nome con cui viene eseguito l'accesso al membro nel programma. e deve essere un valore di tipo integrale (inclusi i tipi enumerati). *Constant-Expression* specifica il numero di bit occupato dal membro nella struttura. I campi di bit anonimi, ovvero membri del campo di bit senza identificatore, possono essere utilizzati per la spaziatura interna.

> [!NOTE]
> Un campo di bit senza nome di larghezza 0 impone l'allineamento del campo di bit successivo al limite del **tipo** successivo, dove **Type** è il tipo del membro.

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

![Layout di memoria di un oggetto data](../cpp/media/vc38uq1.png "Layout della memoria di un oggetto data") <br/>
Layout a memoria fissa dell'oggetto Data

Si noti che `nYear` è lungo 8 bit ed è possibile che venga overflow il confine di parola del tipo dichiarato, **senza segno** **short**. Viene pertanto iniziata all'inizio di un nuovo **short** **senza segno** . Non è necessario che tutti i campi di bit si adattino a un oggetto del tipo sottostante e le nuove unità di archiviazione vengono allocate a seconda del numero di bit necessari per la dichiarazione.

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

il layout della memoria è quindi illustrato nella figura seguente:

![Layout dell'oggetto data con campo&#45;di bit di lunghezza zero](../cpp/media/vc38uq2.png "Layout dell'oggetto data con campo&#45;di bit di lunghezza zero") <br/>
Layout dell'oggetto Data con campo bit a lunghezza 0

Il tipo sottostante di un campo di bit deve essere un tipo integrale, come descritto in [tipi incorporati](../cpp/fundamental-types-cpp.md).

Se l'inizializzatore per un riferimento di tipo `const T&` è un lvalue che fa riferimento a un campo di bit di tipo `T`, il riferimento non è associato direttamente al campo di bit. Al contrario, il riferimento è associato a un oggetto temporaneo inizializzato per conservare il valore del campo di bit.

## <a name="restrictions-on-bit-fields"></a>Limitazioni sui campi di bit

Nell'elenco seguente vengono descritte le operazioni erronee nei campi di bit:

- Acquisizione dell'indirizzo di un campo di bit.

- Inizializzazione di un riferimento non**const** con un campo di bit.

## <a name="see-also"></a>Vedere anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)
