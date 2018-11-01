---
title: /FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)
ms.date: 03/09/2018
f1_keywords:
- /functionpadmin
helpviewer_keywords:
- -FUNCTIONPADMIN linker option
- /FUNCTIONPADMIN linker option
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
ms.openlocfilehash: c1e84f308796eabcaea61518e3731f633c2f67e8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474893"
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
