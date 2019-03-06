---
title: File PDB come input del linker
ms.date: 11/04/2016
helpviewer_keywords:
- .pdb files, as linker input
- PDB files, as linker input
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
ms.openlocfilehash: a29f01e5e5b30be4f7a983652d476a4512d2bec0
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426424"
---
# <a name="pdb-files-as-linker-input"></a>File PDB come input del linker

Oggetto file (con estensione obj) compilati usando l'opzione /Zi. contengono il nome di un database di programma (PDB). Non si specifica il nome dell'oggetto PDB file al linker. COLLEGAMENTO Usa il nome incorporato per trovare il file PDB, se necessario. Questo vale anche per gli oggetti debuggable contenuti in una libreria. il file PDB per una libreria di debug deve essere disponibile per il linker insieme alla libreria.

COLLEGAMENTO Usa anche un file PDB per contenere le informazioni di debug per il file .exe o il file con estensione dll. PDB del programma è un file di output sia un file di input, perché viene automaticamente aggiornato quando ricompila il programma.

## <a name="see-also"></a>Vedere anche

[File di input LINK](../../build/reference/link-input-files.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
