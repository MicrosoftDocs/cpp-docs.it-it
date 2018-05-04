---
title: Regole in modalità batch | Documenti Microsoft
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
ms.openlocfilehash: 2b002b17fcc70ff4e374fb0630e9c18a52cbfc4f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="batch-mode-rules"></a>Regole in modalità batch
```  
{frompath}.fromext{topath}.toext::  
   commands  
```  
  
 Le regole di inferenza in modalità batch forniscono solo una singola chiamata della regola di inferenza quando N comandi go tramite questa regola di inferenza. Senza regole di inferenza in modalità batch, sarebbe necessario N comandi da richiamare. N è il numero di dipendenti che attivano la regola di inferenza.  
  
 Makefile che contengono regole di inferenza in modalità batch devono utilizzare NMAKE 1.62 o versione successiva. Per controllare la versione NMAKE, eseguire la macro NMAKE_VER disponibile con NMAKE versione 1.62 o versione successiva. La macro restituisce una stringa che rappresenta la versione del prodotto Visual C++.  
  
 L'unica differenza sintattica dalla regola di inferenza standard è che la regola di inferenza in modalità batch è terminata con un doppio carattere due punti (:).  
  
> [!NOTE]
>  Lo strumento richiamato deve essere in grado di gestire più file. La regola di inferenza in modalità batch è necessario utilizzare `$<` come la macro per accedere ai file dipendenti.  
  
 Le regole di inferenza in modalità batch possono velocizzare il processo di compilazione. Risulta più veloce per fornire i file per il compilatore in batch, poiché il driver del compilatore viene richiamato una sola volta. Ad esempio, il compilatore C e C++ offre prestazioni migliori quando si gestisce un set di file perché è possibile rimanere in memoria durante il processo.  
  
 Nell'esempio seguente viene illustrato come utilizzare le regole di inferenza in modalità batch:  
  
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
  
 NMAKE produce il seguente output senza regole di inferenza in modalità batch:  
  
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
  
 NMAKE produce il seguente risultato con le regole di inferenza in modalità batch:  
  
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