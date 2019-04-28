---
title: /FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)
ms.date: 03/09/2018
f1_keywords:
- /functionpadmin
helpviewer_keywords:
- -FUNCTIONPADMIN linker option
- /FUNCTIONPADMIN linker option
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
ms.openlocfilehash: 699da3cea9914b5a10bdf769015d41c33936a902
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62292395"
---
# <a name="functionpadmin-create-hotpatchable-image"></a>/FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)

Prepara un'immagine per le patch a caldo.

## <a name="syntax"></a>Sintassi

> **/FUNCTIONPADMIN**[**:**_space_]

### <a name="arguments"></a>Argomenti

*space*<br/>
La quantità di riempimento da aggiungere all'inizio di ogni funzione in byte. X86 il valore predefinito è 5 byte di spaziatura interna e su x64 il valore predefinito è 6 byte. Altre destinazioni è necessario specificare un valore.

## <a name="remarks"></a>Note

Per il linker per produrre un'immagine con patch a caldo, è necessario che i file obj siano stati compilati con [/hotpatch (Crea immagine con patch a caldo)](hotpatch-create-hotpatchable-image.md).

Quando si compila e si collega un'immagine con una singola chiamata di, cl.exe **/hotpatch** implica **/functionpadmin**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/FUNCTIONPADMIN** opzione **opzioni aggiuntive**. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
