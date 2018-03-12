---
title: /FUNCTIONPADMIN (Crea immagine hot patch) | Documenti Microsoft
ms.custom: 
ms.date: 03/09/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- /functionpadmin
dev_langs:
- C++
helpviewer_keywords:
- -FUNCTIONPADMIN linker option
- /FUNCTIONPADMIN linker option
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c941ec7f0e94ba03979c914ddd26b8bd21237369
ms.sourcegitcommit: eb246547c7c9adc7d7ac4083ef09bf6e54dec914
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/12/2018
---
# <a name="functionpadmin-create-hotpatchable-image"></a>/FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)

Prepara un'immagine per la patch a caldo.

## <a name="syntax"></a>Sintassi

> **/FUNCTIONPADMIN**[**:**_spazio_]  

### <a name="arguments"></a>Argomenti

*space*<br/>
La quantità di spaziatura interna da aggiungere all'inizio di ogni funzione in byte. X86 l'impostazione predefinita è 5 byte di spaziatura interna e su x64 l'impostazione predefinita è 6 byte. In altre destinazioni, è necessario specificare un valore.

## <a name="remarks"></a>Note

Per il linker di generare un'immagine di patch a caldo, è necessario che i file obj siano stati compilati con [/hotpatch (Crea immagine di patch a caldo)](../../build/reference/hotpatch-create-hotpatchable-image.md).

Quando si compila e si collega un'immagine con una singola chiamata di cl.exe, **/hotpatch** implica **/functionpadmin**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere il **/FUNCTIONPADMIN** opzione **opzioni aggiuntive**. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
