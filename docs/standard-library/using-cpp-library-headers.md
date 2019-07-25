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
ms.openlocfilehash: 9cc0bb51b159f6668adad05ebd2d386364ae2f81
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450066"
---
# <a name="using-c-library-headers"></a>Utilizzo delle intestazioni della libreria C++

È possibile includere il contenuto di un'intestazione standard denominandola in una direttiva include.

```cpp
#include <iostream>// include I/O facilities
```

Le intestazioni standard possono essere incluse in qualsiasi ordine e più di una volta. È inoltre possibile includere due o più intestazioni standard che definiscono la stessa macro o lo stesso tipo. Non includere un'intestazione standard in una dichiarazione. Non definire macro con gli stessi nomi di parole chiave prima di includere un'intestazione standard.

Un'intestazione della libreria C++ include qualsiasi altra intestazione della libreria C++ necessaria per definire i tipi desiderati. Includere sempre in modo esplicito le intestazioni della libreria C++ necessarie in un'unità di conversione, altrimenti si rischia di interpretare in modo errato le effettive dipendenze. Un'intestazione C standard non include mai un'altra intestazione standard. Un'intestazione standard dichiara o definisce solo le entità descritte per essa in questo documento.

Ogni funzione nella libreria è dichiarata in un'intestazione standard. Diversamente dalle intestazioni C standard, le intestazioni standard non forniscono mai una macro di mascheramento con lo stesso nome della funzione che maschera la dichiarazione della funzione e produce lo stesso effetto. Per altre informazioni sulle macro di mascheramento, vedere [C++ Library Conventions](../standard-library/cpp-library-conventions.md) (Convenzioni della libreria C++).

Tutti i nomi diversi da **operator delete** e **operator new** nelle C++ `std` intestazioni della libreria sono definiti nello spazio dei nomi o in uno spazio dei nomi `std` annidato nello spazio dei nomi. Per fare riferimento al nome `cin`, ad esempio, utilizzare `std::cin`. Si noti tuttavia che i nomi di macro non sono soggetti alla qualificazione dello spazio dei nomi, pertanto è necessario sempre scrivere `__STD_COMPLEX` senza qualificatore dello spazio dei nomi.

In alcuni ambienti di traduzione, inclusa C++ un'intestazione di libreria, può sollevare anche nomi `std` esterni dichiarati nello spazio dei nomi nello spazio dei nomi globale, con singole dichiarazioni **using** per ogni nome. In caso contrario, l'intestazione *non* introduce alcun nome di libreria nello spazio dei nomi corrente.

Per C++ lo standard è necessario che le intestazioni standard C dichiarino tutti `std`i nomi esterni nello spazio dei nomi, quindi eseguirne il Lift nello spazio dei nomi globale con le singole dichiarazioni **using** per ogni nome. In alcuni ambienti di conversione tuttavia le intestazioni C standard non includono dichiarazioni dello spazio dei nomi e tutti i nomi vengono dichiarati direttamente nello spazio dei nomi globale. Pertanto, il modo migliore per gestire gli spazi dei nomi consiste nel seguire due regole:

- Per dichiarare con certezza nello spazio dei nomi `std` un nome esterno generalmente dichiarato in \<stdlib.h>, ad esempio, includere l'intestazione \<cstdlib>. Considerare che il nome potrebbe essere dichiarato anche nello spazio dei nomi globale.

- Per dichiarare con certezza nello spazio dei nomi globale un nome esterno dichiarato in \<stdlib.h>, includere direttamente l'intestazione \<stdlib.h>. Considerare che il nome potrebbe essere dichiarato anche nello spazio dei nomi `std`.

Se pertanto si desidera chiamare `std::abort` per causare una terminazione anomala, includere \<cstdlib>. Se si desidera chiamare `abort`, includere \<stdlib.h>.

In alternativa, è possibile scrivere la dichiarazione seguente:

```cpp
using namespace std;
```

che trasporta tutti i nomi di libreria nello spazio dei nomi corrente. Se si scrive questa dichiarazione immediatamente dopo tutte le istruzioni include, si esegue il lift dei nomi nello spazio dei nomi globale. È possibile successivamente ignorare le considerazioni sugli spazi dei nomi nel resto dell'unità di conversione ed evitare la maggior parte delle differenze tra i diversi ambienti di conversione.

A meno che non venga espressamente indicato altrimenti, è possibile non definire i nomi nello spazio dei nomi `std` o in uno spazio dei nomi annidato nello spazio dei nomi `std` nel programma.

## <a name="see-also"></a>Vedere anche

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
