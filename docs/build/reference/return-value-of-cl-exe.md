---
title: Valore restituito di cl.exe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, return value
ms.assetid: 7c2d7f33-ee0d-4199-8ef4-75fe2b007670
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3925044f8cf827c38610308226cd6c32008a59a1
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206096"
---
# <a name="return-value-of-clexe"></a>Valore restituito di cl.exe
cl.exe restituisce zero per le operazioni eseguite correttamente (senza errori) e un valore diverso da zero in caso contrario.  
  
 Il valore restituito di cl.exe può essere utile se la compilazione viene eseguita da uno script, da Powershell o da un file CMD o BAT. È consigliabile acquisire l'output del compilatore in caso si siano verificati errori o avvisi in modo da poterli risolvere.  
  
 I codici possibili per cl.exe sono talmente tanti da non poterli elencare tutti. È possibile cercare un codice di errore nel file Winerror. h o Ntstatus. h file inclusi nel Windows Software Development Kit in % %\Windows (x86) Kit\\`version`\include\shared\. directory. Ai fini della ricerca, i codici di errore restituiti in formato decimale devono essere convertiti in formato esadecimale. Ad esempio, il codice di errore -1073741620 convertito in formato esadecimale diventa 0xC00000CC. Questo errore si trova in ntstatus.h e il messaggio corrispondente è "Impossibile trovare il nome condiviso sul server remoto". Per un elenco scaricabile dei codici di errore di Windows, vedere [ &#91;MS-ERREF&#93;: codici di errore di Windows](https://msdn.microsoft.com/library/cc231196).  
  
 È inoltre possibile utilizzare l'utilità di ricerca errori di Visual Studio per comprendere il significato di un messaggio di errore del compilatore. In una shell di comandi di Visual Studio, immettere **errlook.exe** per avviare l'utilità; o nell'IDE di Visual Studio, sulla barra dei menu, scegliere **Tools**, **ricerca errori**. Immettere il valore dell'errore per trovare il testo descrittivo associato all'errore. Per altre informazioni, vedere [riferimenti a ERRLOOK](../../build/reference/errlook-reference.md).  
  
## <a name="remarks"></a>Note  
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
  
## <a name="see-also"></a>Vedere anche  
 [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)