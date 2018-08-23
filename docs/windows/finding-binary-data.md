---
title: Ricerca di dati binari | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.binary
dev_langs:
- C++
helpviewer_keywords:
- hexadecimal bytes in binary data
- strings [C++], searching for
- file searches [C++]
- binary data, finding
- ASCII characters, finding in binary data
ms.assetid: 1675b19c-66e3-4040-82c2-5dde4b1793f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: aa37084a88f307757ff7a21f98d9bbc7d9f313ec
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42591072"
---
# <a name="finding-binary-data"></a>Ricerca di dati binari

È possibile cercare le stringhe ASCII o byte esadecimali. Ad esempio, per trovare "Hello", è possibile cercare una stringa "Hello" o per "48 65 6C 6C 6F" (l'equivalente esadecimale).

### <a name="to-find-binary-data"></a>Per trovare i dati binari

1. Dal **Edit** menu, fare clic su [trovare](/visualstudio/ide/reference/find-command).

2. Nel **Find What** casella, selezionare una stringa di ricerca precedente dall'elenco a discesa scegliere o immettere i dati da trovare.

3. Selezionare una qualsiasi delle **trovare** opzioni.

4. Fare clic su **Trova successivo**.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Binary Editor](binary-editor.md)