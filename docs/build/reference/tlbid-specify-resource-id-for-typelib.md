---
description: Altre informazioni su:/TLBID (specifica l'ID risorsa per TypeLib)
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
ms.openlocfilehash: 4958229cbebe988867c5419d7953b6ffd968e45f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230016"
---
# <a name="tlbid-specify-resource-id-for-typelib"></a>/TLBID (Specifica l'ID di risorsa per una libreria dei tipi)

```
/TLBID:id
```

## <a name="arguments"></a>Argomenti

*id*<br/>
Valore specificato dall'utente per una libreria dei tipi creata dal linker. Esegue l'override dell'ID di risorsa predefinito 1.

## <a name="remarks"></a>Commenti

Quando si compila un programma che usa gli attributi, il linker creerà una libreria dei tipi. Al linker viene assegnato un ID di risorsa 1 alla libreria dei tipi.

Se questo ID risorsa è in conflitto con una delle risorse esistenti, è possibile specificare un altro ID con/TLBID. L'intervallo di valori che è possibile passare a `id` è compreso tra 1 e 65535.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **IDL incorporato** .

1. Modificare la proprietà **ID risorsa TypeLib** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryResourceID%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
