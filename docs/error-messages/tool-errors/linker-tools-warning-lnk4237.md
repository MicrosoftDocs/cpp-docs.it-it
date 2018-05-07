---
title: Strumenti del linker LNK4237 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4237
dev_langs:
- C++
helpviewer_keywords:
- LNK4237
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5acccf52d3738985c7a83432342952af03bf78b4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4237"></a>Avviso degli strumenti del linker LNK4237
Si specificato durante l'importazione da 'dll'. Utilizzare /SUBSYSTEM o /SUBSYSTEM: Windows.  
  
 [Si](../../build/reference/subsystem-specify-subsystem.md) è stato specificato quando la compilazione di un'applicazione windows (Win32) che direttamente utilizza uno o più delle operazioni seguenti:  
  
-   kernel32.dll  
  
-   gdi32  
  
-   user32.dll  
  
-   una delle DLL msvcrt *.  
  
 Per risolvere questo avviso, non specificare **si**.