---
title: Avviso degli strumenti del linker LNK4104
ms.date: 11/04/2016
f1_keywords:
- LNK4104
helpviewer_keywords:
- LNK4104
ms.assetid: ca6728db-d616-419a-a570-65e8445c6079
ms.openlocfilehash: 604dccf01b3dffc0060546bebf19d64c16ebf965
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193966"
---
# <a name="linker-tools-warning-lnk4104"></a>Avviso degli strumenti del linker LNK4104

l'esportazione del simbolo ' symbol ' deve essere privata

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

Questo avviso viene generato quando si compila una libreria di importazione per una DLL ed esporta una delle funzioni precedenti senza specificarla come privata nel file di definizione del modulo. In generale, queste funzioni vengono esportate per essere utilizzate solo da OLE. Il posizionamento nella libreria di importazione può comportare un comportamento insolito quando un programma collegato alla libreria effettua erroneamente le chiamate. Per ulteriori informazioni sulla parola chiave PRIVATE, vedere [esportazioni](../../build/reference/exports.md).
