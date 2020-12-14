---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1123'
title: Errore degli strumenti del linker LNK1123
ms.date: 12/29/2017
f1_keywords:
- LNK1123
helpviewer_keywords:
- LNK1123
ms.openlocfilehash: f9ee04a8e46c34e6ac5133c90488ed49619734d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281366"
---
# <a name="linker-tools-error-lnk1123"></a>Errore degli strumenti del linker LNK1123

> errore durante la conversione in formato COFF: file non valido o danneggiato

I file di input devono avere il formato COFF (Common Object File Format). Se un file di input non è in formato COFF, il linker automaticamente prova a convertire gli oggetti OMF a 32 bit in COFF, oppure esegue CVTRES.EXE per convertire i file di risorse. Questo messaggio indica che il linker non può convertire il file. L'errore può anche verificarsi quando si usa una versione non compatibile di CVTRES.EXE da un'altra versione di Visual Studio, del kit di sviluppo di Windows o di .NET Framework.

> [!NOTE]
> Se si esegue una versione precedente di Visual Studio, la conversione automatica potrebbe non essere supportata.

## <a name="to-fix-the-problem"></a>Per risolvere il problema

- Applicare tutti i Service Pack e gli aggiornamenti per la versione di Visual Studio. Ciò è particolarmente importante per Visual Studio 2010.

- Provare a compilare con disattivato il collegamento incrementale. Sulla barra dei menu scegliere **progetto**, **Proprietà**. Nella finestra di dialogo **pagine delle proprietà** espandere **proprietà di configurazione**, **linker**. Modificare il valore di **Abilita collegamento incrementale** su **No**.

- Verificare che la versione di CVTRES.EXE trovata per prima nella variabile di ambiente PATH corrisponda alla versione degli strumenti per la compilazione o alla versione del set di strumenti della piattaforma usati nel progetto.

- Provare a disattivare l'opzione Incorpora manifesto. Sulla barra dei menu scegliere **progetto**, **Proprietà**. Nella finestra di dialogo **pagine delle proprietà** espandere **proprietà di configurazione**, **strumento Manifesto**, **input e output**. Modificare il valore di **Incorpora manifesto** su **No**.

- Verificare che il tipo di file sia valido. Assicurarsi, ad esempio, che un oggetto OMF sia da 32 bit e non da 16 bit. Per ulteriori informazioni, vedere [. File obj come input del linker](../../build/reference/dot-obj-files-as-linker-input.md) e [formato PE](/windows/win32/Debug/pe-format).

- Verificare che il file non sia danneggiato. Ricompilare, se necessario.

## <a name="see-also"></a>Vedi anche

[. File obj come input del linker](../../build/reference/dot-obj-files-as-linker-input.md)<br/>
[Riferimento a EDITBIN)](../../build/reference/editbin-reference.md)<br/>
[Riferimento a DUMPBIN](../../build/reference/dumpbin-reference.md)
