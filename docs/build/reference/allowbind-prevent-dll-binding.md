---
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
ms.openlocfilehash: 6b6582049dfaac47f1989a5bdf79bfac418ae4e5
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57416475"
---
# <a name="allowbind-prevent-dll-binding"></a>/ALLOWBIND (prevenzione dell'associazione di DLL)

```
/ALLOWBIND[:NO]
```

## <a name="remarks"></a>Note

/ALLOWBIND:NO imposta nell'intestazione della DLL un bit per indicare a Bind.exe che l'immagine non può essere associata. Una DLL può non essere associata se include una firma digitale, perché l'associazione rende la firma non valida.

È possibile modificare una DLL esistente per la funzionalità /ALLOWBIND con il [/ALLOWBIND](../../build/reference/allowbind.md) opzione dell'utilità EDITBIN.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere **le proprietà di configurazione**, **Linker**e selezionare **riga di comando**.

1. Immettere `/ALLOWBIND:NO` nelle **le opzioni aggiuntive**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[Funzione BindImage](/windows/desktop/api/imagehlp/nf-imagehlp-bindimage)<br/>
[BindImageEx (funzione)](/windows/desktop/api/imagehlp/nf-imagehlp-bindimageex)
