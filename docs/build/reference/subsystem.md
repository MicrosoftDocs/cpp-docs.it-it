---
title: /SUBSYSTEM
ms.date: 11/04/2016
f1_keywords:
- /subsystem_editbin
helpviewer_keywords:
- /SUBSYSTEM editbin option
- -SUBSYSTEM editbin option
- SUBSYSTEM editbin option
ms.assetid: 515e4cdf-3cc4-4659-8764-1f2757b49215
ms.openlocfilehash: 708bfcce3e6d6616116bcc08441f374b46914c82
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438868"
---
# <a name="subsystem"></a>/SUBSYSTEM

Specifica l'ambiente di esecuzione richiesto dall'immagine eseguibile.

```
/SUBSYSTEM:{BOOT_APPLICATION|CONSOLE|EFI_APPLICATION|
        EFI_BOOT_SERVICE_DRIVER|EFI_ROM|EFI_RUNTIME_DRIVER|
        NATIVE|POSIX|WINDOWS|WINDOWSCE}[,major[.minor]]
```

## <a name="remarks"></a>Osservazioni

Questa opzione modifica l'immagine per indicare il sottosistema che il sistema operativo deve richiamare per l'esecuzione.

È possibile specificare uno dei sottosistemi seguenti:

**BOOT_APPLICATION**<br/>
Applicazione che viene eseguita nell'ambiente di avvio di Windows. Per ulteriori informazioni sulle applicazioni di avvio, vedere [informazioni sul provider BCD WMI](/previous-versions/windows/desktop/bcd/about-bcd).

**CONSOLE**<br/>
Applicazione in modalità carattere Windows. Il sistema operativo fornisce una console per le applicazioni console.

**EFI_APPLICATION**<br/>
**EFI_BOOT_SERVICE_DRIVER**<br/>
**EFI_ROM**<br/>
**EFI_RUNTIME_DRIVER**<br/>
Immagine EFI (Extensible Firmware Interface)

Le opzioni del sottosistema EFI descrivono le immagini eseguibili che vengono eseguite nell'ambiente Extensible Firmware Interface. Questo ambiente è in genere fornito con l'hardware e viene eseguito prima che il sistema operativo venga caricato. Le principali differenze tra tipi di immagine EFI sono la posizione di memoria in cui l'immagine viene caricata e l'azione eseguita quando viene restituita la chiamata all'immagine. Un'immagine EFI_APPLICATION viene scaricata quando viene restituito il controllo. Il driver EFI_BOOT_SERVICE_DRIVER o EFI_RUNTIME_DRIVER viene scaricato solo se il controllo restituisce un codice errore. Un'immagine EFI_ROM viene eseguita da ROM. Per ulteriori informazioni, vedere le specifiche nel sito Web [Unified EFI Forum](https://www.uefi.org/) .

**NATIVE**<br/>
Codice che viene eseguito senza un ambiente di sottosistema, ad esempio driver di dispositivo in modalità kernel e processi di sistema nativi. Questa opzione è generalmente riservata alle funzionalità di sistema di Windows.

**POSIX**<br/>
App che viene eseguita nel sottosistema POSIX in Windows.

**WINDOWS**<br/>
App che viene eseguita nell'ambiente grafico Windows. Sono incluse sia le app desktop che le app piattaforma UWP (Universal Windows Platform) (UWP).

**WINDOWSCE**<br/>
Il sottosistema WINDOWSCE indica che l'app deve essere eseguita su un dispositivo che dispone di una versione del kernel di Windows CE. Le versioni del kernel includono PocketPC, Windows Mobile, Windows Phone 7, Windows CE V1.0-6.0R3 e Windows Embedded Compact 7.

I valori `major` e `minor` facoltativi specificano la versione minima obbligatoria del sottosistema specificato:

- La parte del numero di versione con il numero intero, ovvero quella a sinistra del separatore decimale, è rappresentata da `major`.

- La parte frazionaria del numero di versione, ovvero quella a destra del separatore decimale, è rappresentata da `minor`.

- I valori di `major` e `minor` devono essere compresi tra 0 e 65.535.

La scelta del sottosistema influisce sull'indirizzo iniziale predefinito per il programma. Per altre informazioni, vedere [/entry (simbolo del punto di ingresso)](entry-entry-point-symbol.md), l'opzione del linker/entry:*Function* .

Per ulteriori informazioni, inclusi i valori minimo e predefinito per i numeri di versione principale e secondaria per ogni sottosistema, vedere l'opzione del linker [/Subsystem](subsystem-specify-subsystem.md) .

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)
