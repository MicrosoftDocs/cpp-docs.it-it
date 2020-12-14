---
description: Altre informazioni su:/DEBUGTYPE (opzioni di debug)
title: /DEBUGTYPE (opzioni delle informazioni di debug)
ms.date: 11/04/2016
f1_keywords:
- /debugtype
helpviewer_keywords:
- /DEBUGTYPE linker option
- DEBUGTYPE linker option
- -DEBUGTYPE linker option
ms.assetid: 1ddcb718-7fec-4f92-a319-3f70f04fe742
ms.openlocfilehash: 858d5ed8eb449931229700a10b755dd61ef371cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201729"
---
# <a name="debugtype-debug-info-options"></a>/DEBUGTYPE (opzioni delle informazioni di debug)

L'opzione /DEBUGTYPE specifica i tipi di informazioni di debug generate dall'opzione /DEBUG.

```
/DEBUGTYPE:[CV | PDATA | FIXUP]
```

## <a name="arguments"></a>Argomenti

**CV**<br/>
Indica al linker di creare informazioni di debug per simboli, numeri di riga e altre informazioni di compilazione degli oggetti nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando si specifica **/debug** e **/DEBUGTYPE** non è specificato.

**PDATA**<br/>
Indica al linker di aggiungere le voci .pdata e .xdata alle informazioni sul flusso di debug nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando vengono specificate entrambe le opzioni **/debug** e **/driver** . Se **/debugtype: pData** viene specificato da solo, il linker include automaticamente i simboli di debug nel file PDB. Se **/debugtype: pData,** viene specificata la correzione, il linker non include i simboli di debug nel file PDB.

**FIXUP**<br/>
Indica al linker di aggiungere le voci della tabella rilocazioni alle informazioni sul flusso di debug nel file PDB. Per impostazione predefinita, questa opzione è abilitata quando vengono specificate entrambe le opzioni **/debug** e **/profile** . Se **/debugtype: correzione** o **/debugtype: correzione, pData** è specificato, il linker non include i simboli di debug nel file PDB.

Gli argomenti di **/DEBUGTYPE** possono essere combinati in qualsiasi ordine separandoli con una virgola. L'opzione **/DEBUGTYPE** e i relativi argomenti non fanno distinzione tra maiuscole e minuscole.

## <a name="remarks"></a>Commenti

Usare l'opzione **/DEBUGTYPE** per specificare l'inclusione dei dati della tabella di rilocazione o le informazioni di intestazione pdata e XData nel flusso di debug. Il linker include così le informazioni sul codice in modalità utente visibile in un debugger del kernel durante un'interruzione nel codice in modalità kernel. Per rendere disponibili i simboli di debug quando si specifica la **correzione** , includere l'argomento **CV** .

Per eseguire il debug del codice in modalità utente, che è tipico per le applicazioni, l'opzione **/DEBUGTYPE** non è necessaria. Per impostazione predefinita, le opzioni del compilatore che specificano l'output di debug ([/Z7,/Zi,/Zi](z7-zi-zi-debug-information-format.md)) emettono tutte le informazioni necessarie per il debugger di Visual Studio. Usare **/debugtype: pData** o **/debugtype: CV, pData, correzione** per eseguire il debug del codice che combina i componenti in modalità utente e kernel, ad esempio un'app di configurazione per un driver di dispositivo. Per ulteriori informazioni sui debugger in modalità kernel, vedere [strumenti di debug per Windows (WinDbg, KD, CDB, NTSD)](/windows-hardware/drivers/debugger/index)

## <a name="see-also"></a>Vedi anche

[/DEBUG (genera informazioni di debug)](debug-generate-debug-info.md)<br/>
[/DRIVER (driver in modalità kernel di Windows NT)](driver-windows-nt-kernel-mode-driver.md)<br/>
[/PROFILE (Profiler strumenti di prestazioni)](profile-performance-tools-profiler.md)<br/>
[Strumenti di debug per Windows (WinDbg, KD, CDB, NTSD)](/windows-hardware/drivers/debugger/index)
