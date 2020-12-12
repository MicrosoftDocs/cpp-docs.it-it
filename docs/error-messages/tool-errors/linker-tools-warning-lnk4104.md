---
description: 'Altre informazioni su: avvisi degli strumenti del linker LNK4104'
title: Avviso degli strumenti del linker LNK4104
ms.date: 11/04/2016
f1_keywords:
- LNK4104
helpviewer_keywords:
- LNK4104
ms.assetid: ca6728db-d616-419a-a570-65e8445c6079
ms.openlocfilehash: ab48885a4a8d2806154d3a8911bdc65453359e2c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294431"
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
