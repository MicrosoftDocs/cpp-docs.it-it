---
description: Scopri di più sull'opzione del linker/INFERASANLIBS (USA la disinfezione dedotta)
title: /INFERASANLIBS (USA le librerie di sanificazione derivate)
ms.date: 03/01/2021
f1_keywords:
- /INFERASANLIBS
- /INFERASANLIBS:NO
helpviewer_keywords:
- /INFERASANLIBS [C++]
- address sanitizer [C++] linker option
ms.openlocfilehash: 82337b5b77bab2a9066427662f3fd0956684c636
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470385"
---
# <a name="inferasanlibs-use-inferred-sanitizer-libs"></a>`/INFERASANLIBS` (Usare le librerie di sanificazione derivate)

Usare l' **`/INFERASANLIBS`** opzione linker per abilitare o disabilitare il collegamento alle librerie AddressSanitizer predefinite. A partire da Visual Studio 2019 16,9, l'unico igienizzatore supportato è [AddressSanitizer](../../sanitizers/asan.md).

## <a name="syntax"></a>Sintassi

> **`/INFERASANLIBS`**\[**`:NO`**]

## <a name="remarks"></a>Commenti

L' **`/INFERASANLIBS`** opzione del linker Abilita le librerie [AddressSanitizer](../../sanitizers/asan.md) predefinite. Questa opzione è attivata per impostazione predefinita.

Le **`/INFERASANLIBS`** **`/INFERASANLIBS:NO`** Opzioni del linker e offrono supporto per gli utenti avanzati. Per altre informazioni, vedere [AddressSanitizer Build and Language Reference](../../sanitizers/asan-building.md).

L' **`/INFERASANLIBS`** opzione è disponibile a partire da Visual Studio 2019 versione 16,9.

### <a name="to-set-the-inferasanlibs-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l' **`/INFERASANLIBS`** opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Modificare la proprietà **Opzioni aggiuntive** . Per abilitare le librerie predefinite, immettere **/INFERASANLIBS** nella casella di modifica. Per disabilitare le librerie predefinite, immettere **/INFERASANLIBS: No** .

1. Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)\
[`/fsanitize` (Abilita sanificatori)](./fsanitize.md)\
[Panoramica di AddressSanitizer](../../sanitizers/asan.md)\
[Problemi noti di AddressSanitizer](../../sanitizers/asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](../../sanitizers/asan-building.md)
