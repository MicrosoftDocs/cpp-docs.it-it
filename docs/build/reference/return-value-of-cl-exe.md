---
title: Valore restituito di cl.exe
ms.date: 09/05/2018
helpviewer_keywords:
- cl.exe compiler, return value
ms.assetid: 7c2d7f33-ee0d-4199-8ef4-75fe2b007670
ms.openlocfilehash: 06e0993f6a96117ab73f22e73857843dfcc334a1
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88836725"
---
# <a name="return-value-of-clexe"></a>Valore restituito di cl.exe

cl.exe restituisce zero per le operazioni eseguite correttamente (senza errori) e un valore diverso da zero in caso contrario.

Il valore restituito di cl.exe può essere utile se la compilazione viene eseguita da uno script, da Powershell o da un file CMD o BAT. È consigliabile acquisire l'output del compilatore in caso si siano verificati errori o avvisi in modo da poterli risolvere.

I codici possibili per cl.exe sono talmente tanti da non poterli elencare tutti. È possibile cercare un codice di errore nei file Winerror. h o NTSTATUS. h inclusi in Windows Software Development Kit nella directory% ProgramFiles (x86)% \ Windows Kit \\ <em>version</em>\Include\shared\. Ai fini della ricerca, i codici di errore restituiti in formato decimale devono essere convertiti in formato esadecimale. Ad esempio, il codice di errore -1073741620 convertito in formato esadecimale diventa 0xC00000CC. Questo errore si trova in ntstatus.h e il messaggio corrispondente è "Impossibile trovare il nome condiviso sul server remoto". Per un elenco scaricabile di codici di errore di Windows, vedere [&#91;MS-ERREF&#93;: codici di errore di Windows](/openspecs/windows_protocols/MS-ERREF).

È inoltre possibile utilizzare l'utilità di ricerca errori di Visual Studio per comprendere il significato di un messaggio di errore del compilatore. In una shell dei comandi di Visual Studio immettere **errlook.exe** per avviare l'utilità; in alternativa, nella barra dei menu dell'IDE di Visual Studio scegliere **strumenti**, **ricerca errori**. Immettere il valore dell'errore per trovare il testo descrittivo associato all'errore. Per altre informazioni, vedere [riferimento a ERRLOOK](errlook-reference.md).

## <a name="remarks"></a>Osservazioni

Di seguito è riportato un file BAT di esempio che utilizza il valore restituito di cl.exe.

```cmd
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

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
