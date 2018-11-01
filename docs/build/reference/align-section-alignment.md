---
title: /ALIGN (Allineamento sezione)
ms.date: 12/29/2017
f1_keywords:
- VC.Project.VCLinkerTool.Alignment
- /align
helpviewer_keywords:
- sections, specifying alignment
- ALIGN linker option
- /ALIGN linker option
- -ALIGN linker option
- section alignment
- sections
ms.openlocfilehash: b68ec42db9c927fe8f56dad8f5670059359a1843
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665790"
---
# <a name="align-section-alignment"></a>/ALIGN (Allineamento sezione)

## <a name="syntax"></a>Sintassi

> **/ALIGN**[**:**_numero_]

### <a name="arguments"></a>Argomenti

*Numero*<br/>
Il valore di allineamento in byte.

## <a name="remarks"></a>Note

Il **/align** opzione specifica l'allineamento di ogni sezione nello spazio degli indirizzi lineare del programma. Il *numero* argomento è espresso in byte e deve essere una potenza di due. Il valore predefinito è 4 KB (4096). Il linker genera un avviso se l'allineamento produce un'immagine non valida.

A meno che non si scrive un'applicazione, ad esempio un driver di dispositivo, non è necessario modificare l'allineamento.

È possibile modificare l'allineamento di una particolare sezione con il parametro di allineamento per il [/Section](../../build/reference/section-specify-section-attributes.md) opzione.

Il valore di allineamento specificato non può essere minore al maggiore allineamento sezione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione nel **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
