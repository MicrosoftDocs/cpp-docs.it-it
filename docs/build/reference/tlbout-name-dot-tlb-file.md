---
description: Altre informazioni su:/TLBOUT (nome. File TLB)
title: /TLBOUT (Assegna un nome al file TLB)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.TypeLibraryFile
- /tlbout
helpviewer_keywords:
- tlb files, renaming
- TLBOUT linker option
- /TLBOUT linker option
- .tlb files, renaming
- -TLBOUT linker option
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
ms.openlocfilehash: 4e99f3b5a036ddbc424732e771f7bab27aeb228d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230003"
---
# <a name="tlbout-name-tlb-file"></a>/TLBOUT (Assegna un nome al file TLB)

```
/TLBOUT:[path\]filename
```

## <a name="arguments"></a>Argomenti

*path*<br/>
Specifica del percorso assoluto o relativo per la posizione in cui deve essere creato il file con estensione tlb.

*filename*<br/>
Specifica il nome del file con estensione TLB creato dal compilatore MIDL. Non viene presupposta alcuna estensione di file; specificare *filename*. tlb se si desidera un'estensione tlb.

## <a name="remarks"></a>Commenti

L'opzione/TLBOUT specifica il nome e l'estensione del file tlb.

Il compilatore MIDL viene chiamato dal linker MSVC quando si collegano i progetti con l'attributo [Module](../../windows/attributes/module-cpp.md) .

Se/TLBOUT non è specificato, il file con estensione TLB otterrà il nome da [/IDLOUT](idlout-name-midl-output-files.md) *filename*. Se/IDLOUT non è specificato, il file con estensione tlb verrà denominato vc70. tlb.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **IDL incorporato** .

1. Modificare la proprietà della **libreria dei tipi** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (specifica le opzioni della riga di comando MIDL)](midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/attributes/cpp-attributes-com-net.md)
