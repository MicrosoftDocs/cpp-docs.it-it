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
ms.openlocfilehash: d8d2e6a859c68af473d49dc04b76f0a15056aa56
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295266"
---
# <a name="align-section-alignment"></a>/ALIGN (Allineamento sezione)

## <a name="syntax"></a>Sintassi

> **/ALIGN**[**:**_number_]

### <a name="arguments"></a>Argomenti

*number*<br/>
Il valore di allineamento in byte.

## <a name="remarks"></a>Note

Il **/align** opzione specifica l'allineamento di ogni sezione nello spazio degli indirizzi lineare del programma. Il *numero* argomento è espresso in byte e deve essere una potenza di due. Il valore predefinito è 4 KB (4096). Il linker genera un avviso se l'allineamento produce un'immagine non valida.

A meno che non si scrive un'applicazione, ad esempio un driver di dispositivo, non è necessario modificare l'allineamento.

È possibile modificare l'allineamento di una particolare sezione con il parametro di allineamento per il [/Section](section-specify-section-attributes.md) opzione.

Il valore di allineamento specificato non può essere minore al maggiore allineamento sezione.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione nel **opzioni aggiuntive** casella. Scegli **OK** oppure **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
