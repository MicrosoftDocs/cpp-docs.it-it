---
description: Ulteriori informazioni su:. File PDB come input del linker
title: File PDB come input del linker
ms.date: 11/04/2016
helpviewer_keywords:
- .pdb files, as linker input
- PDB files, as linker input
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
ms.openlocfilehash: 713d42e7e95b5d1e7e3b1f9be21203b75569cdbe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201157"
---
# <a name="pdb-files-as-linker-input"></a>File PDB come input del linker

I file oggetto (obj) compilati con l'opzione/Zi contengono il nome di un database di programma (PDB). Il nome del file PDB dell'oggetto non viene specificato nel linker. Il collegamento usa il nome incorporato per trovare il PDB, se necessario. Questo vale anche per gli oggetti di cui è possibile eseguire il debug contenuti in una libreria. il PDB per una libreria di cui è possibile eseguire il debug deve essere disponibile per il linker insieme alla libreria.

Il collegamento utilizza anche un PDB per conservare le informazioni di debug per il file exe o il file con estensione dll. Il PDB del programma è sia un file di output che un file di input, perché il collegamento Aggiorna il PDB quando ricompila il programma.

## <a name="see-also"></a>Vedi anche

[File di input collegamento](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
