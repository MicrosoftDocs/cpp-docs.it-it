---
title: /RELEASE (Imposta checksum)
ms.date: 11/04/2016
f1_keywords:
- /release
- VC.Project.VCLinkerTool.SetChecksum
helpviewer_keywords:
- -RELEASE linker option
- /RELEASE linker option
- checksum setting
- RELEASE linker option
ms.assetid: 93bcadf4-29ac-4824-914b-6997e3751d22
ms.openlocfilehash: 1dc09b38beeb763733f8fa6a8ffa972059b30e03
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318927"
---
# <a name="release-set-the-checksum"></a>/RELEASE (Imposta checksum)

```
/RELEASE
```

## <a name="remarks"></a>Note

L'opzione /RELEASE imposta il Checksum nell'intestazione di un file .exe.

Il sistema operativo richiede il valore di Checksum per i driver di dispositivo. Impostare il valore di Checksum per le versioni dei driver di dispositivo per garantire la compatibilità con sistemi operativi in futuro.

L'opzione /RELEASE è impostata per impostazione predefinita quando il [/SUBSYSTEM: native](subsystem-specify-subsystem.md) opzione specificata.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **Checksum impostato** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SetChecksum%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
