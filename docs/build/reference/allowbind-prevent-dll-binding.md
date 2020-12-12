---
description: Altre informazioni su:/ALLOWBIND (Impedisci associazione DLL)
title: /ALLOWBIND (prevenzione dell'associazione di DLL)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.PreventDLLBinding
- /allowbind
helpviewer_keywords:
- /ALLOWBIND linker option
- binding DLLs
- preventing DLL binding
- ALLOWBIND linker option
- -ALLOWBIND linker option
- DLLs [C++], preventing binding
ms.assetid: 30e37e24-12e4-407e-988a-39d357403598
ms.openlocfilehash: 727f1cae7d1b0a94a8f7faba90ee6994df8657e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187234"
---
# <a name="allowbind-prevent-dll-binding"></a>/ALLOWBIND (prevenzione dell'associazione di DLL)

```
/ALLOWBIND[:NO]
```

## <a name="remarks"></a>Commenti

/ALLOWBIND:NO imposta nell'intestazione della DLL un bit per indicare a Bind.exe che l'immagine non può essere associata. Una DLL può non essere associata se include una firma digitale, perché l'associazione rende la firma non valida.

È possibile modificare una DLL esistente per la funzionalità/ALLOWBIND con l'opzione [/ALLOWBIND](allowbind.md) dell'utilità EDITBIN).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere **proprietà di configurazione**, **linker**, quindi selezionare **riga di comando**.

1. Immettere `/ALLOWBIND:NO` **Opzioni aggiuntive**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[Azione BindImage sul (funzione)](/windows/win32/api/imagehlp/nf-imagehlp-bindimage)<br/>
[BindImageEx (funzione)](/windows/win32/api/imagehlp/nf-imagehlp-bindimageex)
