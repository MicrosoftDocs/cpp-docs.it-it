---
title: Regole in modalità batch | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inference rules in NMAKE
- NMAKE program, inference rules
- batch-mode inference rules in NMAKE
ms.assetid: 0650b547-ef19-4455-9bba-fa567dcf88f2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4ddc5983f6a18146d12c75484e0db70f12797b35
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706238"
---
# <a name="batch-mode-rules"></a>Regole in modalità batch

```
{frompath}.fromext{topath}.toext::
   commands
```

Regole di inferenza in modalità batch forniscono solo una singola chiamata della regola di inferenza dei tipi quando i comandi di N passano attraverso questa regola di inferenza. Senza regole di inferenza in modalità batch, sarebbe necessario comandi N da richiamare. N è il numero di dipendenti che attivano la regola di inferenza.

Makefile che contengono regole di inferenza in modalità batch devono usare NMAKE 1.62 o versione successiva. Per controllare la versione NMAKE, eseguire la macro NMAKE_VER disponibile con NMAKE versione 1.62 o versione successiva. La macro restituisce una stringa che rappresenta la versione del prodotto Visual C++.

L'unica differenza sintattica dalla regola di inferenza standard è che la regola di inferenza in modalità batch è terminata con un doppio due punti (:).

> [!NOTE]
>  Lo strumento di richiamata deve essere in grado di gestire più file. La regola di inferenza in modalità batch deve usare `$<` come la macro per accedere ai file dipendenti.

Le regole di inferenza in modalità batch possono accelerare il processo di compilazione. È più veloce per fornire i file del compilatore nel batch, poiché il driver a compilatore viene richiamato una sola volta. Ad esempio, il compilatore C e C++ offre prestazioni migliori quando si gestisce un set di file perché è possibile rimanere in memoria durante il processo.

Nell'esempio seguente viene illustrato come utilizzare regole di inferenza in modalità batch:

```
#
# sample makefile to illustrate batch-mode inference rules
#
O = .
S = .
Objs = $O/foo1.obj $O/foo2.obj $O/foo2.obj $O/foo3.obj $O/foo4.obj
CFLAGS = -nologo

all : $(Objs)

!ifdef NOBatch
{$S}.cpp{$O}.obj:
!else
{$S}.cpp{$O}.obj::
!endif
   $(CC) $(CFLAGS) -Fd$O\ -c $<

$(Objs) :

#end of makefile
```

NMAKE produce l'output seguente senza regole di inferenza in modalità batch:

```
E:\tmp> nmake -f test.mak -a NOBatch=1

Microsoft (R) Program Maintenance Utility   Version 7.00.0000
Copyright (C) Microsoft Corp 1988-2001. All rights reserved.
        cl -nologo -Fd.\ -c .\foo1.cpp
foo1.cpp
        cl -nologo -Fd.\ -c .\foo2.cpp
foo2.cpp
        cl -nologo -Fd.\ -c .\foo3.cpp
foo3.cpp
        cl -nologo -Fd.\ -c .\foo4.cpp
foo4.cpp
```

NMAKE produce il risultato seguente con le regole di inferenza in modalità batch:

```
E:\tmp> nmake -f test.mak -a

Microsoft (R) Program Maintenance Utility   Version 7.00.0000
Copyright (C) Microsoft Corp 1988-2001. All rights reserved.

        cl -nologo -Fd.\ -c .\foo1.cpp .\foo2.cpp .\foo3.cpp .\foo4.cpp
foo1.cpp
foo2.cpp
foo3.cpp
foo4.cpp
Generating Code...
```

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)