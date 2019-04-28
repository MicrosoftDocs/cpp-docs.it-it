---
title: File PDB come input del linker
ms.date: 11/04/2016
helpviewer_keywords:
- .pdb files, as linker input
- PDB files, as linker input
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
ms.openlocfilehash: 365f2955f5bc9e8082221a070af454c820c665f1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273287"
---
# <a name="pdb-files-as-linker-input"></a>File PDB come input del linker

Oggetto file (con estensione obj) compilati usando l'opzione /Zi. contengono il nome di un database di programma (PDB). Non si specifica il nome dell'oggetto PDB file al linker. COLLEGAMENTO Usa il nome incorporato per trovare il file PDB, se necessario. Questo vale anche per gli oggetti debuggable contenuti in una libreria. il file PDB per una libreria di debug deve essere disponibile per il linker insieme alla libreria.

COLLEGAMENTO Usa anche un file PDB per contenere le informazioni di debug per il file .exe o il file con estensione dll. PDB del programma è un file di output sia un file di input, perché viene automaticamente aggiornato quando ricompila il programma.

## <a name="see-also"></a>Vedere anche

[File di input LINK](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
