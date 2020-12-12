---
description: Altre informazioni su:/ALLOWISOLATION (ricerca di manifesti)
title: /ALLOWISOLATION (Ricerca di manifesti)
ms.date: 11/04/2016
f1_keywords:
- /ALLOWISOLATION
- VC.Project.VCLinkerTool.AllowIsolation
helpviewer_keywords:
- -ALLOWISOLATION linker option
- /ALLOWISOLATION linker option
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
ms.openlocfilehash: 659c908e4de910941ca71c9f40814608df19c6d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187221"
---
# <a name="allowisolation-manifest-lookup"></a>/ALLOWISOLATION (Ricerca di manifesti)

Specifica il comportamento per la ricerca del manifesto.

## <a name="syntax"></a>Sintassi

```
/ALLOWISOLATION[:NO]
```

## <a name="remarks"></a>Osservazioni

**/ALLOWISOLATION: No** indica che le dll sono state caricate come se non fosse presente alcun manifesto e fa in modo che il linker imposti il `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit nel campo dell'intestazione facoltativa `DllCharacteristics` .

**/ALLOWISOLATION** fa sì che il sistema operativo esegua ricerche e caricamenti del manifesto.

**/ALLOWISOLATION** è il valore predefinito.

Quando l'isolamento è disabilitato per un eseguibile, il caricatore di Windows non tenterà di trovare un manifesto dell'applicazione per il processo appena creato. Il nuovo processo non avrà un contesto di attivazione predefinito, anche se è presente un manifesto all'interno del file eseguibile o inserito nella stessa directory del file eseguibile con nome <em>eseguibile-nome</em>**. exe. manifest**.

Per ulteriori informazioni, vedere [riferimento ai file manifesto](/windows/win32/SbsCs/manifest-files-reference).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà del file manifesto del **linker** proprietà di configurazione  >   .

1. Modificare la proprietà **Consenti isolamento** .

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
