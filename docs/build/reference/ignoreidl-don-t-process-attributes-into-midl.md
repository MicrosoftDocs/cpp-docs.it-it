---
title: /IGNOREIDL (Don&#39;t elabora gli attributi in MIDL)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.IgnoreEmbeddedIDL
- /ignoreidl
helpviewer_keywords:
- IGNOREIDL linker option
- -IGNOREIDL linker option
- /IGNOREIDL linker option
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
ms.openlocfilehash: 210778adecd87ffdd5f2702c10106f12bd5a1b79
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291679"
---
# <a name="ignoreidl-don39t-process-attributes-into-midl"></a>/IGNOREIDL (Don&#39;t elabora gli attributi in MIDL)

```
/IGNOREIDL
```

## <a name="remarks"></a>Note

L'opzione /IGNOREIDL specifica che eventuali [attributi IDL](../../windows/idl-attributes.md) nell'origine codice non deve essere elaborato in un file IDL.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **IDL incorporato** pagina delle proprietà.

1. Modificare il **Ignora IDL incorporate** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IDLOUT (assegna un nome ai file di output MIDL)](idlout-name-midl-output-files.md)<br/>
[/TLBOUT (denomina un file TLB)](tlbout-name-dot-tlb-file.md)<br/>
[/MIDL (specifica opzioni della riga di comando MIDL)](midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
