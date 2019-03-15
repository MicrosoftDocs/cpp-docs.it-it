---
title: /ALLOWISOLATION (Ricerca di manifesti)
ms.date: 11/04/2016
f1_keywords:
- /ALLOWISOLATION
- VC.Project.VCLinkerTool.AllowIsolation
helpviewer_keywords:
- -ALLOWISOLATION linker option
- /ALLOWISOLATION linker option
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
ms.openlocfilehash: fe76e0d40a2a19a002136a7e095875ad2903d434
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57818453"
---
# <a name="allowisolation-manifest-lookup"></a>/ALLOWISOLATION (Ricerca di manifesti)

Specifica il comportamento per la ricerca del manifesto.

## <a name="syntax"></a>Sintassi

```
/ALLOWISOLATION[:NO]
```

## <a name="remarks"></a>Note

**/ALLOWISOLATION:No** indica che le DLL vengono caricate come se esistesse alcun manifesto e fa sì che il linker imposti il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit dell'intestazione facoltativa `DllCharacteristics` campo.

**/ALLOWISOLATION** fa sì che il sistema operativo per le ricerche e caricamenti del manifesto.

**/ALLOWISOLATION** è il valore predefinito.

Quando l'isolamento è disabilitato per un file eseguibile, il caricatore di Windows non tenterà di trovare un manifesto dell'applicazione per il processo appena creato. Il nuovo processo non avrà un contesto di attivazione predefinito, anche se non esiste un manifesto all'interno dell'eseguibile o nella stessa directory dell'eseguibile con nome <em>nome-eseguibile</em>**. manifest**.

Per altre informazioni, vedere [Manifest Files Reference](/windows/desktop/SbsCs/manifest-files-reference).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **File manifesto** pagina delle proprietà.

1. Modificare il **consentire isolamento** proprietà.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
