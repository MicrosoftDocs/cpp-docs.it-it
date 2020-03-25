---
title: Avviso degli strumenti del linker LNK4237
ms.date: 11/04/2016
f1_keywords:
- LNK4237
helpviewer_keywords:
- LNK4237
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
ms.openlocfilehash: aaa26393f1ce76d3e1bc40e5ba4978d1bcdb4fc9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193758"
---
# <a name="linker-tools-warning-lnk4237"></a>Avviso degli strumenti del linker LNK4237

/SUBSYSTEM: nativo specificato durante l'importazione da' dll '; Usare/SUBSYSTEM: CONSOLE o/SUBSYSTEM: WINDOWS.

[/SUBSYSTEM:](../../build/reference/subsystem-specify-subsystem.md) è stato specificato native durante la compilazione di un'applicazione Windows (Win32) che utilizza direttamente uno o più degli elementi seguenti:

- kernel32.dll

- gdi32.dll

- user32.dll

- una delle dll del\* Msvcrt.

Per risolvere il problema, non specificare **/SUBSYSTEM: native**.
