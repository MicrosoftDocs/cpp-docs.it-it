---
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
ms.openlocfilehash: 874866627099eb5aeb318273db26a976e99bac7f
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439875"
---
# <a name="extracting-a-library-member"></a>Estrazione di membri dalle librerie

È possibile utilizzare LIB per creare un file oggetto (. obj) contenente una copia di un membro di una libreria esistente. Per estrarre una copia di un membro, usare la sintassi seguente:

```
LIB library /EXTRACT:member /OUT:objectfile
```

Questo comando crea un file con estensione obj denominato *objectfile* contenente una copia di un `member` di una *libreria*. Il nome del `member` distingue tra maiuscole e minuscole. È possibile estrarre un solo membro in un unico comando. L'opzione/OUT è obbligatoria. Nessun nome di output predefinito. Se un file denominato *objectfile* esiste già nella directory specificata (o nella directory corrente, se non è specificata alcuna directory con *objectfile*), il *objectfile* Estratto sostituisce il file esistente.

## <a name="see-also"></a>Vedere anche

[Riferimento a LIB](lib-reference.md)
