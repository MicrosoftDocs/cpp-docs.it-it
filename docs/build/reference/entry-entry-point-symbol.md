---
description: Altre informazioni su:/ENTRY (simbolo del punto di ingresso)
title: /ENTRY (Simbolo del punto di ingresso)
ms.date: 11/04/2016
f1_keywords:
- /entry
- VC.Project.VCLinkerTool.EntryPointSymbol
helpviewer_keywords:
- starting address
- -ENTRY linker option
- /ENTRY linker option
- ENTRY linker option
ms.assetid: 26c62ba2-4f52-4882-a7bd-7046a0abf445
ms.openlocfilehash: e4966ef44922a3a90d5abb5a7ac23460d4155f92
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201014"
---
# <a name="entry-entry-point-symbol"></a>/ENTRY (Simbolo del punto di ingresso)

```
/ENTRY:function
```

## <a name="arguments"></a>Argomenti

*function*<br/>
Funzione che specifica un indirizzo iniziale definito dall'utente per un file exe o una DLL.

## <a name="remarks"></a>Commenti

L'opzione/ENTRY specifica una funzione del punto di ingresso come indirizzo iniziale per un file exe o una DLL.

La funzione deve essere definita per usare la **`__stdcall`** convenzione di chiamata. I parametri e il valore restituito dipendono dal fatto che il programma sia un'applicazione console, un'applicazione Windows o una DLL. È consigliabile consentire al linker di impostare il punto di ingresso in modo che la libreria di runtime C venga inizializzata correttamente e che vengano eseguiti costruttori C++ per gli oggetti statici.

Per impostazione predefinita, l'indirizzo iniziale è un nome di funzione della libreria di runtime del linguaggio C. Il linker lo seleziona in base agli attributi del programma, come illustrato nella tabella seguente.

|Nome della funzione|Predefinito per|
|-------------------|-----------------|
|**mainCRTStartup** (o **wmainCRTStartup**)|Un'applicazione che usa/SUBSYSTEM: CONSOLE; chiamate `main` (o `wmain` )|
|**WinMainCRTStartup** (o **wWinMainCRTStartup**)|Un'applicazione che usa/SUBSYSTEM:**Windows**; chiama `WinMain` (o `wWinMain` ), che deve essere definito per l'utilizzo di **`__stdcall`**|
|**_DllMainCRTStartup**|UNA DLL; chiama `DllMain` se esiste, che deve essere definito per l'utilizzo di **`__stdcall`**|

Se non si specifica l'opzione [/dll](dll-build-a-dll.md) o [/Subsystem](subsystem-specify-subsystem.md) , il linker seleziona un sottosistema e un punto di ingresso a seconda che sia `main` `WinMain` definito o.

Le funzioni `main` , `WinMain` e `DllMain` sono le tre forme del punto di ingresso definito dall'utente.

Quando si crea un'immagine gestita, la funzione specificata in/ENTRY deve avere una firma di (LPVOID *var1*, DWORD *var2*, LPVOID *var3*).

Per informazioni su come definire un punto di `DllMain` ingresso personalizzato, vedere [dll e Visual C++ comportamento della libreria](../run-time-library-behavior.md) in fase di esecuzione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà del **punto di ingresso** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EntryPointSymbol%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
