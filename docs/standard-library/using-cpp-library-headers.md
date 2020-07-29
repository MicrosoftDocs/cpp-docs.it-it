---
title: Utilizzo delle intestazioni della libreria C++
ms.date: 11/04/2016
helpviewer_keywords:
- headers, naming in C++ include directive
- standard header in C++
- headers
- INCLUDE directive
- headers, C++ Standard Library
- library headers
- C++ Standard Library, headers
ms.assetid: a36e889e-1af2-4cd9-a211-bfc7a3fd8e85
ms.openlocfilehash: a73ebebb4fdde5dd72f148390d004c32b9f4dff7
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215478"
---
# <a name="using-c-library-headers"></a>Utilizzo delle intestazioni della libreria C++

È possibile includere il contenuto di un'intestazione standard denominandola in una direttiva include.

```cpp
#include <iostream>// include I/O facilities
```

Le intestazioni standard possono essere incluse in qualsiasi ordine e più di una volta. È inoltre possibile includere due o più intestazioni standard che definiscono la stessa macro o lo stesso tipo. Non includere un'intestazione standard in una dichiarazione. Non definire macro con gli stessi nomi di parole chiave prima di includere un'intestazione standard.

Un'intestazione della libreria C++ include qualsiasi altra intestazione della libreria C++ necessaria per definire i tipi desiderati. (Includere sempre in modo esplicito tutte le intestazioni della libreria C++ necessarie in un'unità di conversione, per evitare di indovinare le dipendenze effettive). Un'intestazione C standard non include mai un'altra intestazione standard. Un'intestazione standard dichiara o definisce solo le entità descritte per essa in questo documento.

Ogni funzione nella libreria è dichiarata in un'intestazione standard. Diversamente dalle intestazioni C standard, le intestazioni standard non forniscono mai una macro di mascheramento con lo stesso nome della funzione che maschera la dichiarazione della funzione e produce lo stesso effetto. Per altre informazioni sulle macro di mascheramento, vedere [C++ Library Conventions](../standard-library/cpp-library-conventions.md) (Convenzioni della libreria C++).

Tutti i nomi diversi da **operator delete** e **operator new** nelle intestazioni della libreria C++ sono definiti nello `std` spazio dei nomi o in uno spazio dei nomi annidato nello `std` spazio dei nomi. Per fare riferimento al nome `cin`, ad esempio, utilizzare `std::cin`. Si noti tuttavia che i nomi di macro non sono soggetti alla qualificazione dello spazio dei nomi, pertanto è necessario sempre scrivere `__STD_COMPLEX` senza qualificatore dello spazio dei nomi.

In alcuni ambienti di traduzione, inclusa un'intestazione della libreria C++, può sollevare anche nomi esterni dichiarati nello `std` spazio dei nomi nello spazio dei nomi globale, con singole **`using`** dichiarazioni per ognuno dei nomi. In caso contrario, l'intestazione *non* introduce alcun nome di libreria nello spazio dei nomi corrente.

Lo standard C++ richiede che le intestazioni standard C dichiarino tutti i nomi esterni nello spazio dei nomi `std` , quindi li elevano allo spazio dei nomi globale con singole **`using`** dichiarazioni per ognuno dei nomi. In alcuni ambienti di conversione tuttavia le intestazioni C standard non includono dichiarazioni dello spazio dei nomi e tutti i nomi vengono dichiarati direttamente nello spazio dei nomi globale. Pertanto, il modo migliore per gestire gli spazi dei nomi consiste nel seguire due regole:

- Per dichiarare in modo sicuro nello spazio dei nomi `std` un nome esterno tradizionalmente dichiarato in \<stdlib.h> , ad esempio, includere l'intestazione \<cstdlib> . Considerare che il nome potrebbe essere dichiarato anche nello spazio dei nomi globale.

- Per dichiarare in modo sicuro nello spazio dei nomi globale un nome esterno dichiarato in \<stdlib.h> , includere \<stdlib.h> direttamente l'intestazione. Considerare che il nome potrebbe essere dichiarato anche nello spazio dei nomi `std`.

Pertanto, se si desidera chiamare `std::abort` per provocare una chiusura anomala, è necessario includere \<cstdlib> . Se si desidera chiamare `abort` , è necessario includere \<stdlib.h> .

In alternativa, è possibile scrivere la dichiarazione seguente:

```cpp
using namespace std;
```

che trasporta tutti i nomi di libreria nello spazio dei nomi corrente. Se si scrive questa dichiarazione immediatamente dopo tutte le istruzioni include, si esegue il lift dei nomi nello spazio dei nomi globale. È possibile successivamente ignorare le considerazioni sugli spazi dei nomi nel resto dell'unità di conversione ed evitare la maggior parte delle differenze tra i diversi ambienti di conversione.

A meno che non venga espressamente indicato altrimenti, è possibile non definire i nomi nello spazio dei nomi `std` o in uno spazio dei nomi annidato nello spazio dei nomi `std` nel programma.

## <a name="see-also"></a>Vedere anche

[Panoramica della libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
