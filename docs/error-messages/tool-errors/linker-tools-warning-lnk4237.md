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
ms.openlocfilehash: 479bd4ff8a4f48da679c9e17ec100668de84d089
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46113708"
---
# <a name="linker-tools-warning-lnk4237"></a>Avviso degli strumenti del linker LNK4237

/SUBSYSTEM: native specificato durante l'importazione da 'dll'. Utilizzare /SUBSYSTEM: console o /SUBSYSTEM: Windows.

[/SUBSYSTEM: native](../../build/reference/subsystem-specify-subsystem.md) è stato specificato quando la compilazione di un'applicazione windows (Win32) che direttamente utilizza uno o più delle seguenti operazioni:

- kernel32.dll

- gdi32.dll

- user32.dll

- uno dei file msvcrt\* DLL.

Per risolvere questo problema, se non si specifica **/SUBSYSTEM: native**.