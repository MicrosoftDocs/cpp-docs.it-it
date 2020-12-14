---
description: Altre informazioni su:/SUBSYSTEM (specifica il sottosistema)
title: /SUBSYSTEM (Specifica il sottosistema)
ms.date: 11/04/2016
f1_keywords:
- /subsystem
- VC.Project.VCLinkerTool.SubSystem
- VC.Project.VCLinkerTool.SubSystemVersion
helpviewer_keywords:
- /SUBSYSTEM linker option
- SUBSYSTEM linker option
- -SUBSYSTEM linker option
- subsystem specifications
ms.assetid: d7b133cf-cf22-4da8-ab46-6552702c0b9b
ms.openlocfilehash: 18a8ad549cc4aa1e143e43619d549c9eb7ae7324
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236243"
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
Applicazione che viene eseguita nell'ambiente di avvio di Windows. Per ulteriori informazioni sulle applicazioni di avvio, vedere [About BCD](/previous-versions/windows/desktop/bcd/about-bcd).

**CONSOLE**<br/>
Applicazione in modalità carattere Win32. Il sistema operativo fornisce una console per le applicazioni console. Se `main` o `wmain` è definito per il codice nativo, `int main(array<String ^> ^)` viene definito per il codice gestito o l'applicazione viene compilata completamente usando `/clr:safe` , la console è l'impostazione predefinita.

**EFI_APPLICATION**<br/>
**EFI_BOOT_SERVICE_DRIVER**<br/>
**EFI_ROM**<br/>
**EFI_RUNTIME_DRIVER**<br/>
Sottosistemi Extensible Firmware Interface. Per ulteriori informazioni, vedere la specifica EFI. Per esempi, vedere il sito Web di Intel. La versione minima e la versione predefinita sono pari a 1,0.

**NATIVE**<br/>
Driver in modalità kernel per Windows NT. Questa opzione è in genere riservata ai componenti di sistema di Windows. Se viene specificato [/driver: WDM](driver-windows-nt-kernel-mode-driver.md) , il valore predefinito è native.

**POSIX**<br/>
Applicazione eseguita con il sottosistema POSIX in Windows NT.

**WINDOWS**<br/>
L'applicazione non richiede una console, probabilmente perché crea le proprie finestre per l'interazione con l'utente. Se `WinMain` o `wWinMain` è definito per il codice nativo oppure `WinMain(HISTANCE *, HINSTANCE *, char *, int)` o `wWinMain(HINSTANCE *, HINSTANCE *, wchar_t *, int)` è definito per il codice gestito, Windows è il valore predefinito.

*principale* e *minore*<br/>
Opzionale Specificare la versione minima richiesta del sottosistema. Gli argomenti sono numeri decimali compresi tra 0 e 65.535. Per ulteriori informazioni, vedere la sezione Osservazioni. Nessun limite superiore per i numeri di versione.

## <a name="remarks"></a>Commenti

L'opzione **/Subsystem** specifica l'ambiente per il file eseguibile.

La scelta del sottosistema influiscono sul simbolo del punto di ingresso (o sulla funzione del punto di ingresso) che il linker selezionerà.

Di seguito sono riportati i numeri di versione *principale* e *secondaria* facoltativa per i sottosistemi.

|Subsystem|Minima|Predefinito|
|---------------|-------------|-------------|
|BOOT_APPLICATION|1.0|1.0|
|CONSOLE|5,01 (x86) 5,02 (x64) 6,02 (ARM)|6,00 (x86, x64) 6,02 (ARM)|
|WINDOWS|5,01 (x86) 5,02 (x64) 6,02 (ARM)|6,00 (x86, x64) 6,02 (ARM)|
|NATIVO (con DRIVER: WDM)|1,00 (x86) 1,10 (x64, ARM)|1,00 (x86) 1,10 (x64, ARM)|
|NATIVO (senza/DRIVER: WDM)|4,00 (x86) 5,02 (x64) 6,02 (ARM)|4,00 (x86) 5,02 (x64) 6,02 (ARM)|
|POSIX|1.0|19.90|
|EFI_APPLICATION, EFI_BOOT_SERVICE_DRIVER, EFI_ROM, EFI_RUNTIME_DRIVER|1.0|1.0|

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella Linker.

1. Selezionare la pagina delle proprietà **sistema** .

1. Modificare la `SubSystem` Proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
