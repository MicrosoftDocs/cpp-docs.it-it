---
title: "Opzioni del compilatore e del linker (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: ecfadce8-3a3f-40cc-bb01-b4731f8d2fcb
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 10
---
# Opzioni del compilatore e del linker (C++-CX)
Una variabile di ambiente, le opzioni del compilatore [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] e le opzioni del linker supportano la compilazione di app per [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
## Percorso di libreria  
 La variabile di ambiente %LIBPATH% specifica il percorso predefinito in cui trovare i file con estensione winmd.  
  
## Opzioni del compilatore  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|[\/ZW](../build/reference/zw-windows-runtime-compilation.md)<br /><br /> \/ZW:nostdlib|Abilita le estensioni del linguaggio [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].<br /><br /> Il parametro `nostdlib` impedisce al compilatore di usare il percorso di ricerca predefinito standard per trovare i file WINMD e di assembly.<br /><br /> L'opzione del compilatore [\/ZW](../build/reference/zw-windows-runtime-compilation.md) specifica in modo implicito le seguenti opzioni del compilatore:<br /><br /> -   [\/FI](../build/reference/fi-name-forced-include-file.md) vccorlib.h, che impone l'inclusione del file di intestazione vccorlib.h che definisce molti tipi richiesti dal compilatore.<br />-   [\/FU](~/build/reference/fu-name-forced-hash-using-file.md) Windows.winmd, che impone l'inclusione del file di metadati Windows.winmd che è fornito dal sistema operativo e che definisce molti tipi in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].<br />-   [\/FU](~/build/reference/fu-name-forced-hash-using-file.md) Platform.winmd, che impone l'inclusione del file di metadati Platform.winmd che è fornito dal compilatore e che definisce la maggior parte dei tipi nella famiglia di spazi dei nomi Platform.|  
|[\/AI](../build/reference/ai-specify-metadata-directories.md) *dir*|Aggiunge una directory, specificata dal parametro *dir*, al percorso di ricerca usato dal compilatore per trovare i file WINMD e di assembly.|  
|[\/FU](~/build/reference/fu-name-forced-hash-using-file.md) *file*|Impone l'inclusione del file con estensione winmd o del modulo specificato. Questo significa che non è necessario specificare `#using`*file* nel codice sorgente. Il compilatore impone automaticamente l'inclusione del relativo file di metadati di Windows, Platform.winmd.|  
|\/D "WINAPI\_FAMILY\=2"|Crea una definizione che consente l'uso di un sottoinsieme di Win32 SDK compatibile con [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].|  
  
## Opzioni del linker  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|\/APPCONTAINER\[:NO\]|Contrassegna il file eseguibile come eseguibile in appcontainer \(solo\).|  
|\/WINMD\[:{NO&#124;ONLY}\]|Genera un file WINMD e un file binario associato. Questa opzione deve essere passata al linker per l'emissione di un file WINMD.<br /><br /> **NO**: non emette un file WINMD, bensì un file binario.<br /><br /> **ONLY**: emette un file WINMD, ma non un file binario.|  
|\/WINMDFILE:*filename*|Nome del file WINMD da emettere, anziché il nome file WINMD predefinito. Se sono specificati più nomi file nella riga di comando, viene usato l'ultimo nome.|  
|\/WINMDDELAYSIGN\[:NO\]|Firma parzialmente il file WINMD e posiziona la chiave pubblica nel file binario.<br /><br /> **NO**: \(impostazione predefinita\) non firma il file WINMD.<br /><br /> \/WINMDDELAYSIGN non ha alcun effetto a meno che non sia specificato anche \/WINMDKEYFILE o \/WINMDKEYCONTAINER.|  
|\/WINMDKEYCONTAINER:*name*|Specifica un contenitore di chiavi per firmare un assembly. Il parametro *name* corrisponde al contenitore di chiavi usato per firmare il file di metadati.|  
|\/WINMDKEYFILE:*filename*|Specifica una chiave o una coppia di chiavi per la firma dell'assembly.  Il parametro *filename* corrisponde alla chiave usata per la firma del file di metadati.|  
  
## Note  
 Quando si usa **\/ZW**, il compilatore collega automaticamente la versione DLL di C Runtime \(CRT\). Il collegamento alla versione della libreria statica non è consentito e qualsiasi uso di funzioni CRT non consentite in un'app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] genera un errore in fase di compilazione.  
  
## Vedere anche  
 [Compilazione di applicazioni e librerie](../cppcx/building-apps-and-libraries-c-cx.md)