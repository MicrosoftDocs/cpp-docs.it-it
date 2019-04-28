---
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
ms.openlocfilehash: 43cfdd6efb163013d05877e91c8375eb592295a9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62271151"
---
# <a name="filealign-align-sections-in-files"></a>/FILEALIGN (Allinea le sezioni nei file)

Il **/FILEALIGN** l'opzione del linker consente di specificare l'allineamento delle sezioni scritti al file di output a un multiplo di dimensioni specificato.

## <a name="syntax"></a>Sintassi

> __/ FILEALIGN:__*dimensioni*

### <a name="parameters"></a>Parametri

*size*<br/>
La dimensione di allineamento della sezione in byte, che deve essere una potenza di due.

## <a name="remarks"></a>Note

Il **/FILEALIGN** opzione indica al linker allineare ogni sezione nel file di output in base a un limite è un multiplo delle *dimensioni* valore. Per impostazione predefinita, il linker non utilizza una dimensione fissa di allineamento.

Il **/FILEALIGN** opzione può essere usata per rendere più efficiente l'utilizzo del disco o per far sì che pagina viene caricata dal disco più veloce. Una dimensione più piccola sezione può essere utile per le app eseguite su dispositivi di piccole dimensioni o per mantenere i download più piccoli. Allineamento sezioni su disco non interessa l'allineamento in memoria.

Usare [DUMPBIN](dumpbin-reference.md) per visualizzare informazioni sulle sezioni nel file di output.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **riga di comando** pagina delle proprietà di **Linker** cartella.

1. Digitare il nome dell'opzione **/FILEALIGN:** le dimensioni e il **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
