---
title: /ALIGN (Allineamento sezione) | Documenti Microsoft
ms.custom: ''
ms.date: 12/29/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.Alignment
- /align
dev_langs:
- C++
helpviewer_keywords:
- sections, specifying alignment
- ALIGN linker option
- /ALIGN linker option
- -ALIGN linker option
- section alignment
- sections
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 543ea30b06f62939f378167d8598c73f66061f46
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32370306"
---
# <a name="align-section-alignment"></a>/ALIGN (Allineamento sezione)

## <a name="syntax"></a>Sintassi

> **/ ALLINEARE**[**:**_numero_]

### <a name="arguments"></a>Argomenti

*Numero*  
Il valore di allineamento in byte.

## <a name="remarks"></a>Note

Il **/align** opzione specifica l'allineamento di ogni sezione entro lo spazio di indirizzi lineare del programma. Il *numero* argomento è espresso in byte e deve essere una potenza di due. Il valore predefinito è 4 KB (4096). Il linker genera un avviso se l'allineamento produce un'immagine non valida.

A meno che non si sta scrivendo un'applicazione, ad esempio un driver di dispositivo, non è necessario modificare l'allineamento.

È possibile modificare l'allineamento di una particolare sezione con il parametro di allineamento per il [/sezione](../../build/reference/section-specify-section-attributes.md) opzione.

Il valore di allineamento specificato non può essere inferiore rispetto all'allineamento sezione più grande.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere l'opzione di **opzioni aggiuntive** casella. Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
