---
description: Ulteriori informazioni su:. File exp come input del linker
title: File exp come input del linker
ms.date: 11/04/2016
helpviewer_keywords:
- exporting functions
- import libraries, linker files
- linking [C++], exports
- exporting functions, information about exported functions
- exporting data, export (.exp) files
- functions [C++], exporting
- .exp files [C++]
- EXP files
ms.assetid: 399f5636-0a4d-462e-b500-5f5b9ae5ad22
ms.openlocfilehash: 03104d6b4265484e54373484b6c9bbdabf0e1afc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192811"
---
# <a name="exp-files-as-linker-input"></a>File exp come input del linker

I file di esportazione (exp) contengono informazioni sulle funzioni esportate e sugli elementi di dati. Quando LIB crea una libreria di importazione, viene creato anche un file con estensione EXP. Il file exp viene utilizzato quando si collega un programma che viene esportato e importato da un altro programma, direttamente o indirettamente. Se si collega a un file con estensione EXP, il collegamento non produce una libreria di importazione, perché presuppone che LIB ne abbia già creato uno. Per informazioni dettagliate sui file con estensione exp e sulle librerie di importazione, vedere [utilizzo di librerie di importazione e file di esportazione](working-with-import-libraries-and-export-files.md).

## <a name="see-also"></a>Vedi anche

[File di input collegamento](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
