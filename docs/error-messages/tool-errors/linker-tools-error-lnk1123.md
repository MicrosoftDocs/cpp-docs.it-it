---
title: Strumenti del linker LNK1123 errore | Documenti Microsoft
ms.custom: 
ms.date: 12/29/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1123
dev_langs:
- C++
helpviewer_keywords:
- LNK1123
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 90d46a97e27d43f97bfabd1b8ff5eab873c602a3
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="linker-tools-error-lnk1123"></a>Errore degli strumenti del linker LNK1123

> errore durante la conversione in formato COFF: file non valido o danneggiato

I file di input devono avere il formato COFF (Common Object File Format). Se un file di input non è in formato COFF, il linker automaticamente prova a convertire gli oggetti OMF a 32 bit in COFF, oppure esegue CVTRES.EXE per convertire i file di risorse. Questo messaggio indica che il linker non può convertire il file. L'errore può anche verificarsi quando si usa una versione non compatibile di CVTRES.EXE da un'altra versione di Visual Studio, del kit di sviluppo di Windows o di .NET Framework.

> [!NOTE]
> Se si esegue una versione precedente di Visual Studio, la conversione automatica potrebbe non essere supportata.

## <a name="to-fix-the-problem"></a>Per risolvere il problema

- Applicare tutti i Service Pack e gli aggiornamenti per la versione di Visual Studio. Ciò è particolarmente importante per Visual Studio 2010.

- Provare a compilare con disattivato il collegamento incrementale. Sulla barra dei menu scegliere **Progetto**, **Proprietà**. Nel **pagine delle proprietà** finestra di dialogo espandere **le proprietà di configurazione**, **Linker**. Modificare il valore di **Attiva collegamento incrementale** a **n**.

- Verificare che la versione di CVTRES.EXE trovata per prima nella variabile di ambiente PATH corrisponda alla versione degli strumenti per la compilazione o alla versione del set di strumenti della piattaforma usati nel progetto.

- Provare a disattivare l'opzione Incorpora manifesto. Sulla barra dei menu scegliere **Progetto**, **Proprietà**. Nel **pagine delle proprietà** finestra di dialogo espandere **le proprietà di configurazione**, **strumento manifesto**, **di Input e Output**. Modificare il valore di **Incorpora manifesto** a **n**.

- Verificare che il tipo di file sia valido. Assicurarsi, ad esempio, che un oggetto OMF sia da 32 bit e non da 16 bit. Per ulteriori informazioni, vedere [. File obj come Input del Linker](../../build/reference/dot-obj-files-as-linker-input.md) e [formato PE](https://msdn.microsoft.com/library/windows/desktop/ms680547).

- Verificare che il file non sia danneggiato. Ricompilare, se necessario.

## <a name="see-also"></a>Vedere anche

[File OBJ come input del linker](../../build/reference/dot-obj-files-as-linker-input.md)  
[Riferimento a EDITBIN](../../build/reference/editbin-reference.md)  
[Riferimento a DUMPBIN](../../build/reference/dumpbin-reference.md)  
