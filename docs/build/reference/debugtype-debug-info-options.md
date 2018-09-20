---
title: -DEBUGTYPE (opzioni delle informazioni di Debug) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /debugtype
dev_langs:
- C++
helpviewer_keywords:
- /DEBUGTYPE linker option
- DEBUGTYPE linker option
- -DEBUGTYPE linker option
ms.assetid: 1ddcb718-7fec-4f92-a319-3f70f04fe742
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1255c92a7de4a0f1707cd20f91e8b9f1de640942
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46440459"
---
# <a name="debugtype-debug-info-options"></a>/DEBUGTYPE (opzioni delle informazioni di debug)

L'opzione /DEBUGTYPE specifica i tipi di informazioni di debug generate dall'opzione /DEBUG.

```
/DEBUGTYPE:[CV | PDATA | FIXUP]
```

## <a name="arguments"></a>Argomenti

**CONVALIDA INCROCIATA**<br/>
Indica al linker di creare informazioni di debug per simboli, numeri di riga e altre informazioni di compilazione degli oggetti nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando si **/debug** è specificato e **/DEBUGTYPE** non è specificato.

**PDATA**<br/>
Indica al linker di aggiungere le voci .pdata e .xdata alle informazioni sul flusso di debug nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando sia la **/debug** e **/DRIVER** vengono specificate le opzioni. Se **/DEBUGTYPE:PDATA** è specificato da solo, il linker include automaticamente i simboli nel file PDB di debug. Se **/DEBUGTYPE:PDATA, FIXUP** è specificato, il linker non include i simboli nel file PDB di debug.

**CORREZIONE**<br/>
Indica al linker di aggiungere le voci della tabella rilocazioni alle informazioni sul flusso di debug nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando sia la **/debug** e **/Profile** vengono specificate le opzioni. Se **/DEBUGTYPE:FIXUP** oppure **/DEBUGTYPE:FIXUP, PDATA** è specificato, il linker non include i simboli nel file PDB di debug.

Gli argomenti **/DEBUGTYPE** possono essere combinati in qualsiasi ordine separandoli con una virgola. Il **/DEBUGTYPE** opzione e i relativi argomenti non sono tra maiuscole e minuscole.

## <a name="remarks"></a>Note

Usare la **/DEBUGTYPE** opzione per specificare l'inclusione di rilocazione dei dati o pdata e. XData intestazione le informazioni della tabella nel flusso di debug. Il linker include così le informazioni sul codice in modalità utente visibile in un debugger del kernel durante un'interruzione nel codice in modalità kernel. Per rendere disponibili i simboli di debug quando **FIXUP** è specificato, includere il **CV** argomento.

Eseguire il debug di codice in modalità utente, come avviene in genere per le applicazioni, il **/DEBUGTYPE** opzione non è necessaria. Per impostazione predefinita, le opzioni del compilatore che specificano il debug di output ([/Z7, /Zi, /ZI](../../build/reference/z7-zi-zi-debug-information-format.md)) creazione di tutto le informazioni necessarie da Visual Studio del debugger. Uso **/DEBUGTYPE:PDATA** oppure **/DEBUGTYPE: CV, PDATA, FIXUP** il debug del codice che combina i componenti in modalità utente e in modalità kernel, ad esempio un'app di configurazione per un driver di dispositivo. Per altre informazioni sui debugger in modalità kernel, vedere [debug strumenti per Windows (WinDbg, KD, CDB, NTSD)](/windows-hardware/drivers/debugger/index)

## <a name="see-also"></a>Vedere anche

[/DEBUG (genera informazioni di debug)](../../build/reference/debug-generate-debug-info.md)<br/>
[/DRIVER (driver in modalità kernel di Windows NT)](../../build/reference/driver-windows-nt-kernel-mode-driver.md)<br/>
[/PROFILE (profiler strumenti di prestazioni)](../../build/reference/profile-performance-tools-profiler.md)<br/>
[Strumenti di debug per Windows (WinDbg, KD, CDB, NTSD)](/windows-hardware/drivers/debugger/index)