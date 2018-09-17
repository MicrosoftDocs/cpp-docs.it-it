---
title: /FUNCTIONPADMIN (Crea immagine con patch a caldo) | Microsoft Docs
ms.custom: ''
ms.date: 03/09/2018
ms.technology:
- cpp-tools
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: 7a82611c453a96e9247e414d6adb777c07320482
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703989"
---
# <a name="functionpadmin-create-hotpatchable-image"></a>/FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)

Prepara un'immagine per le patch a caldo.

## <a name="syntax"></a>Sintassi

> **/FUNCTIONPADMIN**[**:**_spazio_]

### <a name="arguments"></a>Argomenti

*space*<br/>
La quantità di riempimento da aggiungere all'inizio di ogni funzione in byte. X86 il valore predefinito è 5 byte di spaziatura interna e su x64 il valore predefinito è 6 byte. Altre destinazioni è necessario specificare un valore.

## <a name="remarks"></a>Note

Per il linker per produrre un'immagine con patch a caldo, è necessario che i file obj siano stati compilati con [/hotpatch (Crea immagine con patch a caldo)](../../build/reference/hotpatch-create-hotpatchable-image.md).

Quando si compila e si collega un'immagine con una singola chiamata di, cl.exe **/hotpatch** implica **/functionpadmin**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/FUNCTIONPADMIN** opzione **opzioni aggiuntive**. Scegli **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
