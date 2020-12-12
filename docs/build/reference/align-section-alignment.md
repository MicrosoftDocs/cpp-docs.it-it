---
description: Altre informazioni su:/ALIGN (allineamento sezione)
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
ms.openlocfilehash: d8a9af473252a2eff8957c5d2b4c54c7f7c862aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187260"
---
# <a name="align-section-alignment"></a>/ALIGN (Allineamento sezione)

## <a name="syntax"></a>Sintassi

> **/Align**[**:**_numero_]

### <a name="arguments"></a>Argomenti

*number*<br/>
Valore di allineamento in byte.

## <a name="remarks"></a>Commenti

L'opzione **/align** specifica l'allineamento di ogni sezione nello spazio degli indirizzi lineare del programma. Il *numero* dell'argomento è in byte e deve essere una potenza di due. Il valore predefinito è 4K (4096). Il linker genera un avviso se l'allineamento produce un'immagine non valida.

A meno che non si stia scrivendo un'applicazione, ad esempio un driver di dispositivo, non è necessario modificare l'allineamento.

È possibile modificare l'allineamento di una sezione specifica con il parametro align per l'opzione [/Section](section-specify-section-attributes.md) .

Il valore di allineamento specificato non può essere minore dell'allineamento della sezione più grande.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Scegliere la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Immettere l'opzione nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
