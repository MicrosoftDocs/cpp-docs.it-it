---
description: Altre informazioni su:/DYNAMICBASE (usare la sequenza casuale del layout dello spazio degli indirizzi)
title: /DYNAMICBASE (utilizzo della funzionalità ASLR)
ms.date: 06/12/2018
f1_keywords:
- VC.Project.VCLinkerTool.RandomizedBaseAddress
helpviewer_keywords:
- -DYNAMICBASE linker option
- /DYNAMICBASE linker option
- DYNAMICBASE linker option
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
ms.openlocfilehash: 481194b0da1a64d8170104344911223bf6ca6f6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192612"
---
# <a name="dynamicbase-use-address-space-layout-randomization"></a>/DYNAMICBASE (utilizzo della funzionalità ASLR)

Specifica se generare un'immagine eseguibile che può essere ribasata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout randomation) di Windows disponibile per la prima volta in Windows Vista.

## <a name="syntax"></a>Sintassi

> **/DynamicBase**[**: No**]

## <a name="remarks"></a>Commenti

L'opzione **/DynamicBase** modifica l'intestazione di un' *immagine eseguibile*, un file con estensione dll o exe, per indicare se l'applicazione deve essere ribasata in modo casuale in fase di caricamento e consente la sequenza casuale di allocazione degli indirizzi virtuali, che influiscono sulla posizione di memoria virtuale di heap, stack e altre allocazioni del sistema operativo. L'opzione **/DynamicBase** si applica alle immagini a 32 bit e a 64 bit. ASLR è supportato in Windows Vista e nei sistemi operativi successivi. L'opzione viene ignorata dai sistemi operativi precedenti.

Per impostazione predefinita, **/DynamicBase** è abilitato. Per disabilitare questa opzione, usare **/DynamicBase: No**. L'opzione **/DynamicBase** è obbligatoria affinché l'opzione [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) abbia effetto.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà avanzate del **linker** proprietà di configurazione  >   .

1. Modificare la proprietà **indirizzo di base casuale** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.

## <a name="see-also"></a>Vedi anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md)
- [Difese di sicurezza software ISV di Windows](/previous-versions/bb430720(v=msdn.10))
