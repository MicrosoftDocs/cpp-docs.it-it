---
title: "MASM for x64 (ml64.exe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ml64.exe"
  - "ml"
ms.assetid: 89059103-f372-4968-80ea-0c7f90bb9c91
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# MASM for x64 (ml64.exe)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

ml64.exe è l'assemblatore che accetta [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] linguaggio assembly.  Per informazioni sulle opzioni del compilatore di ml64.exe, vedere [ML and ML64 Command\-Line Reference](../../assembler/masm/ml-and-ml64-command-line-reference.md).  
  
 L'ASM inline non è supportato per [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)].  Utilizzare MASM o funzioni intrinseche del compilatore \([x64 Intrinsics](http://msdn.microsoft.com/it-it/5d1f5d3e-156e-4ebf-932e-fd09be7ced62)\).  
  
 Le due soluzioni alternative sono assembly distinto con MASM \(che supporta completamente x64\) e funzioni intrinseche del compilatore.  È stata aggiunta molte funzioni intrinseche per consentire ai clienti all'utilizzo dell'istruzioni di speciale\-funzione \(ad esempio  un'analisi di bit e privilegiata\/test, collegato e così via,…\) in vicino a piattaforme modo possibili.  
  
## direttive di ml64\-Specific  
 utilizzare le seguenti direttive con ml64.exe:  
  
-   [.ALLOCSTACK](../../assembler/masm/dot-allocstack.md)  
  
-   [.ENDPROLOG](../../assembler/masm/dot-endprolog.md)  
  
-   [.PUSHFRAME](../../assembler/masm/dot-pushframe.md)  
  
-   [.PUSHREG](../../assembler/masm/dot-pushreg.md)  
  
-   [.SAVEREG](../../assembler/masm/dot-savereg.md)  
  
-   [.SAVEXMM128](../../assembler/masm/dot-savexmm128.md)  
  
-   [.SETFRAME](../../assembler/masm/dot-setframe.md)  
  
 inoltre, [PROC](../../assembler/masm/proc.md) la direttiva è stata aggiornata per l'utilizzo con ml64.exe.  
  
## modalità di indirizzi a 32 bit \(override di dimensione address\)  
 MASM genererà un override della dimensione di indirizzo 0x67 se un operando di memoria include i registri a 32 bit.  Ad esempio, gli esempi riportati di seguito determinano in override della dimensione di indirizzo a essere generati:  
  
```  
mov rax, QWORD PTR [ecx]  
mov eax, DWORD PTR [ecx*2+r10d]  
mov eax, DWORD PTR [ecx*2+r10d+0100h]  
prefetch [eax]  
movnti rax, QWORD PTR [r8d]  
```  
  
 MASM si presuppone che se shift a 32 bit viene visualizzato da solo come operando di memoria, il indirizzamento a 64 bit sia previsto.  Non è attualmente supporto a 32 bit che indirizzi con tali operandi.  
  
 Infine, combinare le dimensioni del log all'interno di un operando di memoria, come illustrato nel codice riportato di seguito, genererà un errore.  
  
```  
mov eax, DWORD PTR [rcx*2+r10d]  
mov eax, DWORD PTR [ecx*2+r10+0100h]  
```  
  
## Vedere anche  
 [Microsoft Macro Assembler Reference](../../assembler/masm/microsoft-macro-assembler-reference.md)