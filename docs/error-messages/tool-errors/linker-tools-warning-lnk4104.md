---
title: Strumenti del linker LNK4104 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4104
dev_langs:
- C++
helpviewer_keywords:
- LNK4104
ms.assetid: ca6728db-d616-419a-a570-65e8445c6079
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6304f3ea928c89f4756a4594270ebb7914324f85
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057262"
---
# <a name="linker-tools-warning-lnk4104"></a>Avviso degli strumenti del linker LNK4104

esportazione del simbolo 'symbol' deve essere privato

Il `symbol` può essere uno dei seguenti:

- `DllCanUnloadNow`

- `DllGetClassObject`

- `DllGetClassFactoryFromClassString`

- `DllGetDocumentation`

- `DllInitialize`

- `DllInstall`

- `DllRegisterServer`

- `DllRegisterServerEx`

- `DllRegisterServerExW`

- `DllUnload`

- `DllUnregisterServer`

- `RasCustomDeleteEntryNotify`

- `RasCustomDial`

- `RasCustomDialDlg`

- `RasCustomEntryDlg`

Questo avviso viene generato quando si compila una libreria di importazione per una DLL ed esportare una delle funzioni precedenti senza specificandolo come privati nel file di definizione moduli. In generale, queste funzioni vengono esportate per l'uso solo da OLE. Inserirli nella libreria di importazione può causare un comportamento insolito quando un programma collegato in modo non corretto per la libreria esegue chiamate a essi. Per altre informazioni sulla parola chiave privata, vedere [esportazioni](../../build/reference/exports.md).