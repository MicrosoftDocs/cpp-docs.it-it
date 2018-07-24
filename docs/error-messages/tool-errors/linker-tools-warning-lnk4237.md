---
title: Strumenti del linker LNK4237 avviso | Microsoft Docs
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
ms.openlocfilehash: fcc109fe3ccf06e0461deed449517850271a2024
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39209391"
---
# <a name="linker-tools-warning-lnk4237"></a>Avviso degli strumenti del linker LNK4237
/SUBSYSTEM: native specificato durante l'importazione da 'dll'. Utilizzare /SUBSYSTEM: console o /SUBSYSTEM: Windows.  
  
 [/SUBSYSTEM: native](../../build/reference/subsystem-specify-subsystem.md) è stato specificato quando la compilazione di un'applicazione windows (Win32) che direttamente utilizza uno o più delle seguenti operazioni:  
  
-   kernel32.dll  
  
-   gdi32.dll  
  
-   user32.dll  
  
-   uno dei file msvcrt\* DLL.  
  
 Per risolvere questo problema, se non si specifica **/SUBSYSTEM: native**.