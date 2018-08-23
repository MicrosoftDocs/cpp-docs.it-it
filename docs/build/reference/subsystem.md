---
title: -SUBSYSTEM | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /subsystem
dev_langs:
- C++
helpviewer_keywords:
- /SUBSYSTEM editbin option
- -SUBSYSTEM editbin option
- SUBSYSTEM editbin option
ms.assetid: 515e4cdf-3cc4-4659-8764-1f2757b49215
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 75e0086f96f39814bd1a7e77df2adccc47d698fc
ms.sourcegitcommit: b92ca0b74f0b00372709e81333885750ba91f90e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/16/2018
ms.locfileid: "42571638"
---
# <a name="subsystem"></a>/SUBSYSTEM
Specifica l'ambiente di esecuzione richiesto dall'immagine eseguibile.  
  
```  
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|  
        EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|  
        NATIVE|POSIX|WINDOWS|WINDOWSCE}[,major[.minor]]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione modifica l'immagine per indicare il sottosistema che il sistema operativo deve richiamare per l'esecuzione.  
  
 È possibile specificare uno dei sottosistemi seguenti:  
  
 BOOT_APPLICATION  
 Applicazione che viene eseguita nell'ambiente di avvio di Windows. Per altre informazioni sulle applicazioni di avvio, vedere [sui Provider BCD WMI](/previous-versions/windows/desktop/bcd/about-bcd).  
  
 CONSOLE  
 Applicazione in modalità carattere Windows. Il sistema operativo fornisce una console per le applicazioni console.  
  
 Immagine EFI (Extensible Firmware Interface)  
 Le opzioni del sottosistema EFI descrivono le immagini eseguibili che vengono eseguite nell'ambiente Extensible Firmware Interface. Questo ambiente è in genere fornito con l'hardware e viene eseguito prima che il sistema operativo venga caricato. Le principali differenze tra tipi di immagine EFI sono la posizione di memoria in cui l'immagine viene caricata e l'azione eseguita quando viene restituita la chiamata all'immagine. Un'immagine EFI_APPLICATION viene scaricata quando viene restituito il controllo. Il driver EFI_BOOT_SERVICE_DRIVER o EFI_RUNTIME_DRIVER viene scaricato solo se il controllo restituisce un codice errore. Un'immagine EFI_ROM viene eseguita da ROM. Per altre informazioni, vedere le specifiche sul [Unified EFI Forum](http://www.uefi.org/) sito Web.  
  
 NATIVE  
 Codice che viene eseguito senza un ambiente di sottosistema, ad esempio driver di dispositivo in modalità kernel e processi di sistema nativi. Questa opzione è generalmente riservata alle funzionalità di sistema di Windows.  
  
 POSIX  
 App che viene eseguita nel sottosistema POSIX in Windows.  
  
 WINDOWS  
 App che viene eseguita nell'ambiente grafico Windows. Ciò include sia le app desktop e App Universal Windows Platform (UWP).  
  
 WINDOWSCE  
 Il sottosistema WINDOWSCE indica che l'app deve essere eseguita su un dispositivo che dispone di una versione del kernel di Windows CE. Le versioni del kernel includono PocketPC, Windows Mobile, Windows Phone 7, Windows CE V1.0-6.0R3 e Windows Embedded Compact 7.  
  
 I valori `major` e `minor` facoltativi specificano la versione minima obbligatoria del sottosistema specificato:  
  
-   La parte del numero di versione con il numero intero, ovvero quella a sinistra del separatore decimale, è rappresentata da `major`.  
  
-   La parte frazionaria del numero di versione, ovvero quella a destra del separatore decimale, è rappresentata da `minor`.  
  
-   I valori di `major` e `minor` devono essere compresi tra 0 e 65.535.  
  
 La scelta del sottosistema influisce sull'indirizzo iniziale predefinito per il programma. Per altre informazioni, vedere [/ENTRY (simbolo del punto di ingresso)](../../build/reference/entry-entry-point-symbol.md), il linker /ENTRY:*funzione* opzione.  
  
 Per altre informazioni, inclusi i valori minimo e predefinito per i numeri di versione principale e secondaria per ogni sottosistema, vedere la [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) l'opzione del linker.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)