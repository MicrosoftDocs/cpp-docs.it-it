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
ms.openlocfilehash: 7c799f3d44428643bccc2869255ffa4e9d194d70
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69493128"
---
# <a name="allowisolation-manifest-lookup"></a>/ALLOWISOLATION (Ricerca di manifesti)

Specifica il comportamento per la ricerca del manifesto.

## <a name="syntax"></a>Sintassi

```
/ALLOWISOLATION[:NO]
```

## <a name="remarks"></a>Note

**/ALLOWISOLATION: No** indica che le dll sono state caricate come se non fosse presente alcun manifesto e fa in `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` modo che il linker imposti il bit nel `DllCharacteristics` campo dell'intestazione facoltativa.

**/ALLOWISOLATION** fa sì che il sistema operativo esegua ricerche e caricamenti del manifesto.

**/ALLOWISOLATION** è il valore predefinito.

Quando l'isolamento è disabilitato per un eseguibile, il caricatore di Windows non tenterà di trovare un manifesto dell'applicazione per il processo appena creato. Il nuovo processo non avrà un contesto di attivazione predefinito, anche se è presente un manifesto all'interno del file eseguibile o inserito nella stessa directory del file eseguibile con nome <em>eseguibile-nome</em> **. exe. manifest**.

Per ulteriori informazioni, vedere [riferimento ai file manifesto](/windows/win32/SbsCs/manifest-files-reference).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà del**file manifesto** del**linker** >  **Proprietà** > di configurazione.

1. Modificare la proprietà **Consenti isolamento** .

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
