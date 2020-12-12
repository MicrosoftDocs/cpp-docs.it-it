---
description: Altre informazioni su:/RELEASE (imposta checksum)
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
ms.openlocfilehash: ed1e55dffb02ace26e91e262bd3e9514f056196e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225323"
---
# <a name="release-set-the-checksum"></a>/RELEASE (Imposta checksum)

```
/RELEASE
```

## <a name="remarks"></a>Commenti

L'opzione/RELEASE imposta il checksum nell'intestazione di un file exe.

Il sistema operativo richiede il checksum per i driver di dispositivo. Impostare il checksum per le versioni di rilascio dei driver di dispositivo per garantire la compatibilità con i sistemi operativi futuri.

L'opzione/RELEASE è impostata per impostazione predefinita quando viene specificata l'opzione [/SUBSYSTEM: native](subsystem-specify-subsystem.md) .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà **set checksum** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SetChecksum%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
