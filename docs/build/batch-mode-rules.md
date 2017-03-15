---
title: "Regole in modalit&#224; batch | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regole di inferenza in modalità batch in NMAKE"
  - "regole di inferenza in NMAKE"
  - "NMAKE (programma), regole di inferenza"
ms.assetid: 0650b547-ef19-4455-9bba-fa567dcf88f2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Regole in modalit&#224; batch
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

```  
{frompath}.fromext{topath}.toext::  
   commands  
```  
  
 Le regole di inferenza in modalità batch consentono una sola chiamata della regola di inferenza quando quest'ultima è sottoposta a N comandi.  In assenza di regole di inferenza in modalità batch, sarebbe necessario richiamare N comandi.  N è il numero di dipendenti che attivano la regola di inferenza.  
  
 I makefile contenenti regole di inferenza in modalità batch devono utilizzare NMAKE 1.62 o versione successiva.  Per controllare la versione di NMAKE, eseguire la macro \_NMAKE\_VER disponibile in NMAKE 1.62 o versione successiva.  Questa macro restituisce una stringa che indica la versione di Visual C\+\+.  
  
 L'unica differenza sintattica rispetto alla regola di inferenza standard consiste nel fatto che la regola di inferenza in modalità batch termina con una coppia di due punti \(::\).  
  
> [!NOTE]
>  Lo strumento richiamato deve consentire la gestione di più file.  Nelle regole di inferenza in modalità batch la macro utilizzata per accedere ai file dipendenti deve essere `$<`.  
  
 L'utilizzo delle regole di inferenza in modalità batch può rendere più rapido il processo di compilazione.  I file vengono infatti forniti più velocemente al compilatore in batch dal momento che il driver del compilatore viene richiamato una sola volta.  Le prestazioni del compilatore C e C\+\+, ad esempio, sono migliori quando viene gestito un insieme di file, in quanto il compilatore può rimanere in memoria durante il processo.  
  
 Nell'esempio seguente viene illustrato l'utilizzo delle regole di inferenza in modalità batch:  
  
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
  
 Se non vengono utilizzate le regole di inferenza in modalità batch, verrà prodotto il seguente output:  
  
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
  
 Se, invece, vengono utilizzate le regole di inferenza in modalità batch, l'output sarà il seguente:  
  
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
  
## Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)