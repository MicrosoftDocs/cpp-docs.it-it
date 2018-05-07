---
title: Strumenti del linker LNK4104 avviso | Documenti Microsoft
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
ms.openlocfilehash: d9ea3e074cc0db9591cd0ffe9329ff7f1936563f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="linker-tools-warning-lnk4104"></a>Avviso degli strumenti del linker LNK4104
esportazione del simbolo 'symbol' deve essere privato  
  
 Il `symbol` può essere uno dei seguenti:  
  
-   `DllCanUnloadNow`  
  
-   `DllGetClassObject`  
  
-   `DllGetClassFactoryFromClassString`  
  
-   `DllGetDocumentation`  
  
-   `DllInitialize`  
  
-   `DllInstall`  
  
-   `DllRegisterServer`  
  
-   `DllRegisterServerEx`  
  
-   `DllRegisterServerExW`  
  
-   `DllUnload`  
  
-   `DllUnregisterServer`  
  
-   `RasCustomDeleteEntryNotify`  
  
-   `RasCustomDial`  
  
-   `RasCustomDialDlg`  
  
-   `RasCustomEntryDlg`  
  
 Questo avviso viene generato quando si compila una libreria di importazione per una DLL ed esportare una delle funzioni precedente senza specificarla come privato nel file di definizione di modulo. In generale, queste funzioni vengono esportate per l'uso solo da OLE. Inserirli nella libreria di importazione può causare un comportamento insolito quando un programma collegato in modo non corretto per la libreria esegue chiamate a essi. Per ulteriori informazioni sulla parola chiave privata, vedere [esportazioni](../../build/reference/exports.md).