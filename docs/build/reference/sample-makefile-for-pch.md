---
title: "Makefile di esempio per PCH | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
ms.assetid: daf68983-77dc-45db-8701-aa89ad18910d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Makefile di esempio per PCH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il makefile illustrato di seguito utilizza macro e una struttura di comando del flusso di controllo del tipo \!IF, \!ELSE, \!ENDIF che semplifica l'adattamento al progetto.  
  
```  
# Makefile : Illustrates the effective use of precompiled  
#            headers in a project  
# Usage:     NMAKE option  
# option:    DEBUG=[0|1]  
#            (DEBUG not defined is equivalent to DEBUG=0)  
#  
OBJS = myapp.obj applib.obj  
# List all stable header files in the STABLEHDRS macro.  
STABLEHDRS = stable.h another.h  
# List the final header file to be precompiled here:  
BOUNDRY = stable.h  
# List header files under development here:  
UNSTABLEHDRS = unstable.h  
# List all compiler options common to both debug and final  
# versions of your code here:  
CLFLAGS = /c /W3  
# List all linker options common to both debug and final  
# versions of your code here:  
LINKFLAGS = /NOD /ONERROR:NOEXE  
!IF "$(DEBUG)" == "1"  
CLFLAGS   = /D_DEBUG $(CLFLAGS) /Od /Zi /f  
LINKFLAGS = $(LINKFLAGS) /COD  
LIBS      = slibce  
!ELSE  
CLFLAGS   = $(CLFLAGS) /Oselg /Gs  
LINKFLAGS = $(LINKFLAGS)  
LIBS      = slibce  
!ENDIF  
myapp.exe: $(OBJS)  
    link $(LINKFLAGS) @<<  
$(OBJS), myapp, NUL, $(LIBS), NUL;  
<<  
# Compile myapp  
myapp.obj  : myapp.cpp $(UNSTABLEHDRS)  stable.pch  
    $(CPP) $(CLFLAGS) /Yu$(BOUNDRY)    myapp.cpp  
# Compile applib  
applib.obj : applib.cpp $(UNSTABLEHDRS) stable.pch  
    $(CPP) $(CLFLAGS) /Yu$(BOUNDRY)    applib.cpp  
# Compile headers  
stable.pch : $(STABLEHDRS)  
    $(CPP) $(CLFLAGS) /Yc$(BOUNDRY)    applib.cpp myapp.cpp  
```  
  
 Oltre alle macro STABLEHDRS, BOUNDRY e UNSTABLEHDRS, mostrate nella figura "Struttura di un makefile che utilizza un file di intestazione precompilato" in [File PCH nel processo di compilazione](../../build/reference/pch-files-in-the-build-process.md), questo makefile contiene due macro: CLFLAGS e LINKFLAGS.  Utilizzare queste macro per elencare le opzioni di compilazione e dei linker da utilizzare se si compila una versione di debug o finale del file eseguibile dell'applicazione.  Esiste inoltre una macro LIBS in cui elencare le librerie necessarie al progetto.  
  
 Il makefile utilizza la struttura \!IF, \!ELSE, \!ENDIF per rilevare la definizione di un simbolo DEBUG nella riga di comando NMAKE:  
  
```  
NMAKE DEBUG=[1|0]  
```  
  
 Questa caratteristica consente di utilizzare lo stesso makefile durante lo sviluppo e per le versioni finali del programma: utilizzare DEBUG\=0 per le versioni finali.  Le seguenti righe di comando sono equivalenti:  
  
```  
NMAKE   
NMAKE DEBUG=0  
```  
  
 Per ulteriori informazioni sui makefile, vedere [Riferimenti di NMAKE](../../build/nmake-reference.md).  Vedere inoltre [Opzioni del compilatore](../../build/reference/compiler-options.md) e [Opzioni dei linker](../../build/reference/linker-options.md).  
  
## Vedere anche  
 [Utilizzo di intestazioni precompilate in un progetto](../../build/reference/using-precompiled-headers-in-a-project.md)