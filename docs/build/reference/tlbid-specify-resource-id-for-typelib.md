---
title: /TLBID (Specifica l'ID di risorsa per una libreria dei tipi)
ms.date: 11/04/2016
f1_keywords:
- /tlbid
- VC.Project.VCLinkerTool.TypeLibraryResourceID
helpviewer_keywords:
- tlb files, specifying resource ID
- -TLBID linker option
- .tlb files, specifying resource ID
- /TLBID linker option
- TLBID linker option
- type libraries, specifying resource ID
ms.assetid: 434b28a2-4656-4d52-ac82-8b18bf486fb2
ms.openlocfilehash: c52bfb9e4b6d0e94cecb77c766ac9e82b52f1e66
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57820618"
---
# <a name="tlbid-specify-resource-id-for-typelib"></a>/TLBID (Specifica l'ID di risorsa per una libreria dei tipi)

```
/TLBID:id
```

## <a name="arguments"></a>Argomenti

*ID*<br/>
Un valore specificato dall'utente per una libreria dei tipi creata dal linker. Viene eseguito l'override dell'ID di risorse predefinito di 1.

## <a name="remarks"></a>Note

Quando si compila un programma che usa gli attributi, il linker creerà una libreria dei tipi. Il linker assegnerà un ID di risorsa 1 alla libreria dei tipi.

Se questo ID risorsa è in conflitto con una delle risorse esistenti, è possibile specificare un altro ID con /TLBID. L'intervallo di valori che è possibile passare a `id` è compreso tra 1 e 65535.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **IDL incorporato** pagina delle proprietà.

1. Modificare il **ID risorsa della libreria dei tipi** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryResourceID%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
