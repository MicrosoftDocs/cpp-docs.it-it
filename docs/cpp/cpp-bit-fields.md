---
title: Campi di Bit C++ | Documenti Microsoft
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
ms.openlocfilehash: db5ecac0263f1e8ebbfe41f654f2ef2e03b2395f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="c-bit-fields"></a>Campi di bit C++
Le classi e le strutture possono contenere membri che occupano uno spazio di archiviazione minore rispetto a un valore di tipo integrale. Questi membri vengono specificati come campi di bit. La sintassi per il campo di bit *dichiaratore di membro* seguente:  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
declarator  : constant-expression  
```  
  
## <a name="remarks"></a>Note  
 L'elemento `declarator` (facoltativo) è il nome con cui il membro accede al programma e deve essere un valore di tipo integrale (inclusi i tipi enumerati). Il *espressione costante* specifica il numero di bit, il membro occupa nella struttura. I campi di bit anonimi, ovvero membri del campo di bit senza identificatore, possono essere usati per la spaziatura interna.  
  
> [!NOTE]
>  Un campo di bit senza nome di larghezza 0 forza l'allineamento del campo di bit successivo al limite seguente `type`, dove `type` è il tipo del membro.  
  
 Nell'esempio seguente viene dichiarata una struttura contenente i campi di bit:  
  
```  
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
  
 ![Layout della memoria di un oggetto data](../cpp/media/vc38uq1.png "vc38UQ1")  
Layout a memoria fissa dell'oggetto Data  
  
 Si noti che `nYear` è lungo 8 bit ed eccederebbe il confine di parola del tipo dichiarato, **unsigned short**. Pertanto, viene inizializzato all'inizio di un nuovo **unsigned short**. Non è necessario che tutti i campi di bit si adattino a un oggetto del tipo sottostante e le nuove unità di archiviazione vengono allocate a seconda del numero di bit necessari per la dichiarazione.  
  
 **Sezione specifica Microsoft**  
  
 L'ordine dei dati dichiarati come campi di bit va dal bit meno significativo a quello più significativo, come illustrato nella figura precedente.  
  
 **Fine sezione specifica Microsoft**  
  
 Se la dichiarazione di una struttura include un campo senza nome di lunghezza 0, come indicato nell'esempio seguente,  
  
```  
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
  
 il layout di memoria è analogo a quello illustrato nella figura seguente.  
  
 ![Layout dell'oggetto data con zero&#45;il campo di bit di lunghezza](../cpp/media/vc38uq2.png "vc38UQ2")  
Layout dell'oggetto Data con campo bit a lunghezza 0  
  
 Il tipo sottostante di un campo di bit deve essere un tipo integrale, come descritto [tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
## <a name="restrictions-on-bit-fields"></a>Limitazioni sui campi di bit  
 Nell'elenco seguente vengono descritte le operazioni erronee nei campi di bit:  
  
1.  Acquisizione dell'indirizzo di un campo di bit.  
  
2.  Inizializzazione di un riferimento con un campo di bit.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../cpp/classes-and-structs-cpp.md)