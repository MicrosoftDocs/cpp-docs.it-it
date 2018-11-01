---
title: Avviso degli strumenti del linker LNK4104
ms.date: 11/04/2016
f1_keywords:
- LNK4104
helpviewer_keywords:
- LNK4104
ms.assetid: ca6728db-d616-419a-a570-65e8445c6079
ms.openlocfilehash: 3d89b27c32b33b917abb7fc140eebf5924142423
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668122"
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