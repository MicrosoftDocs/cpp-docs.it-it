---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4237'
title: Avviso degli strumenti del linker LNK4237
ms.date: 11/04/2016
f1_keywords:
- LNK4237
helpviewer_keywords:
- LNK4237
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
ms.openlocfilehash: 9f8af2d6f0fa2d1153af749e327e95b863ed6914
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259994"
---
# <a name="linker-tools-warning-lnk4237"></a>Avviso degli strumenti del linker LNK4237

/SUBSYSTEM: nativo specificato durante l'importazione da' dll '; Usare/SUBSYSTEM: CONSOLE o/SUBSYSTEM: WINDOWS.

[/SUBSYSTEM:](../../build/reference/subsystem-specify-subsystem.md) è stato specificato native durante la compilazione di un'applicazione Windows (Win32) che utilizza direttamente uno o più degli elementi seguenti:

- kernel32.dll

- gdi32.dll

- user32.dll

- una delle dll msvcrt \* .

Per risolvere il problema, non specificare **/SUBSYSTEM: native**.
