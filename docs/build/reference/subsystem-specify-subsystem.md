---
title: "/SUBSYSTEM (Specifica il sottosistema) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/subsystem"
  - "VC.Project.VCLinkerTool.SubSystem"
  - "VC.Project.VCLinkerTool.SubSystemVersion"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SUBSYSTEM (opzione del linker)"
  - "SUBSYSTEM (opzione del linker)"
  - "-SUBSYSTEM (opzione del linker)"
  - "specifiche di sottosistema"
ms.assetid: d7b133cf-cf22-4da8-ab46-6552702c0b9b
caps.latest.revision: 25
caps.handback.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /SUBSYSTEM (Specifica il sottosistema)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|  
            EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|NATIVE|  
            POSIX|WINDOWS)  
            [,major[.minor]]  
```  
  
 BOOT\_APPLICATION  
 Applicazione eseguita nell'ambiente di avvio Windows.  Per ulteriori informazioni sulle applicazioni di avvio, vedere [Informazioni sui dati di configurazione di avvio](http://msdn.microsoft.com/library/windows/desktop/aa362639).  
  
 CONSOLE  
 Applicazione in modalità carattere Win32.  Il sistema operativo fornisce una console per le applicazioni console.  Se per il codice nativo è definito `main` or `wmain`, per il codice gestito è definito `int main(array<String ^> ^)` oppure si compila completamente l'applicazione utilizzando `/clr:safe`, il valore predefinito è CONSOLE.  
  
 Interfaccia firmware estensibile \(EFI, Extensible Firmware Interface\)  
 Sottosistemi EFI\_\*.  Per ulteriori informazioni, vedere la specifica EFI,  ad esempio nel sito Web di Intel.  La versione minima e predefinita è la 1.0.  
  
 NATIVE  
 Driver in modalità kernel per Windows NT.  Questa opzione è generalmente riservata per i componenti di sistema Windows.  Se è specificata l'opzione [\/DRIVER:WDM](../../build/reference/driver-windows-nt-kernel-mode-driver.md), NATIVE rappresenterà l'impostazione predefinita.  
  
 POSIX  
 Applicazione che viene eseguita con il sottosistema POSIX in Windows NT.  
  
 WINDOWS  
 L'applicazione non richiede una console, probabilmente perché crea le proprie finestre per l'interazione con l'utente.  Se per il codice nativo è definito `WinMain` o `wWinMain` oppure per il codice gestito è definito `WinMain(HISTANCE *, HINSTANCE *, char *, int)` o `wWinMain(HINSTANCE *, HINSTANCE *, wchar_t *, int)`, il valore predefinito è WINDOWS.  
  
 `Major`: e `minor` \(facoltativi\)  
 Specifica la versione minima richiesta del sottosistema.  Gli argomenti sono numeri decimali compresi tra 0 e 65.535.  Per ulteriori informazioni, vedere la sezione delle osservazioni.  Non esistono limiti massimi relativamente a numeri di versione.  
  
## Note  
 L'opzione \/SUBSYSTEM consente di specificare l'ambiente per l'eseguibile.  
  
 La scelta del sottosistema influisce sul simbolo o sulla funzione del punto di ingresso scelto dal linker.  
  
 Di seguito sono indicati i numeri facoltativi `major` e `minor` di versione minima e predefinita per i sottosistemi.  
  
|Sottosistema|Minimo|Valore|  
|------------------|------------|------------|  
|BOOT\_APPLICATION|1.0|1.0|  
|CONSOLE|5.01 \(x86\) 5.02 \([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]\) 6.02 \(ARM\)|6.00 \(x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]\) 6.02 \(ARM\)|  
|WINDOWS|5.01 \(x86\) 5.02 \([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]\) 6.02 \(ARM\)|6.00 \(x86, [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]\) 6.02 \(ARM\)|  
|NATIVE \(con DRIVER:WDM\)|1.00 \(x86\) 1.10 \([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], ARM\)|1.00 \(x86\) 1.10 \([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], ARM\)|  
|NATIVE \(senza \/DRIVER:WDM\)|4.00 \(x86\) 5.02 \([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]\) 6.02 \(ARM\)|4.00 \(x86\) 5.02 \([!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)]\) 6.02 \(ARM\)|  
|POSIX|1.0|19.90|  
|EFI\_APPLICATION, EFI\_BOOT\_SERVICE\_DRIVER, EFI\_ROM, EFI\_RUNTIME\_DRIVER|1.0|1.0|  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella Linker.  
  
3.  Selezionare la pagina delle proprietà **Sistema**.  
  
4.  Modificare la proprietà `SubSystem`.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SubSystem%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)