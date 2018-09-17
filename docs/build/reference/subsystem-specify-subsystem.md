---
title: -SUBSYSTEM (specifica il sottosistema) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /subsystem
- VC.Project.VCLinkerTool.SubSystem
- VC.Project.VCLinkerTool.SubSystemVersion
dev_langs:
- C++
helpviewer_keywords:
- /SUBSYSTEM linker option
- SUBSYSTEM linker option
- -SUBSYSTEM linker option
- subsystem specifications
ms.assetid: d7b133cf-cf22-4da8-ab46-6552702c0b9b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 75e4612104fdc57fd1442f1a35efbf317a60310d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717093"
---
# <a name="subsystem-specify-subsystem"></a>/SUBSYSTEM (Specifica il sottosistema)

```
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|
            EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|NATIVE|
            POSIX|WINDOWS)
            [,major[.minor]]
```

## <a name="arguments"></a>Argomenti

**BOOT_APPLICATION**<br/>
Applicazione che viene eseguita nell'ambiente di avvio di Windows. Per altre informazioni sulle applicazioni di avvio, vedere [sulle BCD](/previous-versions/windows/desktop/bcd/about-bcd).

**CONSOLE DI**<br/>
Applicazione in modalità carattere Win32. Il sistema operativo fornisce una console per le applicazioni console. Se `main` oppure `wmain` è definito per il codice nativo `int main(array<String ^> ^)` è definito per il codice gestito, o si compila l'applicazione completamente utilizzando `/clr:safe`, CONSOLE è il valore predefinito.

**EFI_APPLICATION**<br/>
**EFI_BOOT_SERVICE_DRIVER**<br/>
**EFI_ROM**<br/>
**EFI_RUNTIME_DRIVER**<br/>
I sottosistemi Extensible Firmware Interface. Vedere la specifica di EFI per altre informazioni. Per esempi, visitare il sito Web di Intel. La versione minima di versione e valore predefinito è 1,0.

**NATIVO**<br/>
Driver in modalità kernel per Windows NT. Questa opzione è generalmente riservata per i componenti di sistema di Windows. Se [/driver: WDM](../../build/reference/driver-windows-nt-kernel-mode-driver.md) viene specificato, il valore predefinito è NATIVE.

**POSIX**<br/>
Applicazione che viene eseguito con il sottosistema POSIX in Windows NT.

**WINDOWS**<br/>
Applicazione non necessita di una console, probabilmente perché crea le proprie finestre per l'interazione con l'utente. Se `WinMain` oppure `wWinMain` è definito per il codice nativo, o `WinMain(HISTANCE *, HINSTANCE *, char *, int)` o `wWinMain(HINSTANCE *, HINSTANCE *, wchar_t *, int)` è definito per il codice gestito, WINDOWS è il valore predefinito.

*principali* e *secondaria*<br/>
(Facoltativo) Specificare la versione minima richiesta del sottosistema. Gli argomenti sono numeri decimali compresi tra 0 e 65.535. Vedere la sezione Osservazioni per altre informazioni. Sono non disponibili limiti superiori per i numeri di versione.

## <a name="remarks"></a>Note

Il **/SUBSYSTEM** opzione specifica l'ambiente per il file eseguibile.

La scelta del sottosistema riguarda il simbolo del punto di ingresso (o una funzione del punto di ingresso) che verrà selezionato il linker.

Il valore minimo facoltativo e predefiniti *principali* e *secondaria* numeri di versione per i sottosistemi sono i seguenti.

|Sottosistema|Minimo|Impostazione predefinita|
|---------------|-------------|-------------|
|BOOT_APPLICATION|1.0|1.0|
|CONSOLE|5.01 (x86) 5.02 (x64) 6.02 (ARM)|6.00 (x86, x64) 6.02 (ARM)|
|FINESTRE|5.01 (x86) 5.02 (x64) 6.02 (ARM)|6.00 (x86, x64) 6.02 (ARM)|
|NATIVO (con /DRIVER: WDM)|1,00 (x86) 1.10 (x64, ARM)|1,00 (x86) 1.10 (x64, ARM)|
|NATIVO (senza /driver: WDM)|4.00 (x86) 5.02 (x64) 6.02 (ARM)|4.00 (x86) 5.02 (x64) 6.02 (ARM)|
|POSIX|1.0|19.90|
|EFI_APPLICATION, EFI_BOOT_SERVICE_DRIVER, EFI_ROM, EFI_RUNTIME_DRIVER|1.0|1.0|

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare la cartella del Linker.

1. Selezionare il **sistema** pagina delle proprietà.

1. Modificare il `SubSystem` proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)