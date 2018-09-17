---
title: -ENTRY (simbolo del punto di ingresso) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /entry
- VC.Project.VCLinkerTool.EntryPointSymbol
dev_langs:
- C++
helpviewer_keywords:
- starting address
- -ENTRY linker option
- /ENTRY linker option
- ENTRY linker option
ms.assetid: 26c62ba2-4f52-4882-a7bd-7046a0abf445
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53f5a18b061cbd956731ced6788e86f871ea97bd
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45719576"
---
# <a name="entry-entry-point-symbol"></a>/ENTRY (Simbolo del punto di ingresso)

```
/ENTRY:function
```

## <a name="arguments"></a>Argomenti

*function*<br/>
Una funzione che specifica un avvio definite dall'utente l'indirizzo di un file .exe o DLL.

## <a name="remarks"></a>Note

L'opzione /ENTRY specifica una funzione di punto di ingresso come indirizzo iniziale per un file .exe o DLL.

La funzione deve essere definita per l'utilizzo di `__stdcall` convenzione di chiamata. I parametri e il valore restituito variano a seconda se il programma è un'applicazione console, un'applicazione windows o una DLL. È consigliabile consentire al linker di impostare il punto di ingresso in modo che la libreria run-time di C viene inizializzata correttamente e i costruttori di C++ per gli oggetti statici vengono eseguiti.

Per impostazione predefinita, l'indirizzo iniziale è il nome di una funzione della libreria di runtime C. Il linker viene selezionato in base agli attributi del programma, come illustrato nella tabella seguente.

|Nome funzione|Valore predefinito per|
|-------------------|-----------------|
|**mainCRTStartup** (o **wmainCRTStartup**)|Un'applicazione che usa /SUBSYSTEM: console; le chiamate `main` (o `wmain`)|
|**WinMainCRTStartup** (o **wWinMainCRTStartup**)|Un'applicazione che usa /SUBSYSTEM:**WINDOWS**; le chiamate `WinMain` (o `wWinMain`), che deve essere definito da usare `__stdcall`|
|**DllMainCRTStartup**|UNA DLL. le chiamate `DllMain` se presente, che deve essere definito da usare `__stdcall`|

Se il [/DLL](../../build/reference/dll-build-a-dll.md) oppure [/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) viene omesso, il linker un sottosistema e punto di ingresso a seconda che la selezione `main` o `WinMain` è definito.

Le funzioni `main`, `WinMain`, e `DllMain` rappresentano le tre forme del punto di ingresso definito dall'utente.

Quando si crea un'immagine gestita, la funzione specificata a /ENTRY deve avere una firma di (LPVOID *var1*, valore DWORD *var2*, LPVOID *var3*).

Per informazioni su come definire il proprio `DllMain` punto di ingresso, vedere [Visual C++ e DLL comportamento libreria run-time](../../build/run-time-library-behavior.md) .

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **punto di ingresso** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EntryPointSymbol%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)