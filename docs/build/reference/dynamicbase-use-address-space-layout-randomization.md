---
title: /DYNAMICBASE (utilizzo della funzionalità ASLR)
ms.date: 06/12/2018
f1_keywords:
- VC.Project.VCLinkerTool.RandomizedBaseAddress
helpviewer_keywords:
- -DYNAMICBASE linker option
- /DYNAMICBASE linker option
- DYNAMICBASE linker option
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
ms.openlocfilehash: a3495de3ec72bcac78cdee2f5f3265864e7a2932
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807754"
---
# <a name="dynamicbase-use-address-space-layout-randomization"></a>/DYNAMICBASE (utilizzo della funzionalità ASLR)

Specifica se generare un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento usando la funzionalità indirizzi dello spazio layout randomization (ASLR) di Windows che prima era disponibile in Windows Vista.

## <a name="syntax"></a>Sintassi

> **/DYNAMICBASE**[**:NO**]

## <a name="remarks"></a>Note

Il **/DYNAMICBASE** opzione Modifica l'intestazione di un *immagine eseguibile*, un file con estensione dll o .exe, per indicare se l'applicazione deve essere riassegnata in modo casuale in fase di caricamento e consente di indirizzo virtuale sequenza casuale di allocazione, che influisce sulla posizione di memoria virtuale dell'heap, stack e altre allocazioni del sistema operativo. Il **/DYNAMICBASE** opzione si applica alle immagini sia a 32 e 64 bit. ASLR è supportato in Windows Vista e sistemi operativi successivi. L'opzione viene ignorata nei sistemi operativi precedenti.

Per impostazione predefinita **/DYNAMICBASE** è abilitata. Per disabilitare questa opzione, usare **/DynamicBase: No**. Il **/DYNAMICBASE** opzione è obbligatoria per il [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) opzione abbia effetto.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **avanzate** pagina delle proprietà.

1. Modificare il **indirizzo di Base casuale** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md)
- [Difese di sicurezza Software ISV di Windows](https://msdn.microsoft.com/library/bb430720.aspx)