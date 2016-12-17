---
title: "Valore restituito di cl.exe | Microsoft Docs"
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
  - "compilatore cl.exe, valore restituito"
ms.assetid: 7c2d7f33-ee0d-4199-8ef4-75fe2b007670
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Valore restituito di cl.exe
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

cl.exe restituisce zero per le operazioni eseguite correttamente \(senza errori\) e un valore diverso da zero in caso contrario.  
  
 Il valore restituito di cl.exe può essere utile se la compilazione viene eseguita da uno script, da Powershell o da un file CMD o BAT.  È consigliabile acquisire l'output del compilatore in caso si siano verificati errori o avvisi in modo da poterli risolvere.  
  
 I codici possibili per cl.exe sono talmente tanti da non poterli elencare tutti.  È possibile cercare un codice di errore nel file winerror.h o ntstatus.h fornito nel Windows Software Development Kit nella directory %ProgramFiles\(x86\)%\\Windows Kits\\`version`\\Include\\shared\\.  Ai fini della ricerca, i codici di errore restituiti in formato decimale devono essere convertiti in formato esadecimale.  Ad esempio, il codice di errore \-1073741620 convertito in formato esadecimale diventa 0xC00000CC.  Questo errore si trova in ntstatus.h e il messaggio corrispondente è "Impossibile trovare il nome condiviso sul server remoto". Per un elenco scaricabile dei codici di errore di windows, vedere [&#91;MS\-ERREF&#93;: Windows Error Codes](http://msdn.microsoft.com/it-it/1bc92ddf-b79e-413c-bbaa-99a5281a6c90).  
  
 È inoltre possibile utilizzare l'utilità di ricerca errori di Visual Studio per comprendere il significato di un messaggio di errore del compilatore.  In una shell dei comandi di Visual Studio immettere **errlook.exe** per avviare l'utilità. In alternativa, nell'IDE di Visual Studio, sulla barra dei menu, scegliere **Strumenti** e **Ricerca errori**.  Immettere il valore dell'errore per trovare il testo descrittivo associato all'errore.  Per ulteriori informazioni, vedere [Riferimento a ERRLOOK](../../build/reference/errlook-reference.md).  
  
## Note  
 Di seguito è riportato un file BAT di esempio che utilizza il valore restituito di cl.exe.  
  
```  
echo off  
cl /W4 t.cpp  
@if ERRORLEVEL == 0 (  
   goto good  
)  
  
@if ERRORLEVEL != 0 (  
   goto bad  
)  
  
:good  
   echo "clean compile"  
   echo %ERRORLEVEL%  
   goto end  
  
:bad  
   echo "error or warning"  
   echo %ERRORLEVEL%  
   goto end  
  
:end  
```  
  
## Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)