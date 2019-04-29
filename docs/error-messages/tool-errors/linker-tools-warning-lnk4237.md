---
title: Avviso degli strumenti del linker LNK4237
ms.date: 11/04/2016
f1_keywords:
- LNK4237
helpviewer_keywords:
- LNK4237
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
ms.openlocfilehash: 62ce0a0edc7f15bc5a19e4630133976f413da35a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62352658"
---
# <a name="linker-tools-warning-lnk4237"></a>Avviso degli strumenti del linker LNK4237

/SUBSYSTEM: native specificato durante l'importazione da 'dll'. Utilizzare /SUBSYSTEM: console o /SUBSYSTEM: Windows.

[/SUBSYSTEM: native](../../build/reference/subsystem-specify-subsystem.md) è stato specificato quando la compilazione di un'applicazione windows (Win32) che direttamente utilizza uno o più delle seguenti operazioni:

- kernel32.dll

- gdi32.dll

- user32.dll

- uno dei file msvcrt\* DLL.

Per risolvere questo problema, se non si specifica **/SUBSYSTEM: native**.