---
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
ms.openlocfilehash: 170adfe54b34d14f84b54c717bc9f75fe0b7ab37
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418477"
---
# <a name="exp-files-as-linker-input"></a>File exp come input del linker

File di esportazione (EXP) contengono informazioni sugli elementi di dati e le funzioni esportate. Quando LIB crea una libreria di importazione, crea anche un file. exp. Utilizzare il file EXP quando si collega un programma che Esporta e Importa da un altro programma, direttamente o indirettamente. Se si collega a un file EXP, collegamento non produce una libreria di importazione, perché si presuppone che LIB già stato creato uno. Per informazioni dettagliate sui file EXP e le librerie di importazione, vedere [uso di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md).

## <a name="see-also"></a>Vedere anche

[File di input LINK](../../build/reference/link-input-files.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
