---
description: 'Altre informazioni su: estrazione di un membro di libreria'
title: Estrazione di membri dalle librerie
ms.date: 11/04/2016
helpviewer_keywords:
- LIB [C++], extracting library members
- EXTRACT library manager option
- libraries, extracting members
- -EXTRACT library manager option
- extracting library members
- /EXTRACT library manager option
ms.assetid: a2c5c2a1-9b7e-489a-a9a4-1dec694e1fc5
ms.openlocfilehash: 8797db6baa08fc36cf288f5b23d73ff730edd973
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192317"
---
# <a name="extracting-a-library-member"></a>Estrazione di membri dalle librerie

È possibile utilizzare LIB per creare un file oggetto (. obj) contenente una copia di un membro di una libreria esistente. Per estrarre una copia di un membro, usare la sintassi seguente:

```
LIB library /EXTRACT:member /OUT:objectfile
```

Questo comando crea un file con estensione obj denominato *objectfile* che contiene una copia di un `member` di una *libreria*. Il `member` nome fa distinzione tra maiuscole e minuscole. È possibile estrarre un solo membro in un unico comando. L'opzione/OUT è obbligatoria. Nessun nome di output predefinito. Se un file denominato *objectfile* esiste già nella directory specificata (o nella directory corrente, se non è specificata alcuna directory con *objectfile*), il *objectfile* Estratto sostituisce il file esistente.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento a LIB](lib-reference.md)
