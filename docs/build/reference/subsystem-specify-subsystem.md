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
ms.openlocfilehash: ebfbd7e8cedd522c324743abc5c28c6ac3e9f2b0
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43200388"
---
# <a name="subsystem-specify-subsystem"></a>/SUBSYSTEM (Specifica il sottosistema)
```  
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|  
            EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|NATIVE|  
            POSIX|WINDOWS)  
            [,major[.minor]]  
```  
  
 BOOT_APPLICATION  
 Applicazione che viene eseguita nell'ambiente di avvio di Windows. Per altre informazioni sulle applicazioni di avvio, vedere [sulle BCD](/previous-versions/windows/desktop/bcd/about-bcd).  
  
 CONSOLE  
 Applicazione in modalità carattere Win32. Il sistema operativo fornisce una console per le applicazioni console. Se `main` oppure `wmain` è definito per il codice nativo `int main(array<String ^> ^)` è definito per il codice gestito, o si compila l'applicazione completamente utilizzando `/clr:safe`, CONSOLE è il valore predefinito.  
  
 Interfaccia Firmware estensibile  
 Sottosistemi di EFI _ *. Vedere la specifica di EFI per altre informazioni. Ad esempio, visitare il sito Web di Intel. La versione minima di versione e valore predefinito è 1,0.  
  
 NATIVE  
 Driver in modalità kernel per Windows NT. Questa opzione è generalmente riservata per i componenti di sistema di Windows. Se [/driver: WDM](../../build/reference/driver-windows-nt-kernel-mode-driver.md) viene specificato, il valore predefinito è NATIVE.  
  
 POSIX  
 Applicazione che viene eseguito con il sottosistema POSIX in Windows NT.  
  
 FINESTRE  
 Applicazione non necessita di una console, probabilmente perché crea le proprie finestre per l'interazione con l'utente. Se `WinMain` oppure `wWinMain` è definito per il codice nativo, o `WinMain(HISTANCE *, HINSTANCE *, char *, int)` o `wWinMain(HINSTANCE *, HINSTANCE *, wchar_t *, int)` è definito per il codice gestito, WINDOWS è il valore predefinito.  
  
 `Major` e `minor` (facoltativo)  
 Specificare la versione minima richiesta del sottosistema. Gli argomenti sono numeri decimali compresi tra 0 e 65.535. Vedere la sezione Osservazioni per altre informazioni. Sono non disponibili limiti superiori per i numeri di versione.  
  
## <a name="remarks"></a>Note  
 L'opzione /SUBSYSTEM specifica l'ambiente per il file eseguibile.  
  
 La scelta del sottosistema riguarda il simbolo del punto di ingresso (o una funzione del punto di ingresso) che verrà selezionato il linker.  
  
 Il valore minimo facoltativo e predefiniti `major` e `minor` numeri di versione per i sottosistemi sono i seguenti.  
  
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
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella del Linker.  
  
3.  Selezionare il **sistema** pagina delle proprietà.  
  
4.  Modificare il `SubSystem` proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)