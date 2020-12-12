---
description: Altre informazioni su:/FILEALIGN (Allinea le sezioni nei file)
title: /FILEALIGN (Allinea le sezioni nei file)
ms.date: 10/23/2017
f1_keywords:
- /filealign
helpviewer_keywords:
- linker align sections
- /FILEALIGN linker option
- -FILEALIGN linker option
- FILEALIGN linker option
ms.assetid: c1017a35-8d71-4ad9-934b-a3e3ea037fa0
ms.openlocfilehash: a67cf682c8fe55b80b2253864e08919e08242f74
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192162"
---
# <a name="filealign-align-sections-in-files"></a>/FILEALIGN (Allinea le sezioni nei file)

L'opzione del linker **/FILEALIGN** consente di specificare l'allineamento delle sezioni scritte nel file di output come un multiplo di una dimensione specificata.

## <a name="syntax"></a>Sintassi

> __/FILEALIGN:__*dimensioni*

### <a name="parameters"></a>Parametri

*size*<br/>
Dimensione di allineamento della sezione in byte, che deve essere una potenza di due.

## <a name="remarks"></a>Commenti

L'opzione **/FILEALIGN** fa sì che il linker allinei ogni sezione del file di output su un limite che corrisponde a un multiplo del valore *size* . Per impostazione predefinita, il linker non usa una dimensione di allineamento fissa.

L'opzione **/FILEALIGN** può essere usata per rendere più efficiente l'utilizzo del disco o per velocizzare il caricamento delle pagine dal disco. Una dimensione più piccola può essere utile per le app eseguite su dispositivi più piccoli o per ridurre i download. L'allineamento della sezione sul disco non influisce sull'allineamento nella memoria.

Usare [DUMPBIN](dumpbin-reference.md) per visualizzare informazioni sulle sezioni nel file di output.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **riga di comando** nella cartella **linker** .

1. Digitare il nome dell'opzione **/FILEALIGN:** e la dimensione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
