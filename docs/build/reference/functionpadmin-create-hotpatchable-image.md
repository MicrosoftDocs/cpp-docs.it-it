---
description: Altre informazioni su:/FUNCTIONPADMIN (Crea immagine Hotpatchable)
title: /FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)
ms.date: 03/09/2018
f1_keywords:
- /functionpadmin
helpviewer_keywords:
- -FUNCTIONPADMIN linker option
- /FUNCTIONPADMIN linker option
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
ms.openlocfilehash: f86adb2001adacf1b6c8a03a90b7452505841c08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192005"
---
# <a name="functionpadmin-create-hotpatchable-image"></a>/FUNCTIONPADMIN (Crea immagine con funzionalità di patch a caldo)

Prepara un'immagine per patch a caldo.

## <a name="syntax"></a>Sintassi

> **/FUNCTIONPADMIN**[**:**_spazio_]

### <a name="arguments"></a>Argomenti

*spazio*<br/>
Quantità di spaziatura interna da aggiungere all'inizio di ogni funzione in byte. In x86 il valore predefinito è 5 byte di riempimento e in x64 il valore predefinito è 6 byte. In altre destinazioni è necessario fornire un valore.

## <a name="remarks"></a>Commenti

Per consentire al linker di produrre un'immagine Hotpatchable, è necessario che i file con estensione obj siano stati compilati con [/hotpatch (Crea immagine Hotpatchable)](hotpatch-create-hotpatchable-image.md).

Quando si compila e si collega un'immagine con una singola chiamata di cl.exe, **/hotpatch** implica **/FUNCTIONPADMIN**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Immettere l'opzione **/FUNCTIONPADMIN** in **Opzioni aggiuntive**. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
