---
title: "/SUBSYSTEM | Microsoft Docs"
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
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SUBSYSTEM (opzione editbin)"
  - "SUBSYSTEM (opzione editbin)"
  - "-SUBSYSTEM (opzione editbin)"
ms.assetid: 515e4cdf-3cc4-4659-8764-1f2757b49215
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /SUBSYSTEM
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica l'ambiente di esecuzione richiesto dall'immagine eseguibile.  
  
```  
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|  
        EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|  
        NATIVE|POSIX|WINDOWS|WINDOWSCE}[,major[.minor]]  
```  
  
## Note  
 Questa opzione modifica l'immagine per indicare il sottosistema che il sistema operativo deve richiamare per l'esecuzione.  
  
 È possibile specificare uno dei sottosistemi seguenti:  
  
 BOOT\_APPLICATION  
 Applicazione che viene eseguita nell'ambiente di avvio di Windows.  Per altre informazioni sulle applicazioni di avvio, vedere [Informazioni sui provider BCD WMI](http://msdn.microsoft.com/library/aa362639.aspx).  
  
 CONSOLE  
 Applicazione in modalità carattere Windows.  Il sistema operativo fornisce una console per le applicazioni console.  
  
 Immagine EFI \(Extensible Firmware Interface\)  
 Le opzioni del sottosistema EFI descrivono le immagini eseguibili che vengono eseguite nell'ambiente Extensible Firmware Interface.  Questo ambiente è in genere fornito con l'hardware e viene eseguito prima che il sistema operativo venga caricato.  Le principali differenze tra tipi di immagine EFI sono la posizione di memoria in cui l'immagine viene caricata e l'azione eseguita quando viene restituita la chiamata all'immagine.  Un'immagine EFI\_APPLICATION viene scaricata quando viene restituito il controllo.  Il driver EFI\_BOOT\_SERVICE\_DRIVER o EFI\_RUNTIME\_DRIVER viene scaricato solo se il controllo restituisce un codice errore.  Un'immagine EFI\_ROM viene eseguita da ROM.  Per altre informazioni, vedere le specifiche nel sito Web del [forum su Unified EFI](http://www.uefi.org/).  
  
 NATIVE  
 Codice che viene eseguito senza un ambiente di sottosistema, ad esempio driver di dispositivo in modalità kernel e processi di sistema nativi.  Questa opzione è generalmente riservata alle funzionalità di sistema di Windows.  
  
 POSIX  
 App che viene eseguita nel sottosistema POSIX in Windows.  
  
 WINDOWS  
 App che viene eseguita nell'ambiente grafico Windows.  Sono incluse sia le app desktop che le app di Windows Store.  
  
 WINDOWSCE  
 Il sottosistema WINDOWSCE indica che l'app deve essere eseguita su un dispositivo che dispone di una versione del kernel di Windows CE.  Le versioni del kernel includono PocketPC, Windows Mobile, Windows Phone 7, Windows CE V1.0\-6.0R3 e Windows Embedded Compact 7.  
  
 I valori `major` e `minor` facoltativi specificano la versione minima obbligatoria del sottosistema specificato:  
  
-   La parte del numero di versione con il numero intero, ovvero quella a sinistra del separatore decimale, è rappresentata da `major`.  
  
-   La parte frazionaria del numero di versione, ovvero quella a destra del separatore decimale, è rappresentata da `minor`.  
  
-   I valori di `major` e `minor` devono essere compresi tra 0 e 65.535.  
  
 La scelta del sottosistema influisce sull'indirizzo iniziale predefinito per il programma.  Per altre informazioni, vedere [\/ENTRY \(Simbolo del punto di ingresso\)](../../build/reference/entry-entry-point-symbol.md), l'opzione \/ENTRY:*funzione* del linker.  
  
 Per altre informazioni, inclusi i valori minimo e predefinito per i numeri di versione principale e secondaria di ogni sottosistema, vedere l'opzione del linker [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md).  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)